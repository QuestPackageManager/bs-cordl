#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentLightSimpleController.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightSimpleController_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightSimpleController.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentLightSimpleController::*)()>(
    &::GlobalNamespace::EnvironmentLightSimpleController::LateUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3b1ee08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightSimpleController*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightSimpleController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentLightSimpleController::*)()>(
    &::GlobalNamespace::EnvironmentLightSimpleController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1ee34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightSimpleController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr int32_t& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__colorId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorId;
}
constexpr int32_t const& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__colorId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorId;
}
constexpr void GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_set__colorId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorId = value;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__lightManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_get__lightManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr void GlobalNamespace::EnvironmentLightSimpleController::__cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EnvironmentLightSimpleController::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightSimpleController*>::get(),
                                                                             "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentLightSimpleController* GlobalNamespace::EnvironmentLightSimpleController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentLightSimpleController*>());
}
inline void GlobalNamespace::EnvironmentLightSimpleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentLightSimpleController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentLightSimpleController::EnvironmentLightSimpleController() {}
