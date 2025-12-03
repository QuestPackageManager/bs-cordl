#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "cordl_internals/unity-utils.hpp"

#include "UnityEngine/Audio/Audio.hpp"
#include "UnityEngine/AudioClip.hpp"
#include "UnityEngine/AudioSource.hpp"

void test_unityw() {
  // Just a test to ensure unityw.cpp is compiled
  UnityW<UnityEngine::AudioSource> audioClipUnityW;

  audioClipUnityW->clip->length;
}