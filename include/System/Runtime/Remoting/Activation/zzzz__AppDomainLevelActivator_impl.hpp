#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/AppDomainLevelActivator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__AppDomainLevelActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::AppDomainLevelActivator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)(::StringW, ::System::Runtime::Remoting::Activation::IActivator*)>(
    &::System::Runtime::Remoting::Activation::AppDomainLevelActivator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3abe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::Activation::IActivator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::AppDomainLevelActivator.get_NextActivator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (::System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)()>(
    &::System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3af18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>(), { "get_NextActivator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::AppDomainLevelActivator.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (
    ::System::Runtime::Remoting::Activation::AppDomainLevelActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x5b3af20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>(),
                                                             { "Activate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Activation::AppDomainLevelActivator::__cordl_internal_get__activationUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationUrl;
}
constexpr ::StringW const& System::Runtime::Remoting::Activation::AppDomainLevelActivator::__cordl_internal_get__activationUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activationUrl;
}
constexpr void System::Runtime::Remoting::Activation::AppDomainLevelActivator::__cordl_internal_set__activationUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activationUrl = value;
}
constexpr ::System::Runtime::Remoting::Activation::IActivator*& System::Runtime::Remoting::Activation::AppDomainLevelActivator::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::System::Runtime::Remoting::Activation::IActivator* const& System::Runtime::Remoting::Activation::AppDomainLevelActivator::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void System::Runtime::Remoting::Activation::AppDomainLevelActivator::__cordl_internal_set__next(::System::Runtime::Remoting::Activation::IActivator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____next = value;
}
inline void System::Runtime::Remoting::Activation::AppDomainLevelActivator::_ctor(::StringW activationUrl, ::System::Runtime::Remoting::Activation::IActivator* next) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::Activation::IActivator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activationUrl, next);
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::AppDomainLevelActivator::get_NextActivator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>(), { "get_NextActivator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*
System::Runtime::Remoting::Activation::AppDomainLevelActivator::Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>(),
                                                           { "Activate", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IConstructionReturnMessage*>(this, ___internal_method, ctorCall);
}
inline ::System::Runtime::Remoting::Activation::AppDomainLevelActivator*
System::Runtime::Remoting::Activation::AppDomainLevelActivator::New_ctor(::StringW activationUrl, ::System::Runtime::Remoting::Activation::IActivator* next) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Activation::AppDomainLevelActivator*>(activationUrl, next));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
constexpr System::Runtime::Remoting::Activation::AppDomainLevelActivator::operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Activation::IActivator"
constexpr ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::AppDomainLevelActivator::i___System__Runtime__Remoting__Activation__IActivator() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::AppDomainLevelActivator::AppDomainLevelActivator() {}
