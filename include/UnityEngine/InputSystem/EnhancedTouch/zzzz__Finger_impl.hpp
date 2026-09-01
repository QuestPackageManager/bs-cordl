#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\EnhancedTouch\Finger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__TouchHistory_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.get_screen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Touchscreen* (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Finger::get_screen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a65dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_screen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Finger::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a65e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.get_isActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)()>(&::UnityEngine::InputSystem::EnhancedTouch::Finger::get_isActive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65a65ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_isActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.get_screenPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Finger::get_screenPosition)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65a67b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_screenPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.get_lastTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Touch (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Finger::get_lastTouch)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x65a6854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_lastTouch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.get_currentTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Touch (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Finger::get_currentTouch)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x65a6668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_currentTouch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.get_touchHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)()>(
    &::UnityEngine::InputSystem::EnhancedTouch::Finger::get_touchHistory)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65a6a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_touchHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)(
    ::UnityEngine::InputSystem::Touchscreen*, int32_t, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::EnhancedTouch::Finger::_ctor)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x65a6a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.ShouldRecordTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControl*, double_t, ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Finger::ShouldRecordTouch)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x65a6e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
                            { "ShouldRecordTouch",
                              {},
                              { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.OnTouchRecorded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Finger::OnTouchRecorded)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x65a6f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
                                                             { "OnTouchRecorded", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.FindTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::Touch (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)(uint32_t)>(
    &::UnityEngine::InputSystem::EnhancedTouch::Finger::FindTouch)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x65a721c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "FindTouch", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::Finger.GetTouchHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory (::UnityEngine::InputSystem::EnhancedTouch::Finger::*)(
    ::UnityEngine::InputSystem::EnhancedTouch::Touch)>(&::UnityEngine::InputSystem::EnhancedTouch::Finger::GetTouchHistory)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x65a7540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
                                                                                           { "GetTouchHistory", {}, { ::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Touchscreen*& UnityEngine::InputSystem::EnhancedTouch::Finger::__cordl_internal_get__screen_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screen_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Touchscreen* const& UnityEngine::InputSystem::EnhancedTouch::Finger::__cordl_internal_get__screen_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screen_k__BackingField;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::Finger::__cordl_internal_set__screen_k__BackingField(::UnityEngine::InputSystem::Touchscreen* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screen_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::EnhancedTouch::Finger::__cordl_internal_get__index_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_k__BackingField;
}
constexpr int32_t const& UnityEngine::InputSystem::EnhancedTouch::Finger::__cordl_internal_get__index_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_k__BackingField;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::Finger::__cordl_internal_set__index_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*&
UnityEngine::InputSystem::EnhancedTouch::Finger::__cordl_internal_get_m_StateHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateHistory;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* const&
UnityEngine::InputSystem::EnhancedTouch::Finger::__cordl_internal_get_m_StateHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StateHistory;
}
constexpr void UnityEngine::InputSystem::EnhancedTouch::Finger::__cordl_internal_set_m_StateHistory(
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StateHistory = value;
}
inline ::UnityEngine::InputSystem::Touchscreen* UnityEngine::InputSystem::EnhancedTouch::Finger::get_screen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_screen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Touchscreen*>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::Finger::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Finger::get_isActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_isActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::EnhancedTouch::Finger::get_screenPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_screenPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch UnityEngine::InputSystem::EnhancedTouch::Finger::get_lastTouch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_lastTouch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Touch>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch UnityEngine::InputSystem::EnhancedTouch::Finger::get_currentTouch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_currentTouch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Touch>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory UnityEngine::InputSystem::EnhancedTouch::Finger::get_touchHistory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "get_touchHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Finger::_ctor(::UnityEngine::InputSystem::Touchscreen* screen, int32_t index, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Touchscreen*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screen, index, updateMask);
}
inline bool UnityEngine::InputSystem::EnhancedTouch::Finger::ShouldRecordTouch(::UnityEngine::InputSystem::InputControl* control, double_t time,
                                                                               ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
                          { "ShouldRecordTouch",
                            {},
                            { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, time, eventPtr);
}
inline void UnityEngine::InputSystem::EnhancedTouch::Finger::OnTouchRecorded(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record record) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
                                                           { "OnTouchRecorded", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch UnityEngine::InputSystem::EnhancedTouch::Finger::FindTouch(uint32_t uniqueId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(), { "FindTouch", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::Touch>(this, ___internal_method, uniqueId);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory UnityEngine::InputSystem::EnhancedTouch::Finger::GetTouchHistory(::UnityEngine::InputSystem::EnhancedTouch::Touch touch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(),
                                                                                         { "GetTouchHistory", {}, { ::i2c::type_of<::UnityEngine::InputSystem::EnhancedTouch::Touch>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory>(this, ___internal_method, touch);
}
inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* UnityEngine::InputSystem::EnhancedTouch::Finger::New_ctor(::UnityEngine::InputSystem::Touchscreen* screen, int32_t index,
                                                                                                                    ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::EnhancedTouch::Finger*>(screen, index, updateMask));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::Finger::Finger() {}
