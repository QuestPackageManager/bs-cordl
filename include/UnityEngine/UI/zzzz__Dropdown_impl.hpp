#pragma once
// IWYU pragma private; include "UnityEngine/UI/Dropdown.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ICancelHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__FloatTween_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__TweenRunner_1_def.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Text> (::UnityEngine::UI::Dropdown_DropdownItem::*)()>(&::UnityEngine::UI::Dropdown_DropdownItem::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_DropdownItem::*)(::UnityEngine::UI::Text*)>(&::UnityEngine::UI::Dropdown_DropdownItem::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "set_text", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.get_image
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Image> (::UnityEngine::UI::Dropdown_DropdownItem::*)()>(&::UnityEngine::UI::Dropdown_DropdownItem::get_image)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "get_image", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.set_image
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_DropdownItem::*)(::UnityEngine::UI::Image*)>(&::UnityEngine::UI::Dropdown_DropdownItem::set_image)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "set_image", {}, { ::i2c::type_of<::UnityEngine::UI::Image*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.get_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::Dropdown_DropdownItem::*)()>(
    &::UnityEngine::UI::Dropdown_DropdownItem::get_rectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "get_rectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.set_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_DropdownItem::*)(::UnityEngine::RectTransform*)>(
    &::UnityEngine::UI::Dropdown_DropdownItem::set_rectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "set_rectTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.get_toggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Toggle> (::UnityEngine::UI::Dropdown_DropdownItem::*)()>(&::UnityEngine::UI::Dropdown_DropdownItem::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "get_toggle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.set_toggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_DropdownItem::*)(::UnityEngine::UI::Toggle*)>(&::UnityEngine::UI::Dropdown_DropdownItem::set_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "set_toggle", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.OnPointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_DropdownItem::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::Dropdown_DropdownItem::OnPointerEnter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c1fbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem.OnCancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_DropdownItem::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::UI::Dropdown_DropdownItem::OnCancel)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c1fc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_DropdownItem::*)()>(&::UnityEngine::UI::Dropdown_DropdownItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c1fd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_set_m_Text(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_get_m_Image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_get_m_Image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Image;
}
constexpr void UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_set_m_Image(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Image = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_get_m_RectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_get_m_RectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransform;
}
constexpr void UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_set_m_RectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RectTransform = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_get_m_Toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_get_m_Toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggle;
}
constexpr void UnityEngine::UI::Dropdown_DropdownItem::__cordl_internal_set_m_Toggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Toggle = value;
}
inline ::UnityW<::UnityEngine::UI::Text> UnityEngine::UI::Dropdown_DropdownItem::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Text>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown_DropdownItem::set_text(::UnityEngine::UI::Text* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "set_text", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Image> UnityEngine::UI::Dropdown_DropdownItem::get_image() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "get_image", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Image>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown_DropdownItem::set_image(::UnityEngine::UI::Image* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "set_image", {}, { ::i2c::type_of<::UnityEngine::UI::Image*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::Dropdown_DropdownItem::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "get_rectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown_DropdownItem::set_rectTransform(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "set_rectTransform", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Toggle> UnityEngine::UI::Dropdown_DropdownItem::get_toggle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "get_toggle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Toggle>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown_DropdownItem::set_toggle(::UnityEngine::UI::Toggle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { "set_toggle", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Dropdown_DropdownItem::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Dropdown_DropdownItem::OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Dropdown_DropdownItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::Dropdown_DropdownItem* UnityEngine::UI::Dropdown_DropdownItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown_DropdownItem*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr UnityEngine::UI::Dropdown_DropdownItem::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* UnityEngine::UI::Dropdown_DropdownItem::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::UI::Dropdown_DropdownItem::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::UI::Dropdown_DropdownItem::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
constexpr UnityEngine::UI::Dropdown_DropdownItem::operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ICancelHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
constexpr ::UnityEngine::EventSystems::ICancelHandler* UnityEngine::UI::Dropdown_DropdownItem::i___UnityEngine__EventSystems__ICancelHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ICancelHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Dropdown_DropdownItem::Dropdown_DropdownItem() {}
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionData.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UI::Dropdown_OptionData::*)()>(&::UnityEngine::UI::Dropdown_OptionData::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionData.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_OptionData::*)(::StringW)>(&::UnityEngine::UI::Dropdown_OptionData::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fd2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionData.get_image
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::UI::Dropdown_OptionData::*)()>(&::UnityEngine::UI::Dropdown_OptionData::get_image)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { "get_image", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionData.set_image
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_OptionData::*)(::UnityEngine::Sprite*)>(&::UnityEngine::UI::Dropdown_OptionData::set_image)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { "set_image", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_OptionData::*)()>(&::UnityEngine::UI::Dropdown_OptionData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c1c164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_OptionData::*)(::StringW)>(&::UnityEngine::UI::Dropdown_OptionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1d79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_OptionData::*)(::UnityEngine::Sprite*)>(&::UnityEngine::UI::Dropdown_OptionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1d8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_OptionData::*)(::StringW, ::UnityEngine::Sprite*)>(&::UnityEngine::UI::Dropdown_OptionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UI::Dropdown_OptionData::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::StringW const& UnityEngine::UI::Dropdown_OptionData::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UI::Dropdown_OptionData::__cordl_internal_set_m_Text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::UI::Dropdown_OptionData::__cordl_internal_get_m_Image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Image;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::UI::Dropdown_OptionData::__cordl_internal_get_m_Image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Image;
}
constexpr void UnityEngine::UI::Dropdown_OptionData::__cordl_internal_set_m_Image(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Image = value;
}
inline ::StringW UnityEngine::UI::Dropdown_OptionData::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown_OptionData::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::UI::Dropdown_OptionData::get_image() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { "get_image", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown_OptionData::set_image(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { "set_image", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Dropdown_OptionData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown_OptionData::_ctor(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void UnityEngine::UI::Dropdown_OptionData::_ctor(::UnityEngine::Sprite* image) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, image);
}
inline void UnityEngine::UI::Dropdown_OptionData::_ctor(::StringW text, ::UnityEngine::Sprite* image) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, image);
}
inline ::UnityEngine::UI::Dropdown_OptionData* UnityEngine::UI::Dropdown_OptionData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown_OptionData*>());
}
inline ::UnityEngine::UI::Dropdown_OptionData* UnityEngine::UI::Dropdown_OptionData::New_ctor(::StringW text) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown_OptionData*>(text));
}
inline ::UnityEngine::UI::Dropdown_OptionData* UnityEngine::UI::Dropdown_OptionData::New_ctor(::UnityEngine::Sprite* image) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown_OptionData*>(image));
}
inline ::UnityEngine::UI::Dropdown_OptionData* UnityEngine::UI::Dropdown_OptionData::New_ctor(::StringW text, ::UnityEngine::Sprite* image) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown_OptionData*>(text, image));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Dropdown_OptionData::Dropdown_OptionData() {}
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionDataList.get_options
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* (::UnityEngine::UI::Dropdown_OptionDataList::*)()>(
    &::UnityEngine::UI::Dropdown_OptionDataList::get_options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionDataList*>(), { "get_options", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionDataList.set_options
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_OptionDataList::*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*)>(
    &::UnityEngine::UI::Dropdown_OptionDataList::set_options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionDataList*>(),
                                                             { "set_options", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_OptionDataList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_OptionDataList::*)()>(&::UnityEngine::UI::Dropdown_OptionDataList::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6c1d138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionDataList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*& UnityEngine::UI::Dropdown_OptionDataList::__cordl_internal_get_m_Options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Options;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* const& UnityEngine::UI::Dropdown_OptionDataList::__cordl_internal_get_m_Options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Options;
}
constexpr void UnityEngine::UI::Dropdown_OptionDataList::__cordl_internal_set_m_Options(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Options = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* UnityEngine::UI::Dropdown_OptionDataList::get_options() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionDataList*>(), { "get_options", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown_OptionDataList::set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionDataList*>(),
                                                           { "set_options", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Dropdown_OptionDataList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_OptionDataList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::Dropdown_OptionDataList* UnityEngine::UI::Dropdown_OptionDataList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown_OptionDataList*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Dropdown_OptionDataList::Dropdown_OptionDataList() {}
//  Writing Method size for method: ::UnityEngine::UI::Dropdown_DropdownEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown_DropdownEvent::*)()>(&::UnityEngine::UI::Dropdown_DropdownEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c1d1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownEvent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::Dropdown_DropdownEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown_DropdownEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::Dropdown_DropdownEvent* UnityEngine::UI::Dropdown_DropdownEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown_DropdownEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Dropdown_DropdownEvent::Dropdown_DropdownEvent() {}
//  Writing Method size for method: ::UnityEngine::UI::Dropdown___c__DisplayClass63_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown___c__DisplayClass63_0::*)()>(&::UnityEngine::UI::Dropdown___c__DisplayClass63_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c1ed24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown___c__DisplayClass63_0._Show_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown___c__DisplayClass63_0::*)(bool)>(&::UnityEngine::UI::Dropdown___c__DisplayClass63_0::_Show_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c1fd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown___c__DisplayClass63_0*>(), { "<Show>b__0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>& UnityEngine::UI::Dropdown___c__DisplayClass63_0::__cordl_internal_get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> const& UnityEngine::UI::Dropdown___c__DisplayClass63_0::__cordl_internal_get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
constexpr void UnityEngine::UI::Dropdown___c__DisplayClass63_0::__cordl_internal_set_item(::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___item = value;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown>& UnityEngine::UI::Dropdown___c__DisplayClass63_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& UnityEngine::UI::Dropdown___c__DisplayClass63_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UI::Dropdown___c__DisplayClass63_0::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Dropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void UnityEngine::UI::Dropdown___c__DisplayClass63_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown___c__DisplayClass63_0::_Show_b__0(bool x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown___c__DisplayClass63_0*>(), { "<Show>b__0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::UnityEngine::UI::Dropdown___c__DisplayClass63_0* UnityEngine::UI::Dropdown___c__DisplayClass63_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown___c__DisplayClass63_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Dropdown___c__DisplayClass63_0::Dropdown___c__DisplayClass63_0() {}
//  Writing Method size for method: ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::*)(int32_t)>(
    &::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::*)()>(
    &::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c1fd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::*)()>(
    &::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c1fd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::*)()>(
    &::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fe30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::*)()>(
    &::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6c1fe38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::*)()>(
    &::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1fe70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr float_t& UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_get_delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr float_t const& UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_get_delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr void UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_set_delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delay = value;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown>& UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UI::Dropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75* UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Dropdown__DelayedDestroyDropdownList_d__75::Dropdown__DelayedDestroyDropdownList_d__75() {}
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.get_template
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::get_template)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ce48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_template", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.set_template
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::RectTransform*)>(&::UnityEngine::UI::Dropdown::set_template)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1c134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_template", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.get_captionText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Text> (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::get_captionText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ce50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_captionText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.set_captionText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::UI::Text*)>(&::UnityEngine::UI::Dropdown::set_captionText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1c13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_captionText", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.get_captionImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Image> (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::get_captionImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ce58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_captionImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.set_captionImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::UI::Image*)>(&::UnityEngine::UI::Dropdown::set_captionImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_captionImage", {}, { ::i2c::type_of<::UnityEngine::UI::Image*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.get_itemText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Text> (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::get_itemText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ce68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_itemText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.set_itemText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::UI::Text*)>(&::UnityEngine::UI::Dropdown::set_itemText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1c144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_itemText", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.get_itemImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Image> (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::get_itemImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_itemImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.set_itemImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::UI::Image*)>(&::UnityEngine::UI::Dropdown::set_itemImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ce78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_itemImage", {}, { ::i2c::type_of<::UnityEngine::UI::Image*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.get_options
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* (::UnityEngine::UI::Dropdown::*)()>(
    &::UnityEngine::UI::Dropdown::get_options)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c1c14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_options", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.set_options
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*)>(
    &::UnityEngine::UI::Dropdown::set_options)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c1ce80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(),
                                                             { "set_options", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.get_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::Dropdown_DropdownEvent* (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ce98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_onValueChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.set_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::UI::Dropdown_DropdownEvent*)>(&::UnityEngine::UI::Dropdown::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1cea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::UnityEngine::UI::Dropdown_DropdownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.get_alphaFadeSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::get_alphaFadeSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1cea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_alphaFadeSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.set_alphaFadeSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(float_t)>(&::UnityEngine::UI::Dropdown::set_alphaFadeSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ceb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_alphaFadeSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1ceb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(int32_t)>(&::UnityEngine::UI::Dropdown::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1cec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_value", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(int32_t)>(&::UnityEngine::UI::Dropdown::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c1d028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "SetValueWithoutNotify", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(int32_t, bool)>(&::UnityEngine::UI::Dropdown::Set)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6c1cec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6c1d030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6c1d1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c1d2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::OnDisable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6c1d384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.RefreshShownValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::RefreshShownValue)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6c1c168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "RefreshShownValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.AddOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*)>(
    &::UnityEngine::UI::Dropdown::AddOptions)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c1d5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(),
                                                             { "AddOptions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.AddOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::UnityEngine::UI::Dropdown::AddOptions)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6c1d648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "AddOptions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.AddOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*)>(
    &::UnityEngine::UI::Dropdown::AddOptions)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6c1d7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "AddOptions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.ClearOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::ClearOptions)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c1d900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "ClearOptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.SetupTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::Canvas*)>(&::UnityEngine::UI::Dropdown::SetupTemplate)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x6c1d980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "SetupTemplate", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.OnPointerClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::Dropdown::OnPointerClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c1e048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.OnSubmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::Dropdown::OnSubmit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c1ec1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.OnCancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::Dropdown::OnCancel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c1ec20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.Show
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::Show)> {
  constexpr static std::size_t size = 0xbd0;
  constexpr static std::size_t addrs = 0x6c1e04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "Show", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.CreateBlocker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::UI::Dropdown::*)(::UnityEngine::Canvas*)>(&::UnityEngine::UI::Dropdown::CreateBlocker)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x6c1f158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.DestroyBlocker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::GameObject*)>(&::UnityEngine::UI::Dropdown::DestroyBlocker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c1f6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.CreateDropdownList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::UI::Dropdown::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::UI::Dropdown::CreateDropdownList)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6c1f714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.DestroyDropdownList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::GameObject*)>(&::UnityEngine::UI::Dropdown::DestroyDropdownList)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c1f788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.CreateItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> (::UnityEngine::UI::Dropdown::*)(::UnityEngine::UI::Dropdown_DropdownItem*)>(
    &::UnityEngine::UI::Dropdown::CreateItem)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6c1f7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.DestroyItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::UI::Dropdown_DropdownItem*)>(&::UnityEngine::UI::Dropdown::DestroyItem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c1f858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> (::UnityEngine::UI::Dropdown::*)(
    ::UnityEngine::UI::Dropdown_OptionData*, bool, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>*)>(
    &::UnityEngine::UI::Dropdown::AddItem)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6c1ed28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(),
                                                { "AddItem",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UI::Dropdown_OptionData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UI::Dropdown_DropdownItem*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.AlphaFadeList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(float_t, float_t)>(&::UnityEngine::UI::Dropdown::AlphaFadeList)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c1f85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "AlphaFadeList", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.AlphaFadeList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(float_t, float_t, float_t)>(&::UnityEngine::UI::Dropdown::AlphaFadeList)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6c1f020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "AlphaFadeList", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.SetAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(float_t)>(&::UnityEngine::UI::Dropdown::SetAlpha)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6c1f8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "SetAlpha", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::Hide)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6c1ec24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "Hide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.DelayedDestroyDropdownList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UI::Dropdown::*)(float_t)>(&::UnityEngine::UI::Dropdown::DelayedDestroyDropdownList)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c1f99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "DelayedDestroyDropdownList", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.ImmediateDestroyDropdownList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)()>(&::UnityEngine::UI::Dropdown::ImmediateDestroyDropdownList)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6c1d41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "ImmediateDestroyDropdownList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Dropdown.OnSelectItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Dropdown::*)(::UnityEngine::UI::Toggle*)>(&::UnityEngine::UI::Dropdown::OnSelectItem)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6c1fa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "OnSelectItem", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Template() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Template;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Template() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Template;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_Template(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Template = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::UI::Dropdown::__cordl_internal_get_m_CaptionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaptionText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_CaptionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaptionText;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_CaptionText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaptionText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& UnityEngine::UI::Dropdown::__cordl_internal_get_m_CaptionImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaptionImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_CaptionImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaptionImage;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_CaptionImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaptionImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::UI::Dropdown::__cordl_internal_get_m_ItemText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_ItemText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemText;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_ItemText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItemText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& UnityEngine::UI::Dropdown::__cordl_internal_get_m_ItemImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_ItemImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemImage;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_ItemImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItemImage = value;
}
constexpr int32_t& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr int32_t const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_Value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
constexpr ::UnityEngine::UI::Dropdown_OptionDataList*& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Options;
}
constexpr ::UnityEngine::UI::Dropdown_OptionDataList* const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Options;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_Options(::UnityEngine::UI::Dropdown_OptionDataList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Options = value;
}
constexpr ::UnityEngine::UI::Dropdown_DropdownEvent*& UnityEngine::UI::Dropdown::__cordl_internal_get_m_OnValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr ::UnityEngine::UI::Dropdown_DropdownEvent* const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_OnValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnValueChanged;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::Dropdown_DropdownEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnValueChanged = value;
}
constexpr float_t& UnityEngine::UI::Dropdown::__cordl_internal_get_m_AlphaFadeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaFadeSpeed;
}
constexpr float_t const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_AlphaFadeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaFadeSpeed;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_AlphaFadeSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AlphaFadeSpeed = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Dropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dropdown;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Dropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dropdown;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_Dropdown(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dropdown = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Blocker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Blocker;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Blocker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Blocker;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_Blocker(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Blocker = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>*& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>* const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_Items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Items = value;
}
constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>*& UnityEngine::UI::Dropdown::__cordl_internal_get_m_AlphaTweenRunner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaTweenRunner;
}
constexpr ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* const& UnityEngine::UI::Dropdown::__cordl_internal_get_m_AlphaTweenRunner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaTweenRunner;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_m_AlphaTweenRunner(::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AlphaTweenRunner = value;
}
constexpr bool& UnityEngine::UI::Dropdown::__cordl_internal_get_validTemplate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validTemplate;
}
constexpr bool const& UnityEngine::UI::Dropdown::__cordl_internal_get_validTemplate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validTemplate;
}
constexpr void UnityEngine::UI::Dropdown::__cordl_internal_set_validTemplate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validTemplate = value;
}
inline void UnityEngine::UI::Dropdown::setStaticF_s_NoOptionData(::UnityEngine::UI::Dropdown_OptionData* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::Dropdown_OptionData*, "s_NoOptionData", ::UnityEngine::UI::Dropdown*>(std::forward<::UnityEngine::UI::Dropdown_OptionData*>(value));
}
inline ::UnityEngine::UI::Dropdown_OptionData* UnityEngine::UI::Dropdown::getStaticF_s_NoOptionData() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::Dropdown_OptionData*, "s_NoOptionData", ::UnityEngine::UI::Dropdown*>();
}
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::UI::Dropdown::get_template() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_template", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::set_template(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_template", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Text> UnityEngine::UI::Dropdown::get_captionText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_captionText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Text>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::set_captionText(::UnityEngine::UI::Text* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_captionText", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Image> UnityEngine::UI::Dropdown::get_captionImage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_captionImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Image>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::set_captionImage(::UnityEngine::UI::Image* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_captionImage", {}, { ::i2c::type_of<::UnityEngine::UI::Image*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Text> UnityEngine::UI::Dropdown::get_itemText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_itemText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Text>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::set_itemText(::UnityEngine::UI::Text* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_itemText", {}, { ::i2c::type_of<::UnityEngine::UI::Text*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Image> UnityEngine::UI::Dropdown::get_itemImage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_itemImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Image>>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::set_itemImage(::UnityEngine::UI::Image* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_itemImage", {}, { ::i2c::type_of<::UnityEngine::UI::Image*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* UnityEngine::UI::Dropdown::get_options() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_options", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(),
                                                           { "set_options", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::Dropdown_DropdownEvent* UnityEngine::UI::Dropdown::get_onValueChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_onValueChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Dropdown_DropdownEvent*>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::set_onValueChanged(::UnityEngine::UI::Dropdown_DropdownEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::UnityEngine::UI::Dropdown_DropdownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Dropdown::get_alphaFadeSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_alphaFadeSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::set_alphaFadeSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_alphaFadeSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::Dropdown::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::set_value(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "set_value", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Dropdown::SetValueWithoutNotify(int32_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "SetValueWithoutNotify", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void UnityEngine::UI::Dropdown::Set(int32_t value, bool sendCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "Set", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, sendCallback);
}
inline void UnityEngine::UI::Dropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::RefreshShownValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "RefreshShownValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::AddOptions(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(),
                                                           { "AddOptions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void UnityEngine::UI::Dropdown::AddOptions(::System::Collections::Generic::List_1<::StringW>* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "AddOptions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void UnityEngine::UI::Dropdown::AddOptions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>* options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "AddOptions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void UnityEngine::UI::Dropdown::ClearOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "ClearOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::SetupTemplate(::UnityEngine::Canvas* rootCanvas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "SetupTemplate", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootCanvas);
}
template <typename T> inline T UnityEngine::UI::Dropdown::GetOrAddComponent(::UnityEngine::GameObject* go) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "GetOrAddComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, go);
}
inline void UnityEngine::UI::Dropdown::OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Dropdown::OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Dropdown::OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void UnityEngine::UI::Dropdown::Show() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "Show", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::Dropdown::CreateBlocker(::UnityEngine::Canvas* rootCanvas) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, rootCanvas);
}
inline void UnityEngine::UI::Dropdown::DestroyBlocker(::UnityEngine::GameObject* blocker) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blocker);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::Dropdown::CreateDropdownList(::UnityEngine::GameObject* _cordl_template) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, _cordl_template);
}
inline void UnityEngine::UI::Dropdown::DestroyDropdownList(::UnityEngine::GameObject* dropdownList) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdownList);
}
inline ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> UnityEngine::UI::Dropdown::CreateItem(::UnityEngine::UI::Dropdown_DropdownItem* itemTemplate) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>(this, ___internal_method, itemTemplate);
}
inline void UnityEngine::UI::Dropdown::DestroyItem(::UnityEngine::UI::Dropdown_DropdownItem* item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Dropdown*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline ::UnityW<::UnityEngine::UI::Dropdown_DropdownItem> UnityEngine::UI::Dropdown::AddItem(::UnityEngine::UI::Dropdown_OptionData* data, bool selected,
                                                                                             ::UnityEngine::UI::Dropdown_DropdownItem* itemTemplate,
                                                                                             ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>* items) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(),
                                              { "AddItem",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UI::Dropdown_OptionData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UI::Dropdown_DropdownItem*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Dropdown_DropdownItem>>(this, ___internal_method, data, selected, itemTemplate, items);
}
inline void UnityEngine::UI::Dropdown::AlphaFadeList(float_t duration, float_t alpha) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "AlphaFadeList", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration, alpha);
}
inline void UnityEngine::UI::Dropdown::AlphaFadeList(float_t duration, float_t start, float_t end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "AlphaFadeList", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration, start, end);
}
inline void UnityEngine::UI::Dropdown::SetAlpha(float_t alpha) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "SetAlpha", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alpha);
}
inline void UnityEngine::UI::Dropdown::Hide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "Hide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UI::Dropdown::DelayedDestroyDropdownList(float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "DelayedDestroyDropdownList", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, delay);
}
inline void UnityEngine::UI::Dropdown::ImmediateDestroyDropdownList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "ImmediateDestroyDropdownList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Dropdown::OnSelectItem(::UnityEngine::UI::Toggle* toggle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Dropdown*>(), { "OnSelectItem", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline ::UnityEngine::UI::Dropdown* UnityEngine::UI::Dropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Dropdown*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr UnityEngine::UI::Dropdown::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* UnityEngine::UI::Dropdown::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::UI::Dropdown::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::UI::Dropdown::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr UnityEngine::UI::Dropdown::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* UnityEngine::UI::Dropdown::i___UnityEngine__EventSystems__ISubmitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
constexpr UnityEngine::UI::Dropdown::operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ICancelHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
constexpr ::UnityEngine::EventSystems::ICancelHandler* UnityEngine::UI::Dropdown::i___UnityEngine__EventSystems__ICancelHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ICancelHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Dropdown::Dropdown() {}
