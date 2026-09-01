#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\EventDispatcherGate.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcherGate_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcherGate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcherGate::*)(::UnityEngine::UIElements::EventDispatcher*)>(
    &::UnityEngine::UIElements::EventDispatcherGate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d94978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventDispatcher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcherGate.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventDispatcherGate::*)()>(&::UnityEngine::UIElements::EventDispatcherGate::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d949f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcherGate.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::EventDispatcherGate::*)(::UnityEngine::UIElements::EventDispatcherGate)>(
    &::UnityEngine::UIElements::EventDispatcherGate::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d94b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventDispatcherGate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcherGate.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::EventDispatcherGate::*)(::System::Object*)>(&::UnityEngine::UIElements::EventDispatcherGate::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6d94bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), { ::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcherGate.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::EventDispatcherGate::*)()>(&::UnityEngine::UIElements::EventDispatcherGate::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d94c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), { ::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EventDispatcherGate::_ctor(::UnityEngine::UIElements::EventDispatcher* d) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventDispatcher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, d);
}
inline void UnityEngine::UIElements::EventDispatcherGate::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventDispatcherGate::Equals(::UnityEngine::UIElements::EventDispatcherGate other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventDispatcherGate>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::EventDispatcherGate::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::EventDispatcherGate::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventDispatcherGate>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::EventDispatcherGate::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::EventDispatcherGate::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>"
constexpr UnityEngine::UIElements::EventDispatcherGate::operator ::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>*
UnityEngine::UIElements::EventDispatcherGate::i___System__IEquatable_1___UnityEngine__UIElements__EventDispatcherGate_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Dispatcher", ty: "::UnityEngine::UIElements::EventDispatcher*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventDispatcherGate::EventDispatcherGate(::UnityEngine::UIElements::EventDispatcher* m_Dispatcher) noexcept {
  this->m_Dispatcher = m_Dispatcher;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDispatcherGate::EventDispatcherGate() {}
