#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectContainerSO.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BoolCvar_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
// Ctor Parameters [CppParam { name: "hardwareCategory", ty: "::GlobalNamespace::HardwareCategory", modifiers: "", def_value: Some("{}") }, CppParam { name: "mainEffect", ty:
// "::UnityW<::GlobalNamespace::MainEffectSO>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainEffectContainerSO_HardwareOverride::MainEffectContainerSO_HardwareOverride(::GlobalNamespace::HardwareCategory hardwareCategory,
                                                                                                            ::UnityW<::GlobalNamespace::MainEffectSO> mainEffect) noexcept {
  this->hardwareCategory = hardwareCategory;
  this->mainEffect = mainEffect;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectContainerSO_HardwareOverride::MainEffectContainerSO_HardwareOverride() {}
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.get_mainEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MainEffectSO> (::GlobalNamespace::MainEffectContainerSO::*)()>(
    &::GlobalNamespace::MainEffectContainerSO::get_mainEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f429a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "get_mainEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.set_mainEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectContainerSO::*)(::GlobalNamespace::MainEffectSO*)>(
    &::GlobalNamespace::MainEffectContainerSO::set_mainEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f429b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "set_mainEffect", {}, { ::i2c::type_of<::GlobalNamespace::MainEffectSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.get_postProcessEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BoolSO> (::GlobalNamespace::MainEffectContainerSO::*)()>(
    &::GlobalNamespace::MainEffectContainerSO::get_postProcessEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f429b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "get_postProcessEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectContainerSO::*)()>(&::GlobalNamespace::MainEffectContainerSO::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f429c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectContainerSO::*)()>(&::GlobalNamespace::MainEffectContainerSO::OnDisable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f42ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.OnEnableChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectContainerSO::*)()>(&::GlobalNamespace::MainEffectContainerSO::OnEnableChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f42b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "OnEnableChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.ResolveMainEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MainEffectSO> (::GlobalNamespace::MainEffectContainerSO::*)()>(
    &::GlobalNamespace::MainEffectContainerSO::ResolveMainEffect)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f42c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "ResolveMainEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectContainerSO::*)(::GlobalNamespace::MainEffectSO*, ::GlobalNamespace::MainEffectSO*)>(
    &::GlobalNamespace::MainEffectContainerSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f42abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(),
                                                             { "Init", {}, { ::i2c::type_of<::GlobalNamespace::MainEffectSO*>(), ::i2c::type_of<::GlobalNamespace::MainEffectSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectContainerSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectContainerSO::*)()>(&::GlobalNamespace::MainEffectContainerSO::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f42d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__mainEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffect;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__mainEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffect;
}
constexpr void GlobalNamespace::MainEffectContainerSO::__cordl_internal_set__mainEffect(::UnityW<::GlobalNamespace::MainEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__mainEffectDisabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectDisabled;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__mainEffectDisabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectDisabled;
}
constexpr void GlobalNamespace::MainEffectContainerSO::__cordl_internal_set__mainEffectDisabled(::UnityW<::GlobalNamespace::MainEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffectDisabled = value;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__postProcessEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postProcessEnabled;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__postProcessEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postProcessEnabled;
}
constexpr void GlobalNamespace::MainEffectContainerSO::__cordl_internal_set__postProcessEnabled(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____postProcessEnabled = value;
}
constexpr ::ArrayW<::GlobalNamespace::MainEffectContainerSO_HardwareOverride>& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__hardwareOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hardwareOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::MainEffectContainerSO_HardwareOverride> const& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__hardwareOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hardwareOverrides;
}
constexpr void GlobalNamespace::MainEffectContainerSO::__cordl_internal_set__hardwareOverrides(::ArrayW<::GlobalNamespace::MainEffectContainerSO_HardwareOverride> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hardwareOverrides = value;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__mainEffect_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffect_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& GlobalNamespace::MainEffectContainerSO::__cordl_internal_get__mainEffect_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffect_k__BackingField;
}
constexpr void GlobalNamespace::MainEffectContainerSO::__cordl_internal_set__mainEffect_k__BackingField(::UnityW<::GlobalNamespace::MainEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffect_k__BackingField = value;
}
inline void GlobalNamespace::MainEffectContainerSO::setStaticF__enabled(::GlobalNamespace::BoolCvar* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BoolCvar*, "_enabled", ::GlobalNamespace::MainEffectContainerSO*>(std::forward<::GlobalNamespace::BoolCvar*>(value));
}
inline ::GlobalNamespace::BoolCvar* GlobalNamespace::MainEffectContainerSO::getStaticF__enabled() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BoolCvar*, "_enabled", ::GlobalNamespace::MainEffectContainerSO*>();
}
inline ::UnityW<::GlobalNamespace::MainEffectSO> GlobalNamespace::MainEffectContainerSO::get_mainEffect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "get_mainEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MainEffectSO>>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectContainerSO::set_mainEffect(::GlobalNamespace::MainEffectSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "set_mainEffect", {}, { ::i2c::type_of<::GlobalNamespace::MainEffectSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::BoolSO> GlobalNamespace::MainEffectContainerSO::get_postProcessEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "get_postProcessEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BoolSO>>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectContainerSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectContainerSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectContainerSO::OnEnableChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "OnEnableChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MainEffectSO> GlobalNamespace::MainEffectContainerSO::ResolveMainEffect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { "ResolveMainEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MainEffectSO>>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectContainerSO::Init(::GlobalNamespace::MainEffectSO* mainEffectEnabled, ::GlobalNamespace::MainEffectSO* mainEffectDisabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(),
                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::MainEffectSO*>(), ::i2c::type_of<::GlobalNamespace::MainEffectSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainEffectEnabled, mainEffectDisabled);
}
inline void GlobalNamespace::MainEffectContainerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectContainerSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectContainerSO* GlobalNamespace::MainEffectContainerSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectContainerSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectContainerSO::MainEffectContainerSO() {}
