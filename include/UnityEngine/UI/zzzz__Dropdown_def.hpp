#pragma once
// IWYU pragma private; include "UnityEngine/UI/Dropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ICancelHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Dropdown)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
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
class Dropdown_DropdownEvent;
}
namespace UnityEngine::UI {
class Dropdown_DropdownItem;
}
namespace UnityEngine::UI {
class Dropdown_OptionDataList;
}
namespace UnityEngine::UI {
class Dropdown_OptionData;
}
namespace UnityEngine::UI {
class Dropdown__DelayedDestroyDropdownList_d__75;
}
namespace UnityEngine::UI {
class Dropdown___c__DisplayClass63_0;
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
class Dropdown_DropdownEvent;
}
namespace UnityEngine::UI {
class Dropdown_DropdownItem;
}
namespace UnityEngine::UI {
class Dropdown_OptionData;
}
namespace UnityEngine::UI {
class Dropdown_OptionDataList;
}
namespace UnityEngine::UI {
class Dropdown__DelayedDestroyDropdownList_d__75;
}
namespace UnityEngine::UI {
class Dropdown___c__DisplayClass63_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Dropdown);
MARK_REF_PTR_T(::UnityEngine::UI::Dropdown_DropdownEvent);
MARK_REF_PTR_T(::UnityEngine::UI::Dropdown_DropdownItem);
MARK_REF_PTR_T(::UnityEngine::UI::Dropdown_OptionData);
MARK_REF_PTR_T(::UnityEngine::UI::Dropdown_OptionDataList);
MARK_REF_PTR_T(::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75);
MARK_REF_PTR_T(::UnityEngine::UI::Dropdown___c__DisplayClass63_0);
// Dependencies UnityEngine.EventSystems.ICancelHandler, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerEnterHandler, UnityEngine.MonoBehaviour
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Dropdown/DropdownItem
class CORDL_TYPE Dropdown_DropdownItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_image, put = set_image)) ::UnityW<::UnityEngine::UI::Image> image;

  /// @brief Field m_Image, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Image, put = __cordl_internal_set_m_Image)) ::UnityW<::UnityEngine::UI::Image> m_Image;

  /// @brief Field m_RectTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransform, put = __cordl_internal_set_m_RectTransform)) ::UnityW<::UnityEngine::RectTransform> m_RectTransform;

  /// @brief Field m_Text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityW<::UnityEngine::UI::Text> m_Text;

  /// @brief Field m_Toggle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Toggle, put = __cordl_internal_set_m_Toggle)) ::UnityW<::UnityEngine::UI::Toggle> m_Toggle;

  __declspec(property(get = get_rectTransform, put = set_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_text, put = set_text)) ::UnityW<::UnityEngine::UI::Text> text;

  __declspec(property(get = get_toggle, put = set_toggle)) ::UnityW<::UnityEngine::UI::Toggle> toggle;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  static inline ::UnityEngine::UI::Dropdown_DropdownItem* New_ctor();

  /// @brief Method OnCancel, addr 0x4961328, size 0xac, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x49612ac, size 0x7c, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x49613d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_image, addr 0x496127c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_image();

  /// @brief Method get_rectTransform, addr 0x496128c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_text, addr 0x496126c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_text();

  /// @brief Method get_toggle, addr 0x496129c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Toggle> get_toggle();

  /// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Method set_image, addr 0x4961284, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::UI::Image* value);

  /// @brief Method set_rectTransform, addr 0x4961294, size 0x8, virtual false, abstract: false, final false
  inline void set_rectTransform(::UnityEngine::RectTransform* value);

  /// @brief Method set_text, addr 0x4961274, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::UnityEngine::UI::Text* value);

  /// @brief Method set_toggle, addr 0x49612a4, size 0x8, virtual false, abstract: false, final false
  inline void set_toggle(::UnityEngine::UI::Toggle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dropdown_DropdownItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dropdown_DropdownItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown_DropdownItem(Dropdown_DropdownItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown_DropdownItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown_DropdownItem(Dropdown_DropdownItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15049 };

  /// @brief Field m_Text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_Text;

  /// @brief Field m_Image, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_Image;

  /// @brief Field m_RectTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_RectTransform;

  /// @brief Field m_Toggle, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___m_Toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Dropdown_DropdownItem, ___m_Text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown_DropdownItem, ___m_Image) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown_DropdownItem, ___m_RectTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown_DropdownItem, ___m_Toggle) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Dropdown_DropdownItem, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Dropdown/OptionData
class CORDL_TYPE Dropdown_OptionData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_image, put = set_image)) ::UnityW<::UnityEngine::Sprite> image;

  /// @brief Field m_Image, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Image, put = __cordl_internal_set_m_Image)) ::UnityW<::UnityEngine::Sprite> m_Image;

  /// @brief Field m_Text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  static inline ::UnityEngine::UI::Dropdown_OptionData* New_ctor();

  static inline ::UnityEngine::UI::Dropdown_OptionData* New_ctor(::UnityEngine::Sprite* image);

  static inline ::UnityEngine::UI::Dropdown_OptionData* New_ctor(::StringW text);

  static inline ::UnityEngine::UI::Dropdown_OptionData* New_ctor(::StringW text, ::UnityEngine::Sprite* image);

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_Image() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_Image();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  /// @brief Method .ctor, addr 0x495d998, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x495f060, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Sprite* image);

  /// @brief Method .ctor, addr 0x495eee4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  /// @brief Method .ctor, addr 0x49613fc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::UnityEngine::Sprite* image);

  /// @brief Method get_image, addr 0x49613ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_image();

  /// @brief Method get_text, addr 0x49613dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_image, addr 0x49613f4, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::Sprite* value);

  /// @brief Method set_text, addr 0x49613e4, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dropdown_OptionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dropdown_OptionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown_OptionData(Dropdown_OptionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown_OptionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown_OptionData(Dropdown_OptionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15050 };

  /// @brief Field m_Text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_Image, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_Image;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Dropdown_OptionData, ___m_Text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown_OptionData, ___m_Image) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Dropdown_OptionData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Dropdown/OptionDataList
