#pragma once
#include "GlobalNamespace/zzzz__GraphicSettingsConditionalActivator_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsConditionalActivator_def.hpp"
#include "BeatSaber/GameSettings/zzzz__GraphicSettingsHandler_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsConditionalActivator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType::__GraphicSettingsConditionalActivator__ActivatorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType::__GraphicSettingsConditionalActivator__ActivatorType() {}
constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType::smoke{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType::depthTexture{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType::burnmarkTrails{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType::screenDisplacement{ static_cast<int32_t>(
    0x3) };
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsConditionalActivator.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GraphicSettingsConditionalActivator::*)()>(
    &::GlobalNamespace::GraphicSettingsConditionalActivator::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26964f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsConditionalActivator*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsConditionalActivator.GetGraphicsActivatorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GraphicSettingsConditionalActivator::*)()>(
    &::GlobalNamespace::GraphicSettingsConditionalActivator::GetGraphicsActivatorType)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2696540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsConditionalActivator*>::get(),
                                                                               "GetGraphicsActivatorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsConditionalActivator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GraphicSettingsConditionalActivator::*)()>(
    &::GlobalNamespace::GraphicSettingsConditionalActivator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26966a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsConditionalActivator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__activatorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activatorType;
}
constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType const& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__activatorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activatorType;
}
constexpr void GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_set__activatorType(::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activatorType = value;
}
constexpr bool& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__activateOnFalse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnFalse;
}
constexpr bool const& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__activateOnFalse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnFalse;
}
constexpr void GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_set__activateOnFalse(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activateOnFalse = value;
}
constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__graphicsSettingsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphicsSettingsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const&
GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__graphicsSettingsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphicsSettingsHandler;
}
constexpr void GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_set__graphicsSettingsHandler(::BeatSaber::GameSettings::GraphicSettingsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphicsSettingsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const&
GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GraphicSettingsConditionalActivator::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsConditionalActivator*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GraphicSettingsConditionalActivator::GetGraphicsActivatorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsConditionalActivator*>::get(),
                                                                             "GetGraphicsActivatorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GraphicSettingsConditionalActivator* GlobalNamespace::GraphicSettingsConditionalActivator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GraphicSettingsConditionalActivator*>());
}
inline void GlobalNamespace::GraphicSettingsConditionalActivator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsConditionalActivator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator::GraphicSettingsConditionalActivator() {}
