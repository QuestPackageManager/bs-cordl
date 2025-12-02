#pragma once
// IWYU pragma private; include "TMPro/TMP_Dropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Dropdown)
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
namespace TMPro {
struct FloatTween;
}
namespace TMPro {
class TMP_Dropdown_DropdownEvent;
}
namespace TMPro {
class TMP_Dropdown_DropdownItem;
}
namespace TMPro {
class TMP_Dropdown_OptionDataList;
}
namespace TMPro {
class TMP_Dropdown_OptionData;
}
namespace TMPro {
class TMP_Dropdown__DelayedDestroyDropdownList_d__90;
}
namespace TMPro {
class TMP_Dropdown___c__DisplayClass76_0;
}
namespace TMPro {
class TMP_Dropdown___c__DisplayClass76_1;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
template <typename T> class TweenRunner_1;
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
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
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
namespace TMPro {
class TMP_Dropdown;
}
namespace TMPro {
class TMP_Dropdown_DropdownEvent;
}
namespace TMPro {
class TMP_Dropdown_DropdownItem;
}
namespace TMPro {
class TMP_Dropdown_OptionData;
}
namespace TMPro {
class TMP_Dropdown_OptionDataList;
}
namespace TMPro {
class TMP_Dropdown__DelayedDestroyDropdownList_d__90;
}
namespace TMPro {
class TMP_Dropdown___c__DisplayClass76_0;
}
namespace TMPro {
class TMP_Dropdown___c__DisplayClass76_1;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Dropdown);
MARK_REF_PTR_T(::TMPro::TMP_Dropdown_DropdownEvent);
MARK_REF_PTR_T(::TMPro::TMP_Dropdown_DropdownItem);
MARK_REF_PTR_T(::TMPro::TMP_Dropdown_OptionData);
MARK_REF_PTR_T(::TMPro::TMP_Dropdown_OptionDataList);
MARK_REF_PTR_T(::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90);
MARK_REF_PTR_T(::TMPro::TMP_Dropdown___c__DisplayClass76_0);
MARK_REF_PTR_T(::TMPro::TMP_Dropdown___c__DisplayClass76_1);
// Dependencies UnityEngine.MonoBehaviour
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Dropdown/DropdownItem
class CORDL_TYPE TMP_Dropdown_DropdownItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_image, put = set_image)) ::UnityW<::UnityEngine::UI::Image> image;

  /// @brief Field m_Image, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Image, put = __cordl_internal_set_m_Image)) ::UnityW<::UnityEngine::UI::Image> m_Image;

  /// @brief Field m_RectTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RectTransform, put = __cordl_internal_set_m_RectTransform)) ::UnityW<::UnityEngine::RectTransform> m_RectTransform;

  /// @brief Field m_Text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityW<::TMPro::TMP_Text> m_Text;

  /// @brief Field m_Toggle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Toggle, put = __cordl_internal_set_m_Toggle)) ::UnityW<::UnityEngine::UI::Toggle> m_Toggle;

  __declspec(property(get = get_rectTransform, put = set_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  __declspec(property(get = get_text, put = set_text)) ::UnityW<::TMPro::TMP_Text> text;

  __declspec(property(get = get_toggle, put = set_toggle)) ::UnityW<::UnityEngine::UI::Toggle> toggle;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  static inline ::TMPro::TMP_Dropdown_DropdownItem* New_ctor();

  /// @brief Method OnCancel, addr 0x6730c84, size 0xa8, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x6730bf8, size 0x8c, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_Image() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_Image();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_RectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_RectTransform();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_m_Text();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_m_Toggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_m_Toggle();

  constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Text(::UnityW<::TMPro::TMP_Text> value);

  constexpr void __cordl_internal_set_m_Toggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x6730d2c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_image, addr 0x6730bc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_image();

  /// @brief Method get_rectTransform, addr 0x6730bd8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  /// @brief Method get_text, addr 0x6730bb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Text> get_text();

  /// @brief Method get_toggle, addr 0x6730be8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Toggle> get_toggle();

  /// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Method set_image, addr 0x6730bd0, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::UI::Image* value);

  /// @brief Method set_rectTransform, addr 0x6730be0, size 0x8, virtual false, abstract: false, final false
  inline void set_rectTransform(::UnityEngine::RectTransform* value);

  /// @brief Method set_text, addr 0x6730bc0, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::TMPro::TMP_Text* value);

  /// @brief Method set_toggle, addr 0x6730bf0, size 0x8, virtual false, abstract: false, final false
  inline void set_toggle(::UnityEngine::UI::Toggle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Dropdown_DropdownItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown_DropdownItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Dropdown_DropdownItem(TMP_Dropdown_DropdownItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown_DropdownItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Dropdown_DropdownItem(TMP_Dropdown_DropdownItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15858 };

  /// @brief Field m_Text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ___m_Text;

  /// @brief Field m_Image, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_Image;

  /// @brief Field m_RectTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_RectTransform;

  /// @brief Field m_Toggle, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___m_Toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Dropdown_DropdownItem, ___m_Text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown_DropdownItem, ___m_Image) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown_DropdownItem, ___m_RectTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown_DropdownItem, ___m_Toggle) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Dropdown_DropdownItem, 0x40>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object, UnityEngine.Color
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Dropdown/OptionData
class CORDL_TYPE TMP_Dropdown_OptionData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_image, put = set_image)) ::UnityW<::UnityEngine::Sprite> image;

  /// @brief Field m_Color, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Color, put = __cordl_internal_set_m_Color)) ::UnityEngine::Color m_Color;

  /// @brief Field m_Image, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Image, put = __cordl_internal_set_m_Image)) ::UnityW<::UnityEngine::Sprite> m_Image;

  /// @brief Field m_Text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  static inline ::TMPro::TMP_Dropdown_OptionData* New_ctor();

  static inline ::TMPro::TMP_Dropdown_OptionData* New_ctor(::UnityEngine::Sprite* image);

  static inline ::TMPro::TMP_Dropdown_OptionData* New_ctor(::StringW text);

  static inline ::TMPro::TMP_Dropdown_OptionData* New_ctor(::StringW text, ::UnityEngine::Sprite* image, ::UnityEngine::Color color);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_Color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_Color();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_m_Image() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_m_Image();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_Color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  /// @brief Method .ctor, addr 0x672cdbc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x672e00c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Sprite* image);

  /// @brief Method .ctor, addr 0x672de8c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  /// @brief Method .ctor, addr 0x6730d68, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::UnityEngine::Sprite* image, ::UnityEngine::Color color);

  /// @brief Method get_color, addr 0x6730d50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_image, addr 0x6730d40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_image();

  /// @brief Method get_text, addr 0x6730d30, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_color, addr 0x6730d5c, size 0xc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_image, addr 0x6730d48, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::Sprite* value);

  /// @brief Method set_text, addr 0x6730d38, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Dropdown_OptionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown_OptionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Dropdown_OptionData(TMP_Dropdown_OptionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown_OptionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Dropdown_OptionData(TMP_Dropdown_OptionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15859 };

  /// @brief Field m_Text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_Image, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___m_Image;

  /// @brief Field m_Color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___m_Color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Dropdown_OptionData, ___m_Text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown_OptionData, ___m_Image) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown_OptionData, ___m_Color) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Dropdown_OptionData, 0x30>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Dropdown/OptionDataList
class CORDL_TYPE TMP_Dropdown_OptionDataList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Options, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Options, put = __cordl_internal_set_m_Options)) ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* m_Options;

  __declspec(property(get = get_options, put = set_options)) ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* options;

  static inline ::TMPro::TMP_Dropdown_OptionDataList* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* const& __cordl_internal_get_m_Options() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>*& __cordl_internal_get_m_Options();

  constexpr void __cordl_internal_set_m_Options(::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* value);

  /// @brief Method .ctor, addr 0x672d6ac, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_options, addr 0x6730d78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* get_options();

  /// @brief Method set_options, addr 0x6730d80, size 0x8, virtual false, abstract: false, final false
  inline void set_options(::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Dropdown_OptionDataList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown_OptionDataList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Dropdown_OptionDataList(TMP_Dropdown_OptionDataList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown_OptionDataList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Dropdown_OptionDataList(TMP_Dropdown_OptionDataList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15860 };

  /// @brief Field m_Options, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* ___m_Options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Dropdown_OptionDataList, ___m_Options) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Dropdown_OptionDataList, 0x18>, "Size mismatch!");

} // namespace TMPro
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Dropdown/DropdownEvent
class CORDL_TYPE TMP_Dropdown_DropdownEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
  // Declarations
  static inline ::TMPro::TMP_Dropdown_DropdownEvent* New_ctor();

  /// @brief Method .ctor, addr 0x672d720, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Dropdown_DropdownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown_DropdownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Dropdown_DropdownEvent(TMP_Dropdown_DropdownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown_DropdownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Dropdown_DropdownEvent(TMP_Dropdown_DropdownEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Dropdown_DropdownEvent, 0x30>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Dropdown/<>c__DisplayClass76_0
class CORDL_TYPE TMP_Dropdown___c__DisplayClass76_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::TMPro::TMP_Dropdown> __4__this;

  /// @brief Field everythingToggle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_everythingToggle, put = __cordl_internal_set_everythingToggle)) ::UnityW<::UnityEngine::UI::Toggle> everythingToggle;

  /// @brief Field nothingToggle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nothingToggle, put = __cordl_internal_set_nothingToggle)) ::UnityW<::UnityEngine::UI::Toggle> nothingToggle;

  static inline ::TMPro::TMP_Dropdown___c__DisplayClass76_0* New_ctor();

  /// @brief Method <Show>b__0, addr 0x6730d88, size 0x1c, virtual false, abstract: false, final false
  inline void _Show_b__0(bool x);

  /// @brief Method <Show>b__1, addr 0x6730da4, size 0x1c, virtual false, abstract: false, final false
  inline void _Show_b__1(bool x);

  constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_everythingToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_everythingToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_nothingToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_nothingToggle();

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TMP_Dropdown> value);

  constexpr void __cordl_internal_set_everythingToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set_nothingToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x672f940, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Dropdown___c__DisplayClass76_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown___c__DisplayClass76_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Dropdown___c__DisplayClass76_0(TMP_Dropdown___c__DisplayClass76_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown___c__DisplayClass76_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Dropdown___c__DisplayClass76_0(TMP_Dropdown___c__DisplayClass76_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15862 };

  /// @brief Field nothingToggle, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___nothingToggle;

  /// @brief Field everythingToggle, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___everythingToggle;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Dropdown> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Dropdown___c__DisplayClass76_0, ___nothingToggle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown___c__DisplayClass76_0, ___everythingToggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown___c__DisplayClass76_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Dropdown___c__DisplayClass76_0, 0x28>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Dropdown/<>c__DisplayClass76_1
class CORDL_TYPE TMP_Dropdown___c__DisplayClass76_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::TMPro::TMP_Dropdown> __4__this;

  /// @brief Field item, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_item, put = __cordl_internal_set_item)) ::UnityW<::TMPro::TMP_Dropdown_DropdownItem> item;

  static inline ::TMPro::TMP_Dropdown___c__DisplayClass76_1* New_ctor();

  /// @brief Method <Show>b__2, addr 0x6730dc0, size 0x24, virtual false, abstract: false, final false
  inline void _Show_b__2(bool x);

  constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::TMPro::TMP_Dropdown_DropdownItem> const& __cordl_internal_get_item() const;

  constexpr ::UnityW<::TMPro::TMP_Dropdown_DropdownItem>& __cordl_internal_get_item();

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TMP_Dropdown> value);

  constexpr void __cordl_internal_set_item(::UnityW<::TMPro::TMP_Dropdown_DropdownItem> value);

  /// @brief Method .ctor, addr 0x672fc74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Dropdown___c__DisplayClass76_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown___c__DisplayClass76_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Dropdown___c__DisplayClass76_1(TMP_Dropdown___c__DisplayClass76_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown___c__DisplayClass76_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Dropdown___c__DisplayClass76_1(TMP_Dropdown___c__DisplayClass76_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15863 };

  /// @brief Field item, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Dropdown_DropdownItem> ___item;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Dropdown> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Dropdown___c__DisplayClass76_1, ___item) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown___c__DisplayClass76_1, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Dropdown___c__DisplayClass76_1, 0x20>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__90
