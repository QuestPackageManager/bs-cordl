#pragma once
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_impl.hpp"
#include "Zenject/zzzz__DeclareSignalAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_def.hpp"
//  Writing Method size for method: ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(
    &::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ec22c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder.RunAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalTickPriorityCopyBinder* (::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(
    &::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ec2308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(),
                                                                               "RunAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder.RunSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalCopyBinder* (::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(
    &::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ec2328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(),
                                                                               "RunSync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* Zenject::DeclareSignalAsyncTickPriorityCopyBinder::New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(signalBindInfo));
}
inline void Zenject::DeclareSignalAsyncTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signalBindInfo);
}
inline ::Zenject::SignalTickPriorityCopyBinder* Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(),
                                                                             "RunAsync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalTickPriorityCopyBinder*, false>(this, ___internal_method);
}
inline ::Zenject::SignalCopyBinder* Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(),
                                                                             "RunSync", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalCopyBinder*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::DeclareSignalAsyncTickPriorityCopyBinder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
