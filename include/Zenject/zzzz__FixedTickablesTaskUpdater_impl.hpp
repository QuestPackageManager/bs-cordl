#pragma once
#include "Zenject/zzzz__IFixedTickable_impl.hpp"
#include "Zenject/zzzz__TaskUpdater_1_impl.hpp"
#include "Zenject/zzzz__FixedTickablesTaskUpdater_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFixedTickable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::FixedTickablesTaskUpdater.UpdateItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::FixedTickablesTaskUpdater::*)(::Zenject::IFixedTickable*)>(
    &::Zenject::FixedTickablesTaskUpdater::UpdateItem)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3028c8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FixedTickablesTaskUpdater*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FixedTickablesTaskUpdater*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FixedTickablesTaskUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::FixedTickablesTaskUpdater::*)()>(&::Zenject::FixedTickablesTaskUpdater::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3028d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FixedTickablesTaskUpdater*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FixedTickablesTaskUpdater.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::FixedTickablesTaskUpdater::__zenCreate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3028d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FixedTickablesTaskUpdater*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FixedTickablesTaskUpdater.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::FixedTickablesTaskUpdater::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3028dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FixedTickablesTaskUpdater*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Zenject::FixedTickablesTaskUpdater::UpdateItem(::Zenject::IFixedTickable* task) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FixedTickablesTaskUpdater*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::Zenject::FixedTickablesTaskUpdater* Zenject::FixedTickablesTaskUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FixedTickablesTaskUpdater*>());
}
inline void Zenject::FixedTickablesTaskUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FixedTickablesTaskUpdater*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::FixedTickablesTaskUpdater::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FixedTickablesTaskUpdater*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::FixedTickablesTaskUpdater::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FixedTickablesTaskUpdater*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::FixedTickablesTaskUpdater::FixedTickablesTaskUpdater() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
