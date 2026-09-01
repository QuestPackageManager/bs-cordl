#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteWaiting.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteWaiting_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteWaiting.get_localPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoteWaiting::*)()>(&::GlobalNamespace::NoteWaiting::get_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58d8870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { "get_localPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteWaiting.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteWaiting::*)(float_t)>(&::GlobalNamespace::NoteWaiting::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d887c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { "Init", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteWaiting.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteWaiting::*)()>(&::GlobalNamespace::NoteWaiting::ManualUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58d8840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { "ManualUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteWaiting.ShouldWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteWaiting::*)()>(&::GlobalNamespace::NoteWaiting::ShouldWait)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58d868c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { "ShouldWait", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteWaiting._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteWaiting::*)()>(&::GlobalNamespace::NoteWaiting::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d8884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteWaiting::__cordl_internal_get__waitingPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitingPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteWaiting::__cordl_internal_get__waitingPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitingPosition;
}
constexpr void GlobalNamespace::NoteWaiting::__cordl_internal_set__waitingPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waitingPosition = value;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider*& GlobalNamespace::NoteWaiting::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& GlobalNamespace::NoteWaiting::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::NoteWaiting::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variableMovementDataProvider = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::NoteWaiting::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::NoteWaiting::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::NoteWaiting::__cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr float_t& GlobalNamespace::NoteWaiting::__cordl_internal_get__beatTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatTime;
}
constexpr float_t const& GlobalNamespace::NoteWaiting::__cordl_internal_get__beatTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatTime;
}
constexpr void GlobalNamespace::NoteWaiting::__cordl_internal_set__beatTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatTime = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::NoteWaiting::get_localPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { "get_localPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::NoteWaiting::Init(float_t beatTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { "Init", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatTime);
}
inline void GlobalNamespace::NoteWaiting::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { "ManualUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::NoteWaiting::ShouldWait() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { "ShouldWait", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoteWaiting::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteWaiting*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteWaiting* GlobalNamespace::NoteWaiting::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteWaiting*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteWaiting::NoteWaiting() {}
