#pragma once
// IWYU pragma private; include "Internal\Runtime\Augments\ReflectionExecutionDomainCallbacks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Runtime/Augments/zzzz__ReflectionExecutionDomainCallbacks_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks.CreateMissingMetadataException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::*)(::System::Type*)>(
    &::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::CreateMissingMetadataException)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ac7928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>(),
                                                                                           { "CreateMissingMetadataException", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::*)()>(
    &::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ac7924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::CreateMissingMetadataException(::System::Type* attributeType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>(),
                                                                                         { "CreateMissingMetadataException", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, attributeType);
}
inline void Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>());
}
// Ctor Parameters []
constexpr ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::ReflectionExecutionDomainCallbacks() {}
