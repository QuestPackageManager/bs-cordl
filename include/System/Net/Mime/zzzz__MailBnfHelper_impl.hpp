#pragma once
// IWYU pragma private; include "System\Net\Mime\MailBnfHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mime/zzzz__MailBnfHelper_def.hpp"
//  Writing Method size for method: ::System::Net::Mime::MailBnfHelper.CreateCharactersAllowedInAtoms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)()>(&::System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInAtoms)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x636d604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInAtoms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::MailBnfHelper.CreateCharactersAllowedInQuotedStrings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)()>(&::System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInQuotedStrings)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x636d7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInQuotedStrings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::MailBnfHelper.CreateCharactersAllowedInDomainLiterals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)()>(&::System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInDomainLiterals)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x636d928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInDomainLiterals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::MailBnfHelper.CreateCharactersAllowedInHeaderNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)()>(&::System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInHeaderNames)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x636da68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInHeaderNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::MailBnfHelper.CreateCharactersAllowedInTokens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)()>(&::System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInTokens)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x636db2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInTokens", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::MailBnfHelper.CreateCharactersAllowedInComments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (*)()>(&::System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInComments)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x636dc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInComments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mime::MailBnfHelper.IsAllowedWhiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Net::Mime::MailBnfHelper::IsAllowedWhiteSpace)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x636dd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "IsAllowedWhiteSpace", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Mime::MailBnfHelper::setStaticF_Atext(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "Atext", ::System::Net::Mime::MailBnfHelper*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::getStaticF_Atext() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "Atext", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Qtext(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "Qtext", ::System::Net::Mime::MailBnfHelper*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::getStaticF_Qtext() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "Qtext", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Dtext(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "Dtext", ::System::Net::Mime::MailBnfHelper*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::getStaticF_Dtext() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "Dtext", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Ftext(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "Ftext", ::System::Net::Mime::MailBnfHelper*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::getStaticF_Ftext() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "Ftext", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Ttext(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "Ttext", ::System::Net::Mime::MailBnfHelper*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::getStaticF_Ttext() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "Ttext", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Ctext(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "Ctext", ::System::Net::Mime::MailBnfHelper*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::getStaticF_Ctext() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "Ctext", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Ascii7bitMaxValue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "Ascii7bitMaxValue", ::System::Net::Mime::MailBnfHelper*>(std::forward<int32_t>(value));
}
inline int32_t System::Net::Mime::MailBnfHelper::getStaticF_Ascii7bitMaxValue() {
  return ::cordl_internals::getStaticField<int32_t, "Ascii7bitMaxValue", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Quote(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "Quote", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_Quote() {
  return ::cordl_internals::getStaticField<char16_t, "Quote", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Space(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "Space", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_Space() {
  return ::cordl_internals::getStaticField<char16_t, "Space", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Tab(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "Tab", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_Tab() {
  return ::cordl_internals::getStaticField<char16_t, "Tab", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_CR(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "CR", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_CR() {
  return ::cordl_internals::getStaticField<char16_t, "CR", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_LF(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "LF", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_LF() {
  return ::cordl_internals::getStaticField<char16_t, "LF", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_StartComment(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "StartComment", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_StartComment() {
  return ::cordl_internals::getStaticField<char16_t, "StartComment", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_EndComment(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "EndComment", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_EndComment() {
  return ::cordl_internals::getStaticField<char16_t, "EndComment", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Backslash(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "Backslash", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_Backslash() {
  return ::cordl_internals::getStaticField<char16_t, "Backslash", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_At(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "At", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_At() {
  return ::cordl_internals::getStaticField<char16_t, "At", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_EndAngleBracket(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "EndAngleBracket", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_EndAngleBracket() {
  return ::cordl_internals::getStaticField<char16_t, "EndAngleBracket", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_StartAngleBracket(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "StartAngleBracket", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_StartAngleBracket() {
  return ::cordl_internals::getStaticField<char16_t, "StartAngleBracket", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_StartSquareBracket(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "StartSquareBracket", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_StartSquareBracket() {
  return ::cordl_internals::getStaticField<char16_t, "StartSquareBracket", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_EndSquareBracket(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "EndSquareBracket", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_EndSquareBracket() {
  return ::cordl_internals::getStaticField<char16_t, "EndSquareBracket", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Comma(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "Comma", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_Comma() {
  return ::cordl_internals::getStaticField<char16_t, "Comma", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_Dot(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "Dot", ::System::Net::Mime::MailBnfHelper*>(std::forward<char16_t>(value));
}
inline char16_t System::Net::Mime::MailBnfHelper::getStaticF_Dot() {
  return ::cordl_internals::getStaticField<char16_t, "Dot", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_s_colonSeparator(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_colonSeparator", ::System::Net::Mime::MailBnfHelper*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::Mime::MailBnfHelper::getStaticF_s_colonSeparator() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_colonSeparator", ::System::Net::Mime::MailBnfHelper*>();
}
inline void System::Net::Mime::MailBnfHelper::setStaticF_s_months(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_months", ::System::Net::Mime::MailBnfHelper*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Net::Mime::MailBnfHelper::getStaticF_s_months() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_months", ::System::Net::Mime::MailBnfHelper*>();
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInAtoms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInAtoms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method);
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInQuotedStrings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInQuotedStrings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method);
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInDomainLiterals() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInDomainLiterals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method);
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInHeaderNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInHeaderNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method);
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInTokens() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInTokens", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method);
}
inline ::ArrayW<bool> System::Net::Mime::MailBnfHelper::CreateCharactersAllowedInComments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "CreateCharactersAllowedInComments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(nullptr, ___internal_method);
}
inline bool System::Net::Mime::MailBnfHelper::IsAllowedWhiteSpace(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mime::MailBnfHelper*>(), { "IsAllowedWhiteSpace", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::System::Net::Mime::MailBnfHelper::MailBnfHelper() {}
