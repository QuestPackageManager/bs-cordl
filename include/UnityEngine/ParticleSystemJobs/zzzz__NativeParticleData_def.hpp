#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemJobs/NativeParticleData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeParticleData)
namespace UnityEngine::ParticleSystemJobs {
struct NativeParticleData_Array3;
}
namespace UnityEngine::ParticleSystemJobs {
struct NativeParticleData_Array4;
}
// Forward declare root types
namespace UnityEngine::ParticleSystemJobs {
struct NativeParticleData;
}
namespace UnityEngine::ParticleSystemJobs {
struct NativeParticleData_Array3;
}
namespace UnityEngine::ParticleSystemJobs {
struct NativeParticleData_Array4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemJobs::NativeParticleData);
MARK_VAL_T(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3);
MARK_VAL_T(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4);
// Dependencies
namespace UnityEngine::ParticleSystemJobs {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemJobs.NativeParticleData/Array3
struct CORDL_TYPE NativeParticleData_Array3 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParticleData_Array3();

  // Ctor Parameters [CppParam { name: "x", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::cordl_internals::Ptr<float_t>", modifiers: "",
  // def_value: None }, CppParam { name: "z", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: None }]
  constexpr NativeParticleData_Array3(::cordl_internals::Ptr<float_t> x, ::cordl_internals::Ptr<float_t> y, ::cordl_internals::Ptr<float_t> z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17299 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field x, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> x;

  /// @brief Field y, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> y;

  /// @brief Field z, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3, z) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ParticleSystemJobs
// Dependencies
namespace UnityEngine::ParticleSystemJobs {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemJobs.NativeParticleData/Array4
struct CORDL_TYPE NativeParticleData_Array4 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParticleData_Array4();

  // Ctor Parameters [CppParam { name: "x", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::cordl_internals::Ptr<float_t>", modifiers: "",
  // def_value: None }, CppParam { name: "z", ty: "::cordl_internals::Ptr<float_t>", modifiers: "", def_value: None }, CppParam { name: "w", ty: "::cordl_internals::Ptr<float_t>", modifiers: "",
  // def_value: None }]
  constexpr NativeParticleData_Array4(::cordl_internals::Ptr<float_t> x, ::cordl_internals::Ptr<float_t> y, ::cordl_internals::Ptr<float_t> z, ::cordl_internals::Ptr<float_t> w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17300 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field x, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> x;

  /// @brief Field y, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> y;

  /// @brief Field z, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> z;

  /// @brief Field w, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<float_t> w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4, z) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4, w) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ParticleSystemJobs
// Dependencies UnityEngine.ParticleSystemJobs.NativeParticleData::Array3, UnityEngine.ParticleSystemJobs.NativeParticleData::Array4
namespace UnityEngine::ParticleSystemJobs {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemJobs.NativeParticleData
struct CORDL_TYPE NativeParticleData {
public:
  // Declarations
  using Array3 = ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3;

  using Array4 = ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParticleData();

  // Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "positions", ty: "::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3",
  // modifiers: "", def_value: None }, CppParam { name: "velocities", ty: "::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3", modifiers: "", def_value: None }, CppParam { name:
  // "axisOfRotations", ty: "::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3", modifiers: "", def_value: None }, CppParam { name: "rotations", ty:
  // "::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3", modifiers: "", def_value: None }, CppParam { name: "rotationalSpeeds", ty:
  // "::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3", modifiers: "", def_value: None }, CppParam { name: "sizes", ty: "::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3",
  // modifiers: "", def_value: None }, CppParam { name: "startColors", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "aliveTimePercent", ty:
  // "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "inverseStartLifetimes", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name:
  // "randomSeeds", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "customData1", ty: "::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4", modifiers:
  // "", def_value: None }, CppParam { name: "customData2", ty: "::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4", modifiers: "", def_value: None }, CppParam { name: "meshIndices", ty:
  // "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }]
  constexpr NativeParticleData(int32_t count, ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 positions, ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 velocities,
                               ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 axisOfRotations, ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 rotations,
                               ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 rotationalSpeeds, ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 sizes,
                               ::cordl_internals::Ptr<void> startColors, ::cordl_internals::Ptr<void> aliveTimePercent, ::cordl_internals::Ptr<void> inverseStartLifetimes,
                               ::cordl_internals::Ptr<void> randomSeeds, ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4 customData1,
                               ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4 customData2, ::cordl_internals::Ptr<void> meshIndices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17301 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field count, offset: 0x0, size: 0x4, def value: None
  int32_t count;

  /// @brief Field positions, offset: 0x8, size: 0x18, def value: None
  ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 positions;

  /// @brief Field velocities, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 velocities;

  /// @brief Field axisOfRotations, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 axisOfRotations;

  /// @brief Field rotations, offset: 0x50, size: 0x18, def value: None
  ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 rotations;

  /// @brief Field rotationalSpeeds, offset: 0x68, size: 0x18, def value: None
  ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 rotationalSpeeds;

  /// @brief Field sizes, offset: 0x80, size: 0x18, def value: None
  ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3 sizes;

  /// @brief Field startColors, offset: 0x98, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> startColors;

  /// @brief Field aliveTimePercent, offset: 0xa0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> aliveTimePercent;

  /// @brief Field inverseStartLifetimes, offset: 0xa8, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> inverseStartLifetimes;

  /// @brief Field randomSeeds, offset: 0xb0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> randomSeeds;

  /// @brief Field customData1, offset: 0xb8, size: 0x20, def value: None
  ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4 customData1;

  /// @brief Field customData2, offset: 0xd8, size: 0x20, def value: None
  ::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4 customData2;

  /// @brief Field meshIndices, offset: 0xf8, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> meshIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, positions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, velocities) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, axisOfRotations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, rotations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, rotationalSpeeds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, sizes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, startColors) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, aliveTimePercent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, inverseStartLifetimes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, randomSeeds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, customData1) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, customData2) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::NativeParticleData, meshIndices) == 0xf8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemJobs::NativeParticleData, 0x100>, "Size mismatch!");

} // namespace UnityEngine::ParticleSystemJobs
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemJobs::NativeParticleData, "UnityEngine.ParticleSystemJobs", "NativeParticleData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array3, "UnityEngine.ParticleSystemJobs", "NativeParticleData/Array3");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemJobs::NativeParticleData_Array4, "UnityEngine.ParticleSystemJobs", "NativeParticleData/Array4");
