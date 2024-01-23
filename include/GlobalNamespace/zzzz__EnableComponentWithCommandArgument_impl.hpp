#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnableComponentWithCommandArgument_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableComponentWithCommandArgument.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableComponentWithCommandArgument::*)()>(
    &::GlobalNamespace::EnableComponentWithCommandArgument::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x20f2038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableComponentWithCommandArgument._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableComponentWithCommandArgument::*)()>(
    &::GlobalNamespace::EnableComponentWithCommandArgument::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f20c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EnableComponentWithCommandArgument::__cordl_internal_get__argument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argument;
}
constexpr ::StringW const& GlobalNamespace::EnableComponentWithCommandArgument::__cordl_internal_get__argument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argument;
}
constexpr void GlobalNamespace::EnableComponentWithCommandArgument::__cordl_internal_set__argument(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____argument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Behaviour>& GlobalNamespace::EnableComponentWithCommandArgument::__cordl_internal_get__component() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
constexpr ::UnityW<::UnityEngine::Behaviour> const& GlobalNamespace::EnableComponentWithCommandArgument::__cordl_internal_get__component() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
constexpr void GlobalNamespace::EnableComponentWithCommandArgument::__cordl_internal_set__component(::UnityW<::UnityEngine::Behaviour> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____component)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EnableComponentWithCommandArgument::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnableComponentWithCommandArgument* GlobalNamespace::EnableComponentWithCommandArgument::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnableComponentWithCommandArgument*>());
}
inline void GlobalNamespace::EnableComponentWithCommandArgument::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnableComponentWithCommandArgument::EnableComponentWithCommandArgument() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
