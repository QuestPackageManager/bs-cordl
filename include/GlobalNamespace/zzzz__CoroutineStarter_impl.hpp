#pragma once
// IWYU pragma private; include "GlobalNamespace/CoroutineStarter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoroutineStarter.ICoroutineStarter_StartCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Coroutine* (::GlobalNamespace::CoroutineStarter::*)(::System::Collections::IEnumerator*)>(
    &::GlobalNamespace::CoroutineStarter::ICoroutineStarter_StartCoroutine)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3321644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoroutineStarter*>(),
                                                                                           { "ICoroutineStarter.StartCoroutine", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoroutineStarter.ICoroutineStarter_StopCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoroutineStarter::*)(::UnityEngine::Coroutine*)>(
    &::GlobalNamespace::CoroutineStarter::ICoroutineStarter_StopCoroutine)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3321724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoroutineStarter*>(), { "ICoroutineStarter.StopCoroutine", {}, { ::i2c::type_of<::UnityEngine::Coroutine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoroutineStarter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoroutineStarter::*)()>(&::GlobalNamespace::CoroutineStarter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33217fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoroutineStarter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Coroutine* GlobalNamespace::CoroutineStarter::ICoroutineStarter_StartCoroutine(::System::Collections::IEnumerator* routine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoroutineStarter*>(),
                                                                                         { "ICoroutineStarter.StartCoroutine", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Coroutine*>(this, ___internal_method, routine);
}
inline void GlobalNamespace::CoroutineStarter::ICoroutineStarter_StopCoroutine(::UnityEngine::Coroutine* routine) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoroutineStarter*>(), { "ICoroutineStarter.StopCoroutine", {}, { ::i2c::type_of<::UnityEngine::Coroutine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, routine);
}
inline void GlobalNamespace::CoroutineStarter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CoroutineStarter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CoroutineStarter* GlobalNamespace::CoroutineStarter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CoroutineStarter*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICoroutineStarter"
constexpr GlobalNamespace::CoroutineStarter::operator ::GlobalNamespace::ICoroutineStarter*() noexcept {
  return static_cast<::GlobalNamespace::ICoroutineStarter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICoroutineStarter"
constexpr ::GlobalNamespace::ICoroutineStarter* GlobalNamespace::CoroutineStarter::i___GlobalNamespace__ICoroutineStarter() noexcept {
  return static_cast<::GlobalNamespace::ICoroutineStarter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoroutineStarter::CoroutineStarter() {}
