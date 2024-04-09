#pragma once
#include "GlobalNamespace/zzzz__VRRenderingParamsSetup_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRRenderingParamsSetup_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__VRRenderingParamsSetup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType::__VRRenderingParamsSetup__SceneType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType::__VRRenderingParamsSetup__SceneType() {}
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType GlobalNamespace::__VRRenderingParamsSetup__SceneType::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType GlobalNamespace::__VRRenderingParamsSetup__SceneType::Menu{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType GlobalNamespace::__VRRenderingParamsSetup__SceneType::Game{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2599618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2599918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup.SetupOculus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::SetupOculus)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2599708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(), "SetupOculus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259991c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__vrResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrResolutionScale;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__vrResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrResolutionScale;
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_set__vrResolutionScale(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrResolutionScale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__menuVRResolutionScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuVRResolutionScaleMultiplier;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__menuVRResolutionScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuVRResolutionScaleMultiplier;
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_set__menuVRResolutionScaleMultiplier(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuVRResolutionScaleMultiplier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__useFixedFoveatedRenderingDuringGameplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useFixedFoveatedRenderingDuringGameplay;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__useFixedFoveatedRenderingDuringGameplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useFixedFoveatedRenderingDuringGameplay;
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_set__useFixedFoveatedRenderingDuringGameplay(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____useFixedFoveatedRenderingDuringGameplay)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__sceneType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneType;
}
constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType const& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__sceneType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneType;
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_set__sceneType(::GlobalNamespace::__VRRenderingParamsSetup__SceneType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneType = value;
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::VRRenderingParamsSetup::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRRenderingParamsSetup::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRRenderingParamsSetup::SetupOculus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(), "SetupOculus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VRRenderingParamsSetup* GlobalNamespace::VRRenderingParamsSetup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VRRenderingParamsSetup*>());
}
inline void GlobalNamespace::VRRenderingParamsSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRenderingParamsSetup::VRRenderingParamsSetup() {}
