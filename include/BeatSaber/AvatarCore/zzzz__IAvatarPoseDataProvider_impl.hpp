#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/IAvatarPoseDataProvider.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarPoseDataProvider.get_currentPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::AvatarPoseData (::BeatSaber::AvatarCore::IAvatarPoseDataProvider::*)()>(
    &::BeatSaber::AvatarCore::IAvatarPoseDataProvider::get_currentPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarPoseDataProvider.add_poseDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::IAvatarPoseDataProvider::*)(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*)>(
    &::BeatSaber::AvatarCore::IAvatarPoseDataProvider::add_poseDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarPoseDataProvider.remove_poseDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::IAvatarPoseDataProvider::*)(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*)>(
    &::BeatSaber::AvatarCore::IAvatarPoseDataProvider::remove_poseDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(), 2 }));
    return ___internal_method;
  }
};
inline ::BeatSaber::AvatarCore::AvatarPoseData BeatSaber::AvatarCore::IAvatarPoseDataProvider::get_currentPose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::AvatarPoseData>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::IAvatarPoseDataProvider::add_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::IAvatarPoseDataProvider::remove_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
