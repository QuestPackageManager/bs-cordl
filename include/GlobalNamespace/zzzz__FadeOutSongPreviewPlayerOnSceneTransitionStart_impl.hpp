#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FadeOutSongPreviewPlayerOnSceneTransitionStart_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::*)()>(
    &::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x222de78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*>::get(), "Start",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::*)()>(
    &::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x222df04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*>::get(), "OnDestroy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart.HandleGameScenesManagerTransitionDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::*)(float_t)>(
    &::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x222dfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*>::get(), "HandleGameScenesManagerTransitionDidStart",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::*)()>(
    &::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222e010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioPlayerBase*& GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::__get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPlayerBase*> const& GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::__get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::__set__songPreviewPlayer(::GlobalNamespace::AudioPlayerBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager*& GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::__get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::__get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::__set__gameScenesManager(::GlobalNamespace::GameScenesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*>::get(), "Start",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*>::get(), "OnDestroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart(float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*>::get(), "HandleGameScenesManagerTransitionDidStart",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, duration);
}
inline ::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart* GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*>());
}
inline void GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::FadeOutSongPreviewPlayerOnSceneTransitionStart() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
