#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Dropdown)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class __TMP_Dropdown__OptionDataList;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace TMPro {
class __TMP_Dropdown___DelayedDestroyDropdownList_d__81;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace TMPro {
class __TMP_Dropdown__OptionData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace TMPro {
class __TMP_Dropdown__DropdownItem;
}
namespace System::Collections {
class IEnumerator;
}
namespace TMPro {
struct FloatTween;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine {
class Canvas;
}
namespace TMPro {
template <typename T> class TweenRunner_1;
}
namespace TMPro {
class __TMP_Dropdown____c__DisplayClass69_0;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace TMPro {
class __TMP_Dropdown__DropdownEvent;
}
namespace UnityEngine {
class RectTransform;
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
namespace TMPro {
class TMP_Dropdown;
}
namespace TMPro {
class __TMP_Dropdown__DropdownEvent;
}
namespace TMPro {
class __TMP_Dropdown__DropdownItem;
}
namespace TMPro {
class __TMP_Dropdown__OptionData;
}
namespace TMPro {
class __TMP_Dropdown__OptionDataList;
}
namespace TMPro {
class __TMP_Dropdown___DelayedDestroyDropdownList_d__81;
}
namespace TMPro {
class __TMP_Dropdown____c__DisplayClass69_0;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Dropdown);
MARK_REF_PTR_T(::TMPro::__TMP_Dropdown__DropdownEvent);
MARK_REF_PTR_T(::TMPro::__TMP_Dropdown__DropdownItem);
MARK_REF_PTR_T(::TMPro::__TMP_Dropdown__OptionData);
MARK_REF_PTR_T(::TMPro::__TMP_Dropdown__OptionDataList);
MARK_REF_PTR_T(::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81);
MARK_REF_PTR_T(::TMPro::__TMP_Dropdown____c__DisplayClass69_0);
// Type: ::DropdownItem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12347))
// CS Name: ::TMP_Dropdown::DropdownItem*
class CORDL_TYPE __TMP_Dropdown__DropdownItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_Text, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Text, put = __set_m_Text))::TMPro::TMP_Text* m_Text;

  /// @brief Field m_Image, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Image, put = __set_m_Image))::UnityEngine::UI::Image* m_Image;

  /// @brief Field m_RectTransform, offset 0x28, size 0x8
  __declspec(property(get = __get_m_RectTransform, put = __set_m_RectTransform))::UnityEngine::RectTransform* m_RectTransform;

  /// @brief Field m_Toggle, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Toggle, put = __set_m_Toggle))::UnityEngine::UI::Toggle* m_Toggle;

  __declspec(property(get = get_text, put = set_text))::TMPro::TMP_Text* text;

  __declspec(property(get = get_image, put = set_image))::UnityEngine::UI::Image* image;

  __declspec(property(get = get_rectTransform, put = set_rectTransform))::UnityEngine::RectTransform* rectTransform;

  __declspec(property(get = get_toggle, put = set_toggle))::UnityEngine::UI::Toggle* toggle;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  constexpr ::TMPro::TMP_Text*& __get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> const& __get_m_Text() const;

  constexpr void __set_m_Text(::TMPro::TMP_Text* value);

  constexpr ::UnityEngine::UI::Image*& __get_m_Image();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_m_Image() const;

