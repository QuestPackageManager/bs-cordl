#pragma once
// IWYU pragma private; include "GlobalNamespace/PackDefinitionAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionAsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionAsyncInstaller___c::*)()>(&::GlobalNamespace::PackDefinitionAsyncInstaller___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3728c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller___c._LoadResourcesBeforeInstall_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PackDefinitionAsyncInstaller___c::*)(::GlobalNamespace::PackDefinitionSO*)>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller___c::_LoadResourcesBeforeInstall_b__5_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3728c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>(),
                                                                                           { "<LoadResourcesBeforeInstall>b__5_0", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PackDefinitionAsyncInstaller___c::setStaticF___9(::GlobalNamespace::PackDefinitionAsyncInstaller___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PackDefinitionAsyncInstaller___c*, "<>9", ::GlobalNamespace::PackDefinitionAsyncInstaller___c*>(
      std::forward<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>(value));
}
inline ::GlobalNamespace::PackDefinitionAsyncInstaller___c* GlobalNamespace::PackDefinitionAsyncInstaller___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PackDefinitionAsyncInstaller___c*, "<>9", ::GlobalNamespace::PackDefinitionAsyncInstaller___c*>();
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller___c::setStaticF___9__5_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>*, "<>9__5_0", ::GlobalNamespace::PackDefinitionAsyncInstaller___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>* GlobalNamespace::PackDefinitionAsyncInstaller___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, int32_t>*, "<>9__5_0", ::GlobalNamespace::PackDefinitionAsyncInstaller___c*>();
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PackDefinitionAsyncInstaller___c::_LoadResourcesBeforeInstall_b__5_0(::GlobalNamespace::PackDefinitionSO* asset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>(),
                                                                                         { "<LoadResourcesBeforeInstall>b__5_0", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asset);
}
inline ::GlobalNamespace::PackDefinitionAsyncInstaller___c* GlobalNamespace::PackDefinitionAsyncInstaller___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PackDefinitionAsyncInstaller___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionAsyncInstaller___c::PackDefinitionAsyncInstaller___c() {}
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PackDefinitionAsyncInstaller::*)()>(&::GlobalNamespace::PackDefinitionAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x37288b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), { ::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller.get_telemetryEventName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PackDefinitionAsyncInstaller::*)()>(&::GlobalNamespace::PackDefinitionAsyncInstaller::get_telemetryEventName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x37288f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), { ::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::BGLib::AppFlow::Initialization::IInstallerRegistry*)>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3728938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), { ::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionAsyncInstaller::*)()>(&::GlobalNamespace::PackDefinitionAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3728ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), { ::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller.LoadPackDefinitionListAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>> (*)()>(
    &::GlobalNamespace::PackDefinitionAsyncInstaller::LoadPackDefinitionListAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3728b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), { "LoadPackDefinitionListAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionAsyncInstaller::*)()>(&::GlobalNamespace::PackDefinitionAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3728bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), { ".ctor", {}, {} })));
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
  this->____packDefinitions = value;
}
inline ::StringW GlobalNamespace::PackDefinitionAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PackDefinitionAsyncInstaller::get_telemetryEventName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* assets,
                                                                                      ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assets, registry);
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>>
GlobalNamespace::PackDefinitionAsyncInstaller::LoadPackDefinitionListAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), { "LoadPackDefinitionListAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>>>(
      nullptr, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionAsyncInstaller* GlobalNamespace::PackDefinitionAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PackDefinitionAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionAsyncInstaller::PackDefinitionAsyncInstaller() {}
