#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Dropdown)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI::CoroutineTween {
struct FloatTween;
}
namespace UnityEngine::UI::CoroutineTween {
template <typename T> class TweenRunner_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::UI {
class __Dropdown__DropdownEvent;
}
namespace UnityEngine::UI {
class __Dropdown__DropdownItem;
}
namespace UnityEngine::UI {
class __Dropdown__OptionDataList;
}
namespace UnityEngine::UI {
class __Dropdown__OptionData;
}
namespace UnityEngine::UI {
class __Dropdown___DelayedDestroyDropdownList_d__75;
}
namespace UnityEngine::UI {
class __Dropdown____c__DisplayClass63_0;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::UI {
class Dropdown;
}
namespace UnityEngine::UI {
class __Dropdown__DropdownEvent;
}
namespace UnityEngine::UI {
class __Dropdown__DropdownItem;
}
namespace UnityEngine::UI {
class __Dropdown__OptionData;
}
namespace UnityEngine::UI {
class __Dropdown__OptionDataList;
}
namespace UnityEngine::UI {
class __Dropdown___DelayedDestroyDropdownList_d__75;
}
namespace UnityEngine::UI {
class __Dropdown____c__DisplayClass63_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Dropdown);
MARK_REF_PTR_T(::UnityEngine::UI::__Dropdown__DropdownEvent);
MARK_REF_PTR_T(::UnityEngine::UI::__Dropdown__DropdownItem);
MARK_REF_PTR_T(::UnityEngine::UI::__Dropdown__OptionData);
MARK_REF_PTR_T(::UnityEngine::UI::__Dropdown__OptionDataList);
MARK_REF_PTR_T(::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75);
MARK_REF_PTR_T(::UnityEngine::UI::__Dropdown____c__DisplayClass63_0);
// Type: ::DropdownItem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::Dropdown::DropdownItem*
class CORDL_TYPE __Dropdown__DropdownItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_image, put = set_image))::UnityW<::UnityEngine::UI::Image> image;

  /// @brief Field m_Image, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Image, put = __cordl_internal_set_m_Image))::UnityW<::UnityEngine::UI::Image> m_Image;

  /// @brief Field m_RectTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransform, put = __cordl_internal_set_m_RectTransform))::UnityW<::UnityEngine::RectTransform> m_RectTransform;

  /// @brief Field m_Text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::UnityW<::UnityEngine::UI::Text> m_Text;

  /// @brief Field m_Toggle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Toggle, put = __cordl_internal_set_m_Toggle))::UnityW<::UnityEngine::UI::Toggle> m_Toggle;

  __declspec(property(get = get_rectTransform, put = set_rectTransform))::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_text, put = set_text))::UnityW<::UnityEngine::UI::Text> text;

  __declspec(property(get = get_toggle, put = set_toggle))::UnityW<::UnityEngine::UI::Toggle> toggle;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  static inline ::UnityEngine::UI::__Dropdown__DropdownItem* New_ctor();

  /// @brief Method OnCancel, addr 0x32a5fc8, size 0xac, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x32a5f4c, size 0x7c, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_Image() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_Image();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_RectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_RectTransform();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_Text();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_m_Toggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_m_Toggle();

  constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Text(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_Toggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x32a6074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_image, addr 0x32a5f1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_image();

  /// @brief Method get_rectTransform, addr 0x32a5f2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_text, addr 0x32a5f0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_text();

  /// @brief Method get_toggle, addr 0x32a5f3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Toggle> get_toggle();

  /// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Method set_image, addr 0x32a5f24, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::UI::Image* value);

  /// @brief Method set_rectTransform, addr 0x32a5f34, size 0x8, virtual false, abstract: false, final false
  inline void set_rectTransform(::UnityEngine::RectTransform* value);

  /// @brief Method set_text, addr 0x32a5f14, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::UnityEngine::UI::Text* value);

  /// @brief Method set_toggle, addr 0x32a5f44, size 0x8, virtual false, abstract: false, final false
  inline void set_toggle(::UnityEngine::UI::Toggle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown__DropdownItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__DropdownItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown__DropdownItem(__Dropdown__DropdownItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__DropdownItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown__DropdownItem(__Dropdown__DropdownItem const&) = delete;

  /// @brief Field m_Text, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_Text;

  /// @brief Field m_Image, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_Image;

  /// @brief Field m_RectTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_RectTransform;

  /// @brief Field m_Toggle, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___m_Toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown__DropdownItem, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown__DropdownItem, ___m_Text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown__DropdownItem, ___m_Image) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown__DropdownItem, ___m_RectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown__DropdownItem, ___m_Toggle) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::OptionData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::Dropdown::OptionData*
class CORDL_TYPE __Dropdown__OptionData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_image, put = set_image))::UnityW<::UnityEngine::Sprite> image;

  /// @brief Field m_Image, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Image, put = __cordl_internal_set_m_Image))::UnityW<::UnityEngine::Sprite> m_Image;

  /// @brief Field m_Text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::StringW m_Text;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  static inline ::UnityEngine::UI::__Dropdown__OptionData* New_ctor();

  static inline ::UnityEngine::UI::__Dropdown__OptionData* New_ctor(::UnityEngine::Sprite* image);

  static inline ::UnityEngine::UI::__Dropdown__OptionData* New_ctor(::StringW text);

  static inline ::UnityEngine::UI::__Dropdown__OptionData* New_ctor(::StringW text, ::UnityEngine::Sprite* image);

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_Image() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_Image();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  /// @brief Method .ctor, addr 0x32a2618, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x32a3ce0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Sprite* image);

  /// @brief Method .ctor, addr 0x32a3b5c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  /// @brief Method .ctor, addr 0x32a609c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::UnityEngine::Sprite* image);

  /// @brief Method get_image, addr 0x32a608c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_image();

  /// @brief Method get_text, addr 0x32a607c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_image, addr 0x32a6094, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::Sprite* value);

  /// @brief Method set_text, addr 0x32a6084, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown__OptionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__OptionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown__OptionData(__Dropdown__OptionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__OptionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown__OptionData(__Dropdown__OptionData const&) = delete;

  /// @brief Field m_Text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_Image, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_Image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown__OptionData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown__OptionData, ___m_Text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown__OptionData, ___m_Image) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::OptionDataList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::Dropdown::OptionDataList*
class CORDL_TYPE __Dropdown__OptionDataList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Options, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Options, put = __cordl_internal_set_m_Options))::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* m_Options;

  __declspec(property(get = get_options, put = set_options))::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* options;

  static inline ::UnityEngine::UI::__Dropdown__OptionDataList* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>*& __cordl_internal_get_m_Options();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>*> const& __cordl_internal_get_m_Options() const;

  constexpr void __cordl_internal_set_m_Options(::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* value);

  /// @brief Method .ctor, addr 0x32a353c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_options, addr 0x32a60c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* get_options();

  /// @brief Method set_options, addr 0x32a60d0, size 0x8, virtual false, abstract: false, final false
  inline void set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown__OptionDataList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__OptionDataList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown__OptionDataList(__Dropdown__OptionDataList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__OptionDataList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown__OptionDataList(__Dropdown__OptionDataList const&) = delete;

  /// @brief Field m_Options, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* ___m_Options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown__OptionDataList, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown__OptionDataList, ___m_Options) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::DropdownEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::Dropdown::DropdownEvent*
class CORDL_TYPE __Dropdown__DropdownEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::UI::__Dropdown__DropdownEvent* New_ctor();

  /// @brief Method .ctor, addr 0x32a35bc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown__DropdownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__DropdownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown__DropdownEvent(__Dropdown__DropdownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__DropdownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown__DropdownEvent(__Dropdown__DropdownEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown__DropdownEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::<>c__DisplayClass63_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::Dropdown::<>c__DisplayClass63_0*
class CORDL_TYPE __Dropdown____c__DisplayClass63_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::UI::Dropdown> __4__this;

  /// @brief Field item, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_item, put = __cordl_internal_set_item))::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem> item;

  static inline ::UnityEngine::UI::__Dropdown____c__DisplayClass63_0* New_ctor();

  /// @brief Method <Show>b__0, addr 0x32a60d8, size 0x24, virtual false, abstract: false, final false
  inline void _Show_b__0(bool x);

  constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem> const& __cordl_internal_get_item() const;

  constexpr ::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem>& __cordl_internal_get_item();

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Dropdown> value);

  constexpr void __cordl_internal_set_item(::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem> value);

  /// @brief Method .ctor, addr 0x32a5118, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown____c__DisplayClass63_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown____c__DisplayClass63_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown____c__DisplayClass63_0(__Dropdown____c__DisplayClass63_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown____c__DisplayClass63_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown____c__DisplayClass63_0(__Dropdown____c__DisplayClass63_0 const&) = delete;

  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem> ___item;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Dropdown> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown____c__DisplayClass63_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown____c__DisplayClass63_0, ___item) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown____c__DisplayClass63_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::<DelayedDestroyDropdownList>d__75
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::Dropdown::<DelayedDestroyDropdownList>d__75*
class CORDL_TYPE __Dropdown___DelayedDestroyDropdownList_d__75 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::UI::Dropdown> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x32a6100, size 0xac, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x32a61ac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x32a61b4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x32a61f4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x32a60fc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Dropdown> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x32a5d38, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown___DelayedDestroyDropdownList_d__75();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown___DelayedDestroyDropdownList_d__75", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown___DelayedDestroyDropdownList_d__75(__Dropdown___DelayedDestroyDropdownList_d__75&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown___DelayedDestroyDropdownList_d__75", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown___DelayedDestroyDropdownList_d__75(__Dropdown___DelayedDestroyDropdownList_d__75 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Dropdown> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75, _____4__this) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::Dropdown
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 353, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::Dropdown*
class CORDL_TYPE Dropdown : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using DropdownEvent = ::UnityEngine::UI::__Dropdown__DropdownEvent;

  using DropdownItem = ::UnityEngine::UI::__Dropdown__DropdownItem;

  using OptionData = ::UnityEngine::UI::__Dropdown__OptionData;

  using OptionDataList = ::UnityEngine::UI::__Dropdown__OptionDataList;

  using _DelayedDestroyDropdownList_d__75 = ::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75;

  using __c__DisplayClass63_0 = ::UnityEngine::UI::__Dropdown____c__DisplayClass63_0;

  __declspec(property(get = get_template, put = set_template))::UnityW<::UnityEngine::RectTransform> _cordl_template;

  __declspec(property(get = get_alphaFadeSpeed, put = set_alphaFadeSpeed)) float_t alphaFadeSpeed;

  __declspec(property(get = get_captionImage, put = set_captionImage))::UnityW<::UnityEngine::UI::Image> captionImage;

  __declspec(property(get = get_captionText, put = set_captionText))::UnityW<::UnityEngine::UI::Text> captionText;

  __declspec(property(get = get_itemImage, put = set_itemImage))::UnityW<::UnityEngine::UI::Image> itemImage;

  __declspec(property(get = get_itemText, put = set_itemText))::UnityW<::UnityEngine::UI::Text> itemText;

  /// @brief Field m_AlphaFadeSpeed, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlphaFadeSpeed, put = __cordl_internal_set_m_AlphaFadeSpeed)) float_t m_AlphaFadeSpeed;

  /// @brief Field m_AlphaTweenRunner, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlphaTweenRunner,
                      put = __cordl_internal_set_m_AlphaTweenRunner))::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* m_AlphaTweenRunner;

  /// @brief Field m_Blocker, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Blocker, put = __cordl_internal_set_m_Blocker))::UnityW<::UnityEngine::GameObject> m_Blocker;

  /// @brief Field m_CaptionImage, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CaptionImage, put = __cordl_internal_set_m_CaptionImage))::UnityW<::UnityEngine::UI::Image> m_CaptionImage;

  /// @brief Field m_CaptionText, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CaptionText, put = __cordl_internal_set_m_CaptionText))::UnityW<::UnityEngine::UI::Text> m_CaptionText;

  /// @brief Field m_Dropdown, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dropdown, put = __cordl_internal_set_m_Dropdown))::UnityW<::UnityEngine::GameObject> m_Dropdown;

  /// @brief Field m_ItemImage, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemImage, put = __cordl_internal_set_m_ItemImage))::UnityW<::UnityEngine::UI::Image> m_ItemImage;

  /// @brief Field m_ItemText, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemText, put = __cordl_internal_set_m_ItemText))::UnityW<::UnityEngine::UI::Text> m_ItemText;

  /// @brief Field m_Items, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Items, put = __cordl_internal_set_m_Items))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem>>* m_Items;

  /// @brief Field m_OnValueChanged, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValueChanged, put = __cordl_internal_set_m_OnValueChanged))::UnityEngine::UI::__Dropdown__DropdownEvent* m_OnValueChanged;

  /// @brief Field m_Options, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Options, put = __cordl_internal_set_m_Options))::UnityEngine::UI::__Dropdown__OptionDataList* m_Options;

  /// @brief Field m_Template, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Template, put = __cordl_internal_set_m_Template))::UnityW<::UnityEngine::RectTransform> m_Template;

  /// @brief Field m_Value, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) int32_t m_Value;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged))::UnityEngine::UI::__Dropdown__DropdownEvent* onValueChanged;

  __declspec(property(get = get_options, put = set_options))::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* options;

  /// @brief Field s_NoOptionData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NoOptionData, put = setStaticF_s_NoOptionData))::UnityEngine::UI::__Dropdown__OptionData* s_NoOptionData;

  /// @brief Field validTemplate, offset 0x160, size 0x1
  __declspec(property(get = __cordl_internal_get_validTemplate, put = __cordl_internal_set_validTemplate)) bool validTemplate;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Method AddItem, addr 0x32a5120, size 0x2ec, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem> AddItem(::UnityEngine::UI::__Dropdown__OptionData* data, bool selected, ::UnityEngine::UI::__Dropdown__DropdownItem* itemTemplate,
                                                                       ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem>>* items);

  /// @brief Method AddOptions, addr 0x32a3a00, size 0x15c, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::StringW>* options);

  /// @brief Method AddOptions, addr 0x32a3998, size 0x68, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* options);

  /// @brief Method AddOptions, addr 0x32a3b84, size 0x15c, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>* options);

  /// @brief Method AlphaFadeList, addr 0x32a5b8c, size 0x80, virtual false, abstract: false, final false
  inline void AlphaFadeList(float_t duration, float_t alpha);

  /// @brief Method AlphaFadeList, addr 0x32a540c, size 0x128, virtual false, abstract: false, final false
  inline void AlphaFadeList(float_t duration, float_t start, float_t end);

  /// @brief Method Awake, addr 0x32a3604, size 0xfc, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearOptions, addr 0x32a3d08, size 0x78, virtual false, abstract: false, final false
  inline void ClearOptions();

  /// @brief Method CreateBlocker, addr 0x32a5534, size 0x4cc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateBlocker(::UnityEngine::Canvas* rootCanvas);

  /// @brief Method CreateDropdownList, addr 0x32a5a58, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateDropdownList(::UnityEngine::GameObject* _cordl_template);

  /// @brief Method CreateItem, addr 0x32a5b1c, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem> CreateItem(::UnityEngine::UI::__Dropdown__DropdownItem* itemTemplate);

  /// @brief Method DelayedDestroyDropdownList, addr 0x32a5cc0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayedDestroyDropdownList(float_t delay);

  /// @brief Method DestroyBlocker, addr 0x32a5a00, size 0x58, virtual true, abstract: false, final false
  inline void DestroyBlocker(::UnityEngine::GameObject* blocker);

  /// @brief Method DestroyDropdownList, addr 0x32a5ac4, size 0x58, virtual true, abstract: false, final false
  inline void DestroyDropdownList(::UnityEngine::GameObject* dropdownList);

  /// @brief Method DestroyItem, addr 0x32a5b88, size 0x4, virtual true, abstract: false, final false
  inline void DestroyItem(::UnityEngine::UI::__Dropdown__DropdownItem* item);

  /// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetOrAddComponent(::UnityEngine::GameObject* go);

  /// @brief Method Hide, addr 0x32a501c, size 0xfc, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method ImmediateDestroyDropdownList, addr 0x32a3828, size 0x170, virtual false, abstract: false, final false
  inline void ImmediateDestroyDropdownList();

  static inline ::UnityEngine::UI::Dropdown* New_ctor();

  /// @brief Method OnCancel, addr 0x32a5018, size 0x4, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDisable, addr 0x32a3794, size 0x94, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPointerClick, addr 0x32a43f8, size 0x4, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelectItem, addr 0x32a5d60, size 0x134, virtual false, abstract: false, final false
  inline void OnSelectItem(::UnityEngine::UI::Toggle* toggle);

  /// @brief Method OnSubmit, addr 0x32a5014, size 0x4, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method RefreshShownValue, addr 0x32a2620, size 0x1dc, virtual false, abstract: false, final false
  inline void RefreshShownValue();

  /// @brief Method Set, addr 0x32a3320, size 0x110, virtual false, abstract: false, final false
  inline void Set(int32_t value, bool sendCallback);

  /// @brief Method SetAlpha, addr 0x32a5c0c, size 0xb4, virtual false, abstract: false, final false
  inline void SetAlpha(float_t alpha);

  /// @brief Method SetValueWithoutNotify, addr 0x32a3430, size 0x8, virtual false, abstract: false, final false
  inline void SetValueWithoutNotify(int32_t input);

  /// @brief Method SetupTemplate, addr 0x32a3d80, size 0x678, virtual false, abstract: false, final false
  inline void SetupTemplate(::UnityEngine::Canvas* rootCanvas);

  /// @brief Method Show, addr 0x32a43fc, size 0xc18, virtual false, abstract: false, final false
  inline void Show();

  /// @brief Method Start, addr 0x32a3700, size 0x94, virtual true, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get_m_AlphaFadeSpeed() const;

  constexpr float_t& __cordl_internal_get_m_AlphaFadeSpeed();

  constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>*& __cordl_internal_get_m_AlphaTweenRunner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>*> const&
  __cordl_internal_get_m_AlphaTweenRunner() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Blocker() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Blocker();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_CaptionImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_CaptionImage();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_CaptionText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_CaptionText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Dropdown() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Dropdown();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_ItemImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_ItemImage();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_m_ItemText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_m_ItemText();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem>>*& __cordl_internal_get_m_Items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem>>*> const& __cordl_internal_get_m_Items() const;

  constexpr ::UnityEngine::UI::__Dropdown__DropdownEvent*& __cordl_internal_get_m_OnValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Dropdown__DropdownEvent*> const& __cordl_internal_get_m_OnValueChanged() const;

  constexpr ::UnityEngine::UI::__Dropdown__OptionDataList*& __cordl_internal_get_m_Options();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Dropdown__OptionDataList*> const& __cordl_internal_get_m_Options() const;

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Template() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Template();

  constexpr int32_t const& __cordl_internal_get_m_Value() const;

  constexpr int32_t& __cordl_internal_get_m_Value();

  constexpr bool const& __cordl_internal_get_validTemplate() const;

  constexpr bool& __cordl_internal_get_validTemplate();

  constexpr void __cordl_internal_set_m_AlphaFadeSpeed(float_t value);

  constexpr void __cordl_internal_set_m_AlphaTweenRunner(::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* value);

  constexpr void __cordl_internal_set_m_Blocker(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_CaptionImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_CaptionText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_Dropdown(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ItemImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_ItemText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem>>* value);

  constexpr void __cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::__Dropdown__DropdownEvent* value);

  constexpr void __cordl_internal_set_m_Options(::UnityEngine::UI::__Dropdown__OptionDataList* value);

  constexpr void __cordl_internal_set_m_Template(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Value(int32_t value);

  constexpr void __cordl_internal_set_validTemplate(bool value);

  /// @brief Method .ctor, addr 0x32a3438, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::__Dropdown__OptionData* getStaticF_s_NoOptionData();

  /// @brief Method get_alphaFadeSpeed, addr 0x32a3300, size 0x8, virtual false, abstract: false, final false
  inline float_t get_alphaFadeSpeed();

  /// @brief Method get_captionImage, addr 0x32a32ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_captionImage();

  /// @brief Method get_captionText, addr 0x32a32a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_captionText();

  /// @brief Method get_itemImage, addr 0x32a32c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_itemImage();

  /// @brief Method get_itemText, addr 0x32a32bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_itemText();

  /// @brief Method get_onValueChanged, addr 0x32a32f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Dropdown__DropdownEvent* get_onValueChanged();

  /// @brief Method get_options, addr 0x32a25fc, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* get_options();

  /// @brief Method get_template, addr 0x32a329c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_template();

  /// @brief Method get_value, addr 0x32a3310, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  static inline void setStaticF_s_NoOptionData(::UnityEngine::UI::__Dropdown__OptionData* value);

  /// @brief Method set_alphaFadeSpeed, addr 0x32a3308, size 0x8, virtual false, abstract: false, final false
  inline void set_alphaFadeSpeed(float_t value);

  /// @brief Method set_captionImage, addr 0x32a32b4, size 0x8, virtual false, abstract: false, final false
  inline void set_captionImage(::UnityEngine::UI::Image* value);

  /// @brief Method set_captionText, addr 0x32a25ec, size 0x8, virtual false, abstract: false, final false
  inline void set_captionText(::UnityEngine::UI::Text* value);

  /// @brief Method set_itemImage, addr 0x32a32cc, size 0x8, virtual false, abstract: false, final false
  inline void set_itemImage(::UnityEngine::UI::Image* value);

  /// @brief Method set_itemText, addr 0x32a25f4, size 0x8, virtual false, abstract: false, final false
  inline void set_itemText(::UnityEngine::UI::Text* value);

  /// @brief Method set_onValueChanged, addr 0x32a32f8, size 0x8, virtual false, abstract: false, final false
  inline void set_onValueChanged(::UnityEngine::UI::__Dropdown__DropdownEvent* value);

  /// @brief Method set_options, addr 0x32a32d4, size 0x1c, virtual false, abstract: false, final false
  inline void set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* value);

  /// @brief Method set_template, addr 0x32a25e4, size 0x8, virtual false, abstract: false, final false
  inline void set_template(::UnityEngine::RectTransform* value);

  /// @brief Method set_value, addr 0x32a3318, size 0x8, virtual false, abstract: false, final false
  inline void set_value(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown(Dropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown(Dropdown const&) = delete;

  /// @brief Field m_Template, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Template;

  /// @brief Field m_CaptionText, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_CaptionText;

  /// @brief Field m_CaptionImage, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_CaptionImage;

  /// @brief Field m_ItemText, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_ItemText;

  /// @brief Field m_ItemImage, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_ItemImage;

  /// @brief Field m_Value, offset: 0x120, size: 0x4, def value: None
  int32_t ___m_Value;

  /// @brief Field m_Options, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::UI::__Dropdown__OptionDataList* ___m_Options;

  /// @brief Field m_OnValueChanged, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UI::__Dropdown__DropdownEvent* ___m_OnValueChanged;

  /// @brief Field m_AlphaFadeSpeed, offset: 0x138, size: 0x4, def value: None
  float_t ___m_AlphaFadeSpeed;

  /// @brief Field m_Dropdown, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Dropdown;

  /// @brief Field m_Blocker, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Blocker;

  /// @brief Field m_Items, offset: 0x150, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::__Dropdown__DropdownItem>>* ___m_Items;

  /// @brief Field m_AlphaTweenRunner, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* ___m_AlphaTweenRunner;

  /// @brief Field validTemplate, offset: 0x160, size: 0x1, def value: None
  bool ___validTemplate;

  /// @brief Field kHighSortingLayer offset 0xffffffff size 0x4
  static constexpr int32_t kHighSortingLayer{ static_cast<int32_t>(0x7530) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Dropdown, 0x168>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Template) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_CaptionText) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_CaptionImage) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_ItemText) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_ItemImage) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Value) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Options) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_OnValueChanged) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_AlphaFadeSpeed) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Dropdown) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Blocker) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Items) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_AlphaTweenRunner) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___validTemplate) == 0x160, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Dropdown);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown*, "UnityEngine.UI", "Dropdown");
NEED_NO_BOX(::UnityEngine::UI::__Dropdown__DropdownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Dropdown__DropdownEvent*, "UnityEngine.UI", "Dropdown/DropdownEvent");
NEED_NO_BOX(::UnityEngine::UI::__Dropdown__DropdownItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Dropdown__DropdownItem*, "UnityEngine.UI", "Dropdown/DropdownItem");
NEED_NO_BOX(::UnityEngine::UI::__Dropdown__OptionData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Dropdown__OptionData*, "UnityEngine.UI", "Dropdown/OptionData");
NEED_NO_BOX(::UnityEngine::UI::__Dropdown__OptionDataList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Dropdown__OptionDataList*, "UnityEngine.UI", "Dropdown/OptionDataList");
NEED_NO_BOX(::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75*, "UnityEngine.UI", "Dropdown/<DelayedDestroyDropdownList>d__75");
NEED_NO_BOX(::UnityEngine::UI::__Dropdown____c__DisplayClass63_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Dropdown____c__DisplayClass63_0*, "UnityEngine.UI", "Dropdown/<>c__DisplayClass63_0");
