#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedDataRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedDataRegistry_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedMember_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedDataRegistry.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::Meta::XR::ImmersiveDebugger::InspectedMember*)>(
    &::Meta::XR::ImmersiveDebugger::InspectedDataRegistry::Add)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5891b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::InspectedMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedDataRegistry.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::InspectedDataRegistry::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5891d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::InspectedDataRegistry::setStaticF_InspectedMembersRegistry(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>*,
                                    "InspectedMembersRegistry", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>*
Meta::XR::ImmersiveDebugger::InspectedDataRegistry::getStaticF_InspectedMembersRegistry() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*>*,
                                           "InspectedMembersRegistry", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::InspectedDataRegistry::Add(::System::Type* type, ::Meta::XR::ImmersiveDebugger::InspectedMember* inspectedMember) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::InspectedMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, inspectedMember);
}
inline void Meta::XR::ImmersiveDebugger::InspectedDataRegistry::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<T, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*
Meta::XR::ImmersiveDebugger::InspectedDataRegistry::GetMembersForType(::System::Type* type, ::System::Func_3<T, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>* filterCallback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedDataRegistry*>::get(), "GetMembersForType",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<T, ::Meta::XR::ImmersiveDebugger::DebugMember*, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<T, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*, false>(nullptr, ___internal_method, type,
                                                                                                                                                                     filterCallback);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::InspectedDataRegistry::InspectedDataRegistry() {}
