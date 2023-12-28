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
namespace UnityEngine::UI {
class __Dropdown__OptionData;
}
namespace UnityEngine::UI {
class __Dropdown__DropdownItem;
}
namespace UnityEngine::UI {
class __Dropdown__OptionDataList;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class __Dropdown____c__DisplayClass63_0;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI::CoroutineTween {
template <typename T> class TweenRunner_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::UI::CoroutineTween {
struct FloatTween;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::UI {
class __Dropdown__DropdownEvent;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI {
class __Dropdown___DelayedDestroyDropdownList_d__75;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13033))
// CS Name: ::Dropdown::DropdownItem*
class CORDL_TYPE __Dropdown__DropdownItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Text, put = __set_m_Text))::UnityEngine::UI::Text* m_Text;

  /// @brief Field m_Image, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Image, put = __set_m_Image))::UnityEngine::UI::Image* m_Image;

  /// @brief Field m_RectTransform, offset 0x28, size 0x8
  __declspec(property(get = __get_m_RectTransform, put = __set_m_RectTransform))::UnityEngine::RectTransform* m_RectTransform;

  /// @brief Field m_Toggle, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Toggle, put = __set_m_Toggle))::UnityEngine::UI::Toggle* m_Toggle;

  __declspec(property(get = get_text, put = set_text))::UnityEngine::UI::Text* text;

  __declspec(property(get = get_image, put = set_image))::UnityEngine::UI::Image* image;

  __declspec(property(get = get_rectTransform, put = set_rectTransform))::UnityEngine::RectTransform* rectTransform;

  __declspec(property(get = get_toggle, put = set_toggle))::UnityEngine::UI::Toggle* toggle;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  constexpr ::UnityEngine::UI::Text*& __get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_Text() const;

  constexpr void __set_m_Text(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Image*& __get_m_Image();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_m_Image() const;

  constexpr void __set_m_Image(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::RectTransform*& __get_m_RectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_RectTransform() const;

  constexpr void __set_m_RectTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::UI::Toggle*& __get_m_Toggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get_m_Toggle() const;

  constexpr void __set_m_Toggle(::UnityEngine::UI::Toggle* value);

  /// @brief Method get_text addr 0x2d5ada8 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Text* get_text();

  /// @brief Method set_text addr 0x2d5adb0 size 0x8 virtual false final false
  inline void set_text(::UnityEngine::UI::Text* value);

  /// @brief Method get_image addr 0x2d5adb8 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Image* get_image();

  /// @brief Method set_image addr 0x2d5adc0 size 0x8 virtual false final false
  inline void set_image(::UnityEngine::UI::Image* value);

  /// @brief Method get_rectTransform addr 0x2d5adc8 size 0x8 virtual false final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  /// @brief Method set_rectTransform addr 0x2d5add0 size 0x8 virtual false final false
  inline void set_rectTransform(::UnityEngine::RectTransform* value);

  /// @brief Method get_toggle addr 0x2d5add8 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Toggle* get_toggle();

  /// @brief Method set_toggle addr 0x2d5ade0 size 0x8 virtual false final false
  inline void set_toggle(::UnityEngine::UI::Toggle* value);

  /// @brief Method OnPointerEnter addr 0x2d5ade8 size 0x7c virtual true final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnCancel addr 0x2d5ae64 size 0xac virtual true final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  static inline ::UnityEngine::UI::__Dropdown__DropdownItem* New_ctor();

  /// @brief Method .ctor addr 0x2d5af10 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__DropdownItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown__DropdownItem(__Dropdown__DropdownItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__DropdownItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown__DropdownItem(__Dropdown__DropdownItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown__DropdownItem();

public:
  /// @brief Field m_Text, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_Text;

  /// @brief Field m_Image, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___m_Image;

  /// @brief Field m_RectTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_RectTransform;

  /// @brief Field m_Toggle, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ___m_Toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown__DropdownItem, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::OptionData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13034))
// CS Name: ::Dropdown::OptionData*
class CORDL_TYPE __Dropdown__OptionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Text, put = __set_m_Text))::StringW m_Text;

  /// @brief Field m_Image, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Image, put = __set_m_Image))::UnityEngine::Sprite* m_Image;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_image, put = set_image))::UnityEngine::Sprite* image;

  constexpr ::StringW& __get_m_Text();

  constexpr ::StringW const& __get_m_Text() const;

