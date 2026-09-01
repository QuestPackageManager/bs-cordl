#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\Lexer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::Lexer::*)(::StringW)>(&::System::Net::Http::Headers::Lexer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e253c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::Lexer::*)()>(&::System::Net::Http::Headers::Lexer::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60eadb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::Lexer::*)(int32_t)>(&::System::Net::Http::Headers::Lexer::set_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60eadb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "set_Position", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.GetStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::Lexer::*)(::System::Net::Http::Headers::Token)>(&::System::Net::Http::Headers::Lexer::GetStringValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e2a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "GetStringValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.GetStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::Lexer::*)(::System::Net::Http::Headers::Token, ::System::Net::Http::Headers::Token)>(
    &::System::Net::Http::Headers::Lexer::GetStringValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60eadc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                { "GetStringValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.GetQuotedStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::Lexer::*)(::System::Net::Http::Headers::Token)>(
    &::System::Net::Http::Headers::Lexer::GetQuotedStringValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60e42a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "GetQuotedStringValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.GetRemainingStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::Lexer::*)(int32_t)>(&::System::Net::Http::Headers::Lexer::GetRemainingStringValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60e2b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "GetRemainingStringValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.IsStarStringValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::Lexer::*)(::System::Net::Http::Headers::Token)>(&::System::Net::Http::Headers::Lexer::IsStarStringValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60e660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "IsStarStringValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.TryGetNumericValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::Lexer::*)(::System::Net::Http::Headers::Token, ::by_ref<int32_t>)>(
    &::System::Net::Http::Headers::Lexer::TryGetNumericValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60eae40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                             { "TryGetNumericValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.TryGetNumericValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::Lexer::*)(::System::Net::Http::Headers::Token, ::by_ref<int64_t>)>(
    &::System::Net::Http::Headers::Lexer::TryGetNumericValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60e66d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                             { "TryGetNumericValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.TryGetTimeSpanValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::TimeSpan> (::System::Net::Http::Headers::Lexer::*)(::System::Net::Http::Headers::Token)>(
    &::System::Net::Http::Headers::Lexer::TryGetTimeSpanValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x60e41e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "TryGetTimeSpanValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.TryGetDateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::Lexer::*)(::System::Net::Http::Headers::Token, ::by_ref<::System::DateTimeOffset>)>(
    &::System::Net::Http::Headers::Lexer::TryGetDateValue)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60eaee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                { "TryGetDateValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.TryGetDateValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::DateTimeOffset>)>(&::System::Net::Http::Headers::Lexer::TryGetDateValue)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60eafdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                             { "TryGetDateValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.TryGetDoubleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::Lexer::*)(::System::Net::Http::Headers::Token, ::by_ref<double_t>)>(
    &::System::Net::Http::Headers::Lexer::TryGetDoubleValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60eb0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                             { "TryGetDoubleValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::by_ref<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.IsValidToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::Headers::Lexer::IsValidToken)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60e58ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "IsValidToken", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.IsValidCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Net::Http::Headers::Lexer::IsValidCharacter)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60e5960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "IsValidCharacter", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.EatChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::Lexer::*)()>(&::System::Net::Http::Headers::Lexer::EatChar)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60e6e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "EatChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.PeekChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::Lexer::*)()>(&::System::Net::Http::Headers::Lexer::PeekChar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60e6dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "PeekChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.ScanCommentOptional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::Lexer::*)(::by_ref<::StringW>, ::by_ref<::System::Net::Http::Headers::Token>)>(
    &::System::Net::Http::Headers::Lexer::ScanCommentOptional)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x60eb168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                { "ScanCommentOptional", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Lexer.Scan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::Token (::System::Net::Http::Headers::Lexer::*)(bool)>(&::System::Net::Http::Headers::Lexer::Scan)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x60e276c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "Scan", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::Http::Headers::Lexer::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr ::StringW const& System::Net::Http::Headers::Lexer::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void System::Net::Http::Headers::Lexer::__cordl_internal_set_s(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr int32_t& System::Net::Http::Headers::Lexer::__cordl_internal_get_pos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr int32_t const& System::Net::Http::Headers::Lexer::__cordl_internal_get_pos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr void System::Net::Http::Headers::Lexer::__cordl_internal_set_pos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pos = value;
}
inline void System::Net::Http::Headers::Lexer::setStaticF_token_chars(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "token_chars", ::System::Net::Http::Headers::Lexer*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::Net::Http::Headers::Lexer::getStaticF_token_chars() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "token_chars", ::System::Net::Http::Headers::Lexer*>();
}
inline void System::Net::Http::Headers::Lexer::setStaticF_last_token_char(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "last_token_char", ::System::Net::Http::Headers::Lexer*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::Http::Headers::Lexer::getStaticF_last_token_char() {
  return ::cordl_internals::getStaticField<int32_t, "last_token_char", ::System::Net::Http::Headers::Lexer*>();
}
inline void System::Net::Http::Headers::Lexer::setStaticF_dt_formats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "dt_formats", ::System::Net::Http::Headers::Lexer*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Net::Http::Headers::Lexer::getStaticF_dt_formats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "dt_formats", ::System::Net::Http::Headers::Lexer*>();
}
inline void System::Net::Http::Headers::Lexer::_ctor(::StringW stream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline int32_t System::Net::Http::Headers::Lexer::get_Position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Http::Headers::Lexer::set_Position(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "set_Position", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::Http::Headers::Lexer::GetStringValue(::System::Net::Http::Headers::Token token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "GetStringValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, token);
}
inline ::StringW System::Net::Http::Headers::Lexer::GetStringValue(::System::Net::Http::Headers::Token start, ::System::Net::Http::Headers::Token end) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                              { "GetStringValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, start, end);
}
inline ::StringW System::Net::Http::Headers::Lexer::GetQuotedStringValue(::System::Net::Http::Headers::Token start) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "GetQuotedStringValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, start);
}
inline ::StringW System::Net::Http::Headers::Lexer::GetRemainingStringValue(int32_t position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "GetRemainingStringValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, position);
}
inline bool System::Net::Http::Headers::Lexer::IsStarStringValue(::System::Net::Http::Headers::Token token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "IsStarStringValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool System::Net::Http::Headers::Lexer::TryGetNumericValue(::System::Net::Http::Headers::Token token, ::by_ref<int32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                           { "TryGetNumericValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token, value);
}
inline bool System::Net::Http::Headers::Lexer::TryGetNumericValue(::System::Net::Http::Headers::Token token, ::by_ref<int64_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                           { "TryGetNumericValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token, value);
}
inline ::System::Nullable_1<::System::TimeSpan> System::Net::Http::Headers::Lexer::TryGetTimeSpanValue(::System::Net::Http::Headers::Token token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "TryGetTimeSpanValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>>(this, ___internal_method, token);
}
inline bool System::Net::Http::Headers::Lexer::TryGetDateValue(::System::Net::Http::Headers::Token token, ::by_ref<::System::DateTimeOffset> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                              { "TryGetDateValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token, value);
}
inline bool System::Net::Http::Headers::Lexer::TryGetDateValue(::StringW text, ::by_ref<::System::DateTimeOffset> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "TryGetDateValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, value);
}
inline bool System::Net::Http::Headers::Lexer::TryGetDoubleValue(::System::Net::Http::Headers::Token token, ::by_ref<double_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                           { "TryGetDoubleValue", {}, { ::i2c::type_of<::System::Net::Http::Headers::Token>(), ::i2c::type_of<::by_ref<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token, value);
}
inline bool System::Net::Http::Headers::Lexer::IsValidToken(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "IsValidToken", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input);
}
inline bool System::Net::Http::Headers::Lexer::IsValidCharacter(char16_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "IsValidCharacter", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input);
}
inline void System::Net::Http::Headers::Lexer::EatChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "EatChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::Http::Headers::Lexer::PeekChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "PeekChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::Lexer::ScanCommentOptional(::by_ref<::StringW> value, ::by_ref<::System::Net::Http::Headers::Token> readToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(),
                                                           { "ScanCommentOptional", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, readToken);
}
inline ::System::Net::Http::Headers::Token System::Net::Http::Headers::Lexer::Scan(bool recognizeDash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Lexer*>(), { "Scan", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::Token>(this, ___internal_method, recognizeDash);
}
inline ::System::Net::Http::Headers::Lexer* System::Net::Http::Headers::Lexer::New_ctor(::StringW stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::Lexer*>(stream));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Lexer::Lexer() {}
