#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(Slider2D)
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
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
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
// Type: HMUI::Slider2D
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 289, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8987)), TypeDefinitionIndex(TypeDefinitionIndex(9024)), TypeDefinitionIndex(TypeDefinitionIndex(13017))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13512))
// CS Name: ::HMUI::Slider2D*
class CORDL_TYPE Slider2D : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  /// @brief Field _handleRect, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__handleRect, put = __cordl_internal_set__handleRect))::UnityW<::UnityEngine::RectTransform> _handleRect;

  /// @brief Field _normalizedValue, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__normalizedValue, put = __cordl_internal_set__normalizedValue))::UnityEngine::Vector2 _normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_normalizedValueDidChangeEvent,
                      put = __cordl_internal_set_normalizedValueDidChangeEvent))::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__containerRect, put = __cordl_internal_set__containerRect))::UnityW<::UnityEngine::RectTransform> _containerRect;

  /// @brief Field _handleGraphic, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__handleGraphic, put = __cordl_internal_set__handleGraphic))::UnityW<::UnityEngine::UI::Graphic> _handleGraphic;

  /// @brief Field _tracker, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get__tracker, put = __cordl_internal_set__tracker))::UnityEngine::DrivenRectTransformTracker _tracker;

  __declspec(property(get = get_handleRect, put = set_handleRect))::UnityW<::UnityEngine::RectTransform> handleRect;

  __declspec(property(put = set_handleColor))::UnityEngine::Color handleColor;

  __declspec(property(get = get_normalizedValue, put = set_normalizedValue))::UnityEngine::Vector2 normalizedValue;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
  constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__handleRect();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__handleRect() const;

  constexpr void __cordl_internal_set__handleRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__normalizedValue();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__normalizedValue() const;

  constexpr void __cordl_internal_set__normalizedValue(::UnityEngine::Vector2 value);

  constexpr ::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*& __cordl_internal_get_normalizedValueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>*> const& __cordl_internal_get_normalizedValueDidChangeEvent() const;

  constexpr void __cordl_internal_set_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* value);

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__containerRect();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__containerRect() const;

  constexpr void __cordl_internal_set__containerRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get__handleGraphic();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get__handleGraphic() const;

  constexpr void __cordl_internal_set__handleGraphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get__tracker();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get__tracker() const;

  constexpr void __cordl_internal_set__tracker(::UnityEngine::DrivenRectTransformTracker value);

  /// @brief Method get_handleRect, addr 0x21b749c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_handleRect();

  /// @brief Method set_handleRect, addr 0x21b74a4, size 0x88, virtual false, abstract: false, final false
  inline void set_handleRect(::UnityEngine::RectTransform* value);

  /// @brief Method set_handleColor, addr 0x21b7664, size 0xc4, virtual false, abstract: false, final false
  inline void set_handleColor(::UnityEngine::Color value);

  /// @brief Method get_normalizedValue, addr 0x21b7728, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_normalizedValue();

  /// @brief Method set_normalizedValue, addr 0x21b7734, size 0x8, virtual false, abstract: false, final false
  inline void set_normalizedValue(::UnityEngine::Vector2 value);

  /// @brief Method add_normalizedValueDidChangeEvent, addr 0x21b77ec, size 0xb4, virtual false, abstract: false, final false
  inline void add_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* value);

  /// @brief Method remove_normalizedValueDidChangeEvent, addr 0x21b78a0, size 0xb4, virtual false, abstract: false, final false
  inline void remove_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* value);

  /// @brief Method Rebuild, addr 0x21b7954, size 0x4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method LayoutComplete, addr 0x21b7958, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method GraphicUpdateComplete, addr 0x21b795c, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method OnEnable, addr 0x21b7960, size 0x44, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x21b79a4, size 0x24, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method UpdateCachedReferences, addr 0x21b752c, size 0x138, virtual false, abstract: false, final false
  inline void UpdateCachedReferences();

  /// @brief Method SetNormalizedValue, addr 0x21b79c8, size 0x8, virtual false, abstract: false, final false
  inline void SetNormalizedValue(::UnityEngine::Vector2 input);

  /// @brief Method SetNormalizedValue, addr 0x21b773c, size 0xb0, virtual false, abstract: false, final false
  inline void SetNormalizedValue(::UnityEngine::Vector2 input, bool sendCallback);

  /// @brief Method OnRectTransformDimensionsChange, addr 0x21b79d0, size 0x44, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method UpdateVisuals, addr 0x21b7a14, size 0x188, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  /// @brief Method UpdateDrag, addr 0x21b7b9c, size 0x230, virtual false, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MayDrag, addr 0x21b7dcc, size 0x64, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnBeginDrag, addr 0x21b7e30, size 0x80, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrag, addr 0x21b7eb0, size 0x90, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x21b7f40, size 0xa0, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x21b7fe0, size 0x8, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method DoStateTransition, addr 0x21b7fe8, size 0xc, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  /// @brief Method OnInitializePotentialDrag, addr 0x21b7ff4, size 0x18, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::HMUI::Slider2D* New_ctor();

  /// @brief Method .ctor, addr 0x21b800c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x21b8064, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  // Ctor Parameters [CppParam { name: "", ty: "Slider2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Slider2D(Slider2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Slider2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Slider2D(Slider2D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Slider2D();

public:
  /// @brief Field _handleRect, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____handleRect;

  /// @brief Field _normalizedValue, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::Slider2D>, ::UnityEngine::Vector2>* ___normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____containerRect;

  /// @brief Field _handleGraphic, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ____handleGraphic;

  /// @brief Field _tracker, offset: 0x120, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ____tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::Slider2D, 0x128>, "Size mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ____handleRect) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ____normalizedValue) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ___normalizedValueDidChangeEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ____containerRect) == 0x110, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ____handleGraphic) == 0x118, "Offset mismatch!");

static_assert(offsetof(::HMUI::Slider2D, ____tracker) == 0x120, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::Slider2D);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Slider2D*, "HMUI", "Slider2D");
