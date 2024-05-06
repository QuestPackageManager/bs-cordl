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
  constexpr static std::size_t addrs = 0x3616f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder.RunAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalTickPriorityCopyBinder* (::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(
    &::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3616f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(),
                                                                               "RunAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder.RunSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SignalCopyBinder* (::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(
    &::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3616f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(),
                                                                               "RunSync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* Zenject::DeclareSignalAsyncTickPriorityCopyBinder::New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(signalBindInfo));
}
inline void Zenject::DeclareSignalAsyncTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signalBindInfo);
}
inline ::Zenject::SignalTickPriorityCopyBinder* Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(),
                                                                             "RunAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalTickPriorityCopyBinder*, false>(this, ___internal_method);
}
inline ::Zenject::SignalCopyBinder* Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>::get(),
                                                                             "RunSync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalCopyBinder*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::DeclareSignalAsyncTickPriorityCopyBinder() {}
