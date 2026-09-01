#pragma once
// IWYU pragma private; include "System\IPv6AddressHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__IPv6AddressHelper_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::System::IPv6AddressHelper.FindCompressionRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t, int32_t> (*)(::System::ReadOnlySpan_1<uint16_t>)>(&::System::IPv6AddressHelper::FindCompressionRange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6372250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(), { "FindCompressionRange", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IPv6AddressHelper.ShouldHaveIpv4Embedded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint16_t>)>(&::System::IPv6AddressHelper::ShouldHaveIpv4Embedded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x637231c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(), { "ShouldHaveIpv4Embedded", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IPv6AddressHelper.IsValidStrict
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*, int32_t, ::by_ref<int32_t>)>(&::System::IPv6AddressHelper::IsValidStrict)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x63723ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(),
                                                             { "IsValidStrict", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IPv6AddressHelper.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<char16_t>, uint16_t*, int32_t, ::by_ref<::StringW>)>(&::System::IPv6AddressHelper::Parse)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x6372778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(),
                            { "Parse", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<uint16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IPv6AddressHelper.ParseCanonicalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, ::by_ref<bool>, ::by_ref<::StringW>)>(&::System::IPv6AddressHelper::ParseCanonicalName)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x6372c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(),
                            { "ParseCanonicalName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IPv6AddressHelper.IsLoopback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint16_t>)>(&::System::IPv6AddressHelper::IsLoopback)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x63731f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(), { "IsLoopback", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IPv6AddressHelper.InternalIsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*, int32_t, ::by_ref<int32_t>, bool)>(&::System::IPv6AddressHelper::InternalIsValid)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x63732cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(),
                                                { "InternalIsValid", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IPv6AddressHelper.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*, int32_t, ::by_ref<int32_t>)>(&::System::IPv6AddressHelper::IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63735d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(), { "IsValid", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline ::System::ValueTuple_2<int32_t, int32_t> System::IPv6AddressHelper::FindCompressionRange(::System::ReadOnlySpan_1<uint16_t> numbers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(), { "FindCompressionRange", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, int32_t>>(nullptr, ___internal_method, numbers);
}
inline bool System::IPv6AddressHelper::ShouldHaveIpv4Embedded(::System::ReadOnlySpan_1<uint16_t> numbers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(), { "ShouldHaveIpv4Embedded", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, numbers);
}
inline bool System::IPv6AddressHelper::IsValidStrict(char16_t* name, int32_t start, ::by_ref<int32_t> end) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(), { "IsValidStrict", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, start, end);
}
inline void System::IPv6AddressHelper::Parse(::System::ReadOnlySpan_1<char16_t> address, uint16_t* numbers, int32_t start, ::by_ref<::StringW> scopeId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(),
                          { "Parse", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<uint16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, address, numbers, start, scopeId);
}
inline ::StringW System::IPv6AddressHelper::ParseCanonicalName(::StringW str, int32_t start, ::by_ref<bool> isLoopback, ::by_ref<::StringW> scopeId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(),
                          { "ParseCanonicalName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str, start, isLoopback, scopeId);
}
inline bool System::IPv6AddressHelper::IsLoopback(::System::ReadOnlySpan_1<uint16_t> numbers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(), { "IsLoopback", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, numbers);
}
inline bool System::IPv6AddressHelper::InternalIsValid(char16_t* name, int32_t start, ::by_ref<int32_t> end, bool validateStrictAddress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(),
                                              { "InternalIsValid", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, start, end, validateStrictAddress);
}
inline bool System::IPv6AddressHelper::IsValid(char16_t* name, int32_t start, ::by_ref<int32_t> end) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IPv6AddressHelper*>(), { "IsValid", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, start, end);
}
// Ctor Parameters []
constexpr ::System::IPv6AddressHelper::IPv6AddressHelper() {}
