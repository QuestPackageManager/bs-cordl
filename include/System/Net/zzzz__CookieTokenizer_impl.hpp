#pragma once
// IWYU pragma private; include "System/Net/CookieTokenizer.hpp"
#include "System/Net/zzzz__CookieToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieTokenizer_def.hpp"
#include "System/Net/zzzz__CookieToken_def.hpp"
#include "System/Net/zzzz__CookieTokenizer_def.hpp"
//  Writing Method size for method: ::System::Net::CookieTokenizer_RecognizedAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieTokenizer_RecognizedAttribute::*)(::StringW, ::System::Net::CookieToken)>(
    &::System::Net::CookieTokenizer_RecognizedAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6416244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer_RecognizedAttribute>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::CookieToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer_RecognizedAttribute.get_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieToken (::System::Net::CookieTokenizer_RecognizedAttribute::*)()>(
    &::System::Net::CookieTokenizer_RecognizedAttribute::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6416250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer_RecognizedAttribute>(), { "get_Token", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer_RecognizedAttribute.IsEqualTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieTokenizer_RecognizedAttribute::*)(::StringW)>(&::System::Net::CookieTokenizer_RecognizedAttribute::IsEqualTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6415ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer_RecognizedAttribute>(), { "IsEqualTo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Net::CookieTokenizer_RecognizedAttribute::_ctor(::StringW name, ::System::Net::CookieToken token) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer_RecognizedAttribute>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::CookieToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, token);
}
inline ::System::Net::CookieToken System::Net::CookieTokenizer_RecognizedAttribute::get_Token() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer_RecognizedAttribute>(), { "get_Token", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken>(*this, ___internal_method);
}
inline bool System::Net::CookieTokenizer_RecognizedAttribute::IsEqualTo(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer_RecognizedAttribute>(), { "IsEqualTo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_token", ty: "::System::Net::CookieToken", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::CookieTokenizer_RecognizedAttribute::CookieTokenizer_RecognizedAttribute(::StringW m_name, ::System::Net::CookieToken m_token) noexcept {
  this->m_name = m_name;
  this->m_token = m_token;
}
// Ctor Parameters []
constexpr ::System::Net::CookieTokenizer_RecognizedAttribute::CookieTokenizer_RecognizedAttribute() {}
//  Writing Method size for method: ::System::Net::CookieTokenizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieTokenizer::*)(::StringW)>(&::System::Net::CookieTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64158bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_EndOfCookie
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_EndOfCookie)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64158d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_EndOfCookie", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_EndOfCookie
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieTokenizer::*)(bool)>(&::System::Net::CookieTokenizer::set_EndOfCookie)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64158e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_EndOfCookie", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Eof
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Eof)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64158e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Eof", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64158f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieTokenizer::*)(::StringW)>(&::System::Net::CookieTokenizer::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6415900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Quoted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Quoted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6415908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Quoted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_Quoted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieTokenizer::*)(bool)>(&::System::Net::CookieTokenizer::set_Quoted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6415910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_Quoted", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieToken (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6415918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Token", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieTokenizer::*)(::System::Net::CookieToken)>(&::System::Net::CookieTokenizer::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6415920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_Token", {}, { ::i2c::type_of<::System::Net::CookieToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6415928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieTokenizer::*)(::StringW)>(&::System::Net::CookieTokenizer::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6415930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.Extract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::Extract)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6415938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "Extract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.FindNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieToken (::System::Net::CookieTokenizer::*)(bool, bool)>(&::System::Net::CookieTokenizer::FindNext)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6415990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "FindNext", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieToken (::System::Net::CookieTokenizer::*)(bool, bool)>(&::System::Net::CookieTokenizer::Next)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6415bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "Next", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::Reset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6415cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.TokenFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieToken (::System::Net::CookieTokenizer::*)(bool)>(&::System::Net::CookieTokenizer::TokenFromName)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6415d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "TokenFromName", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::CookieTokenizer::__cordl_internal_get_m_eofCookie() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eofCookie;
}
constexpr bool const& System::Net::CookieTokenizer::__cordl_internal_get_m_eofCookie() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eofCookie;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_eofCookie(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_eofCookie = value;
}
constexpr int32_t& System::Net::CookieTokenizer::__cordl_internal_get_m_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_index;
}
constexpr int32_t const& System::Net::CookieTokenizer::__cordl_internal_get_m_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_index;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_index = value;
}
constexpr int32_t& System::Net::CookieTokenizer::__cordl_internal_get_m_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_length;
}
constexpr int32_t const& System::Net::CookieTokenizer::__cordl_internal_get_m_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_length;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_length = value;
}
constexpr ::StringW& System::Net::CookieTokenizer::__cordl_internal_get_m_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr ::StringW const& System::Net::CookieTokenizer::__cordl_internal_get_m_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_name = value;
}
constexpr bool& System::Net::CookieTokenizer::__cordl_internal_get_m_quoted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_quoted;
}
constexpr bool const& System::Net::CookieTokenizer::__cordl_internal_get_m_quoted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_quoted;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_quoted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_quoted = value;
}
constexpr int32_t& System::Net::CookieTokenizer::__cordl_internal_get_m_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_start;
}
constexpr int32_t const& System::Net::CookieTokenizer::__cordl_internal_get_m_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_start;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_start = value;
}
constexpr ::System::Net::CookieToken& System::Net::CookieTokenizer::__cordl_internal_get_m_token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_token;
}
constexpr ::System::Net::CookieToken const& System::Net::CookieTokenizer::__cordl_internal_get_m_token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_token;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_token(::System::Net::CookieToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_token = value;
}
constexpr int32_t& System::Net::CookieTokenizer::__cordl_internal_get_m_tokenLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenLength;
}
constexpr int32_t const& System::Net::CookieTokenizer::__cordl_internal_get_m_tokenLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenLength;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_tokenLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_tokenLength = value;
}
constexpr ::StringW& System::Net::CookieTokenizer::__cordl_internal_get_m_tokenStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenStream;
}
constexpr ::StringW const& System::Net::CookieTokenizer::__cordl_internal_get_m_tokenStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenStream;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_tokenStream(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_tokenStream = value;
}
constexpr ::StringW& System::Net::CookieTokenizer::__cordl_internal_get_m_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr ::StringW const& System::Net::CookieTokenizer::__cordl_internal_get_m_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_value = value;
}
inline void System::Net::CookieTokenizer::setStaticF_RecognizedAttributes(::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute>, "RecognizedAttributes", ::System::Net::CookieTokenizer*>(
      std::forward<::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute>>(value));
}
inline ::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute> System::Net::CookieTokenizer::getStaticF_RecognizedAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute>, "RecognizedAttributes", ::System::Net::CookieTokenizer*>();
}
inline void System::Net::CookieTokenizer::setStaticF_RecognizedServerAttributes(::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute>, "RecognizedServerAttributes", ::System::Net::CookieTokenizer*>(
      std::forward<::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute>>(value));
}
inline ::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute> System::Net::CookieTokenizer::getStaticF_RecognizedServerAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::CookieTokenizer_RecognizedAttribute>, "RecognizedServerAttributes", ::System::Net::CookieTokenizer*>();
}
inline void System::Net::CookieTokenizer::_ctor(::StringW tokenStream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokenStream);
}
inline bool System::Net::CookieTokenizer::get_EndOfCookie() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_EndOfCookie", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_EndOfCookie(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_EndOfCookie", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::CookieTokenizer::get_Eof() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Eof", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Net::CookieTokenizer::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_Name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::CookieTokenizer::get_Quoted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Quoted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_Quoted(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_Quoted", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::CookieToken System::Net::CookieTokenizer::get_Token() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Token", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_Token(::System::Net::CookieToken value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_Token", {}, { ::i2c::type_of<::System::Net::CookieToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::CookieTokenizer::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_Value(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::CookieTokenizer::Extract() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "Extract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::CookieToken System::Net::CookieTokenizer::FindNext(bool ignoreComma, bool ignoreEquals) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "FindNext", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken>(this, ___internal_method, ignoreComma, ignoreEquals);
}
inline ::System::Net::CookieToken System::Net::CookieTokenizer::Next(bool first, bool parseResponseCookies) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "Next", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken>(this, ___internal_method, first, parseResponseCookies);
}
inline void System::Net::CookieTokenizer::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::CookieToken System::Net::CookieTokenizer::TokenFromName(bool parseResponseCookies) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieTokenizer*>(), { "TokenFromName", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken>(this, ___internal_method, parseResponseCookies);
}
inline ::System::Net::CookieTokenizer* System::Net::CookieTokenizer::New_ctor(::StringW tokenStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CookieTokenizer*>(tokenStream));
}
// Ctor Parameters []
constexpr ::System::Net::CookieTokenizer::CookieTokenizer() {}