  constexpr void __set_m_Image(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::RectTransform*& __get_m_RectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_RectTransform() const;

  constexpr void __set_m_RectTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::UI::Toggle*& __get_m_Toggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get_m_Toggle() const;

  constexpr void __set_m_Toggle(::UnityEngine::UI::Toggle* value);

  /// @brief Method get_text, addr 0x2c0756c, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Text* get_text();

  /// @brief Method set_text, addr 0x2c07574, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::TMPro::TMP_Text* value);

  /// @brief Method get_image, addr 0x2c0757c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Image* get_image();

  /// @brief Method set_image, addr 0x2c07584, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::UI::Image* value);

  /// @brief Method get_rectTransform, addr 0x2c0758c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  /// @brief Method set_rectTransform, addr 0x2c07594, size 0x8, virtual false, abstract: false, final false
  inline void set_rectTransform(::UnityEngine::RectTransform* value);

  /// @brief Method get_toggle, addr 0x2c0759c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Toggle* get_toggle();

  /// @brief Method set_toggle, addr 0x2c075a4, size 0x8, virtual false, abstract: false, final false
  inline void set_toggle(::UnityEngine::UI::Toggle* value);

  /// @brief Method OnPointerEnter, addr 0x2c075ac, size 0x7c, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnCancel, addr 0x2c07628, size 0xac, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  static inline ::TMPro::__TMP_Dropdown__DropdownItem* New_ctor();

  /// @brief Method .ctor, addr 0x2c076d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown__DropdownItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_Dropdown__DropdownItem(__TMP_Dropdown__DropdownItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown__DropdownItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_Dropdown__DropdownItem(__TMP_Dropdown__DropdownItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_Dropdown__DropdownItem();

public:
  /// @brief Field m_Text, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TMP_Text* ___m_Text;

  /// @brief Field m_Image, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___m_Image;

  /// @brief Field m_RectTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_RectTransform;

  /// @brief Field m_Toggle, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ___m_Toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_Dropdown__DropdownItem, 0x38>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown__DropdownItem, ___m_Text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown__DropdownItem, ___m_Image) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown__DropdownItem, ___m_RectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown__DropdownItem, ___m_Toggle) == 0x30, "Offset mismatch!");

} // namespace TMPro
// Type: ::OptionData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12348))
// CS Name: ::TMP_Dropdown::OptionData*
class CORDL_TYPE __TMP_Dropdown__OptionData : public ::System::Object {
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

  /// @brief Method get_text, addr 0x2c076dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_text, addr 0x2c076e4, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method get_image, addr 0x2c076ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Sprite* get_image();

  /// @brief Method set_image, addr 0x2c076f4, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::Sprite* value);

  static inline ::TMPro::__TMP_Dropdown__OptionData* New_ctor();

  /// @brief Method .ctor, addr 0x2c044f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::__TMP_Dropdown__OptionData* New_ctor(::StringW text);

  /// @brief Method .ctor, addr 0x2c0514c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  static inline ::TMPro::__TMP_Dropdown__OptionData* New_ctor(::UnityEngine::Sprite* image);

  /// @brief Method .ctor, addr 0x2c052cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Sprite* image);

  static inline ::TMPro::__TMP_Dropdown__OptionData* New_ctor(::StringW text, ::UnityEngine::Sprite* image);

  /// @brief Method .ctor, addr 0x2c076fc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::UnityEngine::Sprite* image);

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown__OptionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_Dropdown__OptionData(__TMP_Dropdown__OptionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown__OptionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_Dropdown__OptionData(__TMP_Dropdown__OptionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_Dropdown__OptionData();

public:
  /// @brief Field m_Text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_Image, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* ___m_Image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_Dropdown__OptionData, 0x20>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown__OptionData, ___m_Text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown__OptionData, ___m_Image) == 0x18, "Offset mismatch!");

} // namespace TMPro
// Type: ::OptionDataList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12349))
// CS Name: ::TMP_Dropdown::OptionDataList*
class CORDL_TYPE __TMP_Dropdown__OptionDataList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Options, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Options, put = __set_m_Options))::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* m_Options;

  __declspec(property(get = get_options, put = set_options))::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* options;

  constexpr ::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>*& __get_m_Options();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>*> const& __get_m_Options() const;

  constexpr void __set_m_Options(::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* value);

  /// @brief Method get_options, addr 0x2c07728, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* get_options();

  /// @brief Method set_options, addr 0x2c07730, size 0x8, virtual false, abstract: false, final false
  inline void set_options(::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* value);

  static inline ::TMPro::__TMP_Dropdown__OptionDataList* New_ctor();

