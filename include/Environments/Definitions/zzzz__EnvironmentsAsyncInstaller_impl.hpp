#pragma once
// IWYU pragma private; include "Environments/Definitions/EnvironmentsAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Environments/Definitions/zzzz__EnvironmentsAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "Environments/Definitions/zzzz__EnvironmentsAsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Environments::Definitions::EnvironmentsAsyncInstaller___c::*)()>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2715938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller___c._LoadResourcesBeforeInstall_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Environments::Definitions::EnvironmentsAsyncInstaller___c::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller___c::_LoadResourcesBeforeInstall_b__3_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2715940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>::get(), "<LoadResourcesBeforeInstall>b__3_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
    return ___internal_method;
  }
};
inline void Environments::Definitions::EnvironmentsAsyncInstaller___c::setStaticF___9(::Environments::Definitions::EnvironmentsAsyncInstaller___c* value) {
  ::cordl_internals::setStaticField<::Environments::Definitions::EnvironmentsAsyncInstaller___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>::get>(
      std::forward<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>(value));
}
inline ::Environments::Definitions::EnvironmentsAsyncInstaller___c* Environments::Definitions::EnvironmentsAsyncInstaller___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Environments::Definitions::EnvironmentsAsyncInstaller___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>::get>();
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller___c::setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* Environments::Definitions::EnvironmentsAsyncInstaller___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>::get>();
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Environments::Definitions::EnvironmentsAsyncInstaller___c::_LoadResourcesBeforeInstall_b__3_0(::GlobalNamespace::EnvironmentInfoSO* environmentInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>::get(), "<LoadResourcesBeforeInstall>b__3_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, environmentInfo);
}
inline ::Environments::Definitions::EnvironmentsAsyncInstaller___c* Environments::Definitions::EnvironmentsAsyncInstaller___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>());
}
// Ctor Parameters []
constexpr ::Environments::Definitions::EnvironmentsAsyncInstaller___c::EnvironmentsAsyncInstaller___c() {}
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Environments::Definitions::EnvironmentsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27155b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Environments::Definitions::EnvironmentsAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*, ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*)>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x27155f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Environments::Definitions::EnvironmentsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2715718;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller.LoadEnvironmentInfoListAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>> (*)()>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::LoadEnvironmentInfoListAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27157c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(),
                                                                               "LoadEnvironmentInfoListAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Environments::Definitions::EnvironmentsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x271584c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& Environments::Definitions::EnvironmentsAsyncInstaller::__cordl_internal_get__environmentInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfos;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const&
Environments::Definitions::EnvironmentsAsyncInstaller::__cordl_internal_get__environmentInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfos;
}
constexpr void
Environments::Definitions::EnvironmentsAsyncInstaller::__cordl_internal_set__environmentInfos(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Environments::Definitions::EnvironmentsAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* environmentInfos,
                                                                                              ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environmentInfos, registry);
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>>
Environments::Definitions::EnvironmentsAsyncInstaller::LoadEnvironmentInfoListAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(),
                                                                             "LoadEnvironmentInfoListAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>>,
      false>(nullptr, ___internal_method);
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentsAsyncInstaller*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Environments::Definitions::EnvironmentsAsyncInstaller* Environments::Definitions::EnvironmentsAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Environments::Definitions::EnvironmentsAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::Environments::Definitions::EnvironmentsAsyncInstaller::EnvironmentsAsyncInstaller() {}
