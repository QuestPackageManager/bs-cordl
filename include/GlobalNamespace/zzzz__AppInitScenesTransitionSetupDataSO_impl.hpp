#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType() {}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType::DoNotOverride{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType::AppStart{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType::AppRestart{ static_cast<int32_t>(
    0x2) };
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType::MultiSceneEditor{
  static_cast<int32_t>(0x3)
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData.get_appInitOverrideStartType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType (
    ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::get_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2298008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*>::get(),
                                                 "get_appInitOverrideStartType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData.set_appInitOverrideStartType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::*)(
    ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType)>(&::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::set_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2298010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*>::get(), "set_appInitOverrideStartType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::*)(
    ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType)>(&::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2291000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType&
GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::__cordl_internal_get__appInitOverrideStartType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitOverrideStartType_k__BackingField;
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType const&
GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::__cordl_internal_get__appInitOverrideStartType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitOverrideStartType_k__BackingField;
}
constexpr void GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::__cordl_internal_set__appInitOverrideStartType_k__BackingField(
    ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appInitOverrideStartType_k__BackingField = value;
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::get_appInitOverrideStartType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*>::get(),
                                               "get_appInitOverrideStartType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType, false>(this, ___internal_method);
}
inline void
GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::set_appInitOverrideStartType(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*>::get(), "set_appInitOverrideStartType",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::_ctor(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType appInitOverrideStartType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, appInitOverrideStartType);
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*
GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::New_ctor(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType appInitOverrideStartType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*>(appInitOverrideStartType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData() {}
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2297dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                               "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO.InitAsAppStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2297f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                               "InitAsAppStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO.__Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)(
    ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType)>(&::GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2297f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(), "__Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::AppInitScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2297ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                             "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                             "InitAsAppStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType appInitOverrideStartType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(), "__Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, appInitOverrideStartType);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupDataSO* GlobalNamespace::AppInitScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitScenesTransitionSetupDataSO() {}
