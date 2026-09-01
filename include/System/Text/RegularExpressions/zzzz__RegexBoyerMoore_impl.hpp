#pragma once
// IWYU pragma private; include "System\Text\RegularExpressions\RegexBoyerMoore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexBoyerMoore_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexBoyerMoore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexBoyerMoore::*)(::StringW, bool, bool, ::System::Globalization::CultureInfo*)>(
    &::System::Text::RegularExpressions::RegexBoyerMoore::_ctor)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x63825ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexBoyerMoore.MatchPattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexBoyerMoore::*)(::StringW, int32_t)>(
    &::System::Text::RegularExpressions::RegexBoyerMoore::MatchPattern)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x63829fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(), { "MatchPattern", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexBoyerMoore.IsMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexBoyerMoore::*)(::StringW, int32_t, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexBoyerMoore::IsMatch)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6382b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(),
                                                             { "IsMatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexBoyerMoore.Scan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexBoyerMoore::*)(::StringW, int32_t, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexBoyerMoore::Scan)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6382ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(),
                                                             { "Scan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_Positive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Positive;
}
constexpr ::ArrayW<int32_t> const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_Positive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Positive;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_Positive(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Positive = value;
}
constexpr ::ArrayW<int32_t>& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_NegativeASCII() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NegativeASCII;
}
constexpr ::ArrayW<int32_t> const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_NegativeASCII() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NegativeASCII;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_NegativeASCII(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NegativeASCII = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_NegativeUnicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NegativeUnicode;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_NegativeUnicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NegativeUnicode;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_NegativeUnicode(::ArrayW<::ArrayW<int32_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NegativeUnicode = value;
}
constexpr ::StringW& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_Pattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pattern;
}
constexpr ::StringW const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_Pattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pattern;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_Pattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Pattern = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_LowASCII() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LowASCII;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_LowASCII() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LowASCII;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_LowASCII(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LowASCII = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_HighASCII() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HighASCII;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_HighASCII() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HighASCII;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_HighASCII(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HighASCII = value;
}
constexpr bool& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_RightToLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightToLeft;
}
constexpr bool const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_RightToLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightToLeft;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_RightToLeft(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RightToLeft = value;
}
constexpr bool& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_CaseInsensitive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CaseInsensitive;
}
constexpr bool const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_CaseInsensitive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CaseInsensitive;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_CaseInsensitive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CaseInsensitive = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____culture = value;
}
inline void System::Text::RegularExpressions::RegexBoyerMoore::_ctor(::StringW pattern, bool caseInsensitive, bool rightToLeft, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pattern, caseInsensitive, rightToLeft, culture);
}
inline bool System::Text::RegularExpressions::RegexBoyerMoore::MatchPattern(::StringW text, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(), { "MatchPattern", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text, index);
}
inline bool System::Text::RegularExpressions::RegexBoyerMoore::IsMatch(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(),
                                                           { "IsMatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text, index, beglimit, endlimit);
}
inline int32_t System::Text::RegularExpressions::RegexBoyerMoore::Scan(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(),
                                                           { "Scan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, text, index, beglimit, endlimit);
}
inline ::System::Text::RegularExpressions::RegexBoyerMoore* System::Text::RegularExpressions::RegexBoyerMoore::New_ctor(::StringW pattern, bool caseInsensitive, bool rightToLeft,
                                                                                                                        ::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexBoyerMoore*>(pattern, caseInsensitive, rightToLeft, culture));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexBoyerMoore::RegexBoyerMoore() {}
