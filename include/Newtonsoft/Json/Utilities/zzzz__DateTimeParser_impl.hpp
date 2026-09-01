#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\DateTimeParser.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ParserTimeZone_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DateTimeParser_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeParser.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Utilities::DateTimeParser::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::Newtonsoft::Json::Utilities::DateTimeParser::Parse)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d213cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(),
                                                             { "Parse", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeParser.ParseDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Utilities::DateTimeParser::*)(int32_t)>(&::Newtonsoft::Json::Utilities::DateTimeParser::ParseDate)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5d214c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseDate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeParser.ParseTimeAndZoneAndWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Utilities::DateTimeParser::*)(int32_t)>(
    &::Newtonsoft::Json::Utilities::DateTimeParser::ParseTimeAndZoneAndWhitespace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d216b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseTimeAndZoneAndWhitespace", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeParser.ParseTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Utilities::DateTimeParser::*)(::by_ref<int32_t>)>(&::Newtonsoft::Json::Utilities::DateTimeParser::ParseTime)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5d218d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseTime", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeParser.ParseZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Utilities::DateTimeParser::*)(int32_t)>(&::Newtonsoft::Json::Utilities::DateTimeParser::ParseZone)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5d21b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseZone", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeParser.Parse4Digit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Utilities::DateTimeParser::*)(int32_t, ::by_ref<int32_t>)>(
    &::Newtonsoft::Json::Utilities::DateTimeParser::Parse4Digit)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d21754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "Parse4Digit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeParser.Parse2Digit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Utilities::DateTimeParser::*)(int32_t, ::by_ref<int32_t>)>(
    &::Newtonsoft::Json::Utilities::DateTimeParser::Parse2Digit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d21838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "Parse2Digit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeParser.ParseChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Utilities::DateTimeParser::*)(int32_t, char16_t)>(&::Newtonsoft::Json::Utilities::DateTimeParser::ParseChar)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d21668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseChar", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_Power10(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "Power10", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_Power10() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "Power10", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_Lzyyyy(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_Lzyyyy() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_Lzyyyy_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_Lzyyyy_() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_Lzyyyy_MM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_Lzyyyy_MM() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_Lzyyyy_MM_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_Lzyyyy_MM_() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_Lzyyyy_MM_dd(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_dd", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_Lzyyyy_MM_dd() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_dd", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_Lzyyyy_MM_ddT(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lzyyyy_MM_ddT", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_Lzyyyy_MM_ddT() {
  return ::cordl_internals::getStaticField<int32_t, "Lzyyyy_MM_ddT", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_LzHH(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_LzHH() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_LzHH_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH_", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_LzHH_() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH_", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_LzHH_mm(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH_mm", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_LzHH_mm() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH_mm", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_LzHH_mm_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH_mm_", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_LzHH_mm_() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH_mm_", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_LzHH_mm_ss(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LzHH_mm_ss", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_LzHH_mm_ss() {
  return ::cordl_internals::getStaticField<int32_t, "LzHH_mm_ss", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_Lz_(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz_", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_Lz_() {
  return ::cordl_internals::getStaticField<int32_t, "Lz_", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline void Newtonsoft::Json::Utilities::DateTimeParser::setStaticF_Lz_zz(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Lz_zz", ::Newtonsoft::Json::Utilities::DateTimeParser>(std::forward<int32_t>(value));
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeParser::getStaticF_Lz_zz() {
  return ::cordl_internals::getStaticField<int32_t, "Lz_zz", ::Newtonsoft::Json::Utilities::DateTimeParser>();
}
inline bool Newtonsoft::Json::Utilities::DateTimeParser::Parse(::ArrayW<char16_t> text, int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(),
                                                           { "Parse", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, text, startIndex, length);
}
inline bool Newtonsoft::Json::Utilities::DateTimeParser::ParseDate(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseDate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, start);
}
inline bool Newtonsoft::Json::Utilities::DateTimeParser::ParseTimeAndZoneAndWhitespace(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseTimeAndZoneAndWhitespace", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, start);
}
inline bool Newtonsoft::Json::Utilities::DateTimeParser::ParseTime(::by_ref<int32_t> start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseTime", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, start);
}
inline bool Newtonsoft::Json::Utilities::DateTimeParser::ParseZone(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseZone", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, start);
}
inline bool Newtonsoft::Json::Utilities::DateTimeParser::Parse4Digit(int32_t start, ::by_ref<int32_t> num) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "Parse4Digit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, start, num);
}
inline bool Newtonsoft::Json::Utilities::DateTimeParser::Parse2Digit(int32_t start, ::by_ref<int32_t> num) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "Parse2Digit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, start, num);
}
inline bool Newtonsoft::Json::Utilities::DateTimeParser::ParseChar(int32_t start, char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeParser>(), { "ParseChar", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, start, ch);
}
// Ctor Parameters [CppParam { name: "Year", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Month", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Day", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Hour", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Minute", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "Second", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Fraction", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ZoneHour", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ZoneMinute", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Zone",
// ty: "::Newtonsoft::Json::Utilities::ParserTimeZone", modifiers: "", def_value: Some("{}") }, CppParam { name: "_text", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_end", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::DateTimeParser::DateTimeParser(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Fraction, int32_t ZoneHour,
                                                                        int32_t ZoneMinute, ::Newtonsoft::Json::Utilities::ParserTimeZone Zone, ::ArrayW<char16_t> _text, int32_t _end) noexcept {
  this->Year = Year;
  this->Month = Month;
  this->Day = Day;
  this->Hour = Hour;
  this->Minute = Minute;
  this->Second = Second;
  this->Fraction = Fraction;
  this->ZoneHour = ZoneHour;
  this->ZoneMinute = ZoneMinute;
  this->Zone = Zone;
  this->_text = _text;
  this->_end = _end;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::DateTimeParser::DateTimeParser() {}
