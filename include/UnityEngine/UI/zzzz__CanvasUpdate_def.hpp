#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasUpdate)
// Forward declare root types
namespace UnityEngine::UI {
struct CanvasUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::CanvasUpdate);
// Type: UnityEngine.UI::CanvasUpdate
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::UnityEngine.UI::CanvasUpdate
struct CORDL_TYPE CanvasUpdate {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CanvasUpdate_Unwrapped
  enum struct __CanvasUpdate_Unwrapped : int32_t {
    __E_Prelayout = static_cast<int32_t>(0x0),
    __E_Layout = static_cast<int32_t>(0x1),
    __E_PostLayout = static_cast<int32_t>(0x2),
    __E_PreRender = static_cast<int32_t>(0x3),
    __E_LatePreRender = static_cast<int32_t>(0x4),
    __E_MaxUpdateValue = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CanvasUpdate_Unwrapped() const noexcept {
    return static_cast<__CanvasUpdate_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasUpdate();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CanvasUpdate(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LatePreRender value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::CanvasUpdate const LatePreRender;

  /// @brief Field Layout value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::CanvasUpdate const Layout;

  /// @brief Field MaxUpdateValue value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UI::CanvasUpdate const MaxUpdateValue;

  /// @brief Field PostLayout value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::CanvasUpdate const PostLayout;

  /// @brief Field PreRender value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::CanvasUpdate const PreRender;

  /// @brief Field Prelayout value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::CanvasUpdate const Prelayout;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CanvasUpdate, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdate, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasUpdate, "UnityEngine.UI", "CanvasUpdate");