  /// @brief Method .ctor, addr 0x2c04b08, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown__OptionDataList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_Dropdown__OptionDataList(__TMP_Dropdown__OptionDataList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown__OptionDataList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_Dropdown__OptionDataList(__TMP_Dropdown__OptionDataList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_Dropdown__OptionDataList();

public:
  /// @brief Field m_Options, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* ___m_Options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_Dropdown__OptionDataList, 0x18>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown__OptionDataList, ___m_Options) == 0x10, "Offset mismatch!");

} // namespace TMPro
// Type: ::DropdownEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 98 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12350))
// CS Name: ::TMP_Dropdown::DropdownEvent*
class CORDL_TYPE __TMP_Dropdown__DropdownEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
  // Declarations
  static inline ::TMPro::__TMP_Dropdown__DropdownEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2c04b88, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown__DropdownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_Dropdown__DropdownEvent(__TMP_Dropdown__DropdownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown__DropdownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_Dropdown__DropdownEvent(__TMP_Dropdown__DropdownEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_Dropdown__DropdownEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_Dropdown__DropdownEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Type: ::<>c__DisplayClass69_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12351))
// CS Name: ::TMP_Dropdown::<>c__DisplayClass69_0*
class CORDL_TYPE __TMP_Dropdown____c__DisplayClass69_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field item, offset 0x10, size 0x8
  __declspec(property(get = __get_item, put = __set_item))::TMPro::__TMP_Dropdown__DropdownItem* item;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::TMPro::TMP_Dropdown* __4__this;

  constexpr ::TMPro::__TMP_Dropdown__DropdownItem*& __get_item();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_Dropdown__DropdownItem*> const& __get_item() const;

  constexpr void __set_item(::TMPro::__TMP_Dropdown__DropdownItem* value);

  constexpr ::TMPro::TMP_Dropdown*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Dropdown*> const& __get___4__this() const;

  constexpr void __set___4__this(::TMPro::TMP_Dropdown* value);

  static inline ::TMPro::__TMP_Dropdown____c__DisplayClass69_0* New_ctor();

