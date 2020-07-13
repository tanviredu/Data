import Vue from "vue";
import App from "./App.vue";

Vue.config.productionTip = false;

import "bootstrap";

import "../node_modules/bootstrap/css/bootstrap.css";
import { library } from "@fortawesome/fontawesome-svg-core";
import {
  faPlus,
  faMinus,
  faTrash,
  faCheck,
} from "@fortawesome/free-solid-svg-icons";
library.add(faPlus, faMinus, faTrash, faCheck);

new Vue({
  render: (h) => h(App),
}).$mount("#app");
