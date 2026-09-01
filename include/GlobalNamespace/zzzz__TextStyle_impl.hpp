#pragma once
// IWYU pragma private; include "GlobalNamespace\TextStyle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FontStyles_impl.hpp"
#include "GlobalNamespace/zzzz__TextStyle_def.hpp"
#include "GlobalNamespace/zzzz__IReadOnlyTextStyle_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextStyle.get_fontStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::FontStyles (::GlobalNamespace::TextStyle::*)()>(&::GlobalNamespace::TextStyle::get_fontStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cae38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_fontStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyle.get_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextStyle::*)()>(&::GlobalNamespace::TextStyle::get_fontSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cae40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_fontSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyle.get_autoSizing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TextStyle::*)()>(&::GlobalNamespace::TextStyle::get_autoSizing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cae48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_autoSizing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyle.get_fontSizeMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextStyle::*)()>(&::GlobalNamespace::TextStyle::get_fontSizeMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cae50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_fontSizeMin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyle.get_fontSizeMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextStyle::*)()>(&::GlobalNamespace::TextStyle::get_fontSizeMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cae58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_fontSizeMax", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyle.get_charWidthMaxAdj
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextStyle::*)()>(&::GlobalNamespace::TextStyle::get_charWidthMaxAdj)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cae60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_charWidthMaxAdj", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyle.get_lineSpacingMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextStyle::*)()>(&::GlobalNamespace::TextStyle::get_lineSpacingMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32cae68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_lineSpacingMax", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyle.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextStyle::*)(::TMPro::FontStyles, float_t, bool, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::TextStyle::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32cae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "Update",
                                                                                {},
                                                                                { ::i2c::type_of<::TMPro::FontStyles>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(),
                                                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextStyle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextStyle::*)()>(&::GlobalNamespace::TextStyle::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32cae88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::TMPro::FontStyles& GlobalNamespace::TextStyle::__cordl_internal_get__fontStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontStyle;
}
constexpr ::TMPro::FontStyles const& GlobalNamespace::TextStyle::__cordl_internal_get__fontStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontStyle;
}
constexpr void GlobalNamespace::TextStyle::__cordl_internal_set__fontStyle(::TMPro::FontStyles value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fontStyle = value;
}
constexpr float_t& GlobalNamespace::TextStyle::__cordl_internal_get__fontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSize;
}
constexpr float_t const& GlobalNamespace::TextStyle::__cordl_internal_get__fontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSize;
}
constexpr void GlobalNamespace::TextStyle::__cordl_internal_set__fontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fontSize = value;
}
constexpr bool& GlobalNamespace::TextStyle::__cordl_internal_get__autoSizing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoSizing;
}
constexpr bool const& GlobalNamespace::TextStyle::__cordl_internal_get__autoSizing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoSizing;
}
constexpr void GlobalNamespace::TextStyle::__cordl_internal_set__autoSizing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoSizing = value;
}
constexpr float_t& GlobalNamespace::TextStyle::__cordl_internal_get__fontSizeMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSizeMin;
}
constexpr float_t const& GlobalNamespace::TextStyle::__cordl_internal_get__fontSizeMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSizeMin;
}
constexpr void GlobalNamespace::TextStyle::__cordl_internal_set__fontSizeMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fontSizeMin = value;
}
constexpr float_t& GlobalNamespace::TextStyle::__cordl_internal_get__fontSizeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSizeMax;
}
constexpr float_t const& GlobalNamespace::TextStyle::__cordl_internal_get__fontSizeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSizeMax;
}
constexpr void GlobalNamespace::TextStyle::__cordl_internal_set__fontSizeMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fontSizeMax = value;
}
constexpr float_t& GlobalNamespace::TextStyle::__cordl_internal_get__charWidthMaxAdj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charWidthMaxAdj;
}
constexpr float_t const& GlobalNamespace::TextStyle::__cordl_internal_get__charWidthMaxAdj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charWidthMaxAdj;
}
constexpr void GlobalNamespace::TextStyle::__cordl_internal_set__charWidthMaxAdj(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charWidthMaxAdj = value;
}
constexpr float_t& GlobalNamespace::TextStyle::__cordl_internal_get__lineSpacingMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineSpacingMax;
}
constexpr float_t const& GlobalNamespace::TextStyle::__cordl_internal_get__lineSpacingMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineSpacingMax;
}
constexpr void GlobalNamespace::TextStyle::__cordl_internal_set__lineSpacingMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineSpacingMax = value;
}
inline ::TMPro::FontStyles GlobalNamespace::TextStyle::get_fontStyle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_fontStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::FontStyles>(this, ___internal_method);
}
inline float_t GlobalNamespace::TextStyle::get_fontSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_fontSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::TextStyle::get_autoSizing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_autoSizing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::TextStyle::get_fontSizeMin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_fontSizeMin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::TextStyle::get_fontSizeMax() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_fontSizeMax", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::TextStyle::get_charWidthMaxAdj() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_charWidthMaxAdj", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::TextStyle::get_lineSpacingMax() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "get_lineSpacingMax", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextStyle::Update(::TMPro::FontStyles fontStyle, float_t fontSize, bool autoSizing, float_t fontSizeMin, float_t fontSizeMax, float_t charWidthMaxAdj,
                                               float_t lineSpacingMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { "Update",
                                                                              {},
                                                                              { ::i2c::type_of<::TMPro::FontStyles>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(),
                                                                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fontStyle, fontSize, autoSizing, fontSizeMin, fontSizeMax, charWidthMaxAdj, lineSpacingMax);
}
inline void GlobalNamespace::TextStyle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextStyle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextStyle* GlobalNamespace::TextStyle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextStyle*>());
}
/// @brief Convert operator to "::GlobalNamespace::IReadOnlyTextStyle"
constexpr GlobalNamespace::TextStyle::operator ::GlobalNamespace::IReadOnlyTextStyle*() noexcept {
  return static_cast<::GlobalNamespace::IReadOnlyTextStyle*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IReadOnlyTextStyle"
constexpr ::GlobalNamespace::IReadOnlyTextStyle* GlobalNamespace::TextStyle::i___GlobalNamespace__IReadOnlyTextStyle() noexcept {
  return static_cast<::GlobalNamespace::IReadOnlyTextStyle*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextStyle::TextStyle() {}
