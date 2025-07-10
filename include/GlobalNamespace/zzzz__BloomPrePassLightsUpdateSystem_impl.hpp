#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassLightsUpdateSystem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightsUpdateSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLightsUpdateSystem.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLightsUpdateSystem::*)()>(
    &::GlobalNamespace::BloomPrePassLightsUpdateSystem::LateUpdate)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x39d8b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLightsUpdateSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLightsUpdateSystem::*)()>(
    &::GlobalNamespace::BloomPrePassLightsUpdateSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d8de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BloomPrePassLightsUpdateSystem::setStaticF_disableUpdateAlways(bool value) {
  ::cordl_internals::setStaticField<bool, "disableUpdateAlways", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::BloomPrePassLightsUpdateSystem::getStaticF_disableUpdateAlways() {
  return ::cordl_internals::getStaticField<bool, "disableUpdateAlways", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>::get>();
}
inline void GlobalNamespace::BloomPrePassLightsUpdateSystem::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>::get(),
                                                                             "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLightsUpdateSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassLightsUpdateSystem* GlobalNamespace::BloomPrePassLightsUpdateSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassLightsUpdateSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassLightsUpdateSystem::BloomPrePassLightsUpdateSystem() {}
