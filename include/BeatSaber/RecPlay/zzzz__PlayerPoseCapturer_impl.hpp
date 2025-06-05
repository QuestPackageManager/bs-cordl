#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPoseCapturer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseCapturer_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrame_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPose_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseCapturer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::RecPlay::PlayerPoseCapturer::*)(int32_t)>(&::BeatSaber::RecPlay::PlayerPoseCapturer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x227a7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseCapturer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseCapturer.Capture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::RecPlay::PlayerPoseCapturer::*)(float_t, ::BeatSaber::RecPlay::PlayerPose)>(
    &::BeatSaber::RecPlay::PlayerPoseCapturer::Capture)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x227a848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseCapturer*>::get(), "Capture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::RecPlay::PlayerPose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseCapturer.CreatePlayerPoseFrames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::RecPlay::PlayerPoseFrames (::BeatSaber::RecPlay::PlayerPoseCapturer::*)()>(
    &::BeatSaber::RecPlay::PlayerPoseCapturer::CreatePlayerPoseFrames)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x227a968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseCapturer*>::get(),
                                                                               "CreatePlayerPoseFrames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PlayerPoseFrame>*& BeatSaber::RecPlay::PlayerPoseCapturer::__cordl_internal_get_frames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PlayerPoseFrame>* const& BeatSaber::RecPlay::PlayerPoseCapturer::__cordl_internal_get_frames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr void BeatSaber::RecPlay::PlayerPoseCapturer::__cordl_internal_set_frames(::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PlayerPoseFrame>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::RecPlay::PlayerPoseCapturer::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseCapturer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline void BeatSaber::RecPlay::PlayerPoseCapturer::Capture(float_t time, ::BeatSaber::RecPlay::PlayerPose pose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseCapturer*>::get(), "Capture", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::RecPlay::PlayerPose>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, pose);
}
inline ::BeatSaber::RecPlay::PlayerPoseFrames BeatSaber::RecPlay::PlayerPoseCapturer::CreatePlayerPoseFrames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseCapturer*>::get(),
                                                                             "CreatePlayerPoseFrames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PlayerPoseFrames, false>(this, ___internal_method);
}
inline ::BeatSaber::RecPlay::PlayerPoseCapturer* BeatSaber::RecPlay::PlayerPoseCapturer::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::RecPlay::PlayerPoseCapturer*>(capacity));
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PlayerPoseCapturer::PlayerPoseCapturer() {}
