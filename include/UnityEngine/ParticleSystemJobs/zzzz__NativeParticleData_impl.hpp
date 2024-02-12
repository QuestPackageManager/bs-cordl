#pragma once
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_impl.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "y", ty: "::cordl_internals::Ptr<float_t>", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "z", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3::__NativeParticleData__Array3(::cordl_internals::Ptr<float_t> x, ::cordl_internals::Ptr<float_t> y,
                                                                                                        ::cordl_internals::Ptr<float_t> z) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3::__NativeParticleData__Array3() {}
// Ctor Parameters [CppParam { name: "x", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "y", ty: "::cordl_internals::Ptr<float_t>", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "z", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "w", ty:
// "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array4::__NativeParticleData__Array4(::cordl_internals::Ptr<float_t> x, ::cordl_internals::Ptr<float_t> y,
                                                                                                        ::cordl_internals::Ptr<float_t> z, ::cordl_internals::Ptr<float_t> w) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array4::__NativeParticleData__Array4() {}
// Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positions", ty:
// "::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3", modifiers: "", def_value: Some("{}") }, CppParam { name: "velocities", ty:
// "::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3", modifiers: "", def_value: Some("{}") }, CppParam { name: "axisOfRotations", ty:
// "::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotations", ty:
// "::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotationalSpeeds", ty:
// "::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizes", ty:
// "::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3", modifiers: "", def_value: Some("{}") }, CppParam { name: "startColors", ty: "::cordl_internals::Ptr<void>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "aliveTimePercent", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "inverseStartLifetimes", ty:
// "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "randomSeeds", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "customData1", ty: "::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array4", modifiers: "", def_value: Some("{}") }, CppParam { name: "customData2", ty:
// "::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array4", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshIndices", ty: "::cordl_internals::Ptr<void>", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::UnityEngine::ParticleSystemJobs::NativeParticleData::NativeParticleData(
    int32_t count, ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3 positions, ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3 velocities,
    ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3 axisOfRotations, ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3 rotations,
    ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3 rotationalSpeeds, ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array3 sizes, ::cordl_internals::Ptr<void> startColors,
    ::cordl_internals::Ptr<void> aliveTimePercent, ::cordl_internals::Ptr<void> inverseStartLifetimes, ::cordl_internals::Ptr<void> randomSeeds,
    ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array4 customData1, ::UnityEngine::ParticleSystemJobs::__NativeParticleData__Array4 customData2,
    ::cordl_internals::Ptr<void> meshIndices) noexcept {
  this->count = count;
  this->positions = positions;
  this->velocities = velocities;
  this->axisOfRotations = axisOfRotations;
  this->rotations = rotations;
  this->rotationalSpeeds = rotationalSpeeds;
  this->sizes = sizes;
  this->startColors = startColors;
  this->aliveTimePercent = aliveTimePercent;
  this->inverseStartLifetimes = inverseStartLifetimes;
  this->randomSeeds = randomSeeds;
  this->customData1 = customData1;
  this->customData2 = customData2;
  this->meshIndices = meshIndices;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemJobs::NativeParticleData::NativeParticleData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
