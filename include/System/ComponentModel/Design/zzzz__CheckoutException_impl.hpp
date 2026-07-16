#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/CheckoutException.hpp"
#include "System/Runtime/InteropServices/zzzz__ExternalException_impl.hpp"
#include "System/ComponentModel/Design/zzzz__CheckoutException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::CheckoutException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::CheckoutException::*)()>(&::System::ComponentModel::Design::CheckoutException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e5a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::CheckoutException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::CheckoutException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::CheckoutException::*)(::StringW, int32_t)>(
    &::System::ComponentModel::Design::CheckoutException::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x63e5a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::CheckoutException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::CheckoutException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::CheckoutException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::ComponentModel::Design::CheckoutException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63e5a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::CheckoutException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::Design::CheckoutException::setStaticF_Canceled(::System::ComponentModel::Design::CheckoutException* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::Design::CheckoutException*, "Canceled", ::System::ComponentModel::Design::CheckoutException*>(
      std::forward<::System::ComponentModel::Design::CheckoutException*>(value));
}
inline ::System::ComponentModel::Design::CheckoutException* System::ComponentModel::Design::CheckoutException::getStaticF_Canceled() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::Design::CheckoutException*, "Canceled", ::System::ComponentModel::Design::CheckoutException*>();
}
inline void System::ComponentModel::Design::CheckoutException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::CheckoutException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::Design::CheckoutException::_ctor(::StringW message, int32_t errorCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::CheckoutException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, errorCode);
}
inline void System::ComponentModel::Design::CheckoutException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ComponentModel::Design::CheckoutException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::ComponentModel::Design::CheckoutException* System::ComponentModel::Design::CheckoutException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Design::CheckoutException*>());
}
inline ::System::ComponentModel::Design::CheckoutException* System::ComponentModel::Design::CheckoutException::New_ctor(::StringW message, int32_t errorCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Design::CheckoutException*>(message, errorCode));
}
inline ::System::ComponentModel::Design::CheckoutException* System::ComponentModel::Design::CheckoutException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                        ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Design::CheckoutException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::CheckoutException::CheckoutException() {}
