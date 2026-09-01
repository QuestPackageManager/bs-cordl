#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\Rendering\XRLayoutStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRLayoutStack_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRLayout_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack.New
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::XRLayout* (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(
    &::UnityEngine::Experimental::Rendering::XRLayoutStack::New)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x674752c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { "New", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack.get_top
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::XRLayout* (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(
    &::UnityEngine::Experimental::Rendering::XRLayoutStack::get_top)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67475e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { "get_top", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(&::UnityEngine::Experimental::Rendering::XRLayoutStack::Release)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6747638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(&::UnityEngine::Experimental::Rendering::XRLayoutStack::Dispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6747744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(&::UnityEngine::Experimental::Rendering::XRLayoutStack::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67477e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>*& UnityEngine::Experimental::Rendering::XRLayoutStack::__cordl_internal_get_m_Stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>* const& UnityEngine::Experimental::Rendering::XRLayoutStack::__cordl_internal_get_m_Stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
constexpr void UnityEngine::Experimental::Rendering::XRLayoutStack::__cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Stack = value;
}
inline ::UnityEngine::Experimental::Rendering::XRLayout* UnityEngine::Experimental::Rendering::XRLayoutStack::New() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { "New", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRLayout*>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRLayout* UnityEngine::Experimental::Rendering::XRLayoutStack::get_top() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { "get_top", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRLayout*>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRLayoutStack::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRLayoutStack::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRLayoutStack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRLayoutStack* UnityEngine::Experimental::Rendering::XRLayoutStack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::Rendering::XRLayoutStack*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Experimental::Rendering::XRLayoutStack::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Experimental::Rendering::XRLayoutStack::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRLayoutStack::XRLayoutStack() {}
