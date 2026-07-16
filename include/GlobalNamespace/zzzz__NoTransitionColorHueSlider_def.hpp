#pragma once
// IWYU pragma private; include "GlobalNamespace/NoTransitionColorHueSlider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__NoTransitionCircleSlider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoTransitionColorHueSlider)
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
class PointerEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionColorHueSlider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NoTransitionColorHueSlider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoTransitionColorHueSlider*, "", "NoTransitionColorHueSlider");
// Dependencies HMUI.NoTransitionCircleSlider, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoTransitionColorHueSlider
class CORDL_TYPE NoTransitionColorHueSlider : public ::HMUI::NoTransitionCircleSlider {
public:
  // Declarations
  /// @brief Field _darkColor, offset 0x13c, size 0x10
  __declspec(property(get = __cordl_internal_get__darkColor, put = __cordl_internal_set__darkColor)) ::UnityEngine::Color _darkColor;

  /// @brief Field _lightColor, offset 0x14c, size 0x10
  __declspec(property(get = __cordl_internal_get__lightColor, put = __cordl_internal_set__lightColor)) ::UnityEngine::Color _lightColor;

  /// @brief Field colorHueDidChangeEvent, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_colorHueDidChangeEvent,
                      put = __cordl_internal_set_colorHueDidChangeEvent)) ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t,
                                                                                             ::GlobalNamespace::ColorChangeUIEventType>* colorHueDidChangeEvent;

  /// @brief Method Awake, addr 0x5a2b9bc, size 0x90, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNormalizedValueDidChange, addr 0x5a2bb78, size 0x28, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::CircleSlider* slider, float_t normalizedValue);

  static inline ::GlobalNamespace::NoTransitionColorHueSlider* New_ctor();

  /// @brief Method OnDestroy, addr 0x5a2ba4c, size 0x84, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPointerUp, addr 0x5a2bba0, size 0x40, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method UpdateVisuals, addr 0x5a2bad0, size 0xa8, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__darkColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__darkColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lightColor();

  constexpr ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* const& __cordl_internal_get_colorHueDidChangeEvent() const;

  constexpr ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>*& __cordl_internal_get_colorHueDidChangeEvent();

  constexpr void __cordl_internal_set__darkColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__lightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorHueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method .ctor, addr 0x5a2bbe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_colorHueDidChangeEvent, addr 0x5a2b83c, size 0xc0, virtual false, abstract: false, final false
  inline void add_colorHueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method remove_colorHueDidChangeEvent, addr 0x5a2b8fc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_colorHueDidChangeEvent(::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoTransitionColorHueSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionColorHueSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoTransitionColorHueSlider(NoTransitionColorHueSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoTransitionColorHueSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoTransitionColorHueSlider(NoTransitionColorHueSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23100 };

  /// @brief Field _darkColor, offset: 0x13c, size: 0x10, def value: None
  ::UnityEngine::Color ____darkColor;

  /// @brief Field _lightColor, offset: 0x14c, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field colorHueDidChangeEvent, offset: 0x160, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::GlobalNamespace::NoTransitionColorHueSlider>, float_t, ::GlobalNamespace::ColorChangeUIEventType>* ___colorHueDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoTransitionColorHueSlider, ____darkColor) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoTransitionColorHueSlider, ____lightColor) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoTransitionColorHueSlider, ___colorHueDidChangeEvent) == 0x160, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NoTransitionColorHueSlider) == 0x168, "Size mismatch!");

} // namespace GlobalNamespace
