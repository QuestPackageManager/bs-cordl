#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeUpdatePhase)
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeUpdatePhase);
// Type: UnityEngine.UIElements::VisualTreeUpdatePhase
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6750))
// CS Name: ::UnityEngine.UIElements::VisualTreeUpdatePhase
struct CORDL_TYPE VisualTreeUpdatePhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisualTreeUpdatePhase_Unwrapped
  enum struct __VisualTreeUpdatePhase_Unwrapped : int32_t {
    __E_ViewData = static_cast<int32_t>(0x0),
    __E_Bindings = static_cast<int32_t>(0x1),
    __E_Animation = static_cast<int32_t>(0x2),
    __E_Styles = static_cast<int32_t>(0x3),
    __E_Layout = static_cast<int32_t>(0x4),
    __E_TransformClip = static_cast<int32_t>(0x5),
    __E_Repaint = static_cast<int32_t>(0x6),
    __E_Count = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualTreeUpdatePhase_Unwrapped() const noexcept {
    return static_cast<__VisualTreeUpdatePhase_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualTreeUpdatePhase(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeUpdatePhase();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ViewData value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::VisualTreeUpdatePhase const ViewData;

  /// @brief Field Bindings value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::VisualTreeUpdatePhase const Bindings;

  /// @brief Field Animation value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::VisualTreeUpdatePhase const Animation;

  /// @brief Field Styles value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::VisualTreeUpdatePhase const Styles;

  /// @brief Field Layout value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::VisualTreeUpdatePhase const Layout;

  /// @brief Field TransformClip value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::VisualTreeUpdatePhase const TransformClip;

  /// @brief Field Repaint value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::VisualTreeUpdatePhase const Repaint;

  /// @brief Field Count value: static_cast<int32_t>(0x7)
  static ::UnityEngine::UIElements::VisualTreeUpdatePhase const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeUpdatePhase, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeUpdatePhase, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeUpdatePhase, "UnityEngine.UIElements", "VisualTreeUpdatePhase");
