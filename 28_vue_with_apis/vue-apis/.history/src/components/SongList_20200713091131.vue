<template>
  <div>
    <div class="songlist list-group">
      <div class="song list-group-item list-group-item-action d-flex">
        <font-awesome-icon class="trash mr-3 align-self-center" icon="trash" />
        <div class="thumbnail"></div>
        <div class="song-info flex-fill px-2 align-self-center">
          <h4 class="song-info-name mb-0">
            <small class="duration"></small>
          </h4>
          <p class="song-info-creator mb-0"></p>
        </div>
        <div class="now-playing d-flex align-items-center">
          <font-awesome-icon class="play" icon="play" />
          <font-awesome-icon class="pause" icon="pause" />
        </div>
      </div>
    </div>
  </div>
</template>

<script>
import { FontAwesomeIcon } from "@fortawesome/vue-fontawesome";
export default {
  name: "song-list",
  props: ["songs", "currentSong"]
};
</script>
<style scoped>
</style>