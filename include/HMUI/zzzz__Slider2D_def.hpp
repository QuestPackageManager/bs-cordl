#pragma once
// IWYU pragma private; include "HMUI/Slider2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(Slider2D)
namespace System {
template <typename T1, typename T2> class Action_2;
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
struct Selectable_SelectionState;
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
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HMUI {
class Slider2D;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::Slider2D);
// Dependencies UnityEngine.DrivenRectTransformTracker, UnityEngine.EventSystems.IBeginDragHandler, UnityEngine.EventSystems.IDragHandler, UnityEngine.EventSystems.IEventSystemHandler,
// UnityEngine.EventSystems.IInitializePotentialDragHandler, UnityEngine.UI.ICanvasElement, UnityEngine.UI.Selectable, UnityEngine.Vector2
namespace HMUI {
// Is value type: false
// CS Name: HMUI.Slider2D
class CORDL_TYPE Slider2D : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  /// @brief Field _containerRect, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__containerRect, put = __cordl_internal_set__containerRect)) ::UnityW<::UnityEngine::RectTransform> _containerRect;

  /// @brief Field _handleGraphic, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__handleGraphic, put = __cordl_internal_set__handleGraphic)) ::UnityW<::UnityEngine::UI::Graphic> _handleGraphic;

  /// @brief Field _handleRect, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__handleRect, put = __cordl_internal_set__handleRect)) ::UnityW<::UnityEngine::RectTransform> _handleRect;

  /// @brief Field _normalizedValue, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__normalizedValue, put = __cordl_internal_set__normalizedValue)) ::UnityEngine::Vector2 _normalizedValue;

  /// @brief Field _tracker, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get__tracker, put = __cordl_internal_set__tracker)) ::UnityEngine::DrivenRectTransformTracker _tracker;

  __declspec(property(put = set_handleColor)) ::UnityEngine::Color handleColor;

  __declspec(property(get = get_handleRect, put = set_handleRect)) ::UnityW<::UnityEngine::RectTransform> handleRect;

  __declspec(property(get = get_normalizedValue, put = set_normalizedValue)) ::UnityEngine::Vector2 normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_normalizedValueDidChangeEvent,
                      put = __cordl_internal_set_normalizedValueDidChangeEvent)) ::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* normalizedValueDidChangeEvent;

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

  /// @brief Method DoStateTransition, addr 0x39f2d50, size 0xc, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant);

  /// @brief Method GraphicUpdateComplete, addr 0x39f2780, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method LayoutComplete, addr 0x39f277c, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method MayDrag, addr 0x39f2b34, size 0x64, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::HMUI::Slider2D* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x39f2b98, size 0x80, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDisable, addr 0x39f27c8, size 0x24, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrag, addr 0x39f2c18, size 0x90, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEnable, addr 0x39f2784, size 0x44, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnInitializePotentialDrag, addr 0x39f2d5c, size 0x18, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x39f2ca8, size 0xa0, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x39f2d48, size 0x8, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnRectTransformDimensionsChange, addr 0x39f27f4, size 0x44, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method Rebuild, addr 0x39f2778, size 0x4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method SetNormalizedValue, addr 0x39f27ec, size 0x8, virtual false, abstract: false, final false
  inline void SetNormalizedValue(::UnityEngine::Vector2 input);

  /// @brief Method SetNormalizedValue, addr 0x39f2560, size 0xb0, virtual false, abstract: false, final false
  inline void SetNormalizedValue(::UnityEngine::Vector2 input, bool sendCallback);

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x39f2dcc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  /// @brief Method UpdateCachedReferences, addr 0x39f2350, size 0x138, virtual false, abstract: false, final false
  inline void UpdateCachedReferences();

  /// @brief Method UpdateDrag, addr 0x39f29a0, size 0x194, virtual false, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method UpdateVisuals, addr 0x39f2838, size 0x168, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__containerRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__containerRect();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get__handleGraphic() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get__handleGraphic();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__handleRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__handleRect();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__normalizedValue() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__normalizedValue();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get__tracker() const;

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get__tracker();

  constexpr ::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* const& __cordl_internal_get_normalizedValueDidChangeEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*& __cordl_internal_get_normalizedValueDidChangeEvent();

  constexpr void __cordl_internal_set__containerRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__handleGraphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr void __cordl_internal_set__handleRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__normalizedValue(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__tracker(::UnityEngine::DrivenRectTransformTracker value);

  constexpr void __cordl_internal_set_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* value);

  /// @brief Method .ctor, addr 0x39f2d74, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_normalizedValueDidChangeEvent, addr 0x39f2610, size 0xb4, virtual false, abstract: false, final false
  inline void add_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* value);

  /// @brief Method get_handleRect, addr 0x39f22c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_handleRect();

  /// @brief Method get_normalizedValue, addr 0x39f254c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_normalizedValue();

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

  /// @brief Method remove_normalizedValueDidChangeEvent, addr 0x39f26c4, size 0xb4, virtual false, abstract: false, final false
  inline void remove_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* value);

  /// @brief Method set_handleColor, addr 0x39f2488, size 0xc4, virtual false, abstract: false, final false
  inline void set_handleColor(::UnityEngine::Color value);

  /// @brief Method set_handleRect, addr 0x39f22c8, size 0x88, virtual false, abstract: false, final false
  inline void set_handleRect(::UnityEngine::RectTransform* value);

  /// @brief Method set_normalizedValue, addr 0x39f2558, size 0x8, virtual false, abstract: false, final false
  inline void set_normalizedValue(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Slider2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Slider2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Slider2D(Slider2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Slider2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Slider2D(Slider2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16051 };

  /// @brief Field _handleRect, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____handleRect;

  /// @brief Field _normalizedValue, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset: 0x110, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* ___normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____containerRect;

  /// @brief Field _handleGraphic, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ____handleGraphic;

  /// @brief Field _tracker, offset: 0x128, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ____tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::Slider2D, ____handleRect) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ____normalizedValue) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ___normalizedValueDidChangeEvent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ____containerRect) == 0x118, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ____handleGraphic) == 0x120, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ____tracker) == 0x128, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::Slider2D, 0x130>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::Slider2D);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Slider2D*, "HMUI", "Slider2D");
