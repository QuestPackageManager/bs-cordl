#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Runtime/Augments/zzzz__ReflectionExecutionDomainCallbacks_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks.CreateMissingMetadataException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::*)(::System::Type*)>(
    &::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::CreateMissingMetadataException)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x242c6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>::get(), "CreateMissingMetadataException",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::*)()>(
    &::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242c6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Exception* Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::CreateMissingMetadataException(::System::Type* attributeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>::get(), "CreateMissingMetadataException",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, attributeType);
}
inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>());
}
inline void Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks::ReflectionExecutionDomainCallbacks() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
