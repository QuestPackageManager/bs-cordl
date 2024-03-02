#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SonyFirstPersonFlyingControllerHandler_def.hpp"
#include "GlobalNamespace/zzzz__FirstPersonFlyingController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SonyFirstPersonFlyingControllerHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyFirstPersonFlyingControllerHandler::*)()>(
    &::GlobalNamespace::SonyFirstPersonFlyingControllerHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23eba94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyFirstPersonFlyingControllerHandler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FirstPersonFlyingController>& GlobalNamespace::SonyFirstPersonFlyingControllerHandler::__cordl_internal_get__fpsFlying() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fpsFlying;
}
constexpr ::UnityW<::GlobalNamespace::FirstPersonFlyingController> const& GlobalNamespace::SonyFirstPersonFlyingControllerHandler::__cordl_internal_get__fpsFlying() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fpsFlying;
}
constexpr void GlobalNamespace::SonyFirstPersonFlyingControllerHandler::__cordl_internal_set__fpsFlying(::UnityW<::GlobalNamespace::FirstPersonFlyingController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fpsFlying)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SonyFirstPersonFlyingControllerHandler* GlobalNamespace::SonyFirstPersonFlyingControllerHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyFirstPersonFlyingControllerHandler*>());
}
inline void GlobalNamespace::SonyFirstPersonFlyingControllerHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyFirstPersonFlyingControllerHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyFirstPersonFlyingControllerHandler::SonyFirstPersonFlyingControllerHandler() {}
