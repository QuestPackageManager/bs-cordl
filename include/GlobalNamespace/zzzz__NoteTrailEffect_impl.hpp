#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteTrailEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteTrailParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23ae960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x23aea60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::Update)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23aeb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.HandleNoteMovementDidInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::HandleNoteMovementDidInit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23aebf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                                                                               "HandleNoteMovementDidInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.HandleNoteDidStartJump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::HandleNoteDidStartJump)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23aebfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                                                                               "HandleNoteDidStartJump", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23aec08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NoteTrailEffect::__get__particlesPerFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particlesPerFrame;
}
constexpr int32_t const& GlobalNamespace::NoteTrailEffect::__get__particlesPerFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particlesPerFrame;
}
constexpr void GlobalNamespace::NoteTrailEffect::__set__particlesPerFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particlesPerFrame = value;
}
constexpr float_t& GlobalNamespace::NoteTrailEffect::__get__maxSpawnDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSpawnDistance;
}
constexpr float_t const& GlobalNamespace::NoteTrailEffect::__get__maxSpawnDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSpawnDistance;
}
constexpr void GlobalNamespace::NoteTrailEffect::__set__maxSpawnDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxSpawnDistance = value;
}
constexpr ::GlobalNamespace::NoteMovement*& GlobalNamespace::NoteTrailEffect::__get__noteMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteMovement*> const& GlobalNamespace::NoteTrailEffect::__get__noteMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr void GlobalNamespace::NoteTrailEffect::__set__noteMovement(::GlobalNamespace::NoteMovement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteMovement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteTrailParticleSystem*& GlobalNamespace::NoteTrailEffect::__get__noteTrailParticleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTrailParticleSystem;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteTrailParticleSystem*> const& GlobalNamespace::NoteTrailEffect::__get__noteTrailParticleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTrailParticleSystem;
}
constexpr void GlobalNamespace::NoteTrailEffect::__set__noteTrailParticleSystem(::GlobalNamespace::NoteTrailParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteTrailParticleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NoteTrailEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::HandleNoteMovementDidInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                                                                             "HandleNoteMovementDidInit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::HandleNoteDidStartJump() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                                                                             "HandleNoteDidStartJump", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteTrailEffect* GlobalNamespace::NoteTrailEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteTrailEffect*>());
}
inline void GlobalNamespace::NoteTrailEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteTrailEffect::NoteTrailEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
