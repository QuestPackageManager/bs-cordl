#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorClipInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorClipInfo)
// Forward declare root types
namespace UnityEngine {
struct AnimatorClipInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorClipInfo);
// Type: UnityEngine::AnimatorClipInfo
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::AnimatorClipInfo
struct CORDL_TYPE AnimatorClipInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorClipInfo();

  // Ctor Parameters [CppParam { name: "m_ClipInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None }]
  constexpr AnimatorClipInfo(int32_t m_ClipInstanceID, float_t m_Weight) noexcept;

  /// @brief Field m_ClipInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t m_ClipInstanceID;

  /// @brief Field m_Weight, offset: 0x4, size: 0x4, def value: None
  float_t m_Weight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16824 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorClipInfo, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorClipInfo, m_ClipInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorClipInfo, m_Weight) == 0x4, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorClipInfo, "UnityEngine", "AnimatorClipInfo");
