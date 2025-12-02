#pragma once
// IWYU pragma private; include "Environments/Definitions/EnvironmentTracksDefinitionsAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "Environments/Definitions/zzzz__EnvironmentTracksDefinitionsAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x31c5a94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*, ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*)>(
    &::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x31c5ad8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x31c5b4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x31c5dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*&
Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::__cordl_internal_get__environmentTracksDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentTracksDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* const&
Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::__cordl_internal_get__environmentTracksDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentTracksDefinitions;
}
constexpr void Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::__cordl_internal_set__environmentTracksDefinitions(
    ::System::Collections::Generic::List_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentTracksDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::LoadResourcesBeforeInstall(
    ::System::Collections::Generic::IList_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* tracksDefinitions,
    ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tracksDefinitions, registry);
}
inline void Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller* Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::EnvironmentTracksDefinitionsAsyncInstaller() {}
