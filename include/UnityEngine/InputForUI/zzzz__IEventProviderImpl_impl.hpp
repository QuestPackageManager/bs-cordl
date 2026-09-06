#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/IEventProviderImpl.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProviderImpl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputForUI::IEventProviderImpl.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::IEventProviderImpl::*)()>(&::UnityEngine::InputForUI::IEventProviderImpl::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), { ::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::IEventProviderImpl.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::IEventProviderImpl::*)()>(&::UnityEngine::InputForUI::IEventProviderImpl::Shutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), { ::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::IEventProviderImpl.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::IEventProviderImpl::*)()>(&::UnityEngine::InputForUI::IEventProviderImpl::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), { ::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::IEventProviderImpl.OnFocusChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::IEventProviderImpl::*)(bool)>(&::UnityEngine::InputForUI::IEventProviderImpl::OnFocusChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), { ::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::IEventProviderImpl::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::IEventProviderImpl::Shutdown() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::IEventProviderImpl::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::IEventProviderImpl::OnFocusChanged(bool focus) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::IEventProviderImpl*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
