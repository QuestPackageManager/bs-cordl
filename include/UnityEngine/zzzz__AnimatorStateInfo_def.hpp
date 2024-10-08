#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorStateInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorStateInfo)
// Forward declare root types
namespace UnityEngine {
struct AnimatorStateInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorStateInfo);
// Type: UnityEngine::AnimatorStateInfo
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::AnimatorStateInfo
struct CORDL_TYPE AnimatorStateInfo {
public:
  // Declarations
  __declspec(property(get = get_normalizedTime)) float_t normalizedTime;

  /// @brief Method get_normalizedTime, addr 0x47d6f7c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_normalizedTime();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorStateInfo();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Path", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_FullPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NormalizedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Speed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SpeedMultiplier", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_Tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Loop", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimatorStateInfo(int32_t m_Name, int32_t m_Path, int32_t m_FullPath, float_t m_NormalizedTime, float_t m_Length, float_t m_Speed, float_t m_SpeedMultiplier, int32_t m_Tag,
                              int32_t m_Loop) noexcept;

  /// @brief Field m_Name, offset: 0x0, size: 0x4, def value: None
  int32_t m_Name;

  /// @brief Field m_Path, offset: 0x4, size: 0x4, def value: None
  int32_t m_Path;

  /// @brief Field m_FullPath, offset: 0x8, size: 0x4, def value: None
  int32_t m_FullPath;

  /// @brief Field m_NormalizedTime, offset: 0xc, size: 0x4, def value: None
  float_t m_NormalizedTime;

  /// @brief Field m_Length, offset: 0x10, size: 0x4, def value: None
  float_t m_Length;

  /// @brief Field m_Speed, offset: 0x14, size: 0x4, def value: None
  float_t m_Speed;

  /// @brief Field m_SpeedMultiplier, offset: 0x18, size: 0x4, def value: None
  float_t m_SpeedMultiplier;

  /// @brief Field m_Tag, offset: 0x1c, size: 0x4, def value: None
  int32_t m_Tag;

  /// @brief Field m_Loop, offset: 0x20, size: 0x4, def value: None
  int32_t m_Loop;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16817 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorStateInfo, 0x24>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Path) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_FullPath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_NormalizedTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Speed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_SpeedMultiplier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Tag) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorStateInfo, m_Loop) == 0x20, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorStateInfo, "UnityEngine", "AnimatorStateInfo");
