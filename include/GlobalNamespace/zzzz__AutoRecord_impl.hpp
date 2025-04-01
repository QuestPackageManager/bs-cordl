#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoRecord.hpp"
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
// CppParam { name: "items", ty: "::ArrayW<::GlobalNamespace::BeatmapDataItem*,::Array<::GlobalNamespace::BeatmapDataItem*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AutoRecord_Beatmap::AutoRecord_Beatmap(float_t beatsPerMinute, int32_t noteLineCount,
                                                                    ::ArrayW<::GlobalNamespace::BeatmapDataItem*, ::Array<::GlobalNamespace::BeatmapDataItem*>*> items) noexcept {
  this->beatsPerMinute = beatsPerMinute;
  this->noteLineCount = noteLineCount;
  this->items = items;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoRecord_Beatmap::AutoRecord_Beatmap() {}
//  Writing Method size for method: ::GlobalNamespace::AutoRecord.CreatePlayerPoseFrames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::RecPlay::PlayerPoseFrames (*)(::ByRef<::GlobalNamespace::AutoRecord_Beatmap>)>(
    &::GlobalNamespace::AutoRecord::CreatePlayerPoseFrames)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x3b21c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "CreatePlayerPoseFrames", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::AutoRecord_Beatmap>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoRecord.AddNoteHandFrames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::NoteData*, int32_t, float_t, float_t, ::UnityEngine::Quaternion,
                         ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*>,
                         ::ArrayW<::GlobalNamespace::NoteCutDirection, ::Array<::GlobalNamespace::NoteCutDirection>*>)>(&::GlobalNamespace::AutoRecord::AddNoteHandFrames)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x3b2253c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "AddNoteHandFrames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::NoteCutDirection, ::Array<::GlobalNamespace::NoteCutDirection>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoRecord.AddSliderHandFrames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::SliderData*, int32_t, float_t, float_t, ::UnityEngine::Quaternion,
                         ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*>)>(
        &::GlobalNamespace::AutoRecord::AddSliderHandFrames)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x3b22a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "AddSliderHandFrames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoRecord.LocateCutPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::AutoRecord::LocateCutPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3b224fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "LocateCutPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoRecord._CreatePlayerPoseFrames_g__FixFrames_1_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>)>(
    &::GlobalNamespace::AutoRecord::_CreatePlayerPoseFrames_g__FixFrames_1_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3b23040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "<CreatePlayerPoseFrames>g__FixFrames|1_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AutoRecord::setStaticF_kCutStartOffset(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kCutStartOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get>(
      std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::AutoRecord::getStaticF_kCutStartOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kCutStartOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get>();
}
inline void GlobalNamespace::AutoRecord::setStaticF_kCutEndOffset(::UnityEngine::Pose value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pose, "kCutEndOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get>(
      std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose GlobalNamespace::AutoRecord::getStaticF_kCutEndOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pose, "kCutEndOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get>();
}
inline ::BeatSaber::RecPlay::PlayerPoseFrames GlobalNamespace::AutoRecord::CreatePlayerPoseFrames(::ByRef<::GlobalNamespace::AutoRecord_Beatmap> beatmap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "CreatePlayerPoseFrames", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::AutoRecord_Beatmap>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PlayerPoseFrames, false>(nullptr, ___internal_method, beatmap);
}
inline void GlobalNamespace::AutoRecord::AddNoteHandFrames(
    ::GlobalNamespace::NoteData* note, int32_t noteLineCount, float_t cutStart, float_t cutEnd, ::UnityEngine::Quaternion trackOrientation,
    ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*> handFrames,
    ::ArrayW<::GlobalNamespace::NoteCutDirection, ::Array<::GlobalNamespace::NoteCutDirection>*> lastCutDirections) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "AddNoteHandFrames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::NoteCutDirection, ::Array<::GlobalNamespace::NoteCutDirection>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, note, noteLineCount, cutStart, cutEnd, trackOrientation, handFrames, lastCutDirections);
}
inline void GlobalNamespace::AutoRecord::AddSliderHandFrames(
    ::GlobalNamespace::SliderData* slider, int32_t noteLineCount, float_t cutStart, float_t cutEnd, ::UnityEngine::Quaternion trackOrientation,
    ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*> handFrames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "AddSliderHandFrames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*, ::Array<::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PoseFrame>*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, slider, noteLineCount, cutStart, cutEnd, trackOrientation, handFrames);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AutoRecord::LocateCutPosition(int32_t lineCount, int32_t line, ::GlobalNamespace::NoteLineLayer layer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "LocateCutPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, lineCount, line, layer);
}
inline int32_t GlobalNamespace::AutoRecord::_CreatePlayerPoseFrames_g__FixFrames_1_0(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> frames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoRecord*>::get(), "<CreatePlayerPoseFrames>g__FixFrames|1_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, frames);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoRecord::AutoRecord() {}
