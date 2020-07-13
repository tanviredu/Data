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
      currentSong: {
        name: "Its my Life",
        description:
          "Tempor anim occaecat in ad consectetur sit sunt Lorem cupidatat eiusmod."
      }
    };
  }.
    components: {
      //FontAwesomeIcon,
      currentSong;
    }
  }

</script>

<style>
</style>
