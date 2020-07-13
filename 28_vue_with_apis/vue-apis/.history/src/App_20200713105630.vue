<template>
  <div id="app" class="container">
    <current-song :song="currentsong" v-if="currentsong" />
    <song-list
      :songs="songs"
      :currentSong="currentSong"
      @handlePlay="handlePlay"
      @handleDelete="handleDelete"
    />
  </div>
</template>

<script>
//import { FontAwesomeIcon } from "@fortawesome/vue-fontawesome";
import currentSong from "./components/CurrentSong";
import songList from "./components/SongList";
import _ from "lodash";
import axios from "axios";
export default {
  name: "App",
  data() {
    return {
      currentsong: null,
      audioElement: null,
      songs: null,
    };
  },
  methods: {
    handlePlay: function(payload) {
      if (this.audioElement == null) {
        this.audioElement = new Audio(payload.music_url);
        this.audioElement.play();
      } else {
        // if the song is already plaing and you hit anohter
        if (payload == this.currentsong) {
          if (this.audioElement.paused) {
            this.audioElement.play();
          } else {
            this.audioElement.pause();
          }
        } else {
          // if a new song then change the src and play it
          this.audioElement.src = payload.music_url;
          this.audioElement.play();
        }
      }
      this.currentsong = payload;
      this.audioElement.addEventListener("ended", () => {
        this.currentsong = null;
        this.audioElement = null;
      });
    },
    handleDelete: function(payload) {
      const updatedArray = _.without(this.songs, payload); // delete the current song from the songs array
      this.songs = updatedArray;
    },
  },
  created() {
    // created starts when the page load at first
    axios({
      method: "get",
      url: "./data.json",
    })
      .then((res) => {
        this.songs = res.json;
      })
      .catch((err) => {
        console.log(err);
      });
  },
  components: {
    //FontAwesomeIcon,
    currentSong,
    songList,
  },
};
</script>

<style></style>
