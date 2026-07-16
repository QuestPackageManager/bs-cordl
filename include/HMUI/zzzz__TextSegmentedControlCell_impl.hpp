#pragma once
// IWYU pragma private; include "HMUI/TextSegmentedControlCell.hpp"
#include "HMUI/zzzz__SegmentedControlCell_impl.hpp"
#include "HMUI/zzzz__TextSegmentedControlCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "TMPro/zzzz__TextOverflowModes_def.hpp"
#include "TMPro/zzzz__TextWrappingModes_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSegmentedControlCell::*)(::StringW)>(&::HMUI::TextSegmentedControlCell::set_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f51e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::TextSegmentedControlCell::*)()>(&::HMUI::TextSegmentedControlCell::get_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f51f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.set_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSegmentedControlCell::*)(float_t)>(&::HMUI::TextSegmentedControlCell::set_fontSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f51e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_fontSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.get_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TextSegmentedControlCell::*)()>(&::HMUI::TextSegmentedControlCell::get_fontSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f51fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_fontSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.set_hideBackgroundImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSegmentedControlCell::*)(bool)>(&::HMUI::TextSegmentedControlCell::set_hideBackgroundImage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f51e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_hideBackgroundImage", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.get_preferredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TextSegmentedControlCell::*)()>(&::HMUI::TextSegmentedControlCell::get_preferredWidth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f51f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_preferredWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.set_textWrappingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSegmentedControlCell::*)(::TMPro::TextWrappingModes)>(&::HMUI::TextSegmentedControlCell::set_textWrappingMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f51e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_textWrappingMode", {}, { ::i2c::type_of<::TMPro::TextWrappingModes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.get_textWrappingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TextWrappingModes (::HMUI::TextSegmentedControlCell::*)()>(&::HMUI::TextSegmentedControlCell::get_textWrappingMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f51fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_textWrappingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.set_textOverflowMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSegmentedControlCell::*)(::TMPro::TextOverflowModes)>(&::HMUI::TextSegmentedControlCell::set_textOverflowMode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f51eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_textOverflowMode", {}, { ::i2c::type_of<::TMPro::TextOverflowModes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell.get_textOverflowMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TextOverflowModes (::HMUI::TextSegmentedControlCell::*)()>(&::HMUI::TextSegmentedControlCell::get_textOverflowMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f51fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_textOverflowMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControlCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TextSegmentedControlCell::*)()>(&::HMUI::TextSegmentedControlCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f51fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& HMUI::TextSegmentedControlCell::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& HMUI::TextSegmentedControlCell::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::TextSegmentedControlCell::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& HMUI::TextSegmentedControlCell::__cordl_internal_get__backgroundGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HMUI::TextSegmentedControlCell::__cordl_internal_get__backgroundGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundGameObject;
}
constexpr void HMUI::TextSegmentedControlCell::__cordl_internal_set__backgroundGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundGameObject = value;
}
inline void HMUI::TextSegmentedControlCell::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW HMUI::TextSegmentedControlCell::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void HMUI::TextSegmentedControlCell::set_fontSize(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_fontSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::TextSegmentedControlCell::get_fontSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_fontSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::TextSegmentedControlCell::set_hideBackgroundImage(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_hideBackgroundImage", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::TextSegmentedControlCell::get_preferredWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_preferredWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::TextSegmentedControlCell::set_textWrappingMode(::TMPro::TextWrappingModes value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_textWrappingMode", {}, { ::i2c::type_of<::TMPro::TextWrappingModes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::TMPro::TextWrappingModes HMUI::TextSegmentedControlCell::get_textWrappingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_textWrappingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TextWrappingModes>(this, ___internal_method);
}
inline void HMUI::TextSegmentedControlCell::set_textOverflowMode(::TMPro::TextOverflowModes value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "set_textOverflowMode", {}, { ::i2c::type_of<::TMPro::TextOverflowModes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::TMPro::TextOverflowModes HMUI::TextSegmentedControlCell::get_textOverflowMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { "get_textOverflowMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TextOverflowModes>(this, ___internal_method);
}
inline void HMUI::TextSegmentedControlCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TextSegmentedControlCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::TextSegmentedControlCell* HMUI::TextSegmentedControlCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::TextSegmentedControlCell*>());
}
// Ctor Parameters []
constexpr ::HMUI::TextSegmentedControlCell::TextSegmentedControlCell() {}
