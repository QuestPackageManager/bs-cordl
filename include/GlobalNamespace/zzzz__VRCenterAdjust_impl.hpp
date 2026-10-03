#pragma once
// IWYU pragma private; include "GlobalNamespace/VRCenterAdjust.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRCenterAdjust_def.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRCenterAdjust.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRCenterAdjust::*)()>(&::GlobalNamespace::VRCenterAdjust::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d21234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRCenterAdjust.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRCenterAdjust::*)()>(&::GlobalNamespace::VRCenterAdjust::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d21408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRCenterAdjust.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRCenterAdjust::*)()>(&::GlobalNamespace::VRCenterAdjust::OnEnable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d2145c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRCenterAdjust.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRCenterAdjust::*)()>(&::GlobalNamespace::VRCenterAdjust::OnDisable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d21568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRCenterAdjust.SetRoomTransformOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRCenterAdjust::*)()>(&::GlobalNamespace::VRCenterAdjust::SetRoomTransformOffset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d21360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "SetRoomTransformOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRCenterAdjust.ResetRoom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRCenterAdjust::*)()>(&::GlobalNamespace::VRCenterAdjust::ResetRoom)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d21294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "ResetRoom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRCenterAdjust._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRCenterAdjust::*)()>(&::GlobalNamespace::VRCenterAdjust::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d21674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::VRCenterAdjust::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::VRCenterAdjust::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::VRCenterAdjust::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& GlobalNamespace::VRCenterAdjust::__cordl_internal_get__settingsApplicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& GlobalNamespace::VRCenterAdjust::__cordl_internal_get__settingsApplicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsApplicator;
}
constexpr void GlobalNamespace::VRCenterAdjust::__cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsApplicator = value;
}
inline void GlobalNamespace::VRCenterAdjust::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRCenterAdjust::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRCenterAdjust::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRCenterAdjust::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRCenterAdjust::SetRoomTransformOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "SetRoomTransformOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRCenterAdjust::ResetRoom() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { "ResetRoom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRCenterAdjust::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRCenterAdjust*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRCenterAdjust* GlobalNamespace::VRCenterAdjust::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRCenterAdjust*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRCenterAdjust::VRCenterAdjust() {}
