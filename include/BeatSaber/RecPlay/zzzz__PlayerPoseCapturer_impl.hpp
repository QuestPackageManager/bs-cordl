#pragma once
// IWYU pragma private; include "BeatSaber\RecPlay\PlayerPoseCapturer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseCapturer_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrame_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPose_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseCapturer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::RecPlay::PlayerPoseCapturer::*)(int32_t)>(&::BeatSaber::RecPlay::PlayerPoseCapturer::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32c3d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseCapturer*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseCapturer.Capture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::RecPlay::PlayerPoseCapturer::*)(float_t, ::BeatSaber::RecPlay::PlayerPose)>(
    &::BeatSaber::RecPlay::PlayerPoseCapturer::Capture)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x32c3e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseCapturer*>(),
                                                                                           { "Capture", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatSaber::RecPlay::PlayerPose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseCapturer.CreatePlayerPoseFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::RecPlay::PlayerPoseFrames (::BeatSaber::RecPlay::PlayerPoseCapturer::*)()>(
    &::BeatSaber::RecPlay::PlayerPoseCapturer::CreatePlayerPoseFrames)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x32c3f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseCapturer*>(), { "CreatePlayerPoseFrames", {}, {} })));
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
  this->___frames = value;
}
inline void BeatSaber::RecPlay::PlayerPoseCapturer::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseCapturer*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void BeatSaber::RecPlay::PlayerPoseCapturer::Capture(float_t time, ::BeatSaber::RecPlay::PlayerPose pose) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseCapturer*>(),
                                                                                         { "Capture", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::BeatSaber::RecPlay::PlayerPose>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, pose);
}
inline ::BeatSaber::RecPlay::PlayerPoseFrames BeatSaber::RecPlay::PlayerPoseCapturer::CreatePlayerPoseFrames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseCapturer*>(), { "CreatePlayerPoseFrames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PlayerPoseFrames>(this, ___internal_method);
}
inline ::BeatSaber::RecPlay::PlayerPoseCapturer* BeatSaber::RecPlay::PlayerPoseCapturer::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::RecPlay::PlayerPoseCapturer*>(capacity));
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PlayerPoseCapturer::PlayerPoseCapturer() {}
