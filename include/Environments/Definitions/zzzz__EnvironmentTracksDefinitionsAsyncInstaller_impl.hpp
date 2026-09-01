#pragma once
// IWYU pragma private; include "Environments\Definitions\EnvironmentTracksDefinitionsAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "Environments/Definitions/zzzz__EnvironmentTracksDefinitionsAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32ec320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*, ::BGLib::AppFlow::Initialization::IInstallerRegistry*)>(
    &::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32ec364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32ec3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x32ec64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(), { ".ctor", {}, {} })));
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
  this->____environmentTracksDefinitions = value;
}
inline ::StringW Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::LoadResourcesBeforeInstall(
    ::System::Collections::Generic::IList_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* tracksDefinitions,
    ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tracksDefinitions, registry);
}
inline void Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller* Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller::EnvironmentTracksDefinitionsAsyncInstaller() {}
