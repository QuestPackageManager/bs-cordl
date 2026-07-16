#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/Avatar.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.get_bodyCenterWorldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BeatSaber::AvatarCore::Avatar::*)()>(&::BeatSaber::AvatarCore::Avatar::get_bodyCenterWorldPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.SetPoseDataProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::IAvatarPoseDataProvider*)>(
    &::BeatSaber::AvatarCore::Avatar::SetPoseDataProvider)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x3269288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { "SetPoseDataProvider", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.SetVisualDataProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::IAvatarVisualDataProvider*)>(
    &::BeatSaber::AvatarCore::Avatar::SetVisualDataProvider)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3269510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { "SetVisualDataProvider", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.SetOptionalDataProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*)>(
    &::BeatSaber::AvatarCore::Avatar::SetOptionalDataProvider)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x32695f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { "SetOptionalDataProvider", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromOptionalDataList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*)>(
    &::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalDataList)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x326982c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(),
                            { "UpdateAvatarFromOptionalDataList", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromOptionalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(
    &::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x326995c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(),
                                                                                           { "UpdateAvatarFromOptionalData", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.SetLightColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::UnityEngine::Color)>(&::BeatSaber::AvatarCore::Avatar::SetLightColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::AvatarPoseData)>(&::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromVisualData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromVisualData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar.UpdateAvatarFromOptionalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)(::BeatSaber::AvatarCore::OptionalAvatarData, int64_t)>(
    &::BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::Avatar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::Avatar::*)()>(&::BeatSaber::AvatarCore::Avatar::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3269a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*& BeatSaber::AvatarCore::Avatar::__cordl_internal_get_visualDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualDataProvider;
}
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* const& BeatSaber::AvatarCore::Avatar::__cordl_internal_get_visualDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualDataProvider;
}
constexpr void BeatSaber::AvatarCore::Avatar::__cordl_internal_set_visualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visualDataProvider = value;
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*& BeatSaber::AvatarCore::Avatar::__cordl_internal_get_poseDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poseDataProvider;
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* const& BeatSaber::AvatarCore::Avatar::__cordl_internal_get_poseDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poseDataProvider;
}
constexpr void BeatSaber::AvatarCore::Avatar::__cordl_internal_set_poseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___poseDataProvider = value;
}
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*& BeatSaber::AvatarCore::Avatar::__cordl_internal_get_optionalDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___optionalDataProvider;
}
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* const& BeatSaber::AvatarCore::Avatar::__cordl_internal_get_optionalDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___optionalDataProvider;
}
constexpr void BeatSaber::AvatarCore::Avatar::__cordl_internal_set_optionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___optionalDataProvider = value;
}
inline ::UnityEngine::Vector3 BeatSaber::AvatarCore::Avatar::get_bodyCenterWorldPosition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::Avatar::SetPoseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider* poseDataProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { "SetPoseDataProvider", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseDataProvider);
}
inline void BeatSaber::AvatarCore::Avatar::SetVisualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider* visualDataProvider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(),
                                                                                         { "SetVisualDataProvider", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visualDataProvider);
}
inline void BeatSaber::AvatarCore::Avatar::SetOptionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* optionalDataProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { "SetOptionalDataProvider", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optionalDataProvider);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalDataList(::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* optionalData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(),
                          { "UpdateAvatarFromOptionalDataList", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optionalData);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(),
                                                                                         { "UpdateAvatarFromOptionalData", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void BeatSaber::AvatarCore::Avatar::SetLightColor(::UnityEngine::Color lightColor) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightColor);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromPose(::BeatSaber::AvatarCore::AvatarPoseData currentPose) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPose);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromVisualData(::GlobalNamespace::MultiplayerAvatarsData visualData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visualData);
}
inline void BeatSaber::AvatarCore::Avatar::UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData data, int64_t playbackDelayMs) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, playbackDelayMs);
}
inline void BeatSaber::AvatarCore::Avatar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::Avatar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::Avatar* BeatSaber::AvatarCore::Avatar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::Avatar*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::Avatar::Avatar() {}
