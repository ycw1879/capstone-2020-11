import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';

import { IonicModule } from '@ionic/angular';

import { TestIonFabComponent } from './test-ion-fab.component';

@NgModule({
    imports: [ CommonModule, FormsModule, IonicModule],
    declarations: [TestIonFabComponent],
    exports: [TestIonFabComponent]
})
export class TestIonFabComponentModule {}
