#pragma once
// IWYU pragma private; include "Environments\Definitions\EnvironmentsAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Environments/Definitions/zzzz__EnvironmentsAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "Environments/Definitions/zzzz__EnvironmentsAsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::EnvironmentsAsyncInstaller___c::*)()>(&::Environments::Definitions::EnvironmentsAsyncInstaller___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x376d00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller___c._LoadResourcesBeforeInstall_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Environments::Definitions::EnvironmentsAsyncInstaller___c::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller___c::_LoadResourcesBeforeInstall_b__5_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x376d010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>(),
                                                                                           { "<LoadResourcesBeforeInstall>b__5_0", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
    return ___internal_method;
  }
};
inline void Environments::Definitions::EnvironmentsAsyncInstaller___c::setStaticF___9(::Environments::Definitions::EnvironmentsAsyncInstaller___c* value) {
  ::cordl_internals::setStaticField<::Environments::Definitions::EnvironmentsAsyncInstaller___c*, "<>9", ::Environments::Definitions::EnvironmentsAsyncInstaller___c*>(
      std::forward<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>(value));
}
inline ::Environments::Definitions::EnvironmentsAsyncInstaller___c* Environments::Definitions::EnvironmentsAsyncInstaller___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Environments::Definitions::EnvironmentsAsyncInstaller___c*, "<>9", ::Environments::Definitions::EnvironmentsAsyncInstaller___c*>();
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller___c::setStaticF___9__5_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>*, "<>9__5_0", ::Environments::Definitions::EnvironmentsAsyncInstaller___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>* Environments::Definitions::EnvironmentsAsyncInstaller___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, int32_t>*, "<>9__5_0", ::Environments::Definitions::EnvironmentsAsyncInstaller___c*>();
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Environments::Definitions::EnvironmentsAsyncInstaller___c::_LoadResourcesBeforeInstall_b__5_0(::GlobalNamespace::EnvironmentInfoSO* environmentInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>(),
                                                                                         { "<LoadResourcesBeforeInstall>b__5_0", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, environmentInfo);
}
inline ::Environments::Definitions::EnvironmentsAsyncInstaller___c* Environments::Definitions::EnvironmentsAsyncInstaller___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Environments::Definitions::EnvironmentsAsyncInstaller___c*>());
}
// Ctor Parameters []
constexpr ::Environments::Definitions::EnvironmentsAsyncInstaller___c::EnvironmentsAsyncInstaller___c() {}
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Environments::Definitions::EnvironmentsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x376cc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller.get_telemetryEventName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Environments::Definitions::EnvironmentsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::get_telemetryEventName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x376cc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::EnvironmentsAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*, ::BGLib::AppFlow::Initialization::IInstallerRegistry*)>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x376cc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::EnvironmentsAsyncInstaller::*)()>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x376cde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller.LoadEnvironmentInfoListAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>> (*)()>(
    &::Environments::Definitions::EnvironmentsAsyncInstaller::LoadEnvironmentInfoListAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x376ceb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), { "LoadEnvironmentInfoListAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::EnvironmentsAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::EnvironmentsAsyncInstaller::*)()>(&::Environments::Definitions::EnvironmentsAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x376cf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), { ".ctor", {}, {} })));
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
  this->____environmentInfos = value;
}
inline ::StringW Environments::Definitions::EnvironmentsAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Environments::Definitions::EnvironmentsAsyncInstaller::get_telemetryEventName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* environmentInfos,
                                                                                              ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environmentInfos, registry);
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>>
Environments::Definitions::EnvironmentsAsyncInstaller::LoadEnvironmentInfoListAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), { "LoadEnvironmentInfoListAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*>>>(
      nullptr, ___internal_method);
}
inline void Environments::Definitions::EnvironmentsAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::EnvironmentsAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Environments::Definitions::EnvironmentsAsyncInstaller* Environments::Definitions::EnvironmentsAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Environments::Definitions::EnvironmentsAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::Environments::Definitions::EnvironmentsAsyncInstaller::EnvironmentsAsyncInstaller() {}
