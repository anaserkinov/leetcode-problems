plugins {
    kotlin("jvm") version "2.0.21"
}

group = "me.anasmusa"
version = "1.0"

repositories {
    mavenCentral()
}

kotlin {
    jvmToolchain(21)
}