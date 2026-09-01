#pragma once
// IWYU pragma private; include "System\IriHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__IriHelper_def.hpp"
#include "System/zzzz__UriComponents_def.hpp"
//  Writing Method size for method: ::System::IriHelper.CheckIriUnicodeRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, bool)>(&::System::IriHelper::CheckIriUnicodeRange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6375078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IriHelper*>(), { "CheckIriUnicodeRange", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IriHelper.CheckIriUnicodeRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, char16_t, ::by_ref<bool>, bool)>(&::System::IriHelper::CheckIriUnicodeRange)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x63750d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IriHelper*>(),
                                                { "CheckIriUnicodeRange", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IriHelper.CheckIsReserved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, ::System::UriComponents)>(&::System::IriHelper::CheckIsReserved)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6375780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IriHelper*>(), { "CheckIsReserved", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::UriComponents>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IriHelper.EscapeUnescapeIri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t*, int32_t, int32_t, ::System::UriComponents)>(&::System::IriHelper::EscapeUnescapeIri)> {
  constexpr static std::size_t size = 0x830;
  constexpr static std::size_t addrs = 0x63758b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IriHelper*>(),
                            { "EscapeUnescapeIri", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::UriComponents>() } })));
    return ___internal_method;
  }
};
inline bool System::IriHelper::CheckIriUnicodeRange(char16_t unicode, bool isQuery) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IriHelper*>(), { "CheckIriUnicodeRange", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unicode, isQuery);
}
inline bool System::IriHelper::CheckIriUnicodeRange(char16_t highSurr, char16_t lowSurr, ::by_ref<bool> surrogatePair, bool isQuery) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IriHelper*>(),
                                              { "CheckIriUnicodeRange", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, highSurr, lowSurr, surrogatePair, isQuery);
}
inline bool System::IriHelper::CheckIsReserved(char16_t ch, ::System::UriComponents component) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IriHelper*>(), { "CheckIsReserved", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::UriComponents>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch, component);
}
inline ::StringW System::IriHelper::EscapeUnescapeIri(char16_t* pInput, int32_t start, int32_t end, ::System::UriComponents component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IriHelper*>(),
                                       { "EscapeUnescapeIri", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::UriComponents>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pInput, start, end, component);
}
// Ctor Parameters []
constexpr ::System::IriHelper::IriHelper() {}
