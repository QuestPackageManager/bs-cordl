#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType::AppInitScenesTransitionSetupData_AppInitOverrideStartType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType::AppInitScenesTransitionSetupData_AppInitOverrideStartType() {}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType::DoNotOverride{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType::Default{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType::DirectlyToMenu{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData.get_appInitOverrideStartType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType (
    ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::get_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3306810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*>(), { "get_appInitOverrideStartType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData.set_appInitOverrideStartType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::*)(
    ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType)>(&::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::set_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3306818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*>(),
                                                { "set_appInitOverrideStartType", {}, { ::i2c::type_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::*)(
    ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType)>(&::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3306678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType&
GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::__cordl_internal_get__appInitOverrideStartType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitOverrideStartType_k__BackingField;
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType const&
GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::__cordl_internal_get__appInitOverrideStartType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitOverrideStartType_k__BackingField;
}
constexpr void GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::__cordl_internal_set__appInitOverrideStartType_k__BackingField(
    ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appInitOverrideStartType_k__BackingField = value;
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::get_appInitOverrideStartType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*>(), { "get_appInitOverrideStartType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType>(this, ___internal_method);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::set_appInitOverrideStartType(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*>(),
                                              { "set_appInitOverrideStartType", {}, { ::i2c::type_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::_ctor(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType appInitOverrideStartType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, appInitOverrideStartType);
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*
GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::New_ctor(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType appInitOverrideStartType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*>(appInitOverrideStartType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData::AppInitScenesTransitionSetupData_AppInitSceneSetupData() {}
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupData.InitDirectlyToMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupData::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupData::InitDirectlyToMenu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3306584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData*>(), { "InitDirectlyToMenu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupData.InitAsDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupData::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupData::InitAsDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3306670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData*>(), { "InitAsDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupData::*)(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType)>(
    &::GlobalNamespace::AppInitScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x330658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData*>(),
                                                             { "Init", {}, { ::i2c::type_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupData::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33066fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInitScenesTransitionSetupData::InitDirectlyToMenu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData*>(), { "InitDirectlyToMenu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupData::InitAsDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData*>(), { "InitAsDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupData::Init(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType appInitOverrideStartType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData*>(),
                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, appInitOverrideStartType);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppInitScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupData* GlobalNamespace::AppInitScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppInitScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData::AppInitScenesTransitionSetupData() {}
