#pragma once
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
// Type: ::ColorHueSlider
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(13554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16174))
// CS Name: ::ColorHueSlider*
class CORDL_TYPE ColorHueSlider : public ::HMUI::CircleSlider {
public:
  // Declarations
  /// @brief Field _darkColor, offset 0x124, size 0x10
  __declspec(property(get = __get__darkColor, put = __set__darkColor))::UnityEngine::Color _darkColor;

  /// @brief Field _lightColor, offset 0x134, size 0x10
  __declspec(property(get = __get__lightColor, put = __set__lightColor))::UnityEngine::Color _lightColor;

  /// @brief Field colorHueDidChangeEvent, offset 0x148, size 0x8
  __declspec(property(get = __get_colorHueDidChangeEvent,
                      put = __set_colorHueDidChangeEvent))::System::Action_3<::GlobalNamespace::ColorHueSlider*, float_t, ::GlobalNamespace::ColorChangeUIEventType>* colorHueDidChangeEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  constexpr ::UnityEngine::Color& __get__darkColor();

  constexpr ::UnityEngine::Color const& __get__darkColor() const;

  constexpr void __set__darkColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__lightColor();

  constexpr ::UnityEngine::Color const& __get__lightColor() const;

  constexpr void __set__lightColor(::UnityEngine::Color value);

  constexpr ::System::Action_3<::GlobalNamespace::ColorHueSlider*, float_t, ::GlobalNamespace::ColorChangeUIEventType>*& __get_colorHueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::ColorHueSlider*, float_t, ::GlobalNamespace::ColorChangeUIEventType>*> const&
  __get_colorHueDidChangeEvent() const;

  constexpr void __set_colorHueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorHueSlider*, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method add_colorHueDidChangeEvent, addr 0x23e294c, size 0xb4, virtual false, abstract: false, final false
  inline void add_colorHueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorHueSlider*, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method remove_colorHueDidChangeEvent, addr 0x23e2a00, size 0xb4, virtual false, abstract: false, final false
  inline void remove_colorHueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorHueSlider*, float_t, ::GlobalNamespace::ColorChangeUIEventType>* value);

  /// @brief Method Awake, addr 0x23e2ab4, size 0x90, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x23e2b44, size 0x90, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UpdateVisuals, addr 0x23e2bd4, size 0xa8, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  /// @brief Method HandleNormalizedValueDidChange, addr 0x23e2c7c, size 0x24, virtual false, abstract: false, final false
  inline void HandleNormalizedValueDidChange(::HMUI::CircleSlider* slider, float_t normalizedValue);

  /// @brief Method OnPointerUp, addr 0x23e2ca0, size 0x40, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::GlobalNamespace::ColorHueSlider* New_ctor();

  /// @brief Method .ctor, addr 0x23e2ce0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorHueSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorHueSlider(ColorHueSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorHueSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorHueSlider(ColorHueSlider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorHueSlider();

public:
  /// @brief Field _darkColor, offset: 0x124, size: 0x10, def value: None
  ::UnityEngine::Color ____darkColor;

  /// @brief Field _lightColor, offset: 0x134, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  /// @brief Field colorHueDidChangeEvent, offset: 0x148, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::ColorHueSlider*, float_t, ::GlobalNamespace::ColorChangeUIEventType>* ___colorHueDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorHueSlider, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorHueSlider, ____darkColor) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorHueSlider, ____lightColor) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorHueSlider, ___colorHueDidChangeEvent) == 0x148, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorHueSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorHueSlider*, "", "ColorHueSlider");
