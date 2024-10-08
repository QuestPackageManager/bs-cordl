#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/MarkPositionAdjustment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MarkPositionAdjustment)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct MarkPositionAdjustment;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment);
// Type: UnityEngine.TextCore.LowLevel::MarkPositionAdjustment
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.LowLevel::MarkPositionAdjustment
struct CORDL_TYPE MarkPositionAdjustment {
public:
  // Declarations
  __declspec(property(get = get_xPositionAdjustment)) float_t xPositionAdjustment;

  __declspec(property(get = get_yPositionAdjustment)) float_t yPositionAdjustment;

  /// @brief Method get_xPositionAdjustment, addr 0x48a8078, size 0x8, virtual false, abstract: false, final false
  inline float_t get_xPositionAdjustment();

  /// @brief Method get_yPositionAdjustment, addr 0x48a8080, size 0x8, virtual false, abstract: false, final false
  inline float_t get_yPositionAdjustment();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkPositionAdjustment();

  // Ctor Parameters [CppParam { name: "m_XPositionAdjustment", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YPositionAdjustment", ty: "float_t", modifiers: "", def_value: None
  // }]
  constexpr MarkPositionAdjustment(float_t m_XPositionAdjustment, float_t m_YPositionAdjustment) noexcept;

  /// @brief Field m_XPositionAdjustment, offset: 0x0, size: 0x4, def value: None
  float_t m_XPositionAdjustment;

  /// @brief Field m_YPositionAdjustment, offset: 0x4, size: 0x4, def value: None
  float_t m_YPositionAdjustment;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18099 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment, m_XPositionAdjustment) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment, m_YPositionAdjustment) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment, "UnityEngine.TextCore.LowLevel", "MarkPositionAdjustment");
