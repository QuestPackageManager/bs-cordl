#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorHueSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__CircleSlider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorHueSlider)
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace HMUI {
class CircleSlider;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorHueSlider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorHueSlider);
// Dependencies HMUI.CircleSlider, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorHueSlider
class CORDL_TYPE ColorHueSlider : public ::HMUI::CircleSlider {
public:
  // Declarations
  /// @brief Field _darkColor, offset 0x12c, size 0x10
  __declspec(property(get = __cordl_internal_get__darkColor, put = __cordl_internal_set__darkColor)) ::UnityEngine::Color _darkColor;

  /// @brief Field _lightColor, offset 0x13c, size 0x10
  __declspec(property(get = __cordl_internal_get__lightColor, put = __cordl_internal_set__lightColor)) ::UnityEngine::Color _lightColor;

  /// @brief Field colorHueDidChangeEvent, offset 0x150, size 0x8
  __declspec(property(
      get = __cordl_internal_get_colorHueDidChangeEvent,
      put = __cordl_internal_set_colorHueDidChangeEvent)) ::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* colorHueDidChangeEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Method Awake, addr 0x587db28, size 0x90, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNormalizedValueDidChange, addr 0x587dce4, size 0x28, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::CircleSlider* slider, float_t normalizedValue);

  static inline ::GlobalNamespace::ColorHueSlider* New_ctor();

  /// @brief Method OnDestroy, addr 0x587dbb8, size 0x84, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPointerUp, addr 0x587dd0c, size 0x40, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method UpdateVisuals, addr 0x587dc3c, size 0xa8, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__darkColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__darkColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightColor();

  constexpr ::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* const& __cordl_internal_get_colorHueDidChangeEvent() const;

  constexpr ::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*& __cordl_internal_get_colorHueDidChangeEvent();

  constexpr void __cordl_internal_set__darkColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__lightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorHueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method .ctor, addr 0x587dd4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_colorHueDidChangeEvent, addr 0x587d9a8, size 0xc0, virtual false, abstract: false, final false
  inline void add_colorHueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Method remove_colorHueDidChangeEvent, addr 0x587da68, size 0xc0, virtual false, abstract: false, final false
  inline void remove_colorHueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorHueSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorHueSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorHueSlider(ColorHueSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorHueSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorHueSlider(ColorHueSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22929 };

  /// @brief Field _darkColor, offset: 0x12c, size: 0x10, def value: None
  ::UnityEngine::Color ____darkColor;

  /// @brief Field _lightColor, offset: 0x13c, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field colorHueDidChangeEvent, offset: 0x150, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::GlobalNamespace::ColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* ___colorHueDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorHueSlider, ____darkColor) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorHueSlider, ____lightColor) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorHueSlider, ___colorHueDidChangeEvent) == 0x150, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorHueSlider, 0x158>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorHueSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorHueSlider*, "", "ColorHueSlider");
