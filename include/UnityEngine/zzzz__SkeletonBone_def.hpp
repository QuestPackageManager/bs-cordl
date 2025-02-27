#pragma once
// IWYU pragma private; include "UnityEngine/SkeletonBone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SkeletonBone)
// Forward declare root types
namespace UnityEngine {
struct SkeletonBone;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SkeletonBone);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SkeletonBone
struct CORDL_TYPE SkeletonBone {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkeletonBone();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "parentName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name:
  // "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr SkeletonBone(::StringW name, ::StringW parentName, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16882 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field parentName, offset: 0x8, size: 0x8, def value: None
  ::StringW parentName;

  /// @brief Field position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field scale, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SkeletonBone, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SkeletonBone, parentName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SkeletonBone, position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SkeletonBone, rotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SkeletonBone, scale) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SkeletonBone, 0x38>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkeletonBone, "UnityEngine", "SkeletonBone");
