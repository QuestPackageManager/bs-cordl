#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Slider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Button_def.hpp"
CORDL_MODULE_EXPORT(Slider)
namespace Meta::XR::ImmersiveDebugger::Manager {
class Tweak;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Icon;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Slider;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider
class CORDL_TYPE Slider : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button {
public:
  // Declarations
  __declspec(property(put = set_EmptyBackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> EmptyBackgroundStyle;

  __declspec(property(put = set_FillBackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> FillBackgroundStyle;

  __declspec(property(get = get_Tweak, put = set_Tweak)) ::Meta::XR::ImmersiveDebugger::Manager::Tweak* Tweak;

  /// @brief Field <Tweak>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__Tweak_k__BackingField, put = __cordl_internal_set__Tweak_k__BackingField)) ::Meta::XR::ImmersiveDebugger::Manager::Tweak* _Tweak_k__BackingField;

  /// @brief Field _emptyBackground, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyBackground, put = __cordl_internal_set__emptyBackground)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>
      _emptyBackground;

  /// @brief Field _emptyBackgroundStyle, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyBackgroundStyle, put = __cordl_internal_set__emptyBackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _emptyBackgroundStyle;

  /// @brief Field _fillBackground, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__fillBackground, put = __cordl_internal_set__fillBackground)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>
      _fillBackground;

  /// @brief Field _fillBackgroundStyle, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__fillBackgroundStyle, put = __cordl_internal_set__fillBackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _fillBackgroundStyle;

  /// @brief Field _pill, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__pill, put = __cordl_internal_set__pill)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> _pill;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

  /// @brief Method MayDrag, addr 0x58ae7fc, size 0x2c, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider* New_ctor();

  /// @brief Method OnDrag, addr 0x58ae6c8, size 0x134, virtual true, abstract: false, final true
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnInitializePotentialDrag, addr 0x58ae828, size 0x14, virtual true, abstract: false, final true
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method Setup, addr 0x58ae2e4, size 0x338, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method Update, addr 0x58ae6c4, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePillPosition, addr 0x58ae61c, size 0xa8, virtual false, abstract: false, final false
  inline void UpdatePillPosition();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Tweak* const& __cordl_internal_get__Tweak_k__BackingField() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Tweak*& __cordl_internal_get__Tweak_k__BackingField();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__emptyBackground() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__emptyBackground();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__emptyBackgroundStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__emptyBackgroundStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__fillBackground() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__fillBackground();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__fillBackgroundStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__fillBackgroundStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> const& __cordl_internal_get__pill() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon>& __cordl_internal_get__pill();

  constexpr void __cordl_internal_set__Tweak_k__BackingField(::Meta::XR::ImmersiveDebugger::Manager::Tweak* value);

  constexpr void __cordl_internal_set__emptyBackground(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__emptyBackgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__fillBackground(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__fillBackgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__pill(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> value);

  /// @brief Method .ctor, addr 0x58ae83c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Tweak, addr 0x58ae194, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak* get_Tweak();

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept;

  /// @brief Method set_EmptyBackgroundStyle, addr 0x58ae1a4, size 0xa0, virtual false, abstract: false, final false
  inline void set_EmptyBackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_FillBackgroundStyle, addr 0x58ae244, size 0xa0, virtual false, abstract: false, final false
  inline void set_FillBackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_Tweak, addr 0x58ae19c, size 0x8, virtual false, abstract: false, final false
  inline void set_Tweak(::Meta::XR::ImmersiveDebugger::Manager::Tweak* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Slider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Slider(Slider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Slider(Slider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18372 };

  /// @brief Field _emptyBackground, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____emptyBackground;

  /// @brief Field _fillBackground, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____fillBackground;

  /// @brief Field _pill, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Icon> ____pill;

  /// @brief Field <Tweak>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::Tweak* ____Tweak_k__BackingField;

  /// @brief Field _emptyBackgroundStyle, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____emptyBackgroundStyle;

  /// @brief Field _fillBackgroundStyle, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____fillBackgroundStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider, ____emptyBackground) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider, ____fillBackground) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider, ____pill) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider, ____Tweak_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider, ____emptyBackgroundStyle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider, ____fillBackgroundStyle) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider, 0xb8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Slider");
