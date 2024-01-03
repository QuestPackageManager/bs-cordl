#pragma once
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_impl.hpp"
#include "Zenject/zzzz__DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(
    &::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ec2344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder.WithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* (
    ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::*)(::System::Object*)>(&::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ec238c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>::get(), "WithId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*
Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>(signalBindInfo));
}
inline void Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signalBindInfo);
}
inline ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId(::System::Object* identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>::get(), "WithId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*, false>(this, ___internal_method, identifier);
}
// Ctor Parameters []
constexpr ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
