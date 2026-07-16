#pragma once
// IWYU pragma private; include "Internal/Runtime/Augments/RuntimeAugments.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Runtime/Augments/zzzz__RuntimeAugments_def.hpp"
#include "Internal/Runtime/Augments/zzzz__ReflectionExecutionDomainCallbacks_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeAugments.ReportUnhandledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::Internal::Runtime::Augments::RuntimeAugments::ReportUnhandledException)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ac5540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeAugments*>(), { "ReportUnhandledException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::RuntimeAugments.get_Callbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* (*)()>(&::Internal::Runtime::Augments::RuntimeAugments::get_Callbacks)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ac555c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeAugments*>(), { "get_Callbacks", {}, {} })));
    return ___internal_method;
  }
};
inline void Internal::Runtime::Augments::RuntimeAugments::setStaticF_s_reflectionExecutionDomainCallbacks(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* value) {
  ::cordl_internals::setStaticField<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*, "s_reflectionExecutionDomainCallbacks", ::Internal::Runtime::Augments::RuntimeAugments*>(
      std::forward<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>(value));
}
inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* Internal::Runtime::Augments::RuntimeAugments::getStaticF_s_reflectionExecutionDomainCallbacks() {
  return ::cordl_internals::getStaticField<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*, "s_reflectionExecutionDomainCallbacks",
                                           ::Internal::Runtime::Augments::RuntimeAugments*>();
}
inline void Internal::Runtime::Augments::RuntimeAugments::ReportUnhandledException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeAugments*>(), { "ReportUnhandledException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception);
}
inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* Internal::Runtime::Augments::RuntimeAugments::get_Callbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::RuntimeAugments*>(), { "get_Callbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Internal::Runtime::Augments::RuntimeAugments::RuntimeAugments() {}
