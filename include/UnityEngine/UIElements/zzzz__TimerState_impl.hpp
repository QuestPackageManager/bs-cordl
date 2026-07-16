#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimerState.hpp"
#include "UnityEngine/UIElements/zzzz__TimerState_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TimerState.get_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::UIElements::TimerState::*)()>(&::UnityEngine::UIElements::TimerState::get_start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "get_start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerState.set_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TimerState::*)(int64_t)>(&::UnityEngine::UIElements::TimerState::set_start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "set_start", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerState.get_now
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::UIElements::TimerState::*)()>(&::UnityEngine::UIElements::TimerState::get_now)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "get_now", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerState.set_now
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TimerState::*)(int64_t)>(&::UnityEngine::UIElements::TimerState::set_now)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "set_now", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerState.get_deltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::UIElements::TimerState::*)()>(&::UnityEngine::UIElements::TimerState::get_deltaTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd6068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "get_deltaTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TimerState::*)(::System::Object*)>(&::UnityEngine::UIElements::TimerState::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6dd6074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { ::i2c::class_of<::UnityEngine::UIElements::TimerState>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TimerState::*)(::UnityEngine::UIElements::TimerState)>(&::UnityEngine::UIElements::TimerState::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6dd6100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TimerState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TimerState.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TimerState::*)()>(&::UnityEngine::UIElements::TimerState::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6dd6124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { ::i2c::class_of<::UnityEngine::UIElements::TimerState>(), 2 }));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::UIElements::TimerState::get_start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "get_start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TimerState::set_start(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "set_start", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t UnityEngine::UIElements::TimerState::get_now() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "get_now", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TimerState::set_now(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "set_now", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t UnityEngine::UIElements::TimerState::get_deltaTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "get_deltaTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::TimerState::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TimerState>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::UIElements::TimerState::Equals(::UnityEngine::UIElements::TimerState other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TimerState>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TimerState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::UIElements::TimerState::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TimerState>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TimerState>"
constexpr UnityEngine::UIElements::TimerState::operator ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::TimerState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TimerState>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>* UnityEngine::UIElements::TimerState::i___System__IEquatable_1___UnityEngine__UIElements__TimerState_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::TimerState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_start_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_now_k__BackingField", ty: "int64_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::UIElements::TimerState::TimerState(int64_t _start_k__BackingField, int64_t _now_k__BackingField) noexcept {
  this->_start_k__BackingField = _start_k__BackingField;
  this->_now_k__BackingField = _now_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TimerState::TimerState() {}
