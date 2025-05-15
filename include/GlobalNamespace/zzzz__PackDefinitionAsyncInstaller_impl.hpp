#pragma once
// IWYU pragma private; include "GlobalNamespace/PackDefinitionAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionAsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionAsyncInstaller___c::*)()>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d0c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller___c._LoadResourcesBeforeInstall_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PackDefinitionAsyncInstaller___c::*)(::GlobalNamespace::PackDefinitionSO*)>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller___c::_LoadResourcesBeforeInstall_b__3_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26d0c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>::get(), "<LoadResourcesBeforeInstall>b__3_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PackDefinitionAsyncInstaller___c::setStaticF___9(::GlobalNamespace::PackDefinitionAsyncInstaller___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PackDefinitionAsyncInstaller___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>::get>(
      std::forward<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>(value));
}
inline ::GlobalNamespace::PackDefinitionAsyncInstaller___c* GlobalNamespace::PackDefinitionAsyncInstaller___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PackDefinitionAsyncInstaller___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>::get>();
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller___c::setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* GlobalNamespace::PackDefinitionAsyncInstaller___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>::get>();
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PackDefinitionAsyncInstaller___c::_LoadResourcesBeforeInstall_b__3_0(::GlobalNamespace::PackDefinitionSO* asset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>::get(), "<LoadResourcesBeforeInstall>b__3_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asset);
}
inline ::GlobalNamespace::PackDefinitionAsyncInstaller___c* GlobalNamespace::PackDefinitionAsyncInstaller___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionAsyncInstaller___c::PackDefinitionAsyncInstaller___c() {}
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PackDefinitionAsyncInstaller::*)()>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26d089c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*)>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x26d08dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionAsyncInstaller::*)()>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26d0a38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller.LoadPackDefinitionListAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>> (*)()>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller::LoadPackDefinitionListAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26d0aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(),
                                                                               "LoadPackDefinitionListAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionAsyncInstaller::*)()>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26d0b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*& GlobalNamespace::PackDefinitionAsyncInstaller::__cordl_internal_get__packDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* const& GlobalNamespace::PackDefinitionAsyncInstaller::__cordl_internal_get__packDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packDefinitions;
}
constexpr void GlobalNamespace::PackDefinitionAsyncInstaller::__cordl_internal_set__packDefinitions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PackDefinitionAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* assets,
                                                                                      ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assets, registry);
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>>
GlobalNamespace::PackDefinitionAsyncInstaller::LoadPackDefinitionListAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(),
                                                                             "LoadPackDefinitionListAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>>, false>(
      nullptr, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionAsyncInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionAsyncInstaller* GlobalNamespace::PackDefinitionAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackDefinitionAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionAsyncInstaller::PackDefinitionAsyncInstaller() {}
