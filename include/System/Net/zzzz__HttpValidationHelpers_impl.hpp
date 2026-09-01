#pragma once
// IWYU pragma private; include "System\Net\HttpValidationHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpValidationHelpers_def.hpp"
//  Writing Method size for method: ::System::Net::HttpValidationHelpers.IsInvalidMethodOrHeaderString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63f83d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpValidationHelpers*>(), { "IsInvalidMethodOrHeaderString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Net::HttpValidationHelpers::setStaticF_s_httpTrimCharacters(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_httpTrimCharacters", ::System::Net::HttpValidationHelpers*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::HttpValidationHelpers::getStaticF_s_httpTrimCharacters() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_httpTrimCharacters", ::System::Net::HttpValidationHelpers*>();
}
inline bool System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString(::StringW stringValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpValidationHelpers*>(), { "IsInvalidMethodOrHeaderString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringValue);
}
// Ctor Parameters []
constexpr ::System::Net::HttpValidationHelpers::HttpValidationHelpers() {}
