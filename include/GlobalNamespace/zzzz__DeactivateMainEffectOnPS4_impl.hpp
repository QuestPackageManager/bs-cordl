#pragma once
// IWYU pragma private; include "GlobalNamespace/DeactivateMainEffectOnPS4.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DeactivateMainEffectOnPS4_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeactivateMainEffectOnPS4._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DeactivateMainEffectOnPS4::*)()>(&::GlobalNamespace::DeactivateMainEffectOnPS4::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x407d964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateMainEffectOnPS4*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& GlobalNamespace::DeactivateMainEffectOnPS4::__cordl_internal_get__noMainEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noMainEffect;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& GlobalNamespace::DeactivateMainEffectOnPS4::__cordl_internal_get__noMainEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noMainEffect;
}
constexpr void GlobalNamespace::DeactivateMainEffectOnPS4::__cordl_internal_set__noMainEffect(::UnityW<::GlobalNamespace::MainEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noMainEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& GlobalNamespace::DeactivateMainEffectOnPS4::__cordl_internal_get__mainEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& GlobalNamespace::DeactivateMainEffectOnPS4::__cordl_internal_get__mainEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr void GlobalNamespace::DeactivateMainEffectOnPS4::__cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DeactivateMainEffectOnPS4::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateMainEffectOnPS4*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DeactivateMainEffectOnPS4* GlobalNamespace::DeactivateMainEffectOnPS4::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DeactivateMainEffectOnPS4*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeactivateMainEffectOnPS4::DeactivateMainEffectOnPS4() {}
