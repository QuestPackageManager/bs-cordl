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
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class RectTransform;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13119)), TypeDefinitionIndex(TypeDefinitionIndex(10278))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13560))
// CS Name: ::HMUI::TextSlider*
class CORDL_TYPE TextSlider : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  /// @brief Field _valueText, offset 0xf8, size 0x8
  __declspec(property(get = __get__valueText, put = __set__valueText))::TMPro::TextMeshProUGUI* _valueText;

  /// @brief Field _handleRect, offset 0x100, size 0x8
  __declspec(property(get = __get__handleRect, put = __set__handleRect))::UnityEngine::RectTransform* _handleRect;

  /// @brief Field _enableDragging, offset 0x108, size 0x1
  __declspec(property(get = __get__enableDragging, put = __set__enableDragging)) bool _enableDragging;

  /// @brief Field _handleSize, offset 0x10c, size 0x4
  __declspec(property(get = __get__handleSize, put = __set__handleSize)) float_t _handleSize;

  /// @brief Field _valueSize, offset 0x110, size 0x4
  __declspec(property(get = __get__valueSize, put = __set__valueSize)) float_t _valueSize;

  /// @brief Field _separatorSize, offset 0x114, size 0x4
  __declspec(property(get = __get__separatorSize, put = __set__separatorSize)) float_t _separatorSize;

  /// @brief Field _numberOfSteps, offset 0x118, size 0x4
  __declspec(property(get = __get__numberOfSteps, put = __set__numberOfSteps)) int32_t _numberOfSteps;

  /// @brief Field _normalizedValue, offset 0x11c, size 0x4
  __declspec(property(get = __get__normalizedValue, put = __set__normalizedValue)) float_t _normalizedValue;

  /// @brief Field normalizedValueDidChangeEvent, offset 0x120, size 0x8
  __declspec(property(get = __get_normalizedValueDidChangeEvent, put = __set_normalizedValueDidChangeEvent))::System::Action_2<::HMUI::TextSlider*, float_t>* normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset 0x128, size 0x8
  __declspec(property(get = __get__containerRect, put = __set__containerRect))::UnityEngine::RectTransform* _containerRect;

  /// @brief Field _handleGraphic, offset 0x130, size 0x8
  __declspec(property(get = __get__handleGraphic, put = __set__handleGraphic))::UnityEngine::UI::Graphic* _handleGraphic;

  /// @brief Field _tracker, offset 0x138, size 0x1
  __declspec(property(get = __get__tracker, put = __set__tracker))::UnityEngine::DrivenRectTransformTracker _tracker;

  __declspec(property(put = set_valueTextColor))::UnityEngine::Color valueTextColor;

  __declspec(property(get = get_handleRect, put = set_handleRect))::UnityEngine::RectTransform* handleRect;

  __declspec(property(put = set_handleColor))::UnityEngine::Color handleColor;

  __declspec(property(get = get_handleSize, put = set_handleSize)) float_t handleSize;

  __declspec(property(get = get_valueSize, put = set_valueSize)) float_t valueSize;

  __declspec(property(get = get_separatorSize, put = set_separatorSize)) float_t separatorSize;

  __declspec(property(get = get_numberOfSteps, put = set_numberOfSteps)) int32_t numberOfSteps;

  __declspec(property(get = get_normalizedValue, put = set_normalizedValue)) float_t normalizedValue;

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

  constexpr ::TMPro::TextMeshProUGUI*& __get__valueText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__valueText() const;

  constexpr void __set__valueText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::RectTransform*& __get__handleRect();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__handleRect() const;

  constexpr void __set__handleRect(::UnityEngine::RectTransform* value);

  constexpr bool& __get__enableDragging();

  constexpr bool const& __get__enableDragging() const;

  constexpr void __set__enableDragging(bool value);

  constexpr float_t& __get__handleSize();

  constexpr float_t const& __get__handleSize() const;

  constexpr void __set__handleSize(float_t value);

  constexpr float_t& __get__valueSize();

  constexpr float_t const& __get__valueSize() const;

  constexpr void __set__valueSize(float_t value);

  constexpr float_t& __get__separatorSize();

  constexpr float_t const& __get__separatorSize() const;

  constexpr void __set__separatorSize(float_t value);

  constexpr int32_t& __get__numberOfSteps();

  constexpr int32_t const& __get__numberOfSteps() const;

  constexpr void __set__numberOfSteps(int32_t value);

  constexpr float_t& __get__normalizedValue();

  constexpr float_t const& __get__normalizedValue() const;

  constexpr void __set__normalizedValue(float_t value);

  constexpr ::System::Action_2<::HMUI::TextSlider*, float_t>*& __get_normalizedValueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::TextSlider*, float_t>*> const& __get_normalizedValueDidChangeEvent() const;

  constexpr void __set_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::TextSlider*, float_t>* value);

  constexpr ::UnityEngine::RectTransform*& __get__containerRect();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__containerRect() const;

  constexpr void __set__containerRect(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::UI::Graphic*& __get__handleGraphic();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> const& __get__handleGraphic() const;

  constexpr void __set__handleGraphic(::UnityEngine::UI::Graphic* value);

  constexpr ::UnityEngine::DrivenRectTransformTracker& __get__tracker();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __get__tracker() const;

  constexpr void __set__tracker(::UnityEngine::DrivenRectTransformTracker value);

  /// @brief Method set_valueTextColor addr 0x2122024 size 0x24 virtual false final false
  inline void set_valueTextColor(::UnityEngine::Color value);

  /// @brief Method get_handleRect addr 0x2123790 size 0x8 virtual false final false
  inline ::UnityEngine::RectTransform* get_handleRect();

  /// @brief Method set_handleRect addr 0x2123798 size 0x88 virtual false final false
  inline void set_handleRect(::UnityEngine::RectTransform* value);

  /// @brief Method set_handleColor addr 0x2121f60 size 0xc4 virtual false final false
  inline void set_handleColor(::UnityEngine::Color value);

  /// @brief Method get_handleSize addr 0x2123958 size 0x8 virtual false final false
  inline float_t get_handleSize();

  /// @brief Method set_handleSize addr 0x2123960 size 0x80 virtual false final false
  inline void set_handleSize(float_t value);

  /// @brief Method get_valueSize addr 0x21239e0 size 0x8 virtual false final false
  inline float_t get_valueSize();

  /// @brief Method set_valueSize addr 0x21239e8 size 0x80 virtual false final false
  inline void set_valueSize(float_t value);

  /// @brief Method get_separatorSize addr 0x2123a68 size 0x8 virtual false final false
  inline float_t get_separatorSize();

  /// @brief Method set_separatorSize addr 0x2123a70 size 0x80 virtual false final false
  inline void set_separatorSize(float_t value);

  /// @brief Method get_numberOfSteps addr 0x2123af0 size 0x8 virtual false final false
  inline int32_t get_numberOfSteps();

  /// @brief Method set_numberOfSteps addr 0x2121660 size 0x90 virtual false final false
  inline void set_numberOfSteps(int32_t value);

  /// @brief Method get_normalizedValue addr 0x2121ea8 size 0xb8 virtual false final false
  inline float_t get_normalizedValue();

  /// @brief Method set_normalizedValue addr 0x212263c size 0x8 virtual false final false
  inline void set_normalizedValue(float_t value);

  /// @brief Method add_normalizedValueDidChangeEvent addr 0x21216f0 size 0xb4 virtual false final false
  inline void add_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::TextSlider*, float_t>* value);

  /// @brief Method remove_normalizedValueDidChangeEvent addr 0x2121830 size 0xb4 virtual false final false
  inline void remove_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::TextSlider*, float_t>* value);

  /// @brief Method Rebuild addr 0x2123b8c size 0x4 virtual true final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method LayoutComplete addr 0x2123b90 size 0x4 virtual true final false
  inline void LayoutComplete();

  /// @brief Method GraphicUpdateComplete addr 0x2123b94 size 0x4 virtual true final false
  inline void GraphicUpdateComplete();

  /// @brief Method OnEnable addr 0x2123b98 size 0x40 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2123bd8 size 0x24 virtual true final false
  inline void OnDisable();

  /// @brief Method UpdateCachedReferences addr 0x2123820 size 0x138 virtual false final false
  inline void UpdateCachedReferences();

  /// @brief Method SetNormalizedValue addr 0x2122b74 size 0x8 virtual false final false
  inline void SetNormalizedValue(float_t input);

  /// @brief Method SetNormalizedValue addr 0x2123af8 size 0x94 virtual false final false
  inline void SetNormalizedValue(float_t input, bool sendCallback);

  /// @brief Method OnRectTransformDimensionsChange addr 0x2123bfc size 0x44 virtual true final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method UpdateVisuals addr 0x2121ab8 size 0x3f0 virtual true final false
  inline void UpdateVisuals();

  /// @brief Method UpdateDrag addr 0x2123c40 size 0x2e0 virtual false final false
  inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method MayDrag addr 0x2123f20 size 0x64 virtual false final false
  inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnBeginDrag addr 0x2123f84 size 0x88 virtual true final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrag addr 0x212400c size 0x98 virtual true final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown addr 0x21240a4 size 0xa0 virtual true final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnInitializePotentialDrag addr 0x2124144 size 0x18 virtual true final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method TextForNormalizedValue addr 0x212415c size 0x1c virtual true final false
  inline ::StringW TextForNormalizedValue(float_t normalizedValue);

  static inline ::HMUI::TextSlider* New_ctor();

  /// @brief Method .ctor addr 0x21222e4 size 0x78 virtual false final false
  inline void _ctor();

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2124178 size 0x8 virtual true final true
  inline ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();

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
  ::TMPro::TextMeshProUGUI* ____valueText;

  /// @brief Field _handleRect, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____handleRect;

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
  ::System::Action_2<::HMUI::TextSlider*, float_t>* ___normalizedValueDidChangeEvent;

  /// @brief Field _containerRect, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____containerRect;

  /// @brief Field _handleGraphic, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UI::Graphic* ____handleGraphic;

  /// @brief Field _tracker, offset: 0x138, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ____tracker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextSlider, 0x140>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TextSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextSlider*, "HMUI", "TextSlider");