class CORDL_TYPE Dropdown_OptionDataList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Options, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Options, put = __cordl_internal_set_m_Options)) ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* m_Options;

  __declspec(property(get = get_options, put = set_options)) ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* options;

  static inline ::UnityEngine::UI::Dropdown_OptionDataList* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* const& __cordl_internal_get_m_Options() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*& __cordl_internal_get_m_Options();

  constexpr void __cordl_internal_set_m_Options(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* value);

  /// @brief Method .ctor, addr 0x495e8c0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_options, addr 0x4961428, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* get_options();

  /// @brief Method set_options, addr 0x4961430, size 0x8, virtual false, abstract: false, final false
  inline void set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dropdown_OptionDataList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dropdown_OptionDataList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown_OptionDataList(Dropdown_OptionDataList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown_OptionDataList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown_OptionDataList(Dropdown_OptionDataList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15051 };

  /// @brief Field m_Options, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* ___m_Options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Dropdown_OptionDataList, ___m_Options) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Dropdown_OptionDataList, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Dropdown/DropdownEvent
class CORDL_TYPE Dropdown_DropdownEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::UI::Dropdown_DropdownEvent* New_ctor();

  /// @brief Method .ctor, addr 0x495e940, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dropdown_DropdownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dropdown_DropdownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown_DropdownEvent(Dropdown_DropdownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown_DropdownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown_DropdownEvent(Dropdown_DropdownEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15052 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Dropdown_DropdownEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Dropdown/<>c__DisplayClass63_0
class CORDL_TYPE Dropdown___c__DisplayClass63_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UI::Dropdown> __4__this;

  /// @brief Field item, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_item, put = __cordl_internal_set_item)) ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> item;

  static inline ::UnityEngine::UI::Dropdown___c__DisplayClass63_0* New_ctor();

  /// @brief Method <Show>b__0, addr 0x4961438, size 0x24, virtual false, abstract: false, final false
  inline void _Show_b__0(bool x);

  constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> const& __cordl_internal_get_item() const;

  constexpr ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>& __cordl_internal_get_item();

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Dropdown> value);

  constexpr void __cordl_internal_set_item(::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> value);

  /// @brief Method .ctor, addr 0x4960420, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dropdown___c__DisplayClass63_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dropdown___c__DisplayClass63_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown___c__DisplayClass63_0(Dropdown___c__DisplayClass63_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown___c__DisplayClass63_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown___c__DisplayClass63_0(Dropdown___c__DisplayClass63_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15053 };

  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> ___item;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Dropdown> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Dropdown___c__DisplayClass63_0, ___item) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown___c__DisplayClass63_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Dropdown___c__DisplayClass63_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75
