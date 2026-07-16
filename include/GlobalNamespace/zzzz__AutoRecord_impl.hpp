#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoRecord.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "GlobalNamespace/zzzz__AutoRecord_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseFrame_def.hpp"
#include "GlobalNamespace/zzzz__AutoRecord_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "noteLineCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "items", ty: "::ArrayW<::GlobalNamespace::BeatmapDataItem*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AutoRecord_Beatmap::AutoRecord_Beatmap(float_t beatsPerMinute, int32_t noteLineCount, ::ArrayW<::GlobalNamespace::BeatmapDataItem*> items) noexcept {
  this->beatsPerMinute = beatsPerMinute;
  this->noteLineCount = noteLineCount;
  this->items = items;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoRecord_Beatmap::AutoRecord_Beatmap() {}
//  Writing Method size for method: ::GlobalNamespace::AutoRecord.CreatePlayerPoseFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::RecPlay::PlayerPoseFrames (*)(::by_ref<::GlobalNamespace::AutoRecord_Beatmap>)>(
    &::GlobalNamespace::AutoRecord::CreatePlayerPoseFrames)> {
  constexpr static std::size_t size = 0x90c;
  constexpr static std::size_t addrs = 0x58f7e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(), { "CreatePlayerPoseFrames", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::AutoRecord_Beatmap>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoRecord.AddNoteHandFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NoteData*, int32_t, float_t, float_t, ::UnityEngine::Quaternion,
                                                                ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>, ::ArrayW<::GlobalNamespace::NoteCutDirection>)>(
    &::GlobalNamespace::AutoRecord::AddNoteHandFrames)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x58f87cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(),
                                                { "AddNoteHandFrames",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>>(),
                                                    ::i2c::type_of<::ArrayW<::GlobalNamespace::NoteCutDirection>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoRecord.AddSliderHandFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::GlobalNamespace::SliderData*, int32_t, float_t, float_t, ::UnityEngine::Quaternion, ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>)>(
        &::GlobalNamespace::AutoRecord::AddSliderHandFrames)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x58f8ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(),
                                         { "AddSliderHandFrames",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoRecord.LocateCutPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::AutoRecord::LocateCutPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58f8784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(),
                                                { "LocateCutPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoRecord._CreatePlayerPoseFrames_g__FixFrames_1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::BeatSaber::RecPlay::PoseFrame>)>(&::GlobalNamespace::AutoRecord::_CreatePlayerPoseFrames_g__FixFrames_1_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58f9284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(), { "<CreatePlayerPoseFrames>g__FixFrames|1_0", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AutoRecord::setStaticF_kCutStartOffset(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kCutStartOffset", ::GlobalNamespace::AutoRecord*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::AutoRecord::getStaticF_kCutStartOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kCutStartOffset", ::GlobalNamespace::AutoRecord*>();
}
inline void GlobalNamespace::AutoRecord::setStaticF_kCutEndOffset(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kCutEndOffset", ::GlobalNamespace::AutoRecord*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::AutoRecord::getStaticF_kCutEndOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kCutEndOffset", ::GlobalNamespace::AutoRecord*>();
}
inline ::BeatSaber::RecPlay::PlayerPoseFrames GlobalNamespace::AutoRecord::CreatePlayerPoseFrames(::by_ref<::GlobalNamespace::AutoRecord_Beatmap> beatmap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(), { "CreatePlayerPoseFrames", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::AutoRecord_Beatmap>>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PlayerPoseFrames>(nullptr, ___internal_method, beatmap);
}
inline void GlobalNamespace::AutoRecord::AddNoteHandFrames(::GlobalNamespace::NoteData* note, int32_t noteLineCount, float_t cutStart, float_t cutEnd, ::UnityEngine::Quaternion trackOrientation,
                                                           ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*> handFrames,
                                                           ::ArrayW<::GlobalNamespace::NoteCutDirection> lastCutDirections) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(),
                                              { "AddNoteHandFrames",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>>(),
                                                  ::i2c::type_of<::ArrayW<::GlobalNamespace::NoteCutDirection>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, note, noteLineCount, cutStart, cutEnd, trackOrientation, handFrames, lastCutDirections);
}
inline void GlobalNamespace::AutoRecord::AddSliderHandFrames(::GlobalNamespace::SliderData* slider, int32_t noteLineCount, float_t cutStart, float_t cutEnd, ::UnityEngine::Quaternion trackOrientation,
                                                             ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*> handFrames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(),
                                       { "AddSliderHandFrames",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, slider, noteLineCount, cutStart, cutEnd, trackOrientation, handFrames);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AutoRecord::LocateCutPosition(int32_t lineCount, int32_t line, ::GlobalNamespace::NoteLineLayer layer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(),
                                                           { "LocateCutPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lineCount, line, layer);
}
inline int32_t GlobalNamespace::AutoRecord::_CreatePlayerPoseFrames_g__FixFrames_1_0(::ArrayW<::BeatSaber::RecPlay::PoseFrame> frames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AutoRecord*>(), { "<CreatePlayerPoseFrames>g__FixFrames|1_0", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, frames);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoRecord::AutoRecord() {}
