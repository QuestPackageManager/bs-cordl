#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\TouchState.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_Format)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_Format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::TouchPhase (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::TouchState::get_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ae4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_phase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.set_phase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::TouchState::*)(::UnityEngine::InputSystem::TouchPhase)>(
    &::UnityEngine::InputSystem::LowLevel::TouchState::set_phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a9874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::TouchPhase>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_isNoneEndedOrCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_isNoneEndedOrCanceled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65ae4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isNoneEndedOrCanceled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_isInProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_isInProgress)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65ae4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isInProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_isPrimaryTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_isPrimaryTouch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isPrimaryTouch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.set_isPrimaryTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::TouchState::*)(bool)>(&::UnityEngine::InputSystem::LowLevel::TouchState::set_isPrimaryTouch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65ae4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isPrimaryTouch", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_isOrphanedPrimaryTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_isOrphanedPrimaryTouch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isOrphanedPrimaryTouch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.set_isOrphanedPrimaryTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::TouchState::*)(bool)>(
    &::UnityEngine::InputSystem::LowLevel::TouchState::set_isOrphanedPrimaryTouch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65ae520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isOrphanedPrimaryTouch", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_isIndirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_isIndirectTouch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isIndirectTouch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.set_isIndirectTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::TouchState::*)(bool)>(&::UnityEngine::InputSystem::LowLevel::TouchState::set_isIndirectTouch)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65ae54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isIndirectTouch", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_isTap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_isTap)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a7de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isTap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.set_isTap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::TouchState::*)(bool)>(&::UnityEngine::InputSystem::LowLevel::TouchState::set_isTap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65ae56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isTap", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_isTapPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_isTapPress)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isTapPress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.set_isTapPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::TouchState::*)(bool)>(&::UnityEngine::InputSystem::LowLevel::TouchState::set_isTapPress)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65ae58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isTapPress", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_isTapRelease
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_isTapRelease)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a6f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isTapRelease", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.set_isTapRelease
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::TouchState::*)(bool)>(&::UnityEngine::InputSystem::LowLevel::TouchState::set_isTapRelease)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65ae5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isTapRelease", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_beganInSameFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::get_beganInSameFrame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a71f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_beganInSameFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.set_beganInSameFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::TouchState::*)(bool)>(&::UnityEngine::InputSystem::LowLevel::TouchState::set_beganInSameFrame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65a7200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_beganInSameFrame", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::TouchState::get_format)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65ae5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchState.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::LowLevel::TouchState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchState::ToString)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x65ae5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), 3 }));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_touchId() {
  return this->___touchId;
}
constexpr int32_t const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_touchId() const {
  return this->___touchId;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_touchId(int32_t value) {
  this->___touchId = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_position() {
  return this->___position;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_position() const {
  return this->___position;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_position(::UnityEngine::Vector2 value) {
  this->___position = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_delta() {
  return this->___delta;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_delta() const {
  return this->___delta;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_delta(::UnityEngine::Vector2 value) {
  this->___delta = value;
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_pressure() {
  return this->___pressure;
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_pressure() const {
  return this->___pressure;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_pressure(float_t value) {
  this->___pressure = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_radius() {
  return this->___radius;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_radius() const {
  return this->___radius;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_radius(::UnityEngine::Vector2 value) {
  this->___radius = value;
}
constexpr uint8_t& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_phaseId() {
  return this->___phaseId;
}
constexpr uint8_t const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_phaseId() const {
  return this->___phaseId;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_phaseId(uint8_t value) {
  this->___phaseId = value;
}
constexpr uint8_t& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_tapCount() {
  return this->___tapCount;
}
constexpr uint8_t const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_tapCount() const {
  return this->___tapCount;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_tapCount(uint8_t value) {
  this->___tapCount = value;
}
constexpr uint8_t& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_displayIndex() {
  return this->___displayIndex;
}
constexpr uint8_t const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_displayIndex() const {
  return this->___displayIndex;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_displayIndex(uint8_t value) {
  this->___displayIndex = value;
}
constexpr uint8_t& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_flags() {
  return this->___flags;
}
constexpr uint8_t const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_flags() const {
  return this->___flags;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_flags(uint8_t value) {
  this->___flags = value;
}
constexpr uint32_t& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_updateStepCount() {
  return this->___updateStepCount;
}
constexpr uint32_t const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_updateStepCount() const {
  return this->___updateStepCount;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_updateStepCount(uint32_t value) {
  this->___updateStepCount = value;
}
constexpr double_t& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_startTime() {
  return this->___startTime;
}
constexpr double_t const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_startTime() const {
  return this->___startTime;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_startTime(double_t value) {
  this->___startTime = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_startPosition() {
  return this->___startPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_get_startPosition() const {
  return this->___startPosition;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchState::__cordl_internal_set_startPosition(::UnityEngine::Vector2 value) {
  this->___startPosition = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchState::get_Format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_Format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::TouchPhase UnityEngine::InputSystem::LowLevel::TouchState::get_phase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_phase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::TouchPhase>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::TouchState::set_phase(::UnityEngine::InputSystem::TouchPhase value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_phase", {}, { ::i2c::type_of<::UnityEngine::InputSystem::TouchPhase>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::TouchState::get_isNoneEndedOrCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isNoneEndedOrCanceled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::TouchState::get_isInProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isInProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::TouchState::get_isPrimaryTouch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isPrimaryTouch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::TouchState::set_isPrimaryTouch(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isPrimaryTouch", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::TouchState::get_isOrphanedPrimaryTouch() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isOrphanedPrimaryTouch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::TouchState::set_isOrphanedPrimaryTouch(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isOrphanedPrimaryTouch", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::TouchState::get_isIndirectTouch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isIndirectTouch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::TouchState::set_isIndirectTouch(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isIndirectTouch", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::TouchState::get_isTap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isTap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::TouchState::set_isTap(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isTap", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::TouchState::get_isTapPress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isTapPress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::TouchState::set_isTapPress(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isTapPress", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::TouchState::get_isTapRelease() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_isTapRelease", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::TouchState::set_isTapRelease(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_isTapRelease", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::TouchState::get_beganInSameFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_beganInSameFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::TouchState::set_beganInSameFrame(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "set_beganInSameFrame", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchState::get_format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::LowLevel::TouchState::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchState>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::TouchState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::LowLevel::TouchState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "radius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "phaseId", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tapCount",
// ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "displayIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "uint8_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "updateStepCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startTime", ty: "double_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "startPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::TouchState::TouchState(int32_t touchId, ::UnityEngine::Vector2 position, ::UnityEngine::Vector2 delta, float_t pressure, ::UnityEngine::Vector2 radius,
                                                                       uint8_t phaseId, uint8_t tapCount, uint8_t displayIndex, uint8_t flags, uint32_t updateStepCount, double_t startTime,
                                                                       ::UnityEngine::Vector2 startPosition) noexcept {
  this->touchId = touchId;
  this->position = position;
  this->delta = delta;
  this->pressure = pressure;
  this->radius = radius;
  this->phaseId = phaseId;
  this->tapCount = tapCount;
  this->displayIndex = displayIndex;
  this->flags = flags;
  this->updateStepCount = updateStepCount;
  this->startTime = startTime;
  this->startPosition = startPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::TouchState::TouchState() {}
