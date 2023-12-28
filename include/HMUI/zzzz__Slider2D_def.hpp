#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(Slider2D)
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
struct Color;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10278)), TypeDefinitionIndex(TypeDefinitionIndex(13119)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13559))
// CS Name: ::HMUI::Slider2D*
class CORDL_TYPE Slider2D : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  /// @brief Field _handleRect, offset 0xf8, size 0x8
  __declspec(property(get = __get__handleRect, put = __set__handleRect))::UnityEngine::RectTransform* _handleRect;

  /// @brief Field _normalizedValue, offset 0x100, size 0x8
  __declspec(property(get = __get__normalizedValue, put = __set__normalizedValue))::UnityEngine::Vector2 _normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset 0x108, size 0x8
  __declspec(property(get = __get_normalizedValueDidChangeEvent,
                      put = __set_normalizedValueDidChangeEvent))::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>* normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset 0x110, size 0x8
  __declspec(property(get = __get__containerRect, put = __set__containerRect))::UnityEngine::RectTransform* _containerRect;

  /// @brief Field _handleGraphic, offset 0x118, size 0x8
  __declspec(property(get = __get__handleGraphic, put = __set__handleGraphic))::UnityEngine::UI::Graphic* _handleGraphic;

  /// @brief Field _tracker, offset 0x120, size 0x1
  __declspec(property(get = __get__tracker, put = __set__tracker))::UnityEngine::DrivenRectTransformTracker _tracker;

  __declspec(property(get = get_handleRect, put = set_handleRect))::UnityEngine::RectTransform* handleRect;

  __declspec(property(put = set_handleColor))::UnityEngine::Color handleColor;

  __declspec(property(get = get_normalizedValue, put = set_normalizedValue))::UnityEngine::Vector2 normalizedValue;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
  constexpr operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  constexpr ::UnityEngine::RectTransform*& __get__handleRect();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__handleRect() const;

  constexpr void __set__handleRect(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::Vector2& __get__normalizedValue();

  constexpr ::UnityEngine::Vector2 const& __get__normalizedValue() const;

  constexpr void __set__normalizedValue(::UnityEngine::Vector2 value);

  constexpr ::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>*& __get_normalizedValueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>*> const& __get_normalizedValueDidChangeEvent() const;

  constexpr void __set_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>* value);

  constexpr ::UnityEngine::RectTransform*& __get__containerRect();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__containerRect() const;

  constexpr void __set__containerRect(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::UI::Graphic*& __get__handleGraphic();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> const& __get__handleGraphic() const;

  constexpr void __set__handleGraphic(::UnityEngine::UI::Graphic* value);

  constexpr ::UnityEngine::DrivenRectTransformTracker& __get__tracker();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __get__tracker() const;

  constexpr void __set__tracker(::UnityEngine::DrivenRectTransformTracker value);

  /// @brief Method get_handleRect addr 0x2122bc0 size 0x8 virtual false final false
  inline ::UnityEngine::RectTransform* get_handleRect();

  /// @brief Method set_handleRect addr 0x2122bc8 size 0x88 virtual false final false
  inline void set_handleRect(::UnityEngine::RectTransform* value);

  /// @brief Method set_handleColor addr 0x2122d88 size 0xc4 virtual false final false
  inline void set_handleColor(::UnityEngine::Color value);

  /// @brief Method get_normalizedValue addr 0x2122e4c size 0xc virtual false final false
  inline ::UnityEngine::Vector2 get_normalizedValue();

  /// @brief Method set_normalizedValue addr 0x2122e58 size 0x8 virtual false final false
  inline void set_normalizedValue(::UnityEngine::Vector2 value);

  /// @brief Method add_normalizedValueDidChangeEvent addr 0x2122f10 size 0xb4 virtual false final false
  inline void add_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>* value);

  /// @brief Method remove_normalizedValueDidChangeEvent addr 0x2122fc4 size 0xb4 virtual false final false
  inline void remove_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>* value);

  /// @brief Method Rebuild addr 0x2123078 size 0x4 virtual true final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method LayoutComplete addr 0x212307c size 0x4 virtual true final false
  inline void LayoutComplete();

  /// @brief Method GraphicUpdateComplete addr 0x2123080 size 0x4 virtual true final false
  inline void GraphicUpdateComplete();

  /// @brief Method OnEnable addr 0x2123084 size 0x44 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x21230c8 size 0x24 virtual true final false
  inline void OnDisable();

  /// @brief Method UpdateCachedReferences addr 0x2122c50 size 0x138 virtual false final false
  inline void UpdateCachedReferences();

  /// @brief Method SetNormalizedValue addr 0x21230ec size 0x8 virtual false final false
  inline void SetNormalizedValue(::UnityEngine::Vector2 input);

  /// @brief Method SetNormalizedValue addr 0x2122e60 size 0xb0 virtual false final false
  inline void SetNormalizedValue(::UnityEngine::Vector2 input, bool sendCallback);

  /// @brief Method OnRectTransformDimensionsChange addr 0x21230f4 size 0x44 virtual true final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method UpdateVisuals addr 0x2123138 size 0x188 virtual true final false
  inline void UpdateVisuals();

  /// @brief Method UpdateDrag addr 0x21232c0 size 0x230 virtual false final false
  inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MayDrag addr 0x21234f0 size 0x64 virtual false final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnBeginDrag addr 0x2123554 size 0x80 virtual true final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrag addr 0x21235d4 size 0x90 virtual true final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown addr 0x2123664 size 0xa0 virtual true final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter addr 0x2123704 size 0x8 virtual true final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method DoStateTransition addr 0x212370c size 0xc virtual true final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  /// @brief Method OnInitializePotentialDrag addr 0x2123718 size 0x18 virtual true final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::HMUI::Slider2D* New_ctor();

  /// @brief Method .ctor addr 0x2123730 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2123788 size 0x8 virtual true final true
  inline ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();

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
  ::UnityEngine::RectTransform* ____handleRect;

  /// @brief Field _normalizedValue, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>* ___normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____containerRect;

  /// @brief Field _handleGraphic, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UI::Graphic* ____handleGraphic;

  /// @brief Field _tracker, offset: 0x120, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ____tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::Slider2D, 0x128>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::Slider2D);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Slider2D*, "HMUI", "Slider2D");
