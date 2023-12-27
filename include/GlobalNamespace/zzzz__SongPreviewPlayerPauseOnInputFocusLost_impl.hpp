#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayerPauseOnInputFocusLost_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x223128c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), "Start",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x22314e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), "OnDestroy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.HandleInputFocusCaptured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x223149c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), "HandleInputFocusCaptured",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.HandleInputFocusReleased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2231684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), "HandleInputFocusReleased",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22316c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioPlayerBase*& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPlayerBase*> const& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__set__songPreviewPlayer(::GlobalNamespace::AudioPlayerBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             "HandleInputFocusCaptured", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             "HandleInputFocusReleased", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost* GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>());
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::SongPreviewPlayerPauseOnInputFocusLost() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
