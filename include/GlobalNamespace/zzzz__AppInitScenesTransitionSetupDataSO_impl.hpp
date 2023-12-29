#pragma once
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayersModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType() {}
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::DoNotOverride{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::AppStart{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::AppRestart{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::MultiSceneEditor{
  static_cast<int32_t>(0x3)
};
//  Writing Method size for method: ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.get_appInitOverrideStartType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType (::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)()>(
        &::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c93cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                                                 "get_appInitOverrideStartType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.set_appInitOverrideStartType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType)>(
        &::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c93d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(), "set_appInitOverrideStartType",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.get_overrideMockPlayersModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::MockPlayersModel* (::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)()>(
        &::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_overrideMockPlayersModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c93dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                                                 "get_overrideMockPlayersModel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.set_overrideMockPlayersModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)(
    ::GlobalNamespace::MockPlayersModel*)>(&::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_overrideMockPlayersModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c93e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(), "set_overrideMockPlayersModel",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlayersModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)(
    ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, ::GlobalNamespace::MockPlayersModel*)>(
    &::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21c92a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlayersModel*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType&
GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__get__appInitOverrideStartType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitOverrideStartType_k__BackingField;
}
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const&
GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__get__appInitOverrideStartType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitOverrideStartType_k__BackingField;
}
constexpr void GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__set__appInitOverrideStartType_k__BackingField(
    ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appInitOverrideStartType_k__BackingField = value;
}
constexpr ::GlobalNamespace::MockPlayersModel*& GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__get__overrideMockPlayersModel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMockPlayersModel_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlayersModel*> const&
GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__get__overrideMockPlayersModel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMockPlayersModel_k__BackingField;
}
constexpr void GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__set__overrideMockPlayersModel_k__BackingField(::GlobalNamespace::MockPlayersModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideMockPlayersModel_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_appInitOverrideStartType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                                               "get_appInitOverrideStartType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_appInitOverrideStartType(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(), "set_appInitOverrideStartType",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MockPlayersModel* GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_overrideMockPlayersModel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                                               "get_overrideMockPlayersModel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MockPlayersModel*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_overrideMockPlayersModel(::GlobalNamespace::MockPlayersModel* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(), "set_overrideMockPlayersModel",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlayersModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*
GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::New_ctor(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType,
                                                                                       ::GlobalNamespace::MockPlayersModel* overrideMockPlayersModel) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>(appInitOverrideStartType, overrideMockPlayersModel));
}
inline void
GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::_ctor(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType,
                                                                                    ::GlobalNamespace::MockPlayersModel* overrideMockPlayersModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlayersModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, appInitOverrideStartType, overrideMockPlayersModel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData() {}
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21c922c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                               "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO.InitAsAppStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21c92d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                               "InitAsAppStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO.__Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)(
    ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, ::GlobalNamespace::MockPlayersModel*)>(&::GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21c9344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(), "__Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlayersModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::AppInitScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c93c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                             "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                             "InitAsAppStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType,
                                                                        ::GlobalNamespace::MockPlayersModel* mockPlayersModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(), "__Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockPlayersModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, appInitOverrideStartType, mockPlayersModel);
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupDataSO* GlobalNamespace::AppInitScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>());
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitScenesTransitionSetupDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
