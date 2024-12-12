#pragma once
// IWYU pragma private; include "UnityEngine/UI/CanvasScaler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasScaler)
namespace UnityEngine::UI {
struct CanvasScaler_ScaleMode;
}
namespace UnityEngine::UI {
struct CanvasScaler_ScreenMatchMode;
}
namespace UnityEngine::UI {
struct CanvasScaler_Unit;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
struct CanvasScaler_ScaleMode;
}
namespace UnityEngine::UI {
struct CanvasScaler_ScreenMatchMode;
}
namespace UnityEngine::UI {
struct CanvasScaler_Unit;
}
namespace UnityEngine::UI {
class CanvasScaler;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::CanvasScaler_ScaleMode);
MARK_VAL_T(::UnityEngine::UI::CanvasScaler_ScreenMatchMode);
MARK_VAL_T(::UnityEngine::UI::CanvasScaler_Unit);
MARK_REF_PTR_T(::UnityEngine::UI::CanvasScaler);
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.CanvasScaler/ScaleMode
struct CORDL_TYPE CanvasScaler_ScaleMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CanvasScaler_ScaleMode_Unwrapped
  enum struct __CanvasScaler_ScaleMode_Unwrapped : int32_t {
    __E_ConstantPixelSize = static_cast<int32_t>(0x0),
    __E_ScaleWithScreenSize = static_cast<int32_t>(0x1),
    __E_ConstantPhysicalSize = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CanvasScaler_ScaleMode_Unwrapped() const noexcept {
    return static_cast<__CanvasScaler_ScaleMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasScaler_ScaleMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CanvasScaler_ScaleMode(int32_t value__) noexcept;

  /// @brief Field ConstantPhysicalSize value: I32(2)
  static ::UnityEngine::UI::CanvasScaler_ScaleMode const ConstantPhysicalSize;

  /// @brief Field ConstantPixelSize value: I32(0)
  static ::UnityEngine::UI::CanvasScaler_ScaleMode const ConstantPixelSize;

  /// @brief Field ScaleWithScreenSize value: I32(1)
  static ::UnityEngine::UI::CanvasScaler_ScaleMode const ScaleWithScreenSize;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15083 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::CanvasScaler_ScaleMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CanvasScaler_ScaleMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.CanvasScaler/ScreenMatchMode
struct CORDL_TYPE CanvasScaler_ScreenMatchMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CanvasScaler_ScreenMatchMode_Unwrapped
  enum struct __CanvasScaler_ScreenMatchMode_Unwrapped : int32_t {
    __E_MatchWidthOrHeight = static_cast<int32_t>(0x0),
    __E_Expand = static_cast<int32_t>(0x1),
    __E_Shrink = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CanvasScaler_ScreenMatchMode_Unwrapped() const noexcept {
    return static_cast<__CanvasScaler_ScreenMatchMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasScaler_ScreenMatchMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CanvasScaler_ScreenMatchMode(int32_t value__) noexcept;

  /// @brief Field Expand value: I32(1)
  static ::UnityEngine::UI::CanvasScaler_ScreenMatchMode const Expand;

  /// @brief Field MatchWidthOrHeight value: I32(0)
  static ::UnityEngine::UI::CanvasScaler_ScreenMatchMode const MatchWidthOrHeight;

  /// @brief Field Shrink value: I32(2)
  static ::UnityEngine::UI::CanvasScaler_ScreenMatchMode const Shrink;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15084 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::CanvasScaler_ScreenMatchMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CanvasScaler_ScreenMatchMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.CanvasScaler/Unit
struct CORDL_TYPE CanvasScaler_Unit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CanvasScaler_Unit_Unwrapped
  enum struct __CanvasScaler_Unit_Unwrapped : int32_t {
    __E_Centimeters = static_cast<int32_t>(0x0),
    __E_Millimeters = static_cast<int32_t>(0x1),
    __E_Inches = static_cast<int32_t>(0x2),
    __E_Points = static_cast<int32_t>(0x3),
    __E_Picas = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CanvasScaler_Unit_Unwrapped() const noexcept {
    return static_cast<__CanvasScaler_Unit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasScaler_Unit();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CanvasScaler_Unit(int32_t value__) noexcept;

  /// @brief Field Centimeters value: I32(0)
  static ::UnityEngine::UI::CanvasScaler_Unit const Centimeters;

  /// @brief Field Inches value: I32(2)
  static ::UnityEngine::UI::CanvasScaler_Unit const Inches;

  /// @brief Field Millimeters value: I32(1)
  static ::UnityEngine::UI::CanvasScaler_Unit const Millimeters;

  /// @brief Field Picas value: I32(4)
  static ::UnityEngine::UI::CanvasScaler_Unit const Picas;

  /// @brief Field Points value: I32(3)
  static ::UnityEngine::UI::CanvasScaler_Unit const Points;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15085 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::CanvasScaler_Unit, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CanvasScaler_Unit, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.EventSystems.UIBehaviour, UnityEngine.UI.CanvasScaler::ScaleMode, UnityEngine.UI.CanvasScaler::ScreenMatchMode, UnityEngine.UI.CanvasScaler::Unit, UnityEngine.Vector2
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.CanvasScaler
class CORDL_TYPE CanvasScaler : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using ScaleMode = ::UnityEngine::UI::CanvasScaler_ScaleMode;

  using ScreenMatchMode = ::UnityEngine::UI::CanvasScaler_ScreenMatchMode;

  using Unit = ::UnityEngine::UI::CanvasScaler_Unit;

  __declspec(property(get = get_defaultSpriteDPI, put = set_defaultSpriteDPI)) float_t defaultSpriteDPI;

  __declspec(property(get = get_dynamicPixelsPerUnit, put = set_dynamicPixelsPerUnit)) float_t dynamicPixelsPerUnit;

  __declspec(property(get = get_fallbackScreenDPI, put = set_fallbackScreenDPI)) float_t fallbackScreenDPI;

  /// @brief Field m_Canvas, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas)) ::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_DefaultSpriteDPI, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultSpriteDPI, put = __cordl_internal_set_m_DefaultSpriteDPI)) float_t m_DefaultSpriteDPI;

  /// @brief Field m_DynamicPixelsPerUnit, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DynamicPixelsPerUnit, put = __cordl_internal_set_m_DynamicPixelsPerUnit)) float_t m_DynamicPixelsPerUnit;

  /// @brief Field m_FallbackScreenDPI, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FallbackScreenDPI, put = __cordl_internal_set_m_FallbackScreenDPI)) float_t m_FallbackScreenDPI;

  /// @brief Field m_MatchWidthOrHeight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MatchWidthOrHeight, put = __cordl_internal_set_m_MatchWidthOrHeight)) float_t m_MatchWidthOrHeight;

  /// @brief Field m_PhysicalUnit, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PhysicalUnit, put = __cordl_internal_set_m_PhysicalUnit)) ::UnityEngine::UI::CanvasScaler_Unit m_PhysicalUnit;

  /// @brief Field m_PresetInfoIsWorld, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PresetInfoIsWorld, put = __cordl_internal_set_m_PresetInfoIsWorld)) bool m_PresetInfoIsWorld;

  /// @brief Field m_PrevReferencePixelsPerUnit, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevReferencePixelsPerUnit, put = __cordl_internal_set_m_PrevReferencePixelsPerUnit)) float_t m_PrevReferencePixelsPerUnit;

  /// @brief Field m_PrevScaleFactor, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PrevScaleFactor, put = __cordl_internal_set_m_PrevScaleFactor)) float_t m_PrevScaleFactor;

  /// @brief Field m_ReferencePixelsPerUnit, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReferencePixelsPerUnit, put = __cordl_internal_set_m_ReferencePixelsPerUnit)) float_t m_ReferencePixelsPerUnit;

  /// @brief Field m_ReferenceResolution, offset 0x2c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReferenceResolution, put = __cordl_internal_set_m_ReferenceResolution)) ::UnityEngine::Vector2 m_ReferenceResolution;

  /// @brief Field m_ScaleFactor, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScaleFactor, put = __cordl_internal_set_m_ScaleFactor)) float_t m_ScaleFactor;

  /// @brief Field m_ScreenMatchMode, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScreenMatchMode, put = __cordl_internal_set_m_ScreenMatchMode)) ::UnityEngine::UI::CanvasScaler_ScreenMatchMode m_ScreenMatchMode;

  /// @brief Field m_UiScaleMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UiScaleMode, put = __cordl_internal_set_m_UiScaleMode)) ::UnityEngine::UI::CanvasScaler_ScaleMode m_UiScaleMode;

  __declspec(property(get = get_matchWidthOrHeight, put = set_matchWidthOrHeight)) float_t matchWidthOrHeight;

  __declspec(property(get = get_physicalUnit, put = set_physicalUnit)) ::UnityEngine::UI::CanvasScaler_Unit physicalUnit;

  __declspec(property(get = get_referencePixelsPerUnit, put = set_referencePixelsPerUnit)) float_t referencePixelsPerUnit;

  __declspec(property(get = get_referenceResolution, put = set_referenceResolution)) ::UnityEngine::Vector2 referenceResolution;

  __declspec(property(get = get_scaleFactor, put = set_scaleFactor)) float_t scaleFactor;

  __declspec(property(get = get_screenMatchMode, put = set_screenMatchMode)) ::UnityEngine::UI::CanvasScaler_ScreenMatchMode screenMatchMode;

  __declspec(property(get = get_uiScaleMode, put = set_uiScaleMode)) ::UnityEngine::UI::CanvasScaler_ScaleMode uiScaleMode;

  /// @brief Method Canvas_preWillRenderCanvases, addr 0x4ab5bc0, size 0x10, virtual false, abstract: false, final false
  inline void Canvas_preWillRenderCanvases();

  /// @brief Method Handle, addr 0x4ab5cf8, size 0xfc, virtual true, abstract: false, final false
  inline void Handle();

  /// @brief Method HandleConstantPhysicalSize, addr 0x4ab6068, size 0x68, virtual true, abstract: false, final false
  inline void HandleConstantPhysicalSize();

  /// @brief Method HandleConstantPixelSize, addr 0x4ab5e14, size 0x20, virtual true, abstract: false, final false
  inline void HandleConstantPixelSize();

  /// @brief Method HandleScaleWithScreenSize, addr 0x4ab5e34, size 0x234, virtual true, abstract: false, final false
  inline void HandleScaleWithScreenSize();

  /// @brief Method HandleWorldCanvas, addr 0x4ab5df4, size 0x20, virtual true, abstract: false, final false
  inline void HandleWorldCanvas();

  static inline ::UnityEngine::UI::CanvasScaler* New_ctor();

  /// @brief Method OnDisable, addr 0x4ab5bd0, size 0xa8, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4ab5afc, size 0xc4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetReferencePixelsPerUnit, addr 0x4ab5cb8, size 0x40, virtual false, abstract: false, final false
  inline void SetReferencePixelsPerUnit(float_t referencePixelsPerUnit);

  /// @brief Method SetScaleFactor, addr 0x4ab5c78, size 0x40, virtual false, abstract: false, final false
  inline void SetScaleFactor(float_t scaleFactor);

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr float_t const& __cordl_internal_get_m_DefaultSpriteDPI() const;

  constexpr float_t& __cordl_internal_get_m_DefaultSpriteDPI();

  constexpr float_t const& __cordl_internal_get_m_DynamicPixelsPerUnit() const;

  constexpr float_t& __cordl_internal_get_m_DynamicPixelsPerUnit();

  constexpr float_t const& __cordl_internal_get_m_FallbackScreenDPI() const;

  constexpr float_t& __cordl_internal_get_m_FallbackScreenDPI();

  constexpr float_t const& __cordl_internal_get_m_MatchWidthOrHeight() const;

  constexpr float_t& __cordl_internal_get_m_MatchWidthOrHeight();

  constexpr ::UnityEngine::UI::CanvasScaler_Unit const& __cordl_internal_get_m_PhysicalUnit() const;

  constexpr ::UnityEngine::UI::CanvasScaler_Unit& __cordl_internal_get_m_PhysicalUnit();

  constexpr bool const& __cordl_internal_get_m_PresetInfoIsWorld() const;

  constexpr bool& __cordl_internal_get_m_PresetInfoIsWorld();

  constexpr float_t const& __cordl_internal_get_m_PrevReferencePixelsPerUnit() const;

  constexpr float_t& __cordl_internal_get_m_PrevReferencePixelsPerUnit();

  constexpr float_t const& __cordl_internal_get_m_PrevScaleFactor() const;

  constexpr float_t& __cordl_internal_get_m_PrevScaleFactor();

  constexpr float_t const& __cordl_internal_get_m_ReferencePixelsPerUnit() const;

  constexpr float_t& __cordl_internal_get_m_ReferencePixelsPerUnit();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ReferenceResolution() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ReferenceResolution();

  constexpr float_t const& __cordl_internal_get_m_ScaleFactor() const;

  constexpr float_t& __cordl_internal_get_m_ScaleFactor();

  constexpr ::UnityEngine::UI::CanvasScaler_ScreenMatchMode const& __cordl_internal_get_m_ScreenMatchMode() const;

  constexpr ::UnityEngine::UI::CanvasScaler_ScreenMatchMode& __cordl_internal_get_m_ScreenMatchMode();

  constexpr ::UnityEngine::UI::CanvasScaler_ScaleMode const& __cordl_internal_get_m_UiScaleMode() const;

  constexpr ::UnityEngine::UI::CanvasScaler_ScaleMode& __cordl_internal_get_m_UiScaleMode();

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_DefaultSpriteDPI(float_t value);

  constexpr void __cordl_internal_set_m_DynamicPixelsPerUnit(float_t value);

  constexpr void __cordl_internal_set_m_FallbackScreenDPI(float_t value);

  constexpr void __cordl_internal_set_m_MatchWidthOrHeight(float_t value);

  constexpr void __cordl_internal_set_m_PhysicalUnit(::UnityEngine::UI::CanvasScaler_Unit value);

  constexpr void __cordl_internal_set_m_PresetInfoIsWorld(bool value);

  constexpr void __cordl_internal_set_m_PrevReferencePixelsPerUnit(float_t value);

  constexpr void __cordl_internal_set_m_PrevScaleFactor(float_t value);

  constexpr void __cordl_internal_set_m_ReferencePixelsPerUnit(float_t value);

  constexpr void __cordl_internal_set_m_ReferenceResolution(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_ScaleFactor(float_t value);

  constexpr void __cordl_internal_set_m_ScreenMatchMode(::UnityEngine::UI::CanvasScaler_ScreenMatchMode value);

  constexpr void __cordl_internal_set_m_UiScaleMode(::UnityEngine::UI::CanvasScaler_ScaleMode value);

  /// @brief Method .ctor, addr 0x4ab5ab4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_defaultSpriteDPI, addr 0x4ab5a8c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultSpriteDPI();

  /// @brief Method get_dynamicPixelsPerUnit, addr 0x4ab5aa4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_dynamicPixelsPerUnit();

  /// @brief Method get_fallbackScreenDPI, addr 0x4ab5a7c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fallbackScreenDPI();

  /// @brief Method get_matchWidthOrHeight, addr 0x4ab5a5c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_matchWidthOrHeight();

  /// @brief Method get_physicalUnit, addr 0x4ab5a6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::CanvasScaler_Unit get_physicalUnit();

  /// @brief Method get_referencePixelsPerUnit, addr 0x4ab59b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_referencePixelsPerUnit();

  /// @brief Method get_referenceResolution, addr 0x4ab59e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_referenceResolution();

  /// @brief Method get_scaleFactor, addr 0x4ab59c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scaleFactor();

  /// @brief Method get_screenMatchMode, addr 0x4ab5a4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::CanvasScaler_ScreenMatchMode get_screenMatchMode();

  /// @brief Method get_uiScaleMode, addr 0x4ab59a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::CanvasScaler_ScaleMode get_uiScaleMode();

  /// @brief Method set_defaultSpriteDPI, addr 0x4ab5a94, size 0x10, virtual false, abstract: false, final false
  inline void set_defaultSpriteDPI(float_t value);

  /// @brief Method set_dynamicPixelsPerUnit, addr 0x4ab5aac, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicPixelsPerUnit(float_t value);

  /// @brief Method set_fallbackScreenDPI, addr 0x4ab5a84, size 0x8, virtual false, abstract: false, final false
  inline void set_fallbackScreenDPI(float_t value);

  /// @brief Method set_matchWidthOrHeight, addr 0x4ab5a64, size 0x8, virtual false, abstract: false, final false
  inline void set_matchWidthOrHeight(float_t value);

  /// @brief Method set_physicalUnit, addr 0x4ab5a74, size 0x8, virtual false, abstract: false, final false
  inline void set_physicalUnit(::UnityEngine::UI::CanvasScaler_Unit value);

  /// @brief Method set_referencePixelsPerUnit, addr 0x4ab59bc, size 0x8, virtual false, abstract: false, final false
  inline void set_referencePixelsPerUnit(float_t value);

  /// @brief Method set_referenceResolution, addr 0x4ab59e8, size 0x64, virtual false, abstract: false, final false
  inline void set_referenceResolution(::UnityEngine::Vector2 value);

  /// @brief Method set_scaleFactor, addr 0x4ab59cc, size 0x14, virtual false, abstract: false, final false
  inline void set_scaleFactor(float_t value);

  /// @brief Method set_screenMatchMode, addr 0x4ab5a54, size 0x8, virtual false, abstract: false, final false
  inline void set_screenMatchMode(::UnityEngine::UI::CanvasScaler_ScreenMatchMode value);

  /// @brief Method set_uiScaleMode, addr 0x4ab59ac, size 0x8, virtual false, abstract: false, final false
  inline void set_uiScaleMode(::UnityEngine::UI::CanvasScaler_ScaleMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasScaler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasScaler(CanvasScaler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasScaler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasScaler(CanvasScaler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15086 };

  /// @brief Field kLogBase offset 0xffffffff size 0x4
  static constexpr float_t kLogBase{ static_cast<float_t>(2.0f) };

  /// @brief Field m_UiScaleMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UI::CanvasScaler_ScaleMode ___m_UiScaleMode;

  /// @brief Field m_ReferencePixelsPerUnit, offset: 0x24, size: 0x4, def value: None
  float_t ___m_ReferencePixelsPerUnit;

  /// @brief Field m_ScaleFactor, offset: 0x28, size: 0x4, def value: None
  float_t ___m_ScaleFactor;

  /// @brief Field m_ReferenceResolution, offset: 0x2c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ReferenceResolution;

  /// @brief Field m_ScreenMatchMode, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::UI::CanvasScaler_ScreenMatchMode ___m_ScreenMatchMode;

  /// @brief Field m_MatchWidthOrHeight, offset: 0x38, size: 0x4, def value: None
  float_t ___m_MatchWidthOrHeight;

  /// @brief Field m_PhysicalUnit, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::UI::CanvasScaler_Unit ___m_PhysicalUnit;

  /// @brief Field m_FallbackScreenDPI, offset: 0x40, size: 0x4, def value: None
  float_t ___m_FallbackScreenDPI;

  /// @brief Field m_DefaultSpriteDPI, offset: 0x44, size: 0x4, def value: None
  float_t ___m_DefaultSpriteDPI;

  /// @brief Field m_DynamicPixelsPerUnit, offset: 0x48, size: 0x4, def value: None
  float_t ___m_DynamicPixelsPerUnit;

  /// @brief Field m_Canvas, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  /// @brief Field m_PrevScaleFactor, offset: 0x58, size: 0x4, def value: None
  float_t ___m_PrevScaleFactor;

  /// @brief Field m_PrevReferencePixelsPerUnit, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_PrevReferencePixelsPerUnit;

  /// @brief Field m_PresetInfoIsWorld, offset: 0x60, size: 0x1, def value: None
  bool ___m_PresetInfoIsWorld;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_UiScaleMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ReferencePixelsPerUnit) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ScaleFactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ReferenceResolution) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_ScreenMatchMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_MatchWidthOrHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PhysicalUnit) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_FallbackScreenDPI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_DefaultSpriteDPI) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_DynamicPixelsPerUnit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_Canvas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PrevScaleFactor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PrevReferencePixelsPerUnit) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasScaler, ___m_PresetInfoIsWorld) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CanvasScaler, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasScaler_ScaleMode, "UnityEngine.UI", "CanvasScaler/ScaleMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasScaler_ScreenMatchMode, "UnityEngine.UI", "CanvasScaler/ScreenMatchMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasScaler_Unit, "UnityEngine.UI", "CanvasScaler/Unit");
NEED_NO_BOX(::UnityEngine::UI::CanvasScaler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasScaler*, "UnityEngine.UI", "CanvasScaler");
