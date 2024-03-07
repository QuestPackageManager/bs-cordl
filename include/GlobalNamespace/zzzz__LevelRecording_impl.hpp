#pragma once
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelRecording_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelRecording._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelRecording::*)()>(&::GlobalNamespace::LevelRecording::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2466df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelRecording*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::LevelRecording::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::LevelRecording::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void GlobalNamespace::LevelRecording::__cordl_internal_set_key(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseFrames& GlobalNamespace::LevelRecording::__cordl_internal_get_frames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseFrames const& GlobalNamespace::LevelRecording::__cordl_internal_get_frames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr void GlobalNamespace::LevelRecording::__cordl_internal_set_frames(::BeatSaber::RecPlay::PlayerPoseFrames value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frames = value;
}
inline ::GlobalNamespace::LevelRecording* GlobalNamespace::LevelRecording::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelRecording*>());
}
inline void GlobalNamespace::LevelRecording::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelRecording*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelRecording::LevelRecording() {}
