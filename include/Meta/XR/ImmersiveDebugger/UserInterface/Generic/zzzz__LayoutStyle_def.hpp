#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/LayoutStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Style_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutStyle)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
struct LayoutStyle_Direction;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
struct LayoutStyle_Layout;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
struct LayoutStyle_Direction;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
struct LayoutStyle_Layout;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class LayoutStyle;
}
// Write type traits
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction);
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle);
// Dependencies
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle/Layout
struct CORDL_TYPE LayoutStyle_Layout {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutStyle_Layout_Unwrapped
  enum struct __LayoutStyle_Layout_Unwrapped : int32_t {
    __E_Fixed = static_cast<int32_t>(0x0),
    __E_Fill = static_cast<int32_t>(0x1),
    __E_FillHorizontal = static_cast<int32_t>(0x2),
    __E_FillVertical = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutStyle_Layout_Unwrapped() const noexcept {
    return static_cast<__LayoutStyle_Layout_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutStyle_Layout();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutStyle_Layout(int32_t value__) noexcept;

  /// @brief Field Fill value: I32(1)
  static ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout const Fill;

  /// @brief Field FillHorizontal value: I32(2)
  static ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout const FillHorizontal;

  /// @brief Field FillVertical value: I32(3)
  static ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout const FillVertical;

  /// @brief Field Fixed value: I32(0)
  static ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout const Fixed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18370 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout, 0x4>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
// Dependencies
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle/Direction
struct CORDL_TYPE LayoutStyle_Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutStyle_Direction_Unwrapped
  enum struct __LayoutStyle_Direction_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Down = static_cast<int32_t>(0x2),
    __E_Up = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutStyle_Direction_Unwrapped() const noexcept {
    return static_cast<__LayoutStyle_Direction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutStyle_Direction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutStyle_Direction(int32_t value__) noexcept;

  /// @brief Field Down value: I32(2)
  static ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction const Down;

  /// @brief Field Left value: I32(0)
  static ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction const Left;

  /// @brief Field Right value: I32(1)
  static ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction const Right;

  /// @brief Field Up value: I32(3)
  static ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction const Up;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18371 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction, 0x4>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle::Direction, Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle::Layout,
// Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style, UnityEngine.TextAnchor, UnityEngine.Vector2
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle
class CORDL_TYPE LayoutStyle : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style {
public:
  // Declarations
  using Direction = ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction;

  using Layout = ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout;

  __declspec(property(get = get_BottomMargin)) float_t BottomMargin;

  __declspec(property(get = get_BottomRightMargin)) ::UnityEngine::Vector2 BottomRightMargin;

  __declspec(property(get = get_LeftMargin)) float_t LeftMargin;

  __declspec(property(get = get_RightMargin)) float_t RightMargin;

  __declspec(property(get = get_TopLeftMargin)) ::UnityEngine::Vector2 TopLeftMargin;

  __declspec(property(get = get_TopMargin)) float_t TopMargin;

  /// @brief Field adaptHeight, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_adaptHeight, put = __cordl_internal_set_adaptHeight)) bool adaptHeight;

  /// @brief Field anchor, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_anchor, put = __cordl_internal_set_anchor)) ::UnityEngine::TextAnchor anchor;

  /// @brief Field autoFitChildren, offset 0x4e, size 0x1
  __declspec(property(get = __cordl_internal_get_autoFitChildren, put = __cordl_internal_set_autoFitChildren)) bool autoFitChildren;

  /// @brief Field bottomRightMargin, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_bottomRightMargin, put = __cordl_internal_set_bottomRightMargin)) ::UnityEngine::Vector2 bottomRightMargin;

  /// @brief Field flexDirection, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_flexDirection, put = __cordl_internal_set_flexDirection)) ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction flexDirection;

  /// @brief Field isOverlayCanvas, offset 0x4f, size 0x1
  __declspec(property(get = __cordl_internal_get_isOverlayCanvas, put = __cordl_internal_set_isOverlayCanvas)) bool isOverlayCanvas;

  /// @brief Field layout, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_layout, put = __cordl_internal_set_layout)) ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout layout;

  /// @brief Field margin, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get_margin, put = __cordl_internal_set_margin)) ::UnityEngine::Vector2 margin;

  /// @brief Field masks, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_masks, put = __cordl_internal_set_masks)) bool masks;

  /// @brief Field pivot, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_pivot, put = __cordl_internal_set_pivot)) ::UnityEngine::TextAnchor pivot;

  /// @brief Field size, offset 0x2c, size 0x8
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) ::UnityEngine::Vector2 size;

  /// @brief Field spacing, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_spacing, put = __cordl_internal_set_spacing)) float_t spacing;

  /// @brief Field useBottomRightMargin, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_useBottomRightMargin, put = __cordl_internal_set_useBottomRightMargin)) bool useBottomRightMargin;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* New_ctor();

  /// @brief Method SetHeight, addr 0x584ae80, size 0x28, virtual false, abstract: false, final false
  inline bool SetHeight(float_t height);

  /// @brief Method SetIndent, addr 0x584aed0, size 0x40, virtual false, abstract: false, final false
  inline bool SetIndent(float_t value);

  /// @brief Method SetWidth, addr 0x584aea8, size 0x28, virtual false, abstract: false, final false
  inline bool SetWidth(float_t width);

  constexpr bool const& __cordl_internal_get_adaptHeight() const;

  constexpr bool& __cordl_internal_get_adaptHeight();

  constexpr ::UnityEngine::TextAnchor const& __cordl_internal_get_anchor() const;

  constexpr ::UnityEngine::TextAnchor& __cordl_internal_get_anchor();

  constexpr bool const& __cordl_internal_get_autoFitChildren() const;

  constexpr bool& __cordl_internal_get_autoFitChildren();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_bottomRightMargin() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_bottomRightMargin();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction const& __cordl_internal_get_flexDirection() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction& __cordl_internal_get_flexDirection();

  constexpr bool const& __cordl_internal_get_isOverlayCanvas() const;

  constexpr bool& __cordl_internal_get_isOverlayCanvas();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout const& __cordl_internal_get_layout() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout& __cordl_internal_get_layout();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_margin() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_margin();

  constexpr bool const& __cordl_internal_get_masks() const;

  constexpr bool& __cordl_internal_get_masks();

  constexpr ::UnityEngine::TextAnchor const& __cordl_internal_get_pivot() const;

  constexpr ::UnityEngine::TextAnchor& __cordl_internal_get_pivot();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_size() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_size();

  constexpr float_t const& __cordl_internal_get_spacing() const;

  constexpr float_t& __cordl_internal_get_spacing();

  constexpr bool const& __cordl_internal_get_useBottomRightMargin() const;

  constexpr bool& __cordl_internal_get_useBottomRightMargin();

  constexpr void __cordl_internal_set_adaptHeight(bool value);

  constexpr void __cordl_internal_set_anchor(::UnityEngine::TextAnchor value);

  constexpr void __cordl_internal_set_autoFitChildren(bool value);

  constexpr void __cordl_internal_set_bottomRightMargin(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_flexDirection(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction value);

  constexpr void __cordl_internal_set_isOverlayCanvas(bool value);

  constexpr void __cordl_internal_set_layout(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout value);

  constexpr void __cordl_internal_set_margin(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_masks(bool value);

  constexpr void __cordl_internal_set_pivot(::UnityEngine::TextAnchor value);

  constexpr void __cordl_internal_set_size(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_spacing(float_t value);

  constexpr void __cordl_internal_set_useBottomRightMargin(bool value);

  /// @brief Method .ctor, addr 0x584af10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BottomMargin, addr 0x584ae5c, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_BottomMargin();

  /// @brief Method get_BottomRightMargin, addr 0x5845948, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_BottomRightMargin();

  /// @brief Method get_LeftMargin, addr 0x584ae30, size 0x8, virtual false, abstract: false, final false
  inline float_t get_LeftMargin();

  /// @brief Method get_RightMargin, addr 0x584ae40, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_RightMargin();

  /// @brief Method get_TopLeftMargin, addr 0x584ae78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_TopLeftMargin();

  /// @brief Method get_TopMargin, addr 0x584ae38, size 0x8, virtual false, abstract: false, final false
  inline float_t get_TopMargin();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutStyle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutStyle(LayoutStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutStyle(LayoutStyle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18372 };

  /// @brief Field flexDirection, offset: 0x1c, size: 0x4, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction ___flexDirection;

  /// @brief Field layout, offset: 0x20, size: 0x4, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout ___layout;

  /// @brief Field anchor, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::TextAnchor ___anchor;

  /// @brief Field pivot, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::TextAnchor ___pivot;

  /// @brief Field size, offset: 0x2c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___size;

  /// @brief Field margin, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___margin;

  /// @brief Field useBottomRightMargin, offset: 0x3c, size: 0x1, def value: None
  bool ___useBottomRightMargin;

  /// @brief Field bottomRightMargin, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___bottomRightMargin;

  /// @brief Field spacing, offset: 0x48, size: 0x4, def value: None
  float_t ___spacing;

  /// @brief Field masks, offset: 0x4c, size: 0x1, def value: None
  bool ___masks;

  /// @brief Field adaptHeight, offset: 0x4d, size: 0x1, def value: None
  bool ___adaptHeight;

  /// @brief Field autoFitChildren, offset: 0x4e, size: 0x1, def value: None
  bool ___autoFitChildren;

  /// @brief Field isOverlayCanvas, offset: 0x4f, size: 0x1, def value: None
  bool ___isOverlayCanvas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___flexDirection) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___layout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___anchor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___pivot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___size) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___margin) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___useBottomRightMargin) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___bottomRightMargin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___spacing) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___masks) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___adaptHeight) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___autoFitChildren) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, ___isOverlayCanvas) == 0x4f, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle, 0x50>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Direction, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "LayoutStyle/Direction");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle_Layout, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "LayoutStyle/Layout");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "LayoutStyle");
