#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongTimeAnimationPlayer_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongTimeAnimationPlayer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongTimeAnimationPlayer::*)()>(&::GlobalNamespace::SongTimeAnimationPlayer::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x226ef14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeAnimationPlayer*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongTimeAnimationPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongTimeAnimationPlayer::*)()>(&::GlobalNamespace::SongTimeAnimationPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226ef58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeAnimationPlayer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationClip*& GlobalNamespace::SongTimeAnimationPlayer::__get__animationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& GlobalNamespace::SongTimeAnimationPlayer::__get__animationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClip;
}
constexpr void GlobalNamespace::SongTimeAnimationPlayer::__set__animationClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioTimeSyncController*& GlobalNamespace::SongTimeAnimationPlayer::__get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& GlobalNamespace::SongTimeAnimationPlayer::__get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::SongTimeAnimationPlayer::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SongTimeAnimationPlayer::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeAnimationPlayer*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongTimeAnimationPlayer* GlobalNamespace::SongTimeAnimationPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongTimeAnimationPlayer*>());
}
inline void GlobalNamespace::SongTimeAnimationPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeAnimationPlayer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongTimeAnimationPlayer::SongTimeAnimationPlayer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
