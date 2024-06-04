#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableEmmisionOnVisible.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnableEmmisionOnVisible_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableEmmisionOnVisible.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableEmmisionOnVisible::*)()>(&::GlobalNamespace::EnableEmmisionOnVisible::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x24edc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableEmmisionOnVisible*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableEmmisionOnVisible.OnBecameVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableEmmisionOnVisible::*)()>(
    &::GlobalNamespace::EnableEmmisionOnVisible::OnBecameVisible)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24edd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableEmmisionOnVisible*>::get(),
                                                                               "OnBecameVisible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableEmmisionOnVisible.OnBecameInvisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableEmmisionOnVisible::*)()>(
    &::GlobalNamespace::EnableEmmisionOnVisible::OnBecameInvisible)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24eddc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableEmmisionOnVisible*>::get(),
                                                                               "OnBecameInvisible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableEmmisionOnVisible._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableEmmisionOnVisible::*)()>(&::GlobalNamespace::EnableEmmisionOnVisible::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24ede3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableEmmisionOnVisible*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>& GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_get__particleSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const&
GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_get__particleSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystems;
}
constexpr void
GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*>&
GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_get__emmisionModules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emmisionModules;
}
constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> const&
GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_get__emmisionModules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emmisionModules;
}
constexpr void GlobalNamespace::EnableEmmisionOnVisible::__cordl_internal_set__emmisionModules(
    ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emmisionModules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EnableEmmisionOnVisible::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableEmmisionOnVisible*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnableEmmisionOnVisible::OnBecameVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableEmmisionOnVisible*>::get(),
                                                                             "OnBecameVisible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EnableEmmisionOnVisible::OnBecameInvisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableEmmisionOnVisible*>::get(),
                                                                             "OnBecameInvisible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnableEmmisionOnVisible* GlobalNamespace::EnableEmmisionOnVisible::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnableEmmisionOnVisible*>());
}
inline void GlobalNamespace::EnableEmmisionOnVisible::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableEmmisionOnVisible*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnableEmmisionOnVisible::EnableEmmisionOnVisible() {}