class CORDL_TYPE Dropdown__DelayedDestroyDropdownList_d__75 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UI::Dropdown> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4961460, size 0xa8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x4961508, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4961510, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4961548, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x496145c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Dropdown> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x49610a0, size 0x28, virtual false, abstract: false, final false
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
  constexpr Dropdown__DelayedDestroyDropdownList_d__75();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dropdown__DelayedDestroyDropdownList_d__75", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown__DelayedDestroyDropdownList_d__75(Dropdown__DelayedDestroyDropdownList_d__75&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown__DelayedDestroyDropdownList_d__75", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown__DelayedDestroyDropdownList_d__75(Dropdown__DelayedDestroyDropdownList_d__75 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15054 };

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
static_assert(offsetof(::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.EventSystems.ICancelHandler, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerClickHandler, UnityEngine.EventSystems.ISubmitHandler,
// UnityEngine.UI.Selectable
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Dropdown
class CORDL_TYPE Dropdown : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using DropdownEvent = ::UnityEngine::UI::Dropdown_DropdownEvent;

  using DropdownItem = ::UnityEngine::UI::Dropdown_DropdownItem;

  using OptionData = ::UnityEngine::UI::Dropdown_OptionData;

  using OptionDataList = ::UnityEngine::UI::Dropdown_OptionDataList;

  using _DelayedDestroyDropdownList_d__75 = ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75;

  using __c__DisplayClass63_0 = ::UnityEngine::UI::Dropdown___c__DisplayClass63_0;

  __declspec(property(get = get_template, put = set_template)) ::UnityW<::UnityEngine::RectTransform> _cordl_template;

  __declspec(property(get = get_alphaFadeSpeed, put = set_alphaFadeSpeed)) float_t alphaFadeSpeed;

  __declspec(property(get = get_captionImage, put = set_captionImage)) ::UnityW<::UnityEngine::UI::Image> captionImage;

  __declspec(property(get = get_captionText, put = set_captionText)) ::UnityW<::UnityEngine::UI::Text> captionText;

  __declspec(property(get = get_itemImage, put = set_itemImage)) ::UnityW<::UnityEngine::UI::Image> itemImage;

  __declspec(property(get = get_itemText, put = set_itemText)) ::UnityW<::UnityEngine::UI::Text> itemText;

  /// @brief Field m_AlphaFadeSpeed, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlphaFadeSpeed, put = __cordl_internal_set_m_AlphaFadeSpeed)) float_t m_AlphaFadeSpeed;

  /// @brief Field m_AlphaTweenRunner, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlphaTweenRunner,
                      put = __cordl_internal_set_m_AlphaTweenRunner)) ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* m_AlphaTweenRunner;

  /// @brief Field m_Blocker, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Blocker, put = __cordl_internal_set_m_Blocker)) ::UnityW<::UnityEngine::GameObject> m_Blocker;

  /// @brief Field m_CaptionImage, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CaptionImage, put = __cordl_internal_set_m_CaptionImage)) ::UnityW<::UnityEngine::UI::Image> m_CaptionImage;

  /// @brief Field m_CaptionText, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CaptionText, put = __cordl_internal_set_m_CaptionText)) ::UnityW<::UnityEngine::UI::Text> m_CaptionText;

  /// @brief Field m_Dropdown, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dropdown, put = __cordl_internal_set_m_Dropdown)) ::UnityW<::UnityEngine::GameObject> m_Dropdown;

  /// @brief Field m_ItemImage, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemImage, put = __cordl_internal_set_m_ItemImage)) ::UnityW<::UnityEngine::UI::Image> m_ItemImage;

  /// @brief Field m_ItemText, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemText, put = __cordl_internal_set_m_ItemText)) ::UnityW<::UnityEngine::UI::Text> m_ItemText;

  /// @brief Field m_Items, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Items, put = __cordl_internal_set_m_Items)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>* m_Items;

  /// @brief Field m_OnValueChanged, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValueChanged, put = __cordl_internal_set_m_OnValueChanged)) ::UnityEngine::UI::Dropdown_DropdownEvent* m_OnValueChanged;

  /// @brief Field m_Options, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Options, put = __cordl_internal_set_m_Options)) ::UnityEngine::UI::Dropdown_OptionDataList* m_Options;

  /// @brief Field m_Template, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Template, put = __cordl_internal_set_m_Template)) ::UnityW<::UnityEngine::RectTransform> m_Template;

  /// @brief Field m_Value, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) int32_t m_Value;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged)) ::UnityEngine::UI::Dropdown_DropdownEvent* onValueChanged;

  __declspec(property(get = get_options, put = set_options)) ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* options;

  /// @brief Field s_NoOptionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_NoOptionData, put = setStaticF_s_NoOptionData)) ::UnityEngine::UI::Dropdown_OptionData* s_NoOptionData;

  /// @brief Field validTemplate, offset 0x168, size 0x1
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

  /// @brief Method AddItem, addr 0x4960428, size 0x2e4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> AddItem(::UnityEngine::UI::Dropdown_OptionData* data, bool selected, ::UnityEngine::UI::Dropdown_DropdownItem* itemTemplate,
                                                                    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>* items);

  /// @brief Method AddOptions, addr 0x495ed90, size 0x154, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::StringW>* options);

  /// @brief Method AddOptions, addr 0x495ed28, size 0x68, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* options);

  /// @brief Method AddOptions, addr 0x495ef0c, size 0x154, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>* options);

  /// @brief Method AlphaFadeList, addr 0x4960efc, size 0x80, virtual false, abstract: false, final false
  inline void AlphaFadeList(float_t duration, float_t alpha);

  /// @brief Method AlphaFadeList, addr 0x496070c, size 0x120, virtual false, abstract: false, final false
  inline void AlphaFadeList(float_t duration, float_t start, float_t end);

  /// @brief Method Awake, addr 0x495e988, size 0xfc, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearOptions, addr 0x495f088, size 0x78, virtual false, abstract: false, final false
  inline void ClearOptions();

  /// @brief Method CreateBlocker, addr 0x496082c, size 0x544, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateBlocker(::UnityEngine::Canvas* rootCanvas);

  /// @brief Method CreateDropdownList, addr 0x4960dc8, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateDropdownList(::UnityEngine::GameObject* _cordl_template);

  /// @brief Method CreateItem, addr 0x4960e8c, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> CreateItem(::UnityEngine::UI::Dropdown_DropdownItem* itemTemplate);

  /// @brief Method DelayedDestroyDropdownList, addr 0x4961030, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayedDestroyDropdownList(float_t delay);

  /// @brief Method DestroyBlocker, addr 0x4960d70, size 0x58, virtual true, abstract: false, final false
  inline void DestroyBlocker(::UnityEngine::GameObject* blocker);

  /// @brief Method DestroyDropdownList, addr 0x4960e34, size 0x58, virtual true, abstract: false, final false
  inline void DestroyDropdownList(::UnityEngine::GameObject* dropdownList);

  /// @brief Method DestroyItem, addr 0x4960ef8, size 0x4, virtual true, abstract: false, final false
  inline void DestroyItem(::UnityEngine::UI::Dropdown_DropdownItem* item);

  /// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetOrAddComponent(::UnityEngine::GameObject* go);

  /// @brief Method Hide, addr 0x4960324, size 0xfc, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method ImmediateDestroyDropdownList, addr 0x495ebb4, size 0x174, virtual false, abstract: false, final false
  inline void ImmediateDestroyDropdownList();

  static inline ::UnityEngine::UI::Dropdown* New_ctor();

  /// @brief Method OnCancel, addr 0x4960320, size 0x4, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDisable, addr 0x495eb20, size 0x94, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPointerClick, addr 0x495f798, size 0x4, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelectItem, addr 0x49610c8, size 0x134, virtual false, abstract: false, final false
  inline void OnSelectItem(::UnityEngine::UI::Toggle* toggle);

  /// @brief Method OnSubmit, addr 0x496031c, size 0x4, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method RefreshShownValue, addr 0x495d9a0, size 0x1dc, virtual false, abstract: false, final false
  inline void RefreshShownValue();

  /// @brief Method Set, addr 0x495e680, size 0x134, virtual false, abstract: false, final false
  inline void Set(int32_t value, bool sendCallback);

  /// @brief Method SetAlpha, addr 0x4960f7c, size 0xb4, virtual false, abstract: false, final false
  inline void SetAlpha(float_t alpha);

  /// @brief Method SetValueWithoutNotify, addr 0x495e7b4, size 0x8, virtual false, abstract: false, final false
  inline void SetValueWithoutNotify(int32_t input);

  /// @brief Method SetupTemplate, addr 0x495f100, size 0x698, virtual false, abstract: false, final false
  inline void SetupTemplate(::UnityEngine::Canvas* rootCanvas);

  /// @brief Method Show, addr 0x495f79c, size 0xb80, virtual false, abstract: false, final false
  inline void Show();

  /// @brief Method Start, addr 0x495ea84, size 0x9c, virtual true, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get_m_AlphaFadeSpeed() const;

  constexpr float_t& __cordl_internal_get_m_AlphaFadeSpeed();

  constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* const& __cordl_internal_get_m_AlphaTweenRunner() const;

  constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>*& __cordl_internal_get_m_AlphaTweenRunner();

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

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>* const& __cordl_internal_get_m_Items() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>*& __cordl_internal_get_m_Items();

  constexpr ::UnityEngine::UI::Dropdown_DropdownEvent* const& __cordl_internal_get_m_OnValueChanged() const;

  constexpr ::UnityEngine::UI::Dropdown_DropdownEvent*& __cordl_internal_get_m_OnValueChanged();

  constexpr ::UnityEngine::UI::Dropdown_OptionDataList* const& __cordl_internal_get_m_Options() const;

  constexpr ::UnityEngine::UI::Dropdown_OptionDataList*& __cordl_internal_get_m_Options();

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

  constexpr void __cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>* value);

  constexpr void __cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::Dropdown_DropdownEvent* value);

  constexpr void __cordl_internal_set_m_Options(::UnityEngine::UI::Dropdown_OptionDataList* value);

  constexpr void __cordl_internal_set_m_Template(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Value(int32_t value);

  constexpr void __cordl_internal_set_validTemplate(bool value);

  /// @brief Method .ctor, addr 0x495e7bc, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::Dropdown_OptionData* getStaticF_s_NoOptionData();

  /// @brief Method get_alphaFadeSpeed, addr 0x495e660, size 0x8, virtual false, abstract: false, final false
  inline float_t get_alphaFadeSpeed();

  /// @brief Method get_captionImage, addr 0x495e60c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_captionImage();

  /// @brief Method get_captionText, addr 0x495e604, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_captionText();

  /// @brief Method get_itemImage, addr 0x495e624, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_itemImage();

  /// @brief Method get_itemText, addr 0x495e61c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Text> get_itemText();

  /// @brief Method get_onValueChanged, addr 0x495e650, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Dropdown_DropdownEvent* get_onValueChanged();

  /// @brief Method get_options, addr 0x495d97c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* get_options();

  /// @brief Method get_template, addr 0x495e5fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_template();

  /// @brief Method get_value, addr 0x495e670, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  static inline void setStaticF_s_NoOptionData(::UnityEngine::UI::Dropdown_OptionData* value);

  /// @brief Method set_alphaFadeSpeed, addr 0x495e668, size 0x8, virtual false, abstract: false, final false
  inline void set_alphaFadeSpeed(float_t value);

  /// @brief Method set_captionImage, addr 0x495e614, size 0x8, virtual false, abstract: false, final false
  inline void set_captionImage(::UnityEngine::UI::Image* value);

  /// @brief Method set_captionText, addr 0x495d96c, size 0x8, virtual false, abstract: false, final false
  inline void set_captionText(::UnityEngine::UI::Text* value);

  /// @brief Method set_itemImage, addr 0x495e62c, size 0x8, virtual false, abstract: false, final false
  inline void set_itemImage(::UnityEngine::UI::Image* value);

  /// @brief Method set_itemText, addr 0x495d974, size 0x8, virtual false, abstract: false, final false
  inline void set_itemText(::UnityEngine::UI::Text* value);

  /// @brief Method set_onValueChanged, addr 0x495e658, size 0x8, virtual false, abstract: false, final false
  inline void set_onValueChanged(::UnityEngine::UI::Dropdown_DropdownEvent* value);

  /// @brief Method set_options, addr 0x495e634, size 0x1c, virtual false, abstract: false, final false
  inline void set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* value);

  /// @brief Method set_template, addr 0x495d964, size 0x8, virtual false, abstract: false, final false
  inline void set_template(::UnityEngine::RectTransform* value);

  /// @brief Method set_value, addr 0x495e678, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15055 };

  /// @brief Field kHighSortingLayer offset 0xffffffff size 0x4
  static constexpr int32_t kHighSortingLayer{ static_cast<int32_t>(0x7530) };

  /// @brief Field m_Template, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Template;

  /// @brief Field m_CaptionText, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_CaptionText;

  /// @brief Field m_CaptionImage, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_CaptionImage;

  /// @brief Field m_ItemText, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___m_ItemText;

  /// @brief Field m_ItemImage, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_ItemImage;

  /// @brief Field m_Value, offset: 0x128, size: 0x4, def value: None
  int32_t ___m_Value;

  /// @brief Field m_Options, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UI::Dropdown_OptionDataList* ___m_Options;

  /// @brief Field m_OnValueChanged, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UI::Dropdown_DropdownEvent* ___m_OnValueChanged;

  /// @brief Field m_AlphaFadeSpeed, offset: 0x140, size: 0x4, def value: None
  float_t ___m_AlphaFadeSpeed;

  /// @brief Field m_Dropdown, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Dropdown;

  /// @brief Field m_Blocker, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Blocker;

  /// @brief Field m_Items, offset: 0x158, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>* ___m_Items;

  /// @brief Field m_AlphaTweenRunner, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* ___m_AlphaTweenRunner;

  /// @brief Field validTemplate, offset: 0x168, size: 0x1, def value: None
  bool ___validTemplate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Template) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_CaptionText) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_CaptionImage) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_ItemText) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_ItemImage) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Value) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Options) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_OnValueChanged) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_AlphaFadeSpeed) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Dropdown) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Blocker) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_Items) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___m_AlphaTweenRunner) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Dropdown, ___validTemplate) == 0x168, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Dropdown, 0x170>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Dropdown);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown*, "UnityEngine.UI", "Dropdown");
NEED_NO_BOX(::UnityEngine::UI::Dropdown_DropdownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown_DropdownEvent*, "UnityEngine.UI", "Dropdown/DropdownEvent");
NEED_NO_BOX(::UnityEngine::UI::Dropdown_DropdownItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown_DropdownItem*, "UnityEngine.UI", "Dropdown/DropdownItem");
NEED_NO_BOX(::UnityEngine::UI::Dropdown_OptionData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown_OptionData*, "UnityEngine.UI", "Dropdown/OptionData");
NEED_NO_BOX(::UnityEngine::UI::Dropdown_OptionDataList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown_OptionDataList*, "UnityEngine.UI", "Dropdown/OptionDataList");
NEED_NO_BOX(::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*, "UnityEngine.UI", "Dropdown/<DelayedDestroyDropdownList>d__75");
NEED_NO_BOX(::UnityEngine::UI::Dropdown___c__DisplayClass63_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown___c__DisplayClass63_0*, "UnityEngine.UI", "Dropdown/<>c__DisplayClass63_0");
