<template>
  <div id="app" class="container">
    <div class="mt-3">
      <h1 class="display-4" style="font-family: 'Fjalla One'">{{name}}</h1>
    </div>
    <div style="font-family: 'Open Sans', sans-serif;">{{description}}</div>
    <font-awesome-icon />
  </div>
</template>

<script>
import { FontAwesomeIcon } from "@fortawesome/vue-fontawesome";

export default {
  name: "App",
  data() {
    return {
      name: " My Music App",
      description:
        "Ut laboris esse sit fugiat proident incididunt laborum enim laborum excepteur velit occaecat. Deserunt consectetur reprehenderit pariatur elit adipisicing cupidatat eiusmod fugiat reprehenderit Lorem veniam. Occaecat non officia do Lorem id Lorem quis et eiusmod qui laboris cillum."
    };
  },
  components: {
    FontAwesomeIcon
  }
};
</script>

<style>
</style>
