#pragma once
// IWYU pragma private; include "HMUI/CircleSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CircleSlider)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
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
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class CircleSlider;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CircleSlider);
// Type: HMUI::CircleSlider
// SizeInfo { instance_size: 304, native_size: -1, calculated_instance_size: 304, calculated_native_size: 297, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::CircleSlider*
class CORDL_TYPE CircleSlider : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  /// @brief Field _containerRect, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__containerRect, put = __cordl_internal_set__containerRect)) ::UnityW<::UnityEngine::RectTransform> _containerRect;

  /// @brief Field _cursorRadius, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get__cursorRadius, put = __cordl_internal_set__cursorRadius)) float_t _cursorRadius;

  /// @brief Field _handleGraphic, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__handleGraphic, put = __cordl_internal_set__handleGraphic)) ::UnityW<::UnityEngine::UI::Graphic> _handleGraphic;

  /// @brief Field _handleRect, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__handleRect, put = __cordl_internal_set__handleRect)) ::UnityW<::UnityEngine::RectTransform> _handleRect;

  /// @brief Field _normalizedValue, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get__normalizedValue, put = __cordl_internal_set__normalizedValue)) float_t _normalizedValue;

  /// @brief Field _tracker, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get__tracker, put = __cordl_internal_set__tracker)) ::UnityEngine::DrivenRectTransformTracker _tracker;

  __declspec(property(put = set_handleColor)) ::UnityEngine::Color handleColor;

  __declspec(property(get = get_handleRect, put = set_handleRect)) ::UnityW<::UnityEngine::RectTransform> handleRect;

  __declspec(property(get = get_normalizedValue, put = set_normalizedValue)) float_t normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_normalizedValueDidChangeEvent,
                      put = __cordl_internal_set_normalizedValueDidChangeEvent)) ::System::Action_2<::UnityW<::HMUI::CircleSlider>, float_t>* normalizedValueDidChangeEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Method GraphicUpdateComplete, addr 0x399985c, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method LayoutComplete, addr 0x3999858, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method MayDrag, addr 0x3999c94, size 0x64, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::HMUI::CircleSlider* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x3999cf8, size 0x80, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDisable, addr 0x39998c8, size 0x24, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrag, addr 0x3999d78, size 0x90, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEnable, addr 0x3999860, size 0x68, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnInitializePotentialDrag, addr 0x3999ea8, size 0x18, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x3999e08, size 0xa0, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnRectTransformDimensionsChange, addr 0x39998f4, size 0x44, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method Rebuild, addr 0x3999854, size 0x4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method SetNormalizedValue, addr 0x39998ec, size 0x8, virtual false, abstract: false, final false
  inline void SetNormalizedValue(float_t input);

  /// @brief Method SetNormalizedValue, addr 0x3999670, size 0x7c, virtual false, abstract: false, final false
  inline void SetNormalizedValue(float_t input, bool sendCallback);

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x3999f20, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  /// @brief Method UpdateCachedReferences, addr 0x3999434, size 0x138, virtual false, abstract: false, final false
  inline void UpdateCachedReferences();

  /// @brief Method UpdateDrag, addr 0x3999a84, size 0x210, virtual false, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method UpdateVisuals, addr 0x3999938, size 0x14c, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__containerRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__containerRect();

  constexpr float_t const& __cordl_internal_get__cursorRadius() const;

  constexpr float_t& __cordl_internal_get__cursorRadius();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get__handleGraphic() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get__handleGraphic();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__handleRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__handleRect();

  constexpr float_t const& __cordl_internal_get__normalizedValue() const;

  constexpr float_t& __cordl_internal_get__normalizedValue();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get__tracker() const;

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get__tracker();

  constexpr ::System::Action_2<::UnityW<::HMUI::CircleSlider>, float_t>*& __cordl_internal_get_normalizedValueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::CircleSlider>, float_t>*> const& __cordl_internal_get_normalizedValueDidChangeEvent() const;

  constexpr void __cordl_internal_set__containerRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__cursorRadius(float_t value);

  constexpr void __cordl_internal_set__handleGraphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr void __cordl_internal_set__handleRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__normalizedValue(float_t value);

  constexpr void __cordl_internal_set__tracker(::UnityEngine::DrivenRectTransformTracker value);

  constexpr void __cordl_internal_set_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::CircleSlider>, float_t>* value);

  /// @brief Method .ctor, addr 0x3999ec0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_normalizedValueDidChangeEvent, addr 0x39996ec, size 0xb4, virtual false, abstract: false, final false
  inline void add_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::CircleSlider>, float_t>* value);

  /// @brief Method get_handleRect, addr 0x39993a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_handleRect();

  /// @brief Method get_normalizedValue, addr 0x3999630, size 0x8, virtual false, abstract: false, final false
  inline float_t get_normalizedValue();

  /// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  /// @brief Method remove_normalizedValueDidChangeEvent, addr 0x39997a0, size 0xb4, virtual false, abstract: false, final false
  inline void remove_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::CircleSlider>, float_t>* value);

  /// @brief Method set_handleColor, addr 0x399956c, size 0xc4, virtual false, abstract: false, final false
  inline void set_handleColor(::UnityEngine::Color value);

  /// @brief Method set_handleRect, addr 0x39993ac, size 0x88, virtual false, abstract: false, final false
  inline void set_handleRect(::UnityEngine::RectTransform* value);

  /// @brief Method set_normalizedValue, addr 0x3999638, size 0x38, virtual false, abstract: false, final false
  inline void set_normalizedValue(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CircleSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CircleSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CircleSlider(CircleSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CircleSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CircleSlider(CircleSlider const&) = delete;

  /// @brief Field _handleRect, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____handleRect;

  /// @brief Field _cursorRadius, offset: 0x108, size: 0x4, def value: None
  float_t ____cursorRadius;

  /// @brief Field _normalizedValue, offset: 0x10c, size: 0x4, def value: None
  float_t ____normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset: 0x110, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::CircleSlider>, float_t>* ___normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____containerRect;

  /// @brief Field _handleGraphic, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ____handleGraphic;

  /// @brief Field _tracker, offset: 0x128, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ____tracker;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16011 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CircleSlider, 0x130>, "Size mismatch!");

static_assert(offsetof(::HMUI::CircleSlider, ____handleRect) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleSlider, ____cursorRadius) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleSlider, ____normalizedValue) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleSlider, ___normalizedValueDidChangeEvent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleSlider, ____containerRect) == 0x118, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleSlider, ____handleGraphic) == 0x120, "Offset mismatch!");

static_assert(offsetof(::HMUI::CircleSlider, ____tracker) == 0x128, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::CircleSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CircleSlider*, "HMUI", "CircleSlider");
