#pragma once
// IWYU pragma private; include "System\Net\ValidationHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ValidationHelper_def.hpp"
//  Writing Method size for method: ::System::Net::ValidationHelper.MakeStringNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::ValidationHelper::MakeStringNull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x640b8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ValidationHelper*>(), { "MakeStringNull", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.IsBlankString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::ValidationHelper::IsBlankString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x640e200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ValidationHelper*>(), { "IsBlankString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ValidationHelper.ValidateTcpPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Net::ValidationHelper::ValidateTcpPort)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x640e21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ValidationHelper*>(), { "ValidateTcpPort", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Net::ValidationHelper::setStaticF_EmptyArray(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "EmptyArray", ::System::Net::ValidationHelper*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Net::ValidationHelper::getStaticF_EmptyArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "EmptyArray", ::System::Net::ValidationHelper*>();
}
inline void System::Net::ValidationHelper::setStaticF_InvalidMethodChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "InvalidMethodChars", ::System::Net::ValidationHelper*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::ValidationHelper::getStaticF_InvalidMethodChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "InvalidMethodChars", ::System::Net::ValidationHelper*>();
}
inline void System::Net::ValidationHelper::setStaticF_InvalidParamChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "InvalidParamChars", ::System::Net::ValidationHelper*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::ValidationHelper::getStaticF_InvalidParamChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "InvalidParamChars", ::System::Net::ValidationHelper*>();
}
inline ::StringW System::Net::ValidationHelper::MakeStringNull(::StringW stringValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ValidationHelper*>(), { "MakeStringNull", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, stringValue);
}
inline bool System::Net::ValidationHelper::IsBlankString(::StringW stringValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ValidationHelper*>(), { "IsBlankString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringValue);
}
inline bool System::Net::ValidationHelper::ValidateTcpPort(int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ValidationHelper*>(), { "ValidateTcpPort", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, port);
}
// Ctor Parameters []
constexpr ::System::Net::ValidationHelper::ValidationHelper() {}
