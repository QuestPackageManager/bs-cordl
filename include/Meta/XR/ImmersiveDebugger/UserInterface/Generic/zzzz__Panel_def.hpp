#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Panel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__InteractableController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Panel)
namespace GlobalNamespace {
class OVRHapticsClip;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Interface;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class PanelRaycaster;
}
namespace UnityEngine::UI {
class CanvasScaler;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Panel;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController, UnityEngine.Vector3
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel
class CORDL_TYPE Panel : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController {
public:
  // Declarations
  /// @brief Field Background, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_Background, put = __cordl_internal_set_Background)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> Background;

  __declspec(property(put = set_BackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> BackgroundStyle;

  __declspec(property(get = get_Interface)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> Interface;

  __declspec(property(get = get_PixelsPerUnit, put = set_PixelsPerUnit)) float_t PixelsPerUnit;

  __declspec(property(get = get_SphericalCoordinates, put = set_SphericalCoordinates)) ::UnityEngine::Vector3 SphericalCoordinates;

  /// @brief Field <PixelsPerUnit>k__BackingField, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__PixelsPerUnit_k__BackingField, put = __cordl_internal_set__PixelsPerUnit_k__BackingField)) float_t _PixelsPerUnit_k__BackingField;

  /// @brief Field _backgroundStyle, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundStyle, put = __cordl_internal_set__backgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _backgroundStyle;

  /// @brief Field _canvas, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__canvas, put = __cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas> _canvas;

  /// @brief Field _canvasScaler, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasScaler, put = __cordl_internal_set__canvasScaler)) ::UnityW<::UnityEngine::UI::CanvasScaler> _canvasScaler;

  /// @brief Field _hapticsClip, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__hapticsClip, put = setStaticF__hapticsClip)) ::GlobalNamespace::OVRHapticsClip* _hapticsClip;

  /// @brief Field _ovrRaycaster, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__ovrRaycaster, put = __cordl_internal_set__ovrRaycaster)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster> _ovrRaycaster;

  /// @brief Field _sphericalCoordinates, offset 0xb0, size 0xc
  __declspec(property(get = __cordl_internal_get__sphericalCoordinates, put = __cordl_internal_set__sphericalCoordinates)) ::UnityEngine::Vector3 _sphericalCoordinates;

  /// @brief Method Init, addr 0x5846d00, size 0x4c, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method LateUpdate, addr 0x5847578, size 0x18, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel* New_ctor();

  /// @brief Method OnDisable, addr 0x58475ec, size 0x84, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5847590, size 0x5c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnHoverChanged, addr 0x584727c, size 0x48, virtual true, abstract: false, final false
  inline void OnHoverChanged();

  /// @brief Method OnTransparencyChanged, addr 0x5847208, size 0x74, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method RefreshCanvas, addr 0x58473a0, size 0xcc, virtual false, abstract: false, final false
  inline void RefreshCanvas();

  /// @brief Method RefreshRaycaster, addr 0x5847484, size 0xf4, virtual false, abstract: false, final false
  inline void RefreshRaycaster();

  /// @brief Method SetExpectedPixelsPerUnit, addr 0x5847174, size 0x94, virtual false, abstract: false, final false
  inline void SetExpectedPixelsPerUnit(float_t pixelsPerUnit, float_t dynamicPixelsPerUnit, float_t referencePixelsPerUnit);

  /// @brief Method SetPosition, addr 0x5846fac, size 0xe0, virtual false, abstract: false, final false
  inline void SetPosition(::UnityEngine::Vector3 position);

  /// @brief Method Setup, addr 0x5846b6c, size 0x15c, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method SphericalToCartesian, addr 0x5846f3c, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SphericalToCartesian(float_t radius, float_t theta, float_t phi);

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get_Background() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get_Background();

  constexpr float_t const& __cordl_internal_get__PixelsPerUnit_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__PixelsPerUnit_k__BackingField();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__backgroundStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__backgroundStyle();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas();

  constexpr ::UnityW<::UnityEngine::UI::CanvasScaler> const& __cordl_internal_get__canvasScaler() const;

  constexpr ::UnityW<::UnityEngine::UI::CanvasScaler>& __cordl_internal_get__canvasScaler();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster> const& __cordl_internal_get__ovrRaycaster() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>& __cordl_internal_get__ovrRaycaster();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__sphericalCoordinates() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__sphericalCoordinates();

  constexpr void __cordl_internal_set_Background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__PixelsPerUnit_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__backgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set__canvasScaler(::UnityW<::UnityEngine::UI::CanvasScaler> value);

  constexpr void __cordl_internal_set__ovrRaycaster(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster> value);

  constexpr void __cordl_internal_set__sphericalCoordinates(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x5846ce4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRHapticsClip* getStaticF__hapticsClip();

  /// @brief Method get_HapticsClip, addr 0x5846d4c, size 0x158, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRHapticsClip* get_HapticsClip();

  /// @brief Method get_Interface, addr 0x584708c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> get_Interface();

  /// @brief Method get_PixelsPerUnit, addr 0x5846ea4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_PixelsPerUnit();

  /// @brief Method get_SphericalCoordinates, addr 0x5846eb4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_SphericalCoordinates();

  static inline void setStaticF__hapticsClip(::GlobalNamespace::OVRHapticsClip* value);

  /// @brief Method set_BackgroundStyle, addr 0x584710c, size 0x68, virtual false, abstract: false, final false
  inline void set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_PixelsPerUnit, addr 0x5846eac, size 0x8, virtual false, abstract: false, final false
  inline void set_PixelsPerUnit(float_t value);

  /// @brief Method set_SphericalCoordinates, addr 0x5846ec0, size 0x7c, virtual false, abstract: false, final false
  inline void set_SphericalCoordinates(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Panel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Panel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Panel(Panel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Panel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Panel(Panel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18354 };

  /// @brief Field _canvas, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ____canvas;

  /// @brief Field _canvasScaler, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::CanvasScaler> ____canvasScaler;

  /// @brief Field _ovrRaycaster, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster> ____ovrRaycaster;

  /// @brief Field <PixelsPerUnit>k__BackingField, offset: 0x98, size: 0x4, def value: None
  float_t ____PixelsPerUnit_k__BackingField;

  /// @brief Field Background, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ___Background;

  /// @brief Field _backgroundStyle, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____backgroundStyle;

  /// @brief Field _sphericalCoordinates, offset: 0xb0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____sphericalCoordinates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel, ____canvas) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel, ____canvasScaler) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel, ____ovrRaycaster) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel, ____PixelsPerUnit_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel, ___Background) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel, ____backgroundStyle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel, ____sphericalCoordinates) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel, 0xc0>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Panel");
