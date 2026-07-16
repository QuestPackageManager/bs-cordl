#pragma once
// IWYU pragma private; include "UnityEngine/EventInterests.hpp"
#include "UnityEngine/zzzz__EventInterests_def.hpp"
#include "UnityEngine/zzzz__EventType_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventInterests.get_wantsMouseMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventInterests::*)()>(&::UnityEngine::EventInterests::get_wantsMouseMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3d8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "get_wantsMouseMove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventInterests.set_wantsMouseMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventInterests::*)(bool)>(&::UnityEngine::EventInterests::set_wantsMouseMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3d8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "set_wantsMouseMove", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventInterests.get_wantsMouseEnterLeaveWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventInterests::*)()>(&::UnityEngine::EventInterests::get_wantsMouseEnterLeaveWindow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3d8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "get_wantsMouseEnterLeaveWindow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventInterests.set_wantsMouseEnterLeaveWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventInterests::*)(bool)>(&::UnityEngine::EventInterests::set_wantsMouseEnterLeaveWindow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3d8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "set_wantsMouseEnterLeaveWindow", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventInterests.get_wantsLessLayoutEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventInterests::*)()>(&::UnityEngine::EventInterests::get_wantsLessLayoutEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3d8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "get_wantsLessLayoutEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventInterests.WantsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventInterests::*)(::UnityEngine::EventType)>(&::UnityEngine::EventInterests::WantsEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b3d8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "WantsEvent", {}, { ::i2c::type_of<::UnityEngine::EventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventInterests.WantsLayoutPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventInterests::*)(::UnityEngine::EventType)>(&::UnityEngine::EventInterests::WantsLayoutPass)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b3d908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "WantsLayoutPass", {}, { ::i2c::type_of<::UnityEngine::EventType>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::EventInterests::get_wantsMouseMove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "get_wantsMouseMove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::EventInterests::set_wantsMouseMove(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "set_wantsMouseMove", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::EventInterests::get_wantsMouseEnterLeaveWindow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "get_wantsMouseEnterLeaveWindow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::EventInterests::set_wantsMouseEnterLeaveWindow(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "set_wantsMouseEnterLeaveWindow", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::EventInterests::get_wantsLessLayoutEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "get_wantsLessLayoutEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::EventInterests::WantsEvent(::UnityEngine::EventType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "WantsEvent", {}, { ::i2c::type_of<::UnityEngine::EventType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, type);
}
inline bool UnityEngine::EventInterests::WantsLayoutPass(::UnityEngine::EventType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventInterests>(), { "WantsLayoutPass", {}, { ::i2c::type_of<::UnityEngine::EventType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, type);
}
// Ctor Parameters [CppParam { name: "_wantsMouseMove_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_wantsMouseEnterLeaveWindow_k__BackingField", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_wantsLessLayoutEvents_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventInterests::EventInterests(bool _wantsMouseMove_k__BackingField, bool _wantsMouseEnterLeaveWindow_k__BackingField, bool _wantsLessLayoutEvents_k__BackingField) noexcept {
  this->_wantsMouseMove_k__BackingField = _wantsMouseMove_k__BackingField;
  this->_wantsMouseEnterLeaveWindow_k__BackingField = _wantsMouseEnterLeaveWindow_k__BackingField;
  this->_wantsLessLayoutEvents_k__BackingField = _wantsLessLayoutEvents_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventInterests::EventInterests() {}