  /// @brief Method .ctor, addr 0x2c06778, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Show>b__0, addr 0x2c07738, size 0x24, virtual false, abstract: false, final false
  inline void _Show_b__0(bool x);

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown____c__DisplayClass69_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_Dropdown____c__DisplayClass69_0(__TMP_Dropdown____c__DisplayClass69_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown____c__DisplayClass69_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_Dropdown____c__DisplayClass69_0(__TMP_Dropdown____c__DisplayClass69_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_Dropdown____c__DisplayClass69_0();

public:
  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  ::TMPro::__TMP_Dropdown__DropdownItem* ___item;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TMP_Dropdown* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_Dropdown____c__DisplayClass69_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown____c__DisplayClass69_0, ___item) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown____c__DisplayClass69_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace TMPro
// Type: ::<DelayedDestroyDropdownList>d__81
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12352))
// CS Name: ::TMP_Dropdown::<DelayedDestroyDropdownList>d__81*
class CORDL_TYPE __TMP_Dropdown___DelayedDestroyDropdownList_d__81 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __get_delay, put = __set_delay)) float_t delay;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::TMPro::TMP_Dropdown* __4__this;

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

  constexpr ::TMPro::TMP_Dropdown*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Dropdown*> const& __get___4__this() const;

  constexpr void __set___4__this(::TMPro::TMP_Dropdown* value);

  static inline ::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2c07398, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2c0775c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2c07760, size 0xac, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2c0780c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c07814, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c07854, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown___DelayedDestroyDropdownList_d__81", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_Dropdown___DelayedDestroyDropdownList_d__81(__TMP_Dropdown___DelayedDestroyDropdownList_d__81&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_Dropdown___DelayedDestroyDropdownList_d__81", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_Dropdown___DelayedDestroyDropdownList_d__81(__TMP_Dropdown___DelayedDestroyDropdownList_d__81 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_Dropdown___DelayedDestroyDropdownList_d__81();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TMP_Dropdown* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81, 0x30>, "Size mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81, _____4__this) == 0x28, "Offset mismatch!");

} // namespace TMPro
// Type: TMPro::TMP_Dropdown
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13119))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12353))
// CS Name: ::TMPro::TMP_Dropdown*
class CORDL_TYPE TMP_Dropdown : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using _DelayedDestroyDropdownList_d__81 = ::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81;

  using __c__DisplayClass69_0 = ::TMPro::__TMP_Dropdown____c__DisplayClass69_0;

  using DropdownEvent = ::TMPro::__TMP_Dropdown__DropdownEvent;

  using OptionDataList = ::TMPro::__TMP_Dropdown__OptionDataList;

  using OptionData = ::TMPro::__TMP_Dropdown__OptionData;

  using DropdownItem = ::TMPro::__TMP_Dropdown__DropdownItem;

  /// @brief Field m_Template, offset 0xf8, size 0x8
  __declspec(property(get = __get_m_Template, put = __set_m_Template))::UnityEngine::RectTransform* m_Template;

  /// @brief Field m_CaptionText, offset 0x100, size 0x8
  __declspec(property(get = __get_m_CaptionText, put = __set_m_CaptionText))::TMPro::TMP_Text* m_CaptionText;

  /// @brief Field m_CaptionImage, offset 0x108, size 0x8
  __declspec(property(get = __get_m_CaptionImage, put = __set_m_CaptionImage))::UnityEngine::UI::Image* m_CaptionImage;

  /// @brief Field m_Placeholder, offset 0x110, size 0x8
  __declspec(property(get = __get_m_Placeholder, put = __set_m_Placeholder))::UnityEngine::UI::Graphic* m_Placeholder;

  /// @brief Field m_ItemText, offset 0x118, size 0x8
  __declspec(property(get = __get_m_ItemText, put = __set_m_ItemText))::TMPro::TMP_Text* m_ItemText;

  /// @brief Field m_ItemImage, offset 0x120, size 0x8
  __declspec(property(get = __get_m_ItemImage, put = __set_m_ItemImage))::UnityEngine::UI::Image* m_ItemImage;

  /// @brief Field m_Value, offset 0x128, size 0x4
  __declspec(property(get = __get_m_Value, put = __set_m_Value)) int32_t m_Value;

  /// @brief Field m_Options, offset 0x130, size 0x8
  __declspec(property(get = __get_m_Options, put = __set_m_Options))::TMPro::__TMP_Dropdown__OptionDataList* m_Options;

  /// @brief Field m_OnValueChanged, offset 0x138, size 0x8
  __declspec(property(get = __get_m_OnValueChanged, put = __set_m_OnValueChanged))::TMPro::__TMP_Dropdown__DropdownEvent* m_OnValueChanged;

  /// @brief Field m_AlphaFadeSpeed, offset 0x140, size 0x4
  __declspec(property(get = __get_m_AlphaFadeSpeed, put = __set_m_AlphaFadeSpeed)) float_t m_AlphaFadeSpeed;

  /// @brief Field m_Dropdown, offset 0x148, size 0x8
  __declspec(property(get = __get_m_Dropdown, put = __set_m_Dropdown))::UnityEngine::GameObject* m_Dropdown;

  /// @brief Field m_Blocker, offset 0x150, size 0x8
  __declspec(property(get = __get_m_Blocker, put = __set_m_Blocker))::UnityEngine::GameObject* m_Blocker;

  /// @brief Field m_Items, offset 0x158, size 0x8
  __declspec(property(get = __get_m_Items, put = __set_m_Items))::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__DropdownItem*>* m_Items;

  /// @brief Field m_AlphaTweenRunner, offset 0x160, size 0x8
  __declspec(property(get = __get_m_AlphaTweenRunner, put = __set_m_AlphaTweenRunner))::TMPro::TweenRunner_1<::TMPro::FloatTween>* m_AlphaTweenRunner;

  /// @brief Field validTemplate, offset 0x168, size 0x1
  __declspec(property(get = __get_validTemplate, put = __set_validTemplate)) bool validTemplate;

  /// @brief Field m_Coroutine, offset 0x170, size 0x8
  __declspec(property(get = __get_m_Coroutine, put = __set_m_Coroutine))::UnityEngine::Coroutine* m_Coroutine;

  /// @brief Field s_NoOptionData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NoOptionData, put = setStaticF_s_NoOptionData))::TMPro::__TMP_Dropdown__OptionData* s_NoOptionData;

  __declspec(property(get = get_template, put = set_template))::UnityEngine::RectTransform* _cordl_template;

  __declspec(property(get = get_captionText, put = set_captionText))::TMPro::TMP_Text* captionText;

  __declspec(property(get = get_captionImage, put = set_captionImage))::UnityEngine::UI::Image* captionImage;

  __declspec(property(get = get_placeholder, put = set_placeholder))::UnityEngine::UI::Graphic* placeholder;

  __declspec(property(get = get_itemText, put = set_itemText))::TMPro::TMP_Text* itemText;

  __declspec(property(get = get_itemImage, put = set_itemImage))::UnityEngine::UI::Image* itemImage;

  __declspec(property(get = get_options, put = set_options))::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* options;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged))::TMPro::__TMP_Dropdown__DropdownEvent* onValueChanged;

  __declspec(property(get = get_alphaFadeSpeed, put = set_alphaFadeSpeed)) float_t alphaFadeSpeed;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  __declspec(property(get = get_IsExpanded)) bool IsExpanded;

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

  constexpr ::TMPro::TMP_Text*& __get_m_CaptionText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> const& __get_m_CaptionText() const;

  constexpr void __set_m_CaptionText(::TMPro::TMP_Text* value);

  constexpr ::UnityEngine::UI::Image*& __get_m_CaptionImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_m_CaptionImage() const;

  constexpr void __set_m_CaptionImage(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::UI::Graphic*& __get_m_Placeholder();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> const& __get_m_Placeholder() const;

  constexpr void __set_m_Placeholder(::UnityEngine::UI::Graphic* value);

  constexpr ::TMPro::TMP_Text*& __get_m_ItemText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> const& __get_m_ItemText() const;

  constexpr void __set_m_ItemText(::TMPro::TMP_Text* value);

  constexpr ::UnityEngine::UI::Image*& __get_m_ItemImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get_m_ItemImage() const;

  constexpr void __set_m_ItemImage(::UnityEngine::UI::Image* value);

  constexpr int32_t& __get_m_Value();

  constexpr int32_t const& __get_m_Value() const;

  constexpr void __set_m_Value(int32_t value);

  constexpr ::TMPro::__TMP_Dropdown__OptionDataList*& __get_m_Options();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_Dropdown__OptionDataList*> const& __get_m_Options() const;

  constexpr void __set_m_Options(::TMPro::__TMP_Dropdown__OptionDataList* value);

  constexpr ::TMPro::__TMP_Dropdown__DropdownEvent*& __get_m_OnValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_Dropdown__DropdownEvent*> const& __get_m_OnValueChanged() const;

  constexpr void __set_m_OnValueChanged(::TMPro::__TMP_Dropdown__DropdownEvent* value);

  constexpr float_t& __get_m_AlphaFadeSpeed();

  constexpr float_t const& __get_m_AlphaFadeSpeed() const;

  constexpr void __set_m_AlphaFadeSpeed(float_t value);

  constexpr ::UnityEngine::GameObject*& __get_m_Dropdown();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_Dropdown() const;

  constexpr void __set_m_Dropdown(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_Blocker();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_Blocker() const;

  constexpr void __set_m_Blocker(::UnityEngine::GameObject* value);

  constexpr ::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__DropdownItem*>*& __get_m_Items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__DropdownItem*>*> const& __get_m_Items() const;

  constexpr void __set_m_Items(::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__DropdownItem*>* value);

  constexpr ::TMPro::TweenRunner_1<::TMPro::FloatTween>*& __get_m_AlphaTweenRunner();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TweenRunner_1<::TMPro::FloatTween>*> const& __get_m_AlphaTweenRunner() const;

  constexpr void __set_m_AlphaTweenRunner(::TMPro::TweenRunner_1<::TMPro::FloatTween>* value);

  constexpr bool& __get_validTemplate();

  constexpr bool const& __get_validTemplate() const;

  constexpr void __set_validTemplate(bool value);

  constexpr ::UnityEngine::Coroutine*& __get_m_Coroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __get_m_Coroutine() const;

  constexpr void __set_m_Coroutine(::UnityEngine::Coroutine* value);

  static inline void setStaticF_s_NoOptionData(::TMPro::__TMP_Dropdown__OptionData* value);

  static inline ::TMPro::__TMP_Dropdown__OptionData* getStaticF_s_NoOptionData();

  /// @brief Method get_template, addr 0x2c047c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_template();

  /// @brief Method set_template, addr 0x2c044c0, size 0x8, virtual false, abstract: false, final false
  inline void set_template(::UnityEngine::RectTransform* value);

  /// @brief Method get_captionText, addr 0x2c047cc, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Text* get_captionText();

  /// @brief Method set_captionText, addr 0x2c044c8, size 0x8, virtual false, abstract: false, final false
  inline void set_captionText(::TMPro::TMP_Text* value);

  /// @brief Method get_captionImage, addr 0x2c047d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Image* get_captionImage();

  /// @brief Method set_captionImage, addr 0x2c047dc, size 0x8, virtual false, abstract: false, final false
  inline void set_captionImage(::UnityEngine::UI::Image* value);

  /// @brief Method get_placeholder, addr 0x2c047e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Graphic* get_placeholder();

  /// @brief Method set_placeholder, addr 0x2c047ec, size 0x8, virtual false, abstract: false, final false
  inline void set_placeholder(::UnityEngine::UI::Graphic* value);

  /// @brief Method get_itemText, addr 0x2c047f4, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Text* get_itemText();

  /// @brief Method set_itemText, addr 0x2c044d0, size 0x8, virtual false, abstract: false, final false
  inline void set_itemText(::TMPro::TMP_Text* value);

  /// @brief Method get_itemImage, addr 0x2c047fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Image* get_itemImage();

  /// @brief Method set_itemImage, addr 0x2c04804, size 0x8, virtual false, abstract: false, final false
  inline void set_itemImage(::UnityEngine::UI::Image* value);

  /// @brief Method get_options, addr 0x2c044d8, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* get_options();

  /// @brief Method set_options, addr 0x2c0480c, size 0x1c, virtual false, abstract: false, final false
  inline void set_options(::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* value);

  /// @brief Method get_onValueChanged, addr 0x2c04828, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_Dropdown__DropdownEvent* get_onValueChanged();

  /// @brief Method set_onValueChanged, addr 0x2c04830, size 0x8, virtual false, abstract: false, final false
  inline void set_onValueChanged(::TMPro::__TMP_Dropdown__DropdownEvent* value);

  /// @brief Method get_alphaFadeSpeed, addr 0x2c04838, size 0x8, virtual false, abstract: false, final false
  inline float_t get_alphaFadeSpeed();

  /// @brief Method set_alphaFadeSpeed, addr 0x2c04840, size 0x8, virtual false, abstract: false, final false
  inline void set_alphaFadeSpeed(float_t value);

  /// @brief Method get_value, addr 0x2c04848, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method set_value, addr 0x2c04850, size 0x8, virtual false, abstract: false, final false
  inline void set_value(int32_t value);

  /// @brief Method SetValueWithoutNotify, addr 0x2c0499c, size 0x8, virtual false, abstract: false, final false
  inline void SetValueWithoutNotify(int32_t input);

  /// @brief Method SetValue, addr 0x2c04858, size 0x144, virtual false, abstract: false, final false
  /// @param sendCallback: bool (default: true)
  inline void SetValue(int32_t value, bool sendCallback = true);

  /// @brief Method get_IsExpanded, addr 0x2c049a4, size 0x60, virtual false, abstract: false, final false
  inline bool get_IsExpanded();

  static inline ::TMPro::TMP_Dropdown* New_ctor();

  /// @brief Method .ctor, addr 0x2c04a04, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Awake, addr 0x2c04bd0, size 0xfc, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x2c04ccc, size 0x94, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method OnDisable, addr 0x2c04d60, size 0x94, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method RefreshShownValue, addr 0x2c044fc, size 0x238, virtual false, abstract: false, final false
  inline void RefreshShownValue();

  /// @brief Method AddOptions, addr 0x2c04f8c, size 0x68, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__OptionData*>* options);

  /// @brief Method AddOptions, addr 0x2c04ff4, size 0x158, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::StringW>* options);

  /// @brief Method AddOptions, addr 0x2c05174, size 0x158, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* options);

  /// @brief Method ClearOptions, addr 0x2c052f4, size 0xb0, virtual false, abstract: false, final false
  inline void ClearOptions();

  /// @brief Method SetupTemplate, addr 0x2c053a4, size 0x65c, virtual false, abstract: false, final false
  inline void SetupTemplate();

  /// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetOrAddComponent(::UnityEngine::GameObject* go);

  /// @brief Method OnPointerClick, addr 0x2c05a00, size 0x4, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit, addr 0x2c0665c, size 0x4, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnCancel, addr 0x2c06660, size 0x4, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Show, addr 0x2c05a04, size 0xc58, virtual false, abstract: false, final false
  inline void Show();

  /// @brief Method CreateBlocker, addr 0x2c06b94, size 0x4cc, virtual true, abstract: false, final false
  inline ::UnityEngine::GameObject* CreateBlocker(::UnityEngine::Canvas* rootCanvas);

  /// @brief Method DestroyBlocker, addr 0x2c07060, size 0x58, virtual true, abstract: false, final false
  inline void DestroyBlocker(::UnityEngine::GameObject* blocker);

  /// @brief Method CreateDropdownList, addr 0x2c070b8, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityEngine::GameObject* CreateDropdownList(::UnityEngine::GameObject* _cordl_template);

  /// @brief Method DestroyDropdownList, addr 0x2c07124, size 0x58, virtual true, abstract: false, final false
  inline void DestroyDropdownList(::UnityEngine::GameObject* dropdownList);

  /// @brief Method CreateItem, addr 0x2c0717c, size 0x6c, virtual true, abstract: false, final false
  inline ::TMPro::__TMP_Dropdown__DropdownItem* CreateItem(::TMPro::__TMP_Dropdown__DropdownItem* itemTemplate);

  /// @brief Method DestroyItem, addr 0x2c071e8, size 0x4, virtual true, abstract: false, final false
  inline void DestroyItem(::TMPro::__TMP_Dropdown__DropdownItem* item);

  /// @brief Method AddItem, addr 0x2c06780, size 0x2f0, virtual false, abstract: false, final false
  inline ::TMPro::__TMP_Dropdown__DropdownItem* AddItem(::TMPro::__TMP_Dropdown__OptionData* data, bool selected, ::TMPro::__TMP_Dropdown__DropdownItem* itemTemplate,
                                                        ::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__DropdownItem*>* items);

  /// @brief Method AlphaFadeList, addr 0x2c071ec, size 0x80, virtual false, abstract: false, final false
  inline void AlphaFadeList(float_t duration, float_t alpha);

  /// @brief Method AlphaFadeList, addr 0x2c06a70, size 0x124, virtual false, abstract: false, final false
  inline void AlphaFadeList(float_t duration, float_t start, float_t end);

  /// @brief Method SetAlpha, addr 0x2c0726c, size 0xb4, virtual false, abstract: false, final false
  inline void SetAlpha(float_t alpha);

  /// @brief Method Hide, addr 0x2c06664, size 0x114, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method DelayedDestroyDropdownList, addr 0x2c07320, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayedDestroyDropdownList(float_t delay);

  /// @brief Method ImmediateDestroyDropdownList, addr 0x2c04df4, size 0x198, virtual false, abstract: false, final false
  inline void ImmediateDestroyDropdownList();

  /// @brief Method OnSelectItem, addr 0x2c073c0, size 0x134, virtual false, abstract: false, final false
  inline void OnSelectItem(::UnityEngine::UI::Toggle* toggle);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Dropdown(TMP_Dropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Dropdown(TMP_Dropdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Dropdown();

public:
  /// @brief Field m_Template, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_Template;

  /// @brief Field m_CaptionText, offset: 0x100, size: 0x8, def value: None
  ::TMPro::TMP_Text* ___m_CaptionText;

  /// @brief Field m_CaptionImage, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___m_CaptionImage;

  /// @brief Field m_Placeholder, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UI::Graphic* ___m_Placeholder;

  /// @brief Field m_ItemText, offset: 0x118, size: 0x8, def value: None
  ::TMPro::TMP_Text* ___m_ItemText;

  /// @brief Field m_ItemImage, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ___m_ItemImage;

  /// @brief Field m_Value, offset: 0x128, size: 0x4, def value: None
  int32_t ___m_Value;

  /// @brief Field m_Options, offset: 0x130, size: 0x8, def value: None
  ::TMPro::__TMP_Dropdown__OptionDataList* ___m_Options;

  /// @brief Field m_OnValueChanged, offset: 0x138, size: 0x8, def value: None
  ::TMPro::__TMP_Dropdown__DropdownEvent* ___m_OnValueChanged;

  /// @brief Field m_AlphaFadeSpeed, offset: 0x140, size: 0x4, def value: None
  float_t ___m_AlphaFadeSpeed;

  /// @brief Field m_Dropdown, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_Dropdown;

  /// @brief Field m_Blocker, offset: 0x150, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_Blocker;

  /// @brief Field m_Items, offset: 0x158, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::__TMP_Dropdown__DropdownItem*>* ___m_Items;

  /// @brief Field m_AlphaTweenRunner, offset: 0x160, size: 0x8, def value: None
  ::TMPro::TweenRunner_1<::TMPro::FloatTween>* ___m_AlphaTweenRunner;

  /// @brief Field validTemplate, offset: 0x168, size: 0x1, def value: None
  bool ___validTemplate;

  /// @brief Field m_Coroutine, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_Coroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Dropdown, 0x178>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Template) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_CaptionText) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_CaptionImage) == 0x108, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Placeholder) == 0x110, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_ItemText) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_ItemImage) == 0x120, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Value) == 0x128, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Options) == 0x130, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_OnValueChanged) == 0x138, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_AlphaFadeSpeed) == 0x140, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Dropdown) == 0x148, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Blocker) == 0x150, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Items) == 0x158, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_AlphaTweenRunner) == 0x160, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___validTemplate) == 0x168, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Coroutine) == 0x170, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Dropdown);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown*, "TMPro", "TMP_Dropdown");
NEED_NO_BOX(::TMPro::__TMP_Dropdown__DropdownEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_Dropdown__DropdownEvent*, "TMPro", "TMP_Dropdown/DropdownEvent");
NEED_NO_BOX(::TMPro::__TMP_Dropdown__DropdownItem);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_Dropdown__DropdownItem*, "TMPro", "TMP_Dropdown/DropdownItem");
NEED_NO_BOX(::TMPro::__TMP_Dropdown__OptionData);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_Dropdown__OptionData*, "TMPro", "TMP_Dropdown/OptionData");
NEED_NO_BOX(::TMPro::__TMP_Dropdown__OptionDataList);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_Dropdown__OptionDataList*, "TMPro", "TMP_Dropdown/OptionDataList");
NEED_NO_BOX(::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_Dropdown___DelayedDestroyDropdownList_d__81*, "TMPro", "TMP_Dropdown/<DelayedDestroyDropdownList>d__81");
NEED_NO_BOX(::TMPro::__TMP_Dropdown____c__DisplayClass69_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_Dropdown____c__DisplayClass69_0*, "TMPro", "TMP_Dropdown/<>c__DisplayClass69_0");
