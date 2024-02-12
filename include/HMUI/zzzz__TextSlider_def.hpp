#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSlider)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace TMPro {
class TextMeshProUGUI;
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
class TextSlider;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TextSlider);
// Type: HMUI::TextSlider
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 313, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9024)), TypeDefinitionIndex(TypeDefinitionIndex(13017))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13513))
// CS Name: ::HMUI::TextSlider*
class CORDL_TYPE TextSlider : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  /// @brief Field _valueText, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__valueText, put = __cordl_internal_set__valueText))::UnityW<::TMPro::TextMeshProUGUI> _valueText;

  /// @brief Field _handleRect, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__handleRect, put = __cordl_internal_set__handleRect))::UnityW<::UnityEngine::RectTransform> _handleRect;

  /// @brief Field _enableDragging, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get__enableDragging, put = __cordl_internal_set__enableDragging)) bool _enableDragging;

  /// @brief Field _handleSize, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get__handleSize, put = __cordl_internal_set__handleSize)) float_t _handleSize;

  /// @brief Field _valueSize, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get__valueSize, put = __cordl_internal_set__valueSize)) float_t _valueSize;

  /// @brief Field _separatorSize, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get__separatorSize, put = __cordl_internal_set__separatorSize)) float_t _separatorSize;

  /// @brief Field _numberOfSteps, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfSteps, put = __cordl_internal_set__numberOfSteps)) int32_t _numberOfSteps;

  /// @brief Field _normalizedValue, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get__normalizedValue, put = __cordl_internal_set__normalizedValue)) float_t _normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_normalizedValueDidChangeEvent,
                      put = __cordl_internal_set_normalizedValueDidChangeEvent))::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>* normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__containerRect, put = __cordl_internal_set__containerRect))::UnityW<::UnityEngine::RectTransform> _containerRect;

  /// @brief Field _handleGraphic, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__handleGraphic, put = __cordl_internal_set__handleGraphic))::UnityW<::UnityEngine::UI::Graphic> _handleGraphic;

  /// @brief Field _tracker, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get__tracker, put = __cordl_internal_set__tracker))::UnityEngine::DrivenRectTransformTracker _tracker;

  __declspec(property(put = set_valueTextColor))::UnityEngine::Color valueTextColor;

  __declspec(property(get = get_handleRect, put = set_handleRect))::UnityW<::UnityEngine::RectTransform> handleRect;

  __declspec(property(put = set_handleColor))::UnityEngine::Color handleColor;

  __declspec(property(get = get_handleSize, put = set_handleSize)) float_t handleSize;

  __declspec(property(get = get_valueSize, put = set_valueSize)) float_t valueSize;

  __declspec(property(get = get_separatorSize, put = set_separatorSize)) float_t separatorSize;

  __declspec(property(get = get_numberOfSteps, put = set_numberOfSteps)) int32_t numberOfSteps;

  __declspec(property(get = get_normalizedValue, put = set_normalizedValue)) float_t normalizedValue;

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

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__valueText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__valueText() const;

  constexpr void __cordl_internal_set__valueText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__handleRect();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__handleRect() const;

  constexpr void __cordl_internal_set__handleRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr bool& __cordl_internal_get__enableDragging();

  constexpr bool const& __cordl_internal_get__enableDragging() const;

  constexpr void __cordl_internal_set__enableDragging(bool value);

  constexpr float_t& __cordl_internal_get__handleSize();

  constexpr float_t const& __cordl_internal_get__handleSize() const;

  constexpr void __cordl_internal_set__handleSize(float_t value);

  constexpr float_t& __cordl_internal_get__valueSize();

  constexpr float_t const& __cordl_internal_get__valueSize() const;

  constexpr void __cordl_internal_set__valueSize(float_t value);

  constexpr float_t& __cordl_internal_get__separatorSize();

  constexpr float_t const& __cordl_internal_get__separatorSize() const;

  constexpr void __cordl_internal_set__separatorSize(float_t value);

  constexpr int32_t& __cordl_internal_get__numberOfSteps();

  constexpr int32_t const& __cordl_internal_get__numberOfSteps() const;

  constexpr void __cordl_internal_set__numberOfSteps(int32_t value);

  constexpr float_t& __cordl_internal_get__normalizedValue();

  constexpr float_t const& __cordl_internal_get__normalizedValue() const;

  constexpr void __cordl_internal_set__normalizedValue(float_t value);

  constexpr ::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>*& __cordl_internal_get_normalizedValueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>*> const& __cordl_internal_get_normalizedValueDidChangeEvent() const;

  constexpr void __cordl_internal_set_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>* value);

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__containerRect();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__containerRect() const;

  constexpr void __cordl_internal_set__containerRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get__handleGraphic();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get__handleGraphic() const;

  constexpr void __cordl_internal_set__handleGraphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get__tracker();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get__tracker() const;

  constexpr void __cordl_internal_set__tracker(::UnityEngine::DrivenRectTransformTracker value);

  /// @brief Method set_valueTextColor, addr 0x21b6900, size 0x24, virtual false, abstract: false, final false
  inline void set_valueTextColor(::UnityEngine::Color value);

  /// @brief Method get_handleRect, addr 0x21b806c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_handleRect();

  /// @brief Method set_handleRect, addr 0x21b8074, size 0x88, virtual false, abstract: false, final false
  inline void set_handleRect(::UnityEngine::RectTransform* value);

  /// @brief Method set_handleColor, addr 0x21b683c, size 0xc4, virtual false, abstract: false, final false
  inline void set_handleColor(::UnityEngine::Color value);

  /// @brief Method get_handleSize, addr 0x21b8234, size 0x8, virtual false, abstract: false, final false
  inline float_t get_handleSize();

  /// @brief Method set_handleSize, addr 0x21b823c, size 0x80, virtual false, abstract: false, final false
  inline void set_handleSize(float_t value);

  /// @brief Method get_valueSize, addr 0x21b82bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_valueSize();

  /// @brief Method set_valueSize, addr 0x21b82c4, size 0x80, virtual false, abstract: false, final false
  inline void set_valueSize(float_t value);

  /// @brief Method get_separatorSize, addr 0x21b8344, size 0x8, virtual false, abstract: false, final false
  inline float_t get_separatorSize();

  /// @brief Method set_separatorSize, addr 0x21b834c, size 0x80, virtual false, abstract: false, final false
  inline void set_separatorSize(float_t value);

  /// @brief Method get_numberOfSteps, addr 0x21b83cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numberOfSteps();

  /// @brief Method set_numberOfSteps, addr 0x21b5f3c, size 0x90, virtual false, abstract: false, final false
  inline void set_numberOfSteps(int32_t value);

  /// @brief Method get_normalizedValue, addr 0x21b6784, size 0xb8, virtual false, abstract: false, final false
  inline float_t get_normalizedValue();

  /// @brief Method set_normalizedValue, addr 0x21b6f18, size 0x8, virtual false, abstract: false, final false
  inline void set_normalizedValue(float_t value);

  /// @brief Method add_normalizedValueDidChangeEvent, addr 0x21b5fcc, size 0xb4, virtual false, abstract: false, final false
  inline void add_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>* value);

  /// @brief Method remove_normalizedValueDidChangeEvent, addr 0x21b610c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_normalizedValueDidChangeEvent(::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>* value);

  /// @brief Method Rebuild, addr 0x21b8468, size 0x4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method LayoutComplete, addr 0x21b846c, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method GraphicUpdateComplete, addr 0x21b8470, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method OnEnable, addr 0x21b8474, size 0x40, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x21b84b4, size 0x24, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method UpdateCachedReferences, addr 0x21b80fc, size 0x138, virtual false, abstract: false, final false
  inline void UpdateCachedReferences();

  /// @brief Method SetNormalizedValue, addr 0x21b7450, size 0x8, virtual false, abstract: false, final false
  inline void SetNormalizedValue(float_t input);

  /// @brief Method SetNormalizedValue, addr 0x21b83d4, size 0x94, virtual false, abstract: false, final false
  inline void SetNormalizedValue(float_t input, bool sendCallback);

  /// @brief Method OnRectTransformDimensionsChange, addr 0x21b84d8, size 0x44, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method UpdateVisuals, addr 0x21b6394, size 0x3f0, virtual true, abstract: false, final false
  inline void UpdateVisuals();

  /// @brief Method UpdateDrag, addr 0x21b851c, size 0x2e0, virtual false, abstract: false, final false
  inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MayDrag, addr 0x21b87fc, size 0x64, virtual false, abstract: false, final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnBeginDrag, addr 0x21b8860, size 0x88, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrag, addr 0x21b88e8, size 0x98, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x21b8980, size 0xa0, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnInitializePotentialDrag, addr 0x21b8a20, size 0x18, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method TextForNormalizedValue, addr 0x21b8a38, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW TextForNormalizedValue(float_t normalizedValue);

  static inline ::HMUI::TextSlider* New_ctor();

  /// @brief Method .ctor, addr 0x21b6bc0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x21b8a54, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  // Ctor Parameters [CppParam { name: "", ty: "TextSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextSlider(TextSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextSlider(TextSlider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSlider();

