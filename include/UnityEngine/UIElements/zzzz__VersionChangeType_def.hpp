#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VersionChangeType.hpp"
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
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VersionChangeType
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
    __E_EventCallbackCategories = static_cast<int32_t>(0x10000),
    __E_Picking = static_cast<int32_t>(0x100000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VersionChangeType_Unwrapped() const noexcept {
    return static_cast<__VersionChangeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VersionChangeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VersionChangeType(int32_t value__) noexcept;

  /// @brief Field Bindings value: I32(1)
  static ::UnityEngine::UIElements::VersionChangeType const Bindings;

  /// @brief Field BorderRadius value: I32(128)
  static ::UnityEngine::UIElements::VersionChangeType const BorderRadius;

  /// @brief Field BorderWidth value: I32(256)
  static ::UnityEngine::UIElements::VersionChangeType const BorderWidth;

  /// @brief Field Color value: I32(8192)
  static ::UnityEngine::UIElements::VersionChangeType const Color;

  /// @brief Field EventCallbackCategories value: I32(65536)
  static ::UnityEngine::UIElements::VersionChangeType const EventCallbackCategories;

  /// @brief Field Hierarchy value: I32(4)
  static ::UnityEngine::UIElements::VersionChangeType const Hierarchy;

  /// @brief Field Layout value: I32(8)
  static ::UnityEngine::UIElements::VersionChangeType const Layout;

  /// @brief Field Opacity value: I32(4096)
  static ::UnityEngine::UIElements::VersionChangeType const Opacity;

  /// @brief Field Overflow value: I32(64)
  static ::UnityEngine::UIElements::VersionChangeType const Overflow;

  /// @brief Field Picking value: I32(1048576)
  static ::UnityEngine::UIElements::VersionChangeType const Picking;

  /// @brief Field RenderHints value: I32(16384)
  static ::UnityEngine::UIElements::VersionChangeType const RenderHints;

  /// @brief Field Repaint value: I32(2048)
  static ::UnityEngine::UIElements::VersionChangeType const Repaint;

  /// @brief Field Size value: I32(1024)
  static ::UnityEngine::UIElements::VersionChangeType const Size;

  /// @brief Field StyleSheet value: I32(16)
  static ::UnityEngine::UIElements::VersionChangeType const StyleSheet;

  /// @brief Field Styles value: I32(32)
  static ::UnityEngine::UIElements::VersionChangeType const Styles;

  /// @brief Field Transform value: I32(512)
  static ::UnityEngine::UIElements::VersionChangeType const Transform;

  /// @brief Field TransitionProperty value: I32(32768)
  static ::UnityEngine::UIElements::VersionChangeType const TransitionProperty;

  /// @brief Field ViewData value: I32(2)
  static ::UnityEngine::UIElements::VersionChangeType const ViewData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6003 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VersionChangeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VersionChangeType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VersionChangeType, "UnityEngine.UIElements", "VersionChangeType");
