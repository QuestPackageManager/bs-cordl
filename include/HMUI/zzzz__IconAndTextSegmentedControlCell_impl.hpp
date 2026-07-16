#pragma once
// IWYU pragma private; include "HMUI/IconAndTextSegmentedControlCell.hpp"
#include "HMUI/zzzz__SegmentedControlCell_impl.hpp"
#include "HMUI/zzzz__IconAndTextSegmentedControlCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControlCell.set_sprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControlCell::*)(::UnityEngine::Sprite*)>(&::HMUI::IconAndTextSegmentedControlCell::set_sprite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f502e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "set_sprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControlCell.get_sprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::HMUI::IconAndTextSegmentedControlCell::*)()>(&::HMUI::IconAndTextSegmentedControlCell::get_sprite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f5089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "get_sprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControlCell.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControlCell::*)(::StringW)>(&::HMUI::IconAndTextSegmentedControlCell::set_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f502fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControlCell.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::IconAndTextSegmentedControlCell::*)()>(&::HMUI::IconAndTextSegmentedControlCell::get_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f508b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControlCell.SetTextActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControlCell::*)(bool)>(&::HMUI::IconAndTextSegmentedControlCell::SetTextActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f50620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "SetTextActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconAndTextSegmentedControlCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IconAndTextSegmentedControlCell::*)()>(&::HMUI::IconAndTextSegmentedControlCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f508d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& HMUI::IconAndTextSegmentedControlCell::__cordl_internal_get__icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& HMUI::IconAndTextSegmentedControlCell::__cordl_internal_get__icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr void HMUI::IconAndTextSegmentedControlCell::__cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____icon = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& HMUI::IconAndTextSegmentedControlCell::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& HMUI::IconAndTextSegmentedControlCell::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::IconAndTextSegmentedControlCell::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
inline void HMUI::IconAndTextSegmentedControlCell::set_sprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "set_sprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> HMUI::IconAndTextSegmentedControlCell::get_sprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "get_sprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void HMUI::IconAndTextSegmentedControlCell::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW HMUI::IconAndTextSegmentedControlCell::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void HMUI::IconAndTextSegmentedControlCell::SetTextActive(bool active) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { "SetTextActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void HMUI::IconAndTextSegmentedControlCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::IconAndTextSegmentedControlCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::IconAndTextSegmentedControlCell* HMUI::IconAndTextSegmentedControlCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::IconAndTextSegmentedControlCell*>());
}
// Ctor Parameters []
constexpr ::HMUI::IconAndTextSegmentedControlCell::IconAndTextSegmentedControlCell() {}
