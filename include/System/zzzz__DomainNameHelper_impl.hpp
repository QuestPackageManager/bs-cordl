#pragma once
// IWYU pragma private; include "System/DomainNameHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DomainNameHelper_def.hpp"
//  Writing Method size for method: ::System::DomainNameHelper.ParseCanonicalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, int32_t, ::by_ref<bool>)>(&::System::DomainNameHelper::ParseCanonicalName)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x63738bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(),
                                         { "ParseCanonicalName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*, uint16_t, ::by_ref<int32_t>, ::by_ref<bool>, bool)>(&::System::DomainNameHelper::IsValid)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6373a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DomainNameHelper*>(),
            { "IsValid", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.IsValidByIri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*, uint16_t, ::by_ref<int32_t>, ::by_ref<bool>, bool)>(&::System::DomainNameHelper::IsValidByIri)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6373c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DomainNameHelper*>(),
            { "IsValidByIri", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.IdnEquivalent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t*, int32_t, int32_t, ::by_ref<bool>, ::by_ref<bool>)>(&::System::DomainNameHelper::IdnEquivalent)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6373e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DomainNameHelper*>(),
            { "IdnEquivalent", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.IdnEquivalent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t*, int32_t, int32_t, ::by_ref<bool>, ::by_ref<::StringW>)>(&::System::DomainNameHelper::IdnEquivalent)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x63740bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DomainNameHelper*>(),
            { "IdnEquivalent", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.IsIdnAce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t)>(&::System::DomainNameHelper::IsIdnAce)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63742f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(), { "IsIdnAce", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.IsIdnAce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*, int32_t)>(&::System::DomainNameHelper::IsIdnAce)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63742ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(), { "IsIdnAce", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.UnicodeEquivalent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, char16_t*, int32_t, int32_t)>(&::System::DomainNameHelper::UnicodeEquivalent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6374388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(),
                                                { "UnicodeEquivalent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.UnicodeEquivalent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t*, int32_t, int32_t, ::by_ref<bool>, ::by_ref<bool>)>(&::System::DomainNameHelper::UnicodeEquivalent)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x63744a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DomainNameHelper*>(),
            { "UnicodeEquivalent", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.IsASCIILetterOrDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, ::by_ref<bool>)>(&::System::DomainNameHelper::IsASCIILetterOrDigit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6373bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(), { "IsASCIILetterOrDigit", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DomainNameHelper.IsValidDomainLabelCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, ::by_ref<bool>)>(&::System::DomainNameHelper::IsValidDomainLabelCharacter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6373bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(), { "IsValidDomainLabelCharacter", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::DomainNameHelper::ParseCanonicalName(::StringW str, int32_t start, int32_t end, ::by_ref<bool> loopback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(),
                                              { "ParseCanonicalName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str, start, end, loopback);
}
inline bool System::DomainNameHelper::IsValid(char16_t* name, uint16_t pos, ::by_ref<int32_t> returnedEnd, ::by_ref<bool> notCanonical, bool notImplicitFile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::DomainNameHelper*>(),
                       { "IsValid", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, pos, returnedEnd, notCanonical, notImplicitFile);
}
inline bool System::DomainNameHelper::IsValidByIri(char16_t* name, uint16_t pos, ::by_ref<int32_t> returnedEnd, ::by_ref<bool> notCanonical, bool notImplicitFile) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DomainNameHelper*>(),
          { "IsValidByIri", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, pos, returnedEnd, notCanonical, notImplicitFile);
}
inline ::StringW System::DomainNameHelper::IdnEquivalent(char16_t* hostname, int32_t start, int32_t end, ::by_ref<bool> allAscii, ::by_ref<bool> atLeastOneValidIdn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DomainNameHelper*>(),
          { "IdnEquivalent", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hostname, start, end, allAscii, atLeastOneValidIdn);
}
inline ::StringW System::DomainNameHelper::IdnEquivalent(char16_t* hostname, int32_t start, int32_t end, ::by_ref<bool> allAscii, ::by_ref<::StringW> bidiStrippedHost) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DomainNameHelper*>(),
          { "IdnEquivalent", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hostname, start, end, allAscii, bidiStrippedHost);
}
inline bool System::DomainNameHelper::IsIdnAce(::StringW input, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(), { "IsIdnAce", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, index);
}
inline bool System::DomainNameHelper::IsIdnAce(char16_t* input, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(), { "IsIdnAce", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, index);
}
inline ::StringW System::DomainNameHelper::UnicodeEquivalent(::StringW idnHost, char16_t* hostname, int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(),
                                              { "UnicodeEquivalent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, idnHost, hostname, start, end);
}
inline ::StringW System::DomainNameHelper::UnicodeEquivalent(char16_t* hostname, int32_t start, int32_t end, ::by_ref<bool> allAscii, ::by_ref<bool> atLeastOneValidIdn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DomainNameHelper*>(),
          { "UnicodeEquivalent", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hostname, start, end, allAscii, atLeastOneValidIdn);
}
inline bool System::DomainNameHelper::IsASCIILetterOrDigit(char16_t character, ::by_ref<bool> notCanonical) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(), { "IsASCIILetterOrDigit", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, character, notCanonical);
}
inline bool System::DomainNameHelper::IsValidDomainLabelCharacter(char16_t character, ::by_ref<bool> notCanonical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DomainNameHelper*>(), { "IsValidDomainLabelCharacter", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, character, notCanonical);
}
// Ctor Parameters []
constexpr ::System::DomainNameHelper::DomainNameHelper() {}