  constexpr void __set_m_Text(::StringW value);

  constexpr ::UnityEngine::Sprite*& __get_m_Image();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get_m_Image() const;

  constexpr void __set_m_Image(::UnityEngine::Sprite* value);

  /// @brief Method get_text addr 0x2d5af18 size 0x8 virtual false final false
  inline ::StringW get_text();

  /// @brief Method set_text addr 0x2d5af20 size 0x8 virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method get_image addr 0x2d5af28 size 0x8 virtual false final false
  inline ::UnityEngine::Sprite* get_image();

  /// @brief Method set_image addr 0x2d5af30 size 0x8 virtual false final false
  inline void set_image(::UnityEngine::Sprite* value);

  static inline ::UnityEngine::UI::__Dropdown__OptionData* New_ctor();

  /// @brief Method .ctor addr 0x2d574b4 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::UI::__Dropdown__OptionData* New_ctor(::StringW text);

  /// @brief Method .ctor addr 0x2d589f8 size 0x28 virtual false final false
  inline void _ctor(::StringW text);

  static inline ::UnityEngine::UI::__Dropdown__OptionData* New_ctor(::UnityEngine::Sprite* image);

  /// @brief Method .ctor addr 0x2d58b7c size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::Sprite* image);

  static inline ::UnityEngine::UI::__Dropdown__OptionData* New_ctor(::StringW text, ::UnityEngine::Sprite* image);

  /// @brief Method .ctor addr 0x2d5af38 size 0x2c virtual false final false
  inline void _ctor(::StringW text, ::UnityEngine::Sprite* image);

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__OptionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown__OptionData(__Dropdown__OptionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__OptionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown__OptionData(__Dropdown__OptionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown__OptionData();

public:
  /// @brief Field m_Text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_Image, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* ___m_Image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown__OptionData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::OptionDataList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13035))
// CS Name: ::Dropdown::OptionDataList*
class CORDL_TYPE __Dropdown__OptionDataList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Options, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Options, put = __set_m_Options))::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* m_Options;

  __declspec(property(get = get_options, put = set_options))::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* options;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>*& __get_m_Options();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>*> const& __get_m_Options() const;

  constexpr void __set_m_Options(::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* value);

  /// @brief Method get_options addr 0x2d5af64 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* get_options();

  /// @brief Method set_options addr 0x2d5af6c size 0x8 virtual false final false
  inline void set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* value);

  static inline ::UnityEngine::UI::__Dropdown__OptionDataList* New_ctor();

  /// @brief Method .ctor addr 0x2d583d8 size 0x80 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__OptionDataList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown__OptionDataList(__Dropdown__OptionDataList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__OptionDataList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown__OptionDataList(__Dropdown__OptionDataList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown__OptionDataList();

public:
  /// @brief Field m_Options, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* ___m_Options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown__OptionDataList, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::DropdownEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(10465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13036))
// CS Name: ::Dropdown::DropdownEvent*
class CORDL_TYPE __Dropdown__DropdownEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::UI::__Dropdown__DropdownEvent* New_ctor();

  /// @brief Method .ctor addr 0x2d58458 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__DropdownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown__DropdownEvent(__Dropdown__DropdownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown__DropdownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown__DropdownEvent(__Dropdown__DropdownEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown__DropdownEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown__DropdownEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::<>c__DisplayClass63_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13037))
