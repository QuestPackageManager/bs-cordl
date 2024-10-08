#pragma once
// IWYU pragma private; include "Zenject/DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder.hpp"
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
  constexpr static std::size_t addrs = 0x4a7fa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder.WithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* (
    ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::*)(::System::Object*)>(&::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4a7faa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>::get(), "WithId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*
Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>(signalBindInfo));
}
inline void Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalDeclarationBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signalBindInfo);
}
inline ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId(::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>::get(), "WithId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*, false>(this, ___internal_method, identifier);
}
// Ctor Parameters []
constexpr ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder() {}
