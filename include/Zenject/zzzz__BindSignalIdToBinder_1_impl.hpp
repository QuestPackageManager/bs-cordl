#pragma once
// IWYU pragma private; include "Zenject/BindSignalIdToBinder_1.hpp"
#include "Zenject/zzzz__BindSignalToBinder_1_impl.hpp"
#include "Zenject/zzzz__BindSignalIdToBinder_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindSignalToBinder_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SignalBindingBindInfo_def.hpp"
template <typename TSignal>
inline ::Zenject::BindSignalIdToBinder_1<TSignal>* Zenject::BindSignalIdToBinder_1<TSignal>::New_ctor(::Zenject::DiContainer* container, ::Zenject::SignalBindingBindInfo* signalBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::BindSignalIdToBinder_1<TSignal>*>(container, signalBindInfo));
}
template <typename TSignal> inline void Zenject::BindSignalIdToBinder_1<TSignal>::_ctor(::Zenject::DiContainer* container, ::Zenject::SignalBindingBindInfo* signalBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalIdToBinder_1<TSignal>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBindingBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, signalBindInfo);
}
template <typename TSignal> inline ::Zenject::BindSignalToBinder_1<TSignal>* Zenject::BindSignalIdToBinder_1<TSignal>::WithId(::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalIdToBinder_1<TSignal>*>::get(), "WithId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindSignalToBinder_1<TSignal>*, false>(this, ___internal_method, identifier);
}
template <typename TSignal> inline ::System::Object* Zenject::BindSignalIdToBinder_1<TSignal>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalIdToBinder_1<TSignal>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TSignal> inline ::Zenject::InjectTypeInfo* Zenject::BindSignalIdToBinder_1<TSignal>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalIdToBinder_1<TSignal>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TSignal> constexpr ::Zenject::BindSignalIdToBinder_1<TSignal>::BindSignalIdToBinder_1() {}