// CS Name: ::Dropdown::<>c__DisplayClass63_0*
class CORDL_TYPE __Dropdown____c__DisplayClass63_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field item, offset 0x10, size 0x8
  __declspec(property(get = __get_item, put = __set_item))::UnityEngine::UI::__Dropdown__DropdownItem* item;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::UI::Dropdown* __4__this;

  constexpr ::UnityEngine::UI::__Dropdown__DropdownItem*& __get_item();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Dropdown__DropdownItem*> const& __get_item() const;

  constexpr void __set_item(::UnityEngine::UI::__Dropdown__DropdownItem* value);

  constexpr ::UnityEngine::UI::Dropdown*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Dropdown*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::UI::Dropdown* value);

  static inline ::UnityEngine::UI::__Dropdown____c__DisplayClass63_0* New_ctor();

  /// @brief Method .ctor addr 0x2d59fb4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Show>b__0 addr 0x2d5af74 size 0x24 virtual false final false
  inline void _Show_b__0(bool x);

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown____c__DisplayClass63_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown____c__DisplayClass63_0(__Dropdown____c__DisplayClass63_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown____c__DisplayClass63_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown____c__DisplayClass63_0(__Dropdown____c__DisplayClass63_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown____c__DisplayClass63_0();

public:
  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UI::__Dropdown__DropdownItem* ___item;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Dropdown* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown____c__DisplayClass63_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::<DelayedDestroyDropdownList>d__75
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13038))
// CS Name: ::Dropdown::<DelayedDestroyDropdownList>d__75*
class CORDL_TYPE __Dropdown___DelayedDestroyDropdownList_d__75 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::UI::Dropdown* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr float_t& __get_delay();

  constexpr float_t const& __get_delay() const;

  constexpr void __set_delay(float_t value);

  constexpr ::UnityEngine::UI::Dropdown*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Dropdown*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::UI::Dropdown* value);

  static inline ::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2d5abd4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2d5af98 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2d5af9c size 0xac virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2d5b048 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2d5b050 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d5b090 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown___DelayedDestroyDropdownList_d__75", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dropdown___DelayedDestroyDropdownList_d__75(__Dropdown___DelayedDestroyDropdownList_d__75&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dropdown___DelayedDestroyDropdownList_d__75", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dropdown___DelayedDestroyDropdownList_d__75(__Dropdown___DelayedDestroyDropdownList_d__75 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dropdown___DelayedDestroyDropdownList_d__75();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Dropdown* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::Dropdown
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 353, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13119))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13039))
// CS Name: ::UnityEngine.UI::Dropdown*
class CORDL_TYPE Dropdown : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using _DelayedDestroyDropdownList_d__75 = ::UnityEngine::UI::__Dropdown___DelayedDestroyDropdownList_d__75;

  using __c__DisplayClass63_0 = ::UnityEngine::UI::__Dropdown____c__DisplayClass63_0;

  using DropdownEvent = ::UnityEngine::UI::__Dropdown__DropdownEvent;

  using OptionDataList = ::UnityEngine::UI::__Dropdown__OptionDataList;

  using OptionData = ::UnityEngine::UI::__Dropdown__OptionData;

  using DropdownItem = ::UnityEngine::UI::__Dropdown__DropdownItem;

  /// @brief Field m_Template, offset 0xf8, size 0x8
  __declspec(property(get = __get_m_Template, put = __set_m_Template))::UnityEngine::RectTransform* m_Template;

  /// @brief Field m_CaptionText, offset 0x100, size 0x8
  __declspec(property(get = __get_m_CaptionText, put = __set_m_CaptionText))::UnityEngine::UI::Text* m_CaptionText;

  /// @brief Field m_CaptionImage, offset 0x108, size 0x8
  __declspec(property(get = __get_m_CaptionImage, put = __set_m_CaptionImage))::UnityEngine::UI::Image* m_CaptionImage;

  /// @brief Field m_ItemText, offset 0x110, size 0x8
  __declspec(property(get = __get_m_ItemText, put = __set_m_ItemText))::UnityEngine::UI::Text* m_ItemText;

  /// @brief Field m_ItemImage, offset 0x118, size 0x8
  __declspec(property(get = __get_m_ItemImage, put = __set_m_ItemImage))::UnityEngine::UI::Image* m_ItemImage;

  /// @brief Field m_Value, offset 0x120, size 0x4
  __declspec(property(get = __get_m_Value, put = __set_m_Value)) int32_t m_Value;

  /// @brief Field m_Options, offset 0x128, size 0x8
  __declspec(property(get = __get_m_Options, put = __set_m_Options))::UnityEngine::UI::__Dropdown__OptionDataList* m_Options;

  /// @brief Field m_OnValueChanged, offset 0x130, size 0x8
  __declspec(property(get = __get_m_OnValueChanged, put = __set_m_OnValueChanged))::UnityEngine::UI::__Dropdown__DropdownEvent* m_OnValueChanged;

  /// @brief Field m_AlphaFadeSpeed, offset 0x138, size 0x4
  __declspec(property(get = __get_m_AlphaFadeSpeed, put = __set_m_AlphaFadeSpeed)) float_t m_AlphaFadeSpeed;

  /// @brief Field m_Dropdown, offset 0x140, size 0x8
  __declspec(property(get = __get_m_Dropdown, put = __set_m_Dropdown))::UnityEngine::GameObject* m_Dropdown;

  /// @brief Field m_Blocker, offset 0x148, size 0x8
  __declspec(property(get = __get_m_Blocker, put = __set_m_Blocker))::UnityEngine::GameObject* m_Blocker;

  /// @brief Field m_Items, offset 0x150, size 0x8
  __declspec(property(get = __get_m_Items, put = __set_m_Items))::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__DropdownItem*>* m_Items;

  /// @brief Field m_AlphaTweenRunner, offset 0x158, size 0x8
  __declspec(property(get = __get_m_AlphaTweenRunner,
                      put = __set_m_AlphaTweenRunner))::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* m_AlphaTweenRunner;

  /// @brief Field validTemplate, offset 0x160, size 0x1
  __declspec(property(get = __get_validTemplate, put = __set_validTemplate)) bool validTemplate;

  /// @brief Field s_NoOptionData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NoOptionData, put = setStaticF_s_NoOptionData))::UnityEngine::UI::__Dropdown__OptionData* s_NoOptionData;

  __declspec(property(get = get_template, put = set_template))::UnityEngine::RectTransform* _cordl_template;

  __declspec(property(get = get_captionText, put = set_captionText))::UnityEngine::UI::Text* captionText;

  __declspec(property(get = get_captionImage, put = set_captionImage))::UnityEngine::UI::Image* captionImage;

  __declspec(property(get = get_itemText, put = set_itemText))::UnityEngine::UI::Text* itemText;

  __declspec(property(get = get_itemImage, put = set_itemImage))::UnityEngine::UI::Image* itemImage;

  __declspec(property(get = get_options, put = set_options))::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* options;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged))::UnityEngine::UI::__Dropdown__DropdownEvent* onValueChanged;

  __declspec(property(get = get_alphaFadeSpeed, put = set_alphaFadeSpeed)) float_t alphaFadeSpeed;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  constexpr ::UnityEngine::RectTransform*& __get_m_Template();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_Template() const;

  constexpr void __set_m_Template(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_CaptionText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_CaptionText() const;

  constexpr void __set_m_CaptionText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Image*& __get_m_CaptionImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_m_CaptionImage() const;

  constexpr void __set_m_CaptionImage(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::UI::Text*& __get_m_ItemText();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_m_ItemText() const;

  constexpr void __set_m_ItemText(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Image*& __get_m_ItemImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_m_ItemImage() const;

  constexpr void __set_m_ItemImage(::UnityEngine::UI::Image* value);

  constexpr int32_t& __get_m_Value();

  constexpr int32_t const& __get_m_Value() const;

  constexpr void __set_m_Value(int32_t value);

  constexpr ::UnityEngine::UI::__Dropdown__OptionDataList*& __get_m_Options();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Dropdown__OptionDataList*> const& __get_m_Options() const;

  constexpr void __set_m_Options(::UnityEngine::UI::__Dropdown__OptionDataList* value);

  constexpr ::UnityEngine::UI::__Dropdown__DropdownEvent*& __get_m_OnValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Dropdown__DropdownEvent*> const& __get_m_OnValueChanged() const;

  constexpr void __set_m_OnValueChanged(::UnityEngine::UI::__Dropdown__DropdownEvent* value);

  constexpr float_t& __get_m_AlphaFadeSpeed();

  constexpr float_t const& __get_m_AlphaFadeSpeed() const;

  constexpr void __set_m_AlphaFadeSpeed(float_t value);

  constexpr ::UnityEngine::GameObject*& __get_m_Dropdown();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_Dropdown() const;

  constexpr void __set_m_Dropdown(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_Blocker();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_Blocker() const;

  constexpr void __set_m_Blocker(::UnityEngine::GameObject* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__DropdownItem*>*& __get_m_Items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__DropdownItem*>*> const& __get_m_Items() const;

  constexpr void __set_m_Items(::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__DropdownItem*>* value);

  constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>*& __get_m_AlphaTweenRunner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>*> const& __get_m_AlphaTweenRunner() const;

  constexpr void __set_m_AlphaTweenRunner(::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* value);

  constexpr bool& __get_validTemplate();

  constexpr bool const& __get_validTemplate() const;

  constexpr void __set_validTemplate(bool value);

  static inline void setStaticF_s_NoOptionData(::UnityEngine::UI::__Dropdown__OptionData* value);

  static inline ::UnityEngine::UI::__Dropdown__OptionData* getStaticF_s_NoOptionData();

  /// @brief Method get_template addr 0x2d58138 size 0x8 virtual false final false
  inline ::UnityEngine::RectTransform* get_template();

  /// @brief Method set_template addr 0x2d57480 size 0x8 virtual false final false
  inline void set_template(::UnityEngine::RectTransform* value);

  /// @brief Method get_captionText addr 0x2d58140 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Text* get_captionText();

  /// @brief Method set_captionText addr 0x2d57488 size 0x8 virtual false final false
  inline void set_captionText(::UnityEngine::UI::Text* value);

  /// @brief Method get_captionImage addr 0x2d58148 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Image* get_captionImage();

  /// @brief Method set_captionImage addr 0x2d58150 size 0x8 virtual false final false
  inline void set_captionImage(::UnityEngine::UI::Image* value);

  /// @brief Method get_itemText addr 0x2d58158 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Text* get_itemText();

  /// @brief Method set_itemText addr 0x2d57490 size 0x8 virtual false final false
  inline void set_itemText(::UnityEngine::UI::Text* value);

  /// @brief Method get_itemImage addr 0x2d58160 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Image* get_itemImage();

  /// @brief Method set_itemImage addr 0x2d58168 size 0x8 virtual false final false
  inline void set_itemImage(::UnityEngine::UI::Image* value);

  /// @brief Method get_options addr 0x2d57498 size 0x1c virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* get_options();

  /// @brief Method set_options addr 0x2d58170 size 0x1c virtual false final false
  inline void set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* value);

  /// @brief Method get_onValueChanged addr 0x2d5818c size 0x8 virtual false final false
  inline ::UnityEngine::UI::__Dropdown__DropdownEvent* get_onValueChanged();

  /// @brief Method set_onValueChanged addr 0x2d58194 size 0x8 virtual false final false
  inline void set_onValueChanged(::UnityEngine::UI::__Dropdown__DropdownEvent* value);

  /// @brief Method get_alphaFadeSpeed addr 0x2d5819c size 0x8 virtual false final false
  inline float_t get_alphaFadeSpeed();

  /// @brief Method set_alphaFadeSpeed addr 0x2d581a4 size 0x8 virtual false final false
  inline void set_alphaFadeSpeed(float_t value);

  /// @brief Method get_value addr 0x2d581ac size 0x8 virtual false final false
  inline int32_t get_value();

  /// @brief Method set_value addr 0x2d581b4 size 0x8 virtual false final false
  inline void set_value(int32_t value);

  /// @brief Method SetValueWithoutNotify addr 0x2d582cc size 0x8 virtual false final false
  inline void SetValueWithoutNotify(int32_t input);

  /// @brief Method Set addr 0x2d581bc size 0x110 virtual false final false
  inline void Set(int32_t value, bool sendCallback);

  static inline ::UnityEngine::UI::Dropdown* New_ctor();

  /// @brief Method .ctor addr 0x2d582d4 size 0x104 virtual false final false
  inline void _ctor();

  /// @brief Method Awake addr 0x2d584a0 size 0xfc virtual true final false
  inline void Awake();

  /// @brief Method Start addr 0x2d5859c size 0x94 virtual true final false
  inline void Start();

  /// @brief Method OnDisable addr 0x2d58630 size 0x94 virtual true final false
  inline void OnDisable();

  /// @brief Method RefreshShownValue addr 0x2d574bc size 0x1dc virtual false final false
  inline void RefreshShownValue();

  /// @brief Method AddOptions addr 0x2d58834 size 0x68 virtual false final false
  inline void AddOptions(::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__OptionData*>* options);

  /// @brief Method AddOptions addr 0x2d5889c size 0x15c virtual false final false
  inline void AddOptions(::System::Collections::Generic::List_1<::StringW>* options);

  /// @brief Method AddOptions addr 0x2d58a20 size 0x15c virtual false final false
  inline void AddOptions(::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* options);

  /// @brief Method ClearOptions addr 0x2d58ba4 size 0x78 virtual false final false
  inline void ClearOptions();

  /// @brief Method SetupTemplate addr 0x2d58c1c size 0x678 virtual false final false
  inline void SetupTemplate(::UnityEngine::Canvas* rootCanvas);

  /// @brief Method GetOrAddComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T GetOrAddComponent(::UnityEngine::GameObject* go);

  /// @brief Method OnPointerClick addr 0x2d59294 size 0x4 virtual true final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit addr 0x2d59eb0 size 0x4 virtual true final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnCancel addr 0x2d59eb4 size 0x4 virtual true final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Show addr 0x2d59298 size 0xc18 virtual false final false
  inline void Show();

  /// @brief Method CreateBlocker addr 0x2d5a3d0 size 0x4cc virtual true final false
  inline ::UnityEngine::GameObject* CreateBlocker(::UnityEngine::Canvas* rootCanvas);

  /// @brief Method DestroyBlocker addr 0x2d5a89c size 0x58 virtual true final false
  inline void DestroyBlocker(::UnityEngine::GameObject* blocker);

  /// @brief Method CreateDropdownList addr 0x2d5a8f4 size 0x6c virtual true final false
  inline ::UnityEngine::GameObject* CreateDropdownList(::UnityEngine::GameObject* _cordl_template);

  /// @brief Method DestroyDropdownList addr 0x2d5a960 size 0x58 virtual true final false
  inline void DestroyDropdownList(::UnityEngine::GameObject* dropdownList);

  /// @brief Method CreateItem addr 0x2d5a9b8 size 0x6c virtual true final false
  inline ::UnityEngine::UI::__Dropdown__DropdownItem* CreateItem(::UnityEngine::UI::__Dropdown__DropdownItem* itemTemplate);

  /// @brief Method DestroyItem addr 0x2d5aa24 size 0x4 virtual true final false
  inline void DestroyItem(::UnityEngine::UI::__Dropdown__DropdownItem* item);

  /// @brief Method AddItem addr 0x2d59fbc size 0x2ec virtual false final false
  inline ::UnityEngine::UI::__Dropdown__DropdownItem* AddItem(::UnityEngine::UI::__Dropdown__OptionData* data, bool selected, ::UnityEngine::UI::__Dropdown__DropdownItem* itemTemplate,
                                                              ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__DropdownItem*>* items);

  /// @brief Method AlphaFadeList addr 0x2d5aa28 size 0x80 virtual false final false
  inline void AlphaFadeList(float_t duration, float_t alpha);

  /// @brief Method AlphaFadeList addr 0x2d5a2a8 size 0x128 virtual false final false
  inline void AlphaFadeList(float_t duration, float_t start, float_t end);

  /// @brief Method SetAlpha addr 0x2d5aaa8 size 0xb4 virtual false final false
  inline void SetAlpha(float_t alpha);

  /// @brief Method Hide addr 0x2d59eb8 size 0xfc virtual false final false
  inline void Hide();

  /// @brief Method DelayedDestroyDropdownList addr 0x2d5ab5c size 0x78 virtual false final false
  inline ::System::Collections::IEnumerator* DelayedDestroyDropdownList(float_t delay);

  /// @brief Method ImmediateDestroyDropdownList addr 0x2d586c4 size 0x170 virtual false final false
  inline void ImmediateDestroyDropdownList();

  /// @brief Method OnSelectItem addr 0x2d5abfc size 0x134 virtual false final false
  inline void OnSelectItem(::UnityEngine::UI::Toggle* toggle);

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown(Dropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown(Dropdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dropdown();

public:
  /// @brief Field m_Template, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_Template;

  /// @brief Field m_CaptionText, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_CaptionText;

  /// @brief Field m_CaptionImage, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___m_CaptionImage;

  /// @brief Field m_ItemText, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___m_ItemText;

  /// @brief Field m_ItemImage, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___m_ItemImage;

  /// @brief Field m_Value, offset: 0x120, size: 0x4, def value: None
  int32_t ___m_Value;

  /// @brief Field m_Options, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::UI::__Dropdown__OptionDataList* ___m_Options;

  /// @brief Field m_OnValueChanged, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UI::__Dropdown__DropdownEvent* ___m_OnValueChanged;

  /// @brief Field m_AlphaFadeSpeed, offset: 0x138, size: 0x4, def value: None
  float_t ___m_AlphaFadeSpeed;

  /// @brief Field m_Dropdown, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_Dropdown;

  /// @brief Field m_Blocker, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_Blocker;

  /// @brief Field m_Items, offset: 0x150, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::__Dropdown__DropdownItem*>* ___m_Items;

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
