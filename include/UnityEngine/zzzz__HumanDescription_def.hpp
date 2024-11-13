#pragma once
// IWYU pragma private; include "UnityEngine/HumanDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HumanDescription)
namespace UnityEngine {
struct HumanBone;
}
namespace UnityEngine {
struct SkeletonBone;
}
// Forward declare root types
namespace UnityEngine {
struct HumanDescription;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanDescription);
// Type: UnityEngine::HumanDescription
// SizeInfo { instance_size: 64, native_size: 72, calculated_instance_size: 64, calculated_native_size: 75, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::HumanDescription
struct CORDL_TYPE HumanDescription {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanDescription();

  // Ctor Parameters [CppParam { name: "human", ty: "::ArrayW<::UnityEngine::HumanBone,::Array<::UnityEngine::HumanBone>*>", modifiers: "", def_value: None }, CppParam { name: "skeleton", ty:
  // "::ArrayW<::UnityEngine::SkeletonBone,::Array<::UnityEngine::SkeletonBone>*>", modifiers: "", def_value: None }, CppParam { name: "m_ArmTwist", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_ForeArmTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UpperLegTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_LegTwist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ArmStretch", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_LegStretch", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_FeetSpacing", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_GlobalScale", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_RootMotionBoneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_HasTranslationDoF", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "m_HasExtraRoot", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SkeletonHasParents", ty: "bool", modifiers: "", def_value: None }]
  constexpr HumanDescription(::ArrayW<::UnityEngine::HumanBone, ::Array<::UnityEngine::HumanBone>*> human, ::ArrayW<::UnityEngine::SkeletonBone, ::Array<::UnityEngine::SkeletonBone>*> skeleton,
                             float_t m_ArmTwist, float_t m_ForeArmTwist, float_t m_UpperLegTwist, float_t m_LegTwist, float_t m_ArmStretch, float_t m_LegStretch, float_t m_FeetSpacing,
                             float_t m_GlobalScale, ::StringW m_RootMotionBoneName, bool m_HasTranslationDoF, bool m_HasExtraRoot, bool m_SkeletonHasParents) noexcept;

  /// @brief Field human, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::HumanBone, ::Array<::UnityEngine::HumanBone>*> human;

  /// @brief Field skeleton, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::SkeletonBone, ::Array<::UnityEngine::SkeletonBone>*> skeleton;

  /// @brief Field m_ArmTwist, offset: 0x10, size: 0x4, def value: None
  float_t m_ArmTwist;

  /// @brief Field m_ForeArmTwist, offset: 0x14, size: 0x4, def value: None
  float_t m_ForeArmTwist;

  /// @brief Field m_UpperLegTwist, offset: 0x18, size: 0x4, def value: None
  float_t m_UpperLegTwist;

  /// @brief Field m_LegTwist, offset: 0x1c, size: 0x4, def value: None
  float_t m_LegTwist;

  /// @brief Field m_ArmStretch, offset: 0x20, size: 0x4, def value: None
  float_t m_ArmStretch;

  /// @brief Field m_LegStretch, offset: 0x24, size: 0x4, def value: None
  float_t m_LegStretch;

  /// @brief Field m_FeetSpacing, offset: 0x28, size: 0x4, def value: None
  float_t m_FeetSpacing;

  /// @brief Field m_GlobalScale, offset: 0x2c, size: 0x4, def value: None
  float_t m_GlobalScale;

  /// @brief Field m_RootMotionBoneName, offset: 0x30, size: 0x8, def value: None
  ::StringW m_RootMotionBoneName;

  /// @brief Field m_HasTranslationDoF, offset: 0x38, size: 0x1, def value: None
  bool m_HasTranslationDoF;

  /// @brief Field m_HasExtraRoot, offset: 0x39, size: 0x1, def value: None
  bool m_HasExtraRoot;

  /// @brief Field m_SkeletonHasParents, offset: 0x3a, size: 0x1, def value: None
  bool m_SkeletonHasParents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16837 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanDescription, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, human) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, skeleton) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_ArmTwist) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_ForeArmTwist) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_UpperLegTwist) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_LegTwist) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_ArmStretch) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_LegStretch) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_FeetSpacing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_GlobalScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_RootMotionBoneName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_HasTranslationDoF) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_HasExtraRoot) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanDescription, m_SkeletonHasParents) == 0x3a, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanDescription, "UnityEngine", "HumanDescription");
