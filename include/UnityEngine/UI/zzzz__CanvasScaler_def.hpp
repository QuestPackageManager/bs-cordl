#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasScaler)
namespace UnityEngine::UI {
struct __CanvasScaler__ScaleMode;
}
namespace UnityEngine::UI {
struct __CanvasScaler__ScreenMatchMode;
}
namespace UnityEngine::UI {
struct __CanvasScaler__Unit;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __CanvasScaler__ScaleMode;
}
namespace UnityEngine::UI {
struct __CanvasScaler__ScreenMatchMode;
}
namespace UnityEngine::UI {
struct __CanvasScaler__Unit;
}
namespace UnityEngine::UI {
class CanvasScaler;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__CanvasScaler__ScaleMode);
MARK_VAL_T(::UnityEngine::UI::__CanvasScaler__ScreenMatchMode);
MARK_VAL_T(::UnityEngine::UI::__CanvasScaler__Unit);
MARK_REF_PTR_T(::UnityEngine::UI::CanvasScaler);
// Type: ::ScaleMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13072))
// CS Name: ::CanvasScaler::ScaleMode
struct CORDL_TYPE __CanvasScaler__ScaleMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CanvasScaler__ScaleMode_Unwrapped
  enum struct ____CanvasScaler__ScaleMode_Unwrapped : int32_t {
    __E_ConstantPixelSize = static_cast<int32_t>(0x0),
    __E_ScaleWithScreenSize = static_cast<int32_t>(0x1),
    __E_ConstantPhysicalSize = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CanvasScaler__ScaleMode_Unwrapped() const noexcept {
    return static_cast<____CanvasScaler__ScaleMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CanvasScaler__ScaleMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CanvasScaler__ScaleMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ConstantPixelSize value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__CanvasScaler__ScaleMode const ConstantPixelSize;

  /// @brief Field ScaleWithScreenSize value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__CanvasScaler__ScaleMode const ScaleWithScreenSize;

  /// @brief Field ConstantPhysicalSize value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__CanvasScaler__ScaleMode const ConstantPhysicalSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__CanvasScaler__ScaleMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__CanvasScaler__ScaleMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::ScreenMatchMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13073))
// CS Name: ::CanvasScaler::ScreenMatchMode
struct CORDL_TYPE __CanvasScaler__ScreenMatchMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CanvasScaler__ScreenMatchMode_Unwrapped
  enum struct ____CanvasScaler__ScreenMatchMode_Unwrapped : int32_t {
    __E_MatchWidthOrHeight = static_cast<int32_t>(0x0),
    __E_Expand = static_cast<int32_t>(0x1),
    __E_Shrink = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CanvasScaler__ScreenMatchMode_Unwrapped() const noexcept {
    return static_cast<____CanvasScaler__ScreenMatchMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CanvasScaler__ScreenMatchMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CanvasScaler__ScreenMatchMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MatchWidthOrHeight value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__CanvasScaler__ScreenMatchMode const MatchWidthOrHeight;

  /// @brief Field Expand value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__CanvasScaler__ScreenMatchMode const Expand;

  /// @brief Field Shrink value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__CanvasScaler__ScreenMatchMode const Shrink;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__CanvasScaler__ScreenMatchMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__CanvasScaler__ScreenMatchMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::Unit
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13074))
// CS Name: ::CanvasScaler::Unit
struct CORDL_TYPE __CanvasScaler__Unit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CanvasScaler__Unit_Unwrapped
  enum struct ____CanvasScaler__Unit_Unwrapped : int32_t {
    __E_Centimeters = static_cast<int32_t>(0x0),
    __E_Millimeters = static_cast<int32_t>(0x1),
    __E_Inches = static_cast<int32_t>(0x2),
    __E_Points = static_cast<int32_t>(0x3),
    __E_Picas = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CanvasScaler__Unit_Unwrapped() const noexcept {
    return static_cast<____CanvasScaler__Unit_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CanvasScaler__Unit(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CanvasScaler__Unit();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Centimeters value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__CanvasScaler__Unit const Centimeters;

  /// @brief Field Millimeters value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__CanvasScaler__Unit const Millimeters;

  /// @brief Field Inches value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__CanvasScaler__Unit const Inches;

  /// @brief Field Points value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__CanvasScaler__Unit const Points;

  /// @brief Field Picas value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::__CanvasScaler__Unit const Picas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__CanvasScaler__Unit, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__CanvasScaler__Unit, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::CanvasScaler
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(13072)), TypeDefinitionIndex(TypeDefinitionIndex(13073)),
// TypeDefinitionIndex(TypeDefinitionIndex(13074)), TypeDefinitionIndex(TypeDefinitionIndex(13214))] Self: TypeDefinitionIndex(TypeDefinitionIndex(13075)) CS Name: ::UnityEngine.UI::CanvasScaler*
class CORDL_TYPE CanvasScaler : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using Unit = ::UnityEngine::UI::__CanvasScaler__Unit;

  using ScreenMatchMode = ::UnityEngine::UI::__CanvasScaler__ScreenMatchMode;

  using ScaleMode = ::UnityEngine::UI::__CanvasScaler__ScaleMode;

  /// @brief Field m_UiScaleMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UiScaleMode, put = __cordl_internal_set_m_UiScaleMode))::UnityEngine::UI::__CanvasScaler__ScaleMode m_UiScaleMode;

  /// @brief Field m_ReferencePixelsPerUnit, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReferencePixelsPerUnit, put = __cordl_internal_set_m_ReferencePixelsPerUnit)) float_t m_ReferencePixelsPerUnit;

  /// @brief Field m_ScaleFactor, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScaleFactor, put = __cordl_internal_set_m_ScaleFactor)) float_t m_ScaleFactor;

  /// @brief Field m_ReferenceResolution, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReferenceResolution, put = __cordl_internal_set_m_ReferenceResolution))::UnityEngine::Vector2 m_ReferenceResolution;

  /// @brief Field m_ScreenMatchMode, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScreenMatchMode, put = __cordl_internal_set_m_ScreenMatchMode))::UnityEngine::UI::__CanvasScaler__ScreenMatchMode m_ScreenMatchMode;

  /// @brief Field m_MatchWidthOrHeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MatchWidthOrHeight, put = __cordl_internal_set_m_MatchWidthOrHeight)) float_t m_MatchWidthOrHeight;

  /// @brief Field m_PhysicalUnit, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PhysicalUnit, put = __cordl_internal_set_m_PhysicalUnit))::UnityEngine::UI::__CanvasScaler__Unit m_PhysicalUnit;

  /// @brief Field m_FallbackScreenDPI, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FallbackScreenDPI, put = __cordl_internal_set_m_FallbackScreenDPI)) float_t m_FallbackScreenDPI;

  /// @brief Field m_DefaultSpriteDPI, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultSpriteDPI, put = __cordl_internal_set_m_DefaultSpriteDPI)) float_t m_DefaultSpriteDPI;

  /// @brief Field m_DynamicPixelsPerUnit, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DynamicPixelsPerUnit, put = __cordl_internal_set_m_DynamicPixelsPerUnit)) float_t m_DynamicPixelsPerUnit;

  /// @brief Field m_Canvas, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas))::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_PrevScaleFactor, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevScaleFactor, put = __cordl_internal_set_m_PrevScaleFactor)) float_t m_PrevScaleFactor;

  /// @brief Field m_PrevReferencePixelsPerUnit, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevReferencePixelsPerUnit, put = __cordl_internal_set_m_PrevReferencePixelsPerUnit)) float_t m_PrevReferencePixelsPerUnit;

  /// @brief Field m_PresetInfoIsWorld, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PresetInfoIsWorld, put = __cordl_internal_set_m_PresetInfoIsWorld)) bool m_PresetInfoIsWorld;

  __declspec(property(get = get_uiScaleMode, put = set_uiScaleMode))::UnityEngine::UI::__CanvasScaler__ScaleMode uiScaleMode;

  __declspec(property(get = get_referencePixelsPerUnit, put = set_referencePixelsPerUnit)) float_t referencePixelsPerUnit;

  __declspec(property(get = get_scaleFactor, put = set_scaleFactor)) float_t scaleFactor;

  __declspec(property(get = get_referenceResolution, put = set_referenceResolution))::UnityEngine::Vector2 referenceResolution;

  __declspec(property(get = get_screenMatchMode, put = set_screenMatchMode))::UnityEngine::UI::__CanvasScaler__ScreenMatchMode screenMatchMode;

  __declspec(property(get = get_matchWidthOrHeight, put = set_matchWidthOrHeight)) float_t matchWidthOrHeight;

  __declspec(property(get = get_physicalUnit, put = set_physicalUnit))::UnityEngine::UI::__CanvasScaler__Unit physicalUnit;

  __declspec(property(get = get_fallbackScreenDPI, put = set_fallbackScreenDPI)) float_t fallbackScreenDPI;

  __declspec(property(get = get_defaultSpriteDPI, put = set_defaultSpriteDPI)) float_t defaultSpriteDPI;

  __declspec(property(get = get_dynamicPixelsPerUnit, put = set_dynamicPixelsPerUnit)) float_t dynamicPixelsPerUnit;

  constexpr ::UnityEngine::UI::__CanvasScaler__ScaleMode& __cordl_internal_get_m_UiScaleMode();

  constexpr ::UnityEngine::UI::__CanvasScaler__ScaleMode const& __cordl_internal_get_m_UiScaleMode() const;

  constexpr void __cordl_internal_set_m_UiScaleMode(::UnityEngine::UI::__CanvasScaler__ScaleMode value);

  constexpr float_t& __cordl_internal_get_m_ReferencePixelsPerUnit();

  constexpr float_t const& __cordl_internal_get_m_ReferencePixelsPerUnit() const;

  constexpr void __cordl_internal_set_m_ReferencePixelsPerUnit(float_t value);

  constexpr float_t& __cordl_internal_get_m_ScaleFactor();

  constexpr float_t const& __cordl_internal_get_m_ScaleFactor() const;

  constexpr void __cordl_internal_set_m_ScaleFactor(float_t value);

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ReferenceResolution();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ReferenceResolution() const;

  constexpr void __cordl_internal_set_m_ReferenceResolution(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::UI::__CanvasScaler__ScreenMatchMode& __cordl_internal_get_m_ScreenMatchMode();

  constexpr ::UnityEngine::UI::__CanvasScaler__ScreenMatchMode const& __cordl_internal_get_m_ScreenMatchMode() const;

  constexpr void __cordl_internal_set_m_ScreenMatchMode(::UnityEngine::UI::__CanvasScaler__ScreenMatchMode value);

  constexpr float_t& __cordl_internal_get_m_MatchWidthOrHeight();

  constexpr float_t const& __cordl_internal_get_m_MatchWidthOrHeight() const;

  constexpr void __cordl_internal_set_m_MatchWidthOrHeight(float_t value);

  constexpr ::UnityEngine::UI::__CanvasScaler__Unit& __cordl_internal_get_m_PhysicalUnit();

  constexpr ::UnityEngine::UI::__CanvasScaler__Unit const& __cordl_internal_get_m_PhysicalUnit() const;

  constexpr void __cordl_internal_set_m_PhysicalUnit(::UnityEngine::UI::__CanvasScaler__Unit value);

  constexpr float_t& __cordl_internal_get_m_FallbackScreenDPI();

  constexpr float_t const& __cordl_internal_get_m_FallbackScreenDPI() const;

  constexpr void __cordl_internal_set_m_FallbackScreenDPI(float_t value);

  constexpr float_t& __cordl_internal_get_m_DefaultSpriteDPI();

  constexpr float_t const& __cordl_internal_get_m_DefaultSpriteDPI() const;

  constexpr void __cordl_internal_set_m_DefaultSpriteDPI(float_t value);

  constexpr float_t& __cordl_internal_get_m_DynamicPixelsPerUnit();

  constexpr float_t const& __cordl_internal_get_m_DynamicPixelsPerUnit() const;

  constexpr void __cordl_internal_set_m_DynamicPixelsPerUnit(float_t value);

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr float_t& __cordl_internal_get_m_PrevScaleFactor();

  constexpr float_t const& __cordl_internal_get_m_PrevScaleFactor() const;

  constexpr void __cordl_internal_set_m_PrevScaleFactor(float_t value);

  constexpr float_t& __cordl_internal_get_m_PrevReferencePixelsPerUnit();

  constexpr float_t const& __cordl_internal_get_m_PrevReferencePixelsPerUnit() const;

  constexpr void __cordl_internal_set_m_PrevReferencePixelsPerUnit(float_t value);

  constexpr bool& __cordl_internal_get_m_PresetInfoIsWorld();

  constexpr bool const& __cordl_internal_get_m_PresetInfoIsWorld() const;

  constexpr void __cordl_internal_set_m_PresetInfoIsWorld(bool value);

  /// @brief Method get_uiScaleMode, addr 0x2d73fe8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__CanvasScaler__ScaleMode get_uiScaleMode();

  /// @brief Method set_uiScaleMode, addr 0x2d73ff0, size 0x8, virtual false, abstract: false, final false
  inline void set_uiScaleMode(::UnityEngine::UI::__CanvasScaler__ScaleMode value);

  /// @brief Method get_referencePixelsPerUnit, addr 0x2d73ff8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_referencePixelsPerUnit();

  /// @brief Method set_referencePixelsPerUnit, addr 0x2d74000, size 0x8, virtual false, abstract: false, final false
  inline void set_referencePixelsPerUnit(float_t value);

  /// @brief Method get_scaleFactor, addr 0x2d74008, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scaleFactor();

  /// @brief Method set_scaleFactor, addr 0x2d74010, size 0x14, virtual false, abstract: false, final false
  inline void set_scaleFactor(float_t value);

  /// @brief Method get_referenceResolution, addr 0x2d74024, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_referenceResolution();

  /// @brief Method set_referenceResolution, addr 0x2d7402c, size 0x64, virtual false, abstract: false, final false
  inline void set_referenceResolution(::UnityEngine::Vector2 value);

  /// @brief Method get_screenMatchMode, addr 0x2d74090, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__CanvasScaler__ScreenMatchMode get_screenMatchMode();

  /// @brief Method set_screenMatchMode, addr 0x2d74098, size 0x8, virtual false, abstract: false, final false
  inline void set_screenMatchMode(::UnityEngine::UI::__CanvasScaler__ScreenMatchMode value);

  /// @brief Method get_matchWidthOrHeight, addr 0x2d740a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_matchWidthOrHeight();

  /// @brief Method set_matchWidthOrHeight, addr 0x2d740a8, size 0x8, virtual false, abstract: false, final false
  inline void set_matchWidthOrHeight(float_t value);

  /// @brief Method get_physicalUnit, addr 0x2d740b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__CanvasScaler__Unit get_physicalUnit();

  /// @brief Method set_physicalUnit, addr 0x2d740b8, size 0x8, virtual false, abstract: false, final false
  inline void set_physicalUnit(::UnityEngine::UI::__CanvasScaler__Unit value);

  /// @brief Method get_fallbackScreenDPI, addr 0x2d740c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fallbackScreenDPI();

  /// @brief Method set_fallbackScreenDPI, addr 0x2d740c8, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackScreenDPI(float_t value);

  /// @brief Method get_defaultSpriteDPI, addr 0x2d740d0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultSpriteDPI();

  /// @brief Method set_defaultSpriteDPI, addr 0x2d740d8, size 0x10, virtual false, abstract: false, final false
  inline void set_defaultSpriteDPI(float_t value);

  /// @brief Method get_dynamicPixelsPerUnit, addr 0x2d740e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dynamicPixelsPerUnit();

  /// @brief Method set_dynamicPixelsPerUnit, addr 0x2d740f0, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicPixelsPerUnit(float_t value);

  static inline ::UnityEngine::UI::CanvasScaler* New_ctor();

  /// @brief Method .ctor, addr 0x2d740f8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method OnEnable, addr 0x2d74140, size 0xcc, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Canvas_preWillRenderCanvases, addr 0x2d7420c, size 0x10, virtual false, abstract: false, final false
  inline void Canvas_preWillRenderCanvases();

  /// @brief Method OnDisable, addr 0x2d7421c, size 0xa8, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Handle, addr 0x2d74344, size 0xfc, virtual true, abstract: false, final false
  inline void Handle();

  /// @brief Method HandleWorldCanvas, addr 0x2d74440, size 0x20, virtual true, abstract: false, final false
  inline void HandleWorldCanvas();

  /// @brief Method HandleConstantPixelSize, addr 0x2d74460, size 0x20, virtual true, abstract: false, final false
  inline void HandleConstantPixelSize();

  /// @brief Method HandleScaleWithScreenSize, addr 0x2d74480, size 0x234, virtual true, abstract: false, final false
  inline void HandleScaleWithScreenSize();

  /// @brief Method HandleConstantPhysicalSize, addr 0x2d746b4, size 0x6c, virtual true, abstract: false, final false
  inline void HandleConstantPhysicalSize();

  /// @brief Method SetScaleFactor, addr 0x2d742c4, size 0x40, virtual false, abstract: false, final false
  inline void SetScaleFactor(float_t scaleFactor);

  /// @brief Method SetReferencePixelsPerUnit, addr 0x2d74304, size 0x40, virtual false, abstract: false, final false
  inline void SetReferencePixelsPerUnit(float_t referencePixelsPerUnit);

  // Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasScaler(CanvasScaler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasScaler(CanvasScaler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasScaler();

public:
  /// @brief Field m_UiScaleMode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UI::__CanvasScaler__ScaleMode ___m_UiScaleMode;

  /// @brief Field m_ReferencePixelsPerUnit, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_ReferencePixelsPerUnit;

  /// @brief Field m_ScaleFactor, offset: 0x20, size: 0x4, def value: None
  float_t ___m_ScaleFactor;

  /// @brief Field m_ReferenceResolution, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ReferenceResolution;

  /// @brief Field m_ScreenMatchMode, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::UI::__CanvasScaler__ScreenMatchMode ___m_ScreenMatchMode;

  /// @brief Field m_MatchWidthOrHeight, offset: 0x30, size: 0x4, def value: None
  float_t ___m_MatchWidthOrHeight;

  /// @brief Field m_PhysicalUnit, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::UI::__CanvasScaler__Unit ___m_PhysicalUnit;

  /// @brief Field m_FallbackScreenDPI, offset: 0x38, size: 0x4, def value: None
  float_t ___m_FallbackScreenDPI;

  /// @brief Field m_DefaultSpriteDPI, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_DefaultSpriteDPI;

  /// @brief Field m_DynamicPixelsPerUnit, offset: 0x40, size: 0x4, def value: None
  float_t ___m_DynamicPixelsPerUnit;

  /// @brief Field m_Canvas, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  /// @brief Field m_PrevScaleFactor, offset: 0x50, size: 0x4, def value: None
  float_t ___m_PrevScaleFactor;

  /// @brief Field m_PrevReferencePixelsPerUnit, offset: 0x54, size: 0x4, def value: None
  float_t ___m_PrevReferencePixelsPerUnit;

  /// @brief Field m_PresetInfoIsWorld, offset: 0x58, size: 0x1, def value: None
  bool ___m_PresetInfoIsWorld;

  /// @brief Field kLogBase offset 0xffffffff size 0x4
  static constexpr float_t kLogBase{ 2.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CanvasScaler, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_UiScaleMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ReferencePixelsPerUnit) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ScaleFactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ReferenceResolution) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ScreenMatchMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_MatchWidthOrHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PhysicalUnit) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_FallbackScreenDPI) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_DefaultSpriteDPI) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_DynamicPixelsPerUnit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_Canvas) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PrevScaleFactor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PrevReferencePixelsPerUnit) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PresetInfoIsWorld) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__CanvasScaler__ScaleMode, "UnityEngine.UI", "CanvasScaler/ScaleMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__CanvasScaler__ScreenMatchMode, "UnityEngine.UI", "CanvasScaler/ScreenMatchMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__CanvasScaler__Unit, "UnityEngine.UI", "CanvasScaler/Unit");
NEED_NO_BOX(::UnityEngine::UI::CanvasScaler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasScaler*, "UnityEngine.UI", "CanvasScaler");
