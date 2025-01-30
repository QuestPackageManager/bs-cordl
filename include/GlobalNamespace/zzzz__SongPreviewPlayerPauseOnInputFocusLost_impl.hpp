#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPreviewPlayerPauseOnInputFocusLost.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayerPauseOnInputFocusLost_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x3ad770c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3ad7964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.HandleInputFocusCaptured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3ad7920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), "HandleInputFocusCaptured",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.HandleInputFocusReleased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3ad7b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), "HandleInputFocusReleased",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad7b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase>& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase> const& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::AudioPlayerBase> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             "HandleInputFocusCaptured", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             "HandleInputFocusReleased", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost* GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::SongPreviewPlayerPauseOnInputFocusLost() {}
