#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VersionChangeType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VersionChangeType);
// Type: UnityEngine.UIElements::VersionChangeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6949))
// CS Name: ::UnityEngine.UIElements::VersionChangeType
struct CORDL_TYPE VersionChangeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VersionChangeType_Unwrapped
  enum struct __VersionChangeType_Unwrapped : int32_t {
    __E_Bindings = static_cast<int32_t>(0x1),
    __E_ViewData = static_cast<int32_t>(0x2),
    __E_Hierarchy = static_cast<int32_t>(0x4),
    __E_Layout = static_cast<int32_t>(0x8),
    __E_StyleSheet = static_cast<int32_t>(0x10),
    __E_Styles = static_cast<int32_t>(0x20),
    __E_Overflow = static_cast<int32_t>(0x40),
    __E_BorderRadius = static_cast<int32_t>(0x80),
    __E_BorderWidth = static_cast<int32_t>(0x100),
    __E_Transform = static_cast<int32_t>(0x200),
    __E_Size = static_cast<int32_t>(0x400),
    __E_Repaint = static_cast<int32_t>(0x800),
    __E_Opacity = static_cast<int32_t>(0x1000),
    __E_Color = static_cast<int32_t>(0x2000),
    __E_RenderHints = static_cast<int32_t>(0x4000),
    __E_TransitionProperty = static_cast<int32_t>(0x8000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VersionChangeType_Unwrapped() const noexcept {
    return static_cast<__VersionChangeType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VersionChangeType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VersionChangeType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Bindings value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::VersionChangeType const Bindings;

  /// @brief Field ViewData value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::VersionChangeType const ViewData;

  /// @brief Field Hierarchy value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::VersionChangeType const Hierarchy;

  /// @brief Field Layout value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::VersionChangeType const Layout;

  /// @brief Field StyleSheet value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::VersionChangeType const StyleSheet;

  /// @brief Field Styles value: static_cast<int32_t>(0x20)
  static ::UnityEngine::UIElements::VersionChangeType const Styles;

  /// @brief Field Overflow value: static_cast<int32_t>(0x40)
  static ::UnityEngine::UIElements::VersionChangeType const Overflow;

  /// @brief Field BorderRadius value: static_cast<int32_t>(0x80)
  static ::UnityEngine::UIElements::VersionChangeType const BorderRadius;

  /// @brief Field BorderWidth value: static_cast<int32_t>(0x100)
  static ::UnityEngine::UIElements::VersionChangeType const BorderWidth;

  /// @brief Field Transform value: static_cast<int32_t>(0x200)
  static ::UnityEngine::UIElements::VersionChangeType const Transform;

  /// @brief Field Size value: static_cast<int32_t>(0x400)
  static ::UnityEngine::UIElements::VersionChangeType const Size;

  /// @brief Field Repaint value: static_cast<int32_t>(0x800)
  static ::UnityEngine::UIElements::VersionChangeType const Repaint;

  /// @brief Field Opacity value: static_cast<int32_t>(0x1000)
  static ::UnityEngine::UIElements::VersionChangeType const Opacity;

  /// @brief Field Color value: static_cast<int32_t>(0x2000)
  static ::UnityEngine::UIElements::VersionChangeType const Color;

  /// @brief Field RenderHints value: static_cast<int32_t>(0x4000)
  static ::UnityEngine::UIElements::VersionChangeType const RenderHints;

  /// @brief Field TransitionProperty value: static_cast<int32_t>(0x8000)
  static ::UnityEngine::UIElements::VersionChangeType const TransitionProperty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VersionChangeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VersionChangeType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VersionChangeType, "UnityEngine.UIElements", "VersionChangeType");