public:
  /// @brief Field _valueText, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____valueText;

  /// @brief Field _handleRect, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____handleRect;

  /// @brief Field _enableDragging, offset: 0x108, size: 0x1, def value: None
  bool ____enableDragging;

  /// @brief Field _handleSize, offset: 0x10c, size: 0x4, def value: None
  float_t ____handleSize;

  /// @brief Field _valueSize, offset: 0x110, size: 0x4, def value: None
  float_t ____valueSize;

  /// @brief Field _separatorSize, offset: 0x114, size: 0x4, def value: None
  float_t ____separatorSize;

  /// @brief Field _numberOfSteps, offset: 0x118, size: 0x4, def value: None
  int32_t ____numberOfSteps;

  /// @brief Field _normalizedValue, offset: 0x11c, size: 0x4, def value: None
  float_t ____normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset: 0x120, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::TextSlider>, float_t>* ___normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____containerRect;

  /// @brief Field _handleGraphic, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ____handleGraphic;

  /// @brief Field _tracker, offset: 0x138, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ____tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextSlider, 0x140>, "Size mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____valueText) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____handleRect) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____enableDragging) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____handleSize) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____valueSize) == 0x110, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____separatorSize) == 0x114, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____numberOfSteps) == 0x118, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____normalizedValue) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ___normalizedValueDidChangeEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____containerRect) == 0x128, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____handleGraphic) == 0x130, "Offset mismatch!");

static_assert(offsetof(::HMUI::TextSlider, ____tracker) == 0x138, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TextSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextSlider*, "HMUI", "TextSlider");
