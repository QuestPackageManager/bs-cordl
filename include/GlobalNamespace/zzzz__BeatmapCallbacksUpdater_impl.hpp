#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCallbacksUpdater.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksUpdater_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksUpdater.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksUpdater::*)()>(&::GlobalNamespace::BeatmapCallbacksUpdater::LateUpdate)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x571868c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksUpdater*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksUpdater.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksUpdater::*)()>(&::GlobalNamespace::BeatmapCallbacksUpdater::Pause)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5718888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksUpdater*>::get(), "Pause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksUpdater.Resume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksUpdater::*)()>(&::GlobalNamespace::BeatmapCallbacksUpdater::Resume)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5718894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksUpdater*>::get(), "Resume",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksUpdater::*)()>(&::GlobalNamespace::BeatmapCallbacksUpdater::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57188a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksUpdater*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BeatmapCallbacksUpdater::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::BeatmapCallbacksUpdater::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::BeatmapCallbacksUpdater::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BeatmapCallbacksUpdater::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::BeatmapCallbacksUpdater::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BeatmapCallbacksUpdater::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksUpdater::__cordl_internal_get__prevSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSongTime;
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksUpdater::__cordl_internal_get__prevSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSongTime;
}
constexpr void GlobalNamespace::BeatmapCallbacksUpdater::__cordl_internal_set__prevSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevSongTime = value;
}
inline void GlobalNamespace::BeatmapCallbacksUpdater::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksUpdater*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksUpdater::Pause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksUpdater*>::get(), "Pause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksUpdater::Resume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksUpdater*>::get(), "Resume",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksUpdater*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCallbacksUpdater* GlobalNamespace::BeatmapCallbacksUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapCallbacksUpdater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCallbacksUpdater::BeatmapCallbacksUpdater() {}
