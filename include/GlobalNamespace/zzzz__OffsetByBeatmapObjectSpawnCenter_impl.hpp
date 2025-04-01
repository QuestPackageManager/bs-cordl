#pragma once
// IWYU pragma private; include "GlobalNamespace/OffsetByBeatmapObjectSpawnCenter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OffsetByBeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)()>(
    &::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3ad37f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter.HandleSpawnCenterDistanceWasFound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)(float_t)>(
    &::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3ad3894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>::get(), "HandleSpawnCenterDistanceWasFound",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::*)()>(
    &::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad38fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::__cordl_internal_get__spawnCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenter;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::__cordl_internal_get__spawnCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenter;
}
constexpr void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::__cordl_internal_set__spawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnCenter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::HandleSpawnCenterDistanceWasFound(float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>::get(), "HandleSpawnCenterDistanceWasFound",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance);
}
inline void GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter* GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter::OffsetByBeatmapObjectSpawnCenter() {}
