#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__NoteTrailParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteTrailParticleSystem.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailParticleSystem::*)()>(&::GlobalNamespace::NoteTrailParticleSystem::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x239af5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailParticleSystem*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailParticleSystem::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(
    &::GlobalNamespace::NoteTrailParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x239af6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailParticleSystem*>::get(), "Emit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailParticleSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailParticleSystem::*)()>(&::GlobalNamespace::NoteTrailParticleSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239b07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailParticleSystem*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::NoteTrailParticleSystem::__get__particleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::NoteTrailParticleSystem::__get__particleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr void GlobalNamespace::NoteTrailParticleSystem::__set__particleSystem(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteTrailParticleSystem::__get__emitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteTrailParticleSystem::__get__emitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr void GlobalNamespace::NoteTrailParticleSystem::__set__emitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emitParams = value;
}
inline void GlobalNamespace::NoteTrailParticleSystem::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailParticleSystem*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailParticleSystem::Emit(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailParticleSystem*>::get(), "Emit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startPos, endPos, count);
}
inline ::GlobalNamespace::NoteTrailParticleSystem* GlobalNamespace::NoteTrailParticleSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteTrailParticleSystem*>());
}
inline void GlobalNamespace::NoteTrailParticleSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailParticleSystem*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteTrailParticleSystem::NoteTrailParticleSystem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
