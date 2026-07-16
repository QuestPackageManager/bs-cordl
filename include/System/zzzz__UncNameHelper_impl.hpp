#pragma once
// IWYU pragma private; include "System/UncNameHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__UncNameHelper_def.hpp"
//  Writing Method size for method: ::System::UncNameHelper.ParseCanonicalName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, int32_t, ::by_ref<bool>)>(&::System::UncNameHelper::ParseCanonicalName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6374978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::UncNameHelper*>(),
                                         { "ParseCanonicalName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UncNameHelper.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*, uint16_t, ::by_ref<int32_t>, bool)>(&::System::UncNameHelper::IsValid)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x637497c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UncNameHelper*>(),
                                                { "IsValid", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::UncNameHelper::ParseCanonicalName(::StringW str, int32_t start, int32_t end, ::by_ref<bool> loopback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UncNameHelper*>(),
                                              { "ParseCanonicalName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str, start, end, loopback);
}
inline bool System::UncNameHelper::IsValid(char16_t* name, uint16_t start, ::by_ref<int32_t> returnedEnd, bool notImplicitFile) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UncNameHelper*>(),
                                              { "IsValid", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, start, returnedEnd, notImplicitFile);
}
// Ctor Parameters []
constexpr ::System::UncNameHelper::UncNameHelper() {}