class CORDL_TYPE TMP_Dropdown__DelayedDestroyDropdownList_d__90 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::TMPro::TMP_Dropdown> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x6730de8, size 0xac, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x6730e94, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6730e9c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6730ed4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x6730de4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TMP_Dropdown> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x67306c8, size 0x8, virtual false, abstract: false, final false
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
  constexpr TMP_Dropdown__DelayedDestroyDropdownList_d__90();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown__DelayedDestroyDropdownList_d__90", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Dropdown__DelayedDestroyDropdownList_d__90(TMP_Dropdown__DelayedDestroyDropdownList_d__90&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown__DelayedDestroyDropdownList_d__90", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Dropdown__DelayedDestroyDropdownList_d__90(TMP_Dropdown__DelayedDestroyDropdownList_d__90 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15864 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Dropdown> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90, 0x30>, "Size mismatch!");

} // namespace TMPro
// Dependencies UnityEngine.UI.Selectable
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Dropdown
class CORDL_TYPE TMP_Dropdown : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using DropdownEvent = ::TMPro::TMP_Dropdown_DropdownEvent;

  using DropdownItem = ::TMPro::TMP_Dropdown_DropdownItem;

  using OptionData = ::TMPro::TMP_Dropdown_OptionData;

  using OptionDataList = ::TMPro::TMP_Dropdown_OptionDataList;

  using _DelayedDestroyDropdownList_d__90 = ::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90;

  using __c__DisplayClass76_0 = ::TMPro::TMP_Dropdown___c__DisplayClass76_0;

  using __c__DisplayClass76_1 = ::TMPro::TMP_Dropdown___c__DisplayClass76_1;

  __declspec(property(get = get_IsExpanded)) bool IsExpanded;

  __declspec(property(get = get_MultiSelect, put = set_MultiSelect)) bool MultiSelect;

  __declspec(property(get = get_template, put = set_template)) ::UnityW<::UnityEngine::RectTransform> _cordl_template;

  __declspec(property(get = get_alphaFadeSpeed, put = set_alphaFadeSpeed)) float_t alphaFadeSpeed;

  __declspec(property(get = get_captionImage, put = set_captionImage)) ::UnityW<::UnityEngine::UI::Image> captionImage;

  __declspec(property(get = get_captionText, put = set_captionText)) ::UnityW<::TMPro::TMP_Text> captionText;

  __declspec(property(get = get_itemImage, put = set_itemImage)) ::UnityW<::UnityEngine::UI::Image> itemImage;

  __declspec(property(get = get_itemText, put = set_itemText)) ::UnityW<::TMPro::TMP_Text> itemText;

  /// @brief Field k_EverythingOption, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EverythingOption, put = setStaticF_k_EverythingOption)) ::TMPro::TMP_Dropdown_OptionData* k_EverythingOption;

  /// @brief Field k_MixedOption, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_MixedOption, put = setStaticF_k_MixedOption)) ::TMPro::TMP_Dropdown_OptionData* k_MixedOption;

  /// @brief Field k_NothingOption, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_NothingOption, put = setStaticF_k_NothingOption)) ::TMPro::TMP_Dropdown_OptionData* k_NothingOption;

  /// @brief Field m_AlphaFadeSpeed, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlphaFadeSpeed, put = __cordl_internal_set_m_AlphaFadeSpeed)) float_t m_AlphaFadeSpeed;

  /// @brief Field m_AlphaTweenRunner, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlphaTweenRunner, put = __cordl_internal_set_m_AlphaTweenRunner)) ::TMPro::TweenRunner_1<::TMPro::FloatTween>* m_AlphaTweenRunner;

  /// @brief Field m_Blocker, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Blocker, put = __cordl_internal_set_m_Blocker)) ::UnityW<::UnityEngine::GameObject> m_Blocker;

  /// @brief Field m_CaptionImage, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CaptionImage, put = __cordl_internal_set_m_CaptionImage)) ::UnityW<::UnityEngine::UI::Image> m_CaptionImage;

  /// @brief Field m_CaptionText, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CaptionText, put = __cordl_internal_set_m_CaptionText)) ::UnityW<::TMPro::TMP_Text> m_CaptionText;

  /// @brief Field m_Coroutine, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Coroutine, put = __cordl_internal_set_m_Coroutine)) ::UnityEngine::Coroutine* m_Coroutine;

  /// @brief Field m_Dropdown, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dropdown, put = __cordl_internal_set_m_Dropdown)) ::UnityW<::UnityEngine::GameObject> m_Dropdown;

  /// @brief Field m_ItemImage, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemImage, put = __cordl_internal_set_m_ItemImage)) ::UnityW<::UnityEngine::UI::Image> m_ItemImage;

  /// @brief Field m_ItemText, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ItemText, put = __cordl_internal_set_m_ItemText)) ::UnityW<::TMPro::TMP_Text> m_ItemText;

  /// @brief Field m_Items, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Items, put = __cordl_internal_set_m_Items)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Dropdown_DropdownItem>>* m_Items;

  /// @brief Field m_MultiSelect, offset 0x134, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MultiSelect, put = __cordl_internal_set_m_MultiSelect)) bool m_MultiSelect;

  /// @brief Field m_OnValueChanged, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnValueChanged, put = __cordl_internal_set_m_OnValueChanged)) ::TMPro::TMP_Dropdown_DropdownEvent* m_OnValueChanged;

  /// @brief Field m_Options, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Options, put = __cordl_internal_set_m_Options)) ::TMPro::TMP_Dropdown_OptionDataList* m_Options;

  /// @brief Field m_Placeholder, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Placeholder, put = __cordl_internal_set_m_Placeholder)) ::UnityW<::UnityEngine::UI::Graphic> m_Placeholder;

  /// @brief Field m_Template, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Template, put = __cordl_internal_set_m_Template)) ::UnityW<::UnityEngine::RectTransform> m_Template;

  /// @brief Field m_Value, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) int32_t m_Value;

  __declspec(property(get = get_onValueChanged, put = set_onValueChanged)) ::TMPro::TMP_Dropdown_DropdownEvent* onValueChanged;

  __declspec(property(get = get_options, put = set_options)) ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* options;

  __declspec(property(get = get_placeholder, put = set_placeholder)) ::UnityW<::UnityEngine::UI::Graphic> placeholder;

  /// @brief Field s_NoOptionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_NoOptionData, put = setStaticF_s_NoOptionData)) ::TMPro::TMP_Dropdown_OptionData* s_NoOptionData;

  /// @brief Field validTemplate, offset 0x170, size 0x1
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

  /// @brief Method AddItem, addr 0x672f944, size 0x330, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Dropdown_DropdownItem> AddItem(::TMPro::TMP_Dropdown_OptionData* data, bool selected, ::TMPro::TMP_Dropdown_DropdownItem* itemTemplate,
                                                              ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Dropdown_DropdownItem>>* items);

  /// @brief Method AddOptions, addr 0x672dd1c, size 0x170, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::StringW>* options);

  /// @brief Method AddOptions, addr 0x672dc98, size 0x84, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* options);

  /// @brief Method AddOptions, addr 0x672de9c, size 0x170, virtual false, abstract: false, final false
  inline void AddOptions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>* options);

  /// @brief Method AlphaFadeList, addr 0x6730524, size 0x84, virtual false, abstract: false, final false
  inline void AlphaFadeList(float_t duration, float_t alpha);

  /// @brief Method AlphaFadeList, addr 0x672fc78, size 0x134, virtual false, abstract: false, final false
  inline void AlphaFadeList(float_t duration, float_t start, float_t end);

  /// @brief Method Awake, addr 0x672d76c, size 0x128, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearOptions, addr 0x672e01c, size 0xbc, virtual false, abstract: false, final false
  inline void ClearOptions();

  /// @brief Method CreateBlocker, addr 0x672fe20, size 0x560, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateBlocker(::UnityEngine::Canvas* rootCanvas);

  /// @brief Method CreateDropdownList, addr 0x67303dc, size 0x74, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateDropdownList(::UnityEngine::GameObject* _cordl_template);

  /// @brief Method CreateItem, addr 0x67304ac, size 0x74, virtual true, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Dropdown_DropdownItem> CreateItem(::TMPro::TMP_Dropdown_DropdownItem* itemTemplate);

  /// @brief Method DelayedDestroyDropdownList, addr 0x6730664, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DelayedDestroyDropdownList(float_t delay);

  /// @brief Method DestroyBlocker, addr 0x6730380, size 0x5c, virtual true, abstract: false, final false
  inline void DestroyBlocker(::UnityEngine::GameObject* blocker);

  /// @brief Method DestroyDropdownList, addr 0x6730450, size 0x5c, virtual true, abstract: false, final false
  inline void DestroyDropdownList(::UnityEngine::GameObject* dropdownList);

  /// @brief Method DestroyItem, addr 0x6730520, size 0x4, virtual true, abstract: false, final false
  inline void DestroyItem(::TMPro::TMP_Dropdown_DropdownItem* item);

  /// @brief Method EverythingValue, addr 0x672fdac, size 0x74, virtual false, abstract: false, final false
  static inline int32_t EverythingValue(int32_t count);

  /// @brief Method FirstActiveFlagIndex, addr 0x672db64, size 0x28, virtual false, abstract: false, final false
  static inline int32_t FirstActiveFlagIndex(int32_t value);

  /// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetOrAddComponent(::UnityEngine::GameObject* go);

  /// @brief Method Hide, addr 0x672f828, size 0x118, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method ImmediateDestroyDropdownList, addr 0x672d9b8, size 0x1ac, virtual false, abstract: false, final false
  inline void ImmediateDestroyDropdownList();

  /// @brief Method IsEverythingValue, addr 0x672db8c, size 0x10c, virtual false, abstract: false, final false
  static inline bool IsEverythingValue(int32_t count, int32_t value);

  static inline ::TMPro::TMP_Dropdown* New_ctor();

  /// @brief Method OnCancel, addr 0x672f824, size 0x4, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDisable, addr 0x672d920, size 0x98, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPointerClick, addr 0x672e748, size 0x4, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelectItem, addr 0x67306d0, size 0x3a8, virtual false, abstract: false, final false
  inline void OnSelectItem(::UnityEngine::UI::Toggle* toggle);

  /// @brief Method OnSubmit, addr 0x672f820, size 0x4, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method RefreshShownValue, addr 0x672cdc8, size 0x49c, virtual false, abstract: false, final false
  inline void RefreshShownValue();

  /// @brief Method SetAlpha, addr 0x67305a8, size 0xbc, virtual false, abstract: false, final false
  inline void SetAlpha(float_t alpha);

  /// @brief Method SetValue, addr 0x672d388, size 0x1a0, virtual false, abstract: false, final false
  inline void SetValue(int32_t value, bool sendCallback);

  /// @brief Method SetValueWithoutNotify, addr 0x672d528, size 0x8, virtual false, abstract: false, final false
  inline void SetValueWithoutNotify(int32_t input);

  /// @brief Method SetupTemplate, addr 0x672e0d8, size 0x670, virtual false, abstract: false, final false
  inline void SetupTemplate();

  /// @brief Method Show, addr 0x672e74c, size 0x10d4, virtual false, abstract: false, final false
  inline void Show();

  /// @brief Method Start, addr 0x672d894, size 0x8c, virtual true, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get_m_AlphaFadeSpeed() const;

  constexpr float_t& __cordl_internal_get_m_AlphaFadeSpeed();

  constexpr ::TMPro::TweenRunner_1<::TMPro::FloatTween>* const& __cordl_internal_get_m_AlphaTweenRunner() const;

  constexpr ::TMPro::TweenRunner_1<::TMPro::FloatTween>*& __cordl_internal_get_m_AlphaTweenRunner();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Blocker() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Blocker();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_CaptionImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_CaptionImage();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_m_CaptionText() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_m_CaptionText();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_m_Coroutine() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_m_Coroutine();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Dropdown() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Dropdown();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_ItemImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_ItemImage();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_m_ItemText() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_m_ItemText();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Dropdown_DropdownItem>>* const& __cordl_internal_get_m_Items() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Dropdown_DropdownItem>>*& __cordl_internal_get_m_Items();

  constexpr bool const& __cordl_internal_get_m_MultiSelect() const;

  constexpr bool& __cordl_internal_get_m_MultiSelect();

  constexpr ::TMPro::TMP_Dropdown_DropdownEvent* const& __cordl_internal_get_m_OnValueChanged() const;

  constexpr ::TMPro::TMP_Dropdown_DropdownEvent*& __cordl_internal_get_m_OnValueChanged();

  constexpr ::TMPro::TMP_Dropdown_OptionDataList* const& __cordl_internal_get_m_Options() const;

  constexpr ::TMPro::TMP_Dropdown_OptionDataList*& __cordl_internal_get_m_Options();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_Placeholder() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_Placeholder();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Template() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Template();

  constexpr int32_t const& __cordl_internal_get_m_Value() const;

  constexpr int32_t& __cordl_internal_get_m_Value();

  constexpr bool const& __cordl_internal_get_validTemplate() const;

  constexpr bool& __cordl_internal_get_validTemplate();

  constexpr void __cordl_internal_set_m_AlphaFadeSpeed(float_t value);

  constexpr void __cordl_internal_set_m_AlphaTweenRunner(::TMPro::TweenRunner_1<::TMPro::FloatTween>* value);

  constexpr void __cordl_internal_set_m_Blocker(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_CaptionImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_CaptionText(::UnityW<::TMPro::TMP_Text> value);

  constexpr void __cordl_internal_set_m_Coroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_m_Dropdown(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_ItemImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_ItemText(::UnityW<::TMPro::TMP_Text> value);

  constexpr void __cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Dropdown_DropdownItem>>* value);

  constexpr void __cordl_internal_set_m_MultiSelect(bool value);

  constexpr void __cordl_internal_set_m_OnValueChanged(::TMPro::TMP_Dropdown_DropdownEvent* value);

  constexpr void __cordl_internal_set_m_Options(::TMPro::TMP_Dropdown_OptionDataList* value);

  constexpr void __cordl_internal_set_m_Placeholder(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr void __cordl_internal_set_m_Template(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Value(int32_t value);

  constexpr void __cordl_internal_set_validTemplate(bool value);

  /// @brief Method .ctor, addr 0x672d5a4, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_Dropdown_OptionData* getStaticF_k_EverythingOption();

  static inline ::TMPro::TMP_Dropdown_OptionData* getStaticF_k_MixedOption();

  static inline ::TMPro::TMP_Dropdown_OptionData* getStaticF_k_NothingOption();

  static inline ::TMPro::TMP_Dropdown_OptionData* getStaticF_s_NoOptionData();

  /// @brief Method get_IsExpanded, addr 0x672d530, size 0x64, virtual false, abstract: false, final false
  inline bool get_IsExpanded();

  /// @brief Method get_MultiSelect, addr 0x672d594, size 0x8, virtual false, abstract: false, final false
  inline bool get_MultiSelect();

  /// @brief Method get_alphaFadeSpeed, addr 0x672d368, size 0x8, virtual false, abstract: false, final false
  inline float_t get_alphaFadeSpeed();

  /// @brief Method get_captionImage, addr 0x672d308, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_captionImage();

  /// @brief Method get_captionText, addr 0x672d300, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Text> get_captionText();

  /// @brief Method get_itemImage, addr 0x672d330, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_itemImage();

  /// @brief Method get_itemText, addr 0x672d328, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::TMPro::TMP_Text> get_itemText();

  /// @brief Method get_onValueChanged, addr 0x672d358, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::TMP_Dropdown_DropdownEvent* get_onValueChanged();

  /// @brief Method get_options, addr 0x672cda4, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* get_options();

  /// @brief Method get_placeholder, addr 0x672d318, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_placeholder();

  /// @brief Method get_template, addr 0x672d2f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_template();

  /// @brief Method get_value, addr 0x672d378, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  static inline void setStaticF_k_EverythingOption(::TMPro::TMP_Dropdown_OptionData* value);

  static inline void setStaticF_k_MixedOption(::TMPro::TMP_Dropdown_OptionData* value);

  static inline void setStaticF_k_NothingOption(::TMPro::TMP_Dropdown_OptionData* value);

  static inline void setStaticF_s_NoOptionData(::TMPro::TMP_Dropdown_OptionData* value);

  /// @brief Method set_MultiSelect, addr 0x672d59c, size 0x8, virtual false, abstract: false, final false
  inline void set_MultiSelect(bool value);

  /// @brief Method set_alphaFadeSpeed, addr 0x672d370, size 0x8, virtual false, abstract: false, final false
  inline void set_alphaFadeSpeed(float_t value);

  /// @brief Method set_captionImage, addr 0x672d310, size 0x8, virtual false, abstract: false, final false
  inline void set_captionImage(::UnityEngine::UI::Image* value);

  /// @brief Method set_captionText, addr 0x672cd94, size 0x8, virtual false, abstract: false, final false
  inline void set_captionText(::TMPro::TMP_Text* value);

  /// @brief Method set_itemImage, addr 0x672d338, size 0x8, virtual false, abstract: false, final false
  inline void set_itemImage(::UnityEngine::UI::Image* value);

  /// @brief Method set_itemText, addr 0x672cd9c, size 0x8, virtual false, abstract: false, final false
  inline void set_itemText(::TMPro::TMP_Text* value);

  /// @brief Method set_onValueChanged, addr 0x672d360, size 0x8, virtual false, abstract: false, final false
  inline void set_onValueChanged(::TMPro::TMP_Dropdown_DropdownEvent* value);

  /// @brief Method set_options, addr 0x672d340, size 0x18, virtual false, abstract: false, final false
  inline void set_options(::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* value);

  /// @brief Method set_placeholder, addr 0x672d320, size 0x8, virtual false, abstract: false, final false
  inline void set_placeholder(::UnityEngine::UI::Graphic* value);

  /// @brief Method set_template, addr 0x672cd8c, size 0x8, virtual false, abstract: false, final false
  inline void set_template(::UnityEngine::RectTransform* value);

  /// @brief Method set_value, addr 0x672d380, size 0x8, virtual false, abstract: false, final false
  inline void set_value(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Dropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Dropdown(TMP_Dropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Dropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Dropdown(TMP_Dropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15865 };

  /// @brief Field m_Template, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_Template;

  /// @brief Field m_CaptionText, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ___m_CaptionText;

  /// @brief Field m_CaptionImage, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_CaptionImage;

  /// @brief Field m_Placeholder, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___m_Placeholder;

  /// @brief Field m_ItemText, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ___m_ItemText;

  /// @brief Field m_ItemImage, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___m_ItemImage;

  /// @brief Field m_Value, offset: 0x130, size: 0x4, def value: None
  int32_t ___m_Value;

  /// @brief Field m_MultiSelect, offset: 0x134, size: 0x1, def value: None
  bool ___m_MultiSelect;

  /// @brief Field m_Options, offset: 0x138, size: 0x8, def value: None
  ::TMPro::TMP_Dropdown_OptionDataList* ___m_Options;

  /// @brief Field m_OnValueChanged, offset: 0x140, size: 0x8, def value: None
  ::TMPro::TMP_Dropdown_DropdownEvent* ___m_OnValueChanged;

  /// @brief Field m_AlphaFadeSpeed, offset: 0x148, size: 0x4, def value: None
  float_t ___m_AlphaFadeSpeed;

  /// @brief Field m_Dropdown, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Dropdown;

  /// @brief Field m_Blocker, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Blocker;

  /// @brief Field m_Items, offset: 0x160, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Dropdown_DropdownItem>>* ___m_Items;

  /// @brief Field m_AlphaTweenRunner, offset: 0x168, size: 0x8, def value: None
  ::TMPro::TweenRunner_1<::TMPro::FloatTween>* ___m_AlphaTweenRunner;

  /// @brief Field validTemplate, offset: 0x170, size: 0x1, def value: None
  bool ___validTemplate;

  /// @brief Field m_Coroutine, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___m_Coroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Template) == 0x100, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_CaptionText) == 0x108, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_CaptionImage) == 0x110, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Placeholder) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_ItemText) == 0x120, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_ItemImage) == 0x128, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Value) == 0x130, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_MultiSelect) == 0x134, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Options) == 0x138, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_OnValueChanged) == 0x140, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_AlphaFadeSpeed) == 0x148, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Dropdown) == 0x150, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Blocker) == 0x158, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Items) == 0x160, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_AlphaTweenRunner) == 0x168, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___validTemplate) == 0x170, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Dropdown, ___m_Coroutine) == 0x178, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Dropdown, 0x180>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Dropdown);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown*, "TMPro", "TMP_Dropdown");
NEED_NO_BOX(::TMPro::TMP_Dropdown_DropdownEvent);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown_DropdownEvent*, "TMPro", "TMP_Dropdown/DropdownEvent");
NEED_NO_BOX(::TMPro::TMP_Dropdown_DropdownItem);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown_DropdownItem*, "TMPro", "TMP_Dropdown/DropdownItem");
NEED_NO_BOX(::TMPro::TMP_Dropdown_OptionData);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown_OptionData*, "TMPro", "TMP_Dropdown/OptionData");
NEED_NO_BOX(::TMPro::TMP_Dropdown_OptionDataList);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown_OptionDataList*, "TMPro", "TMP_Dropdown/OptionDataList");
NEED_NO_BOX(::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown__DelayedDestroyDropdownList_d__90*, "TMPro", "TMP_Dropdown/<DelayedDestroyDropdownList>d__90");
NEED_NO_BOX(::TMPro::TMP_Dropdown___c__DisplayClass76_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown___c__DisplayClass76_0*, "TMPro", "TMP_Dropdown/<>c__DisplayClass76_0");
NEED_NO_BOX(::TMPro::TMP_Dropdown___c__DisplayClass76_1);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown___c__DisplayClass76_1*, "TMPro", "TMP_Dropdown/<>c__DisplayClass76_1");
