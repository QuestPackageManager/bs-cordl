#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorTransitionInfo)
// Forward declare root types
namespace UnityEngine {
struct AnimatorTransitionInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorTransitionInfo);
// Type: UnityEngine::AnimatorTransitionInfo
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14880))
// CS Name: ::UnityEngine::AnimatorTransitionInfo
struct CORDL_TYPE AnimatorTransitionInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_FullPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UserName", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Name", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_HasFixedDuration", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AnyState", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "m_TransitionType", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimatorTransitionInfo(int32_t m_FullPath, int32_t m_UserName, int32_t m_Name, bool m_HasFixedDuration, float_t m_Duration, float_t m_NormalizedTime, bool m_AnyState,
                                   int32_t m_TransitionType) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorTransitionInfo();

  /// @brief Field m_FullPath, offset: 0x0, size: 0x4, def value: None
  int32_t m_FullPath;

  /// @brief Field m_UserName, offset: 0x4, size: 0x4, def value: None
  int32_t m_UserName;

  /// @brief Field m_Name, offset: 0x8, size: 0x4, def value: None
  int32_t m_Name;

  /// @brief Field m_HasFixedDuration, offset: 0xc, size: 0x1, def value: None
  bool m_HasFixedDuration;

  /// @brief Field m_Duration, offset: 0x10, size: 0x4, def value: None
  float_t m_Duration;

  /// @brief Field m_NormalizedTime, offset: 0x14, size: 0x4, def value: None
  float_t m_NormalizedTime;

  /// @brief Field m_AnyState, offset: 0x18, size: 0x1, def value: None
  bool m_AnyState;

  /// @brief Field m_TransitionType, offset: 0x1c, size: 0x4, def value: None
  int32_t m_TransitionType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorTransitionInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorTransitionInfo, m_FullPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorTransitionInfo, m_UserName) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorTransitionInfo, m_Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorTransitionInfo, m_HasFixedDuration) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorTransitionInfo, m_Duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorTransitionInfo, m_NormalizedTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorTransitionInfo, m_AnyState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorTransitionInfo, m_TransitionType) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorTransitionInfo, "UnityEngine", "AnimatorTransitionInfo");
