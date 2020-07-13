<template>
  <div id="app" class="container">
    <current-song :song="currentSong" />
  </div>
</template>

<script>
//import { FontAwesomeIcon } from "@fortawesome/vue-fontawesome";
import currentSong from "./components/CurrentSong";

export default {
  name: "App",
  data() {
    return {
      currentSong: null
    };
  },
  components: {
    //FontAwesomeIcon,
    currentSong
  }
};
</script>

<style>
</style>
