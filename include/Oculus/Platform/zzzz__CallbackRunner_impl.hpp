#pragma once
// IWYU pragma private; include "Oculus\Platform\CallbackRunner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Platform/zzzz__CallbackRunner_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::CallbackRunner.ovr_UnityResetTestPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Platform::CallbackRunner::ovr_UnityResetTestPlatform)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5db5b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "ovr_UnityResetTestPlatform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CallbackRunner.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::CallbackRunner::*)()>(&::Oculus::Platform::CallbackRunner::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5db5bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CallbackRunner.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::CallbackRunner::*)()>(&::Oculus::Platform::CallbackRunner::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db5d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CallbackRunner.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::CallbackRunner::*)()>(&::Oculus::Platform::CallbackRunner::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db5d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CallbackRunner.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::CallbackRunner::*)()>(&::Oculus::Platform::CallbackRunner::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5db5d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "OnApplicationQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CallbackRunner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::CallbackRunner::*)()>(&::Oculus::Platform::CallbackRunner::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5db5dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::CallbackRunner::__cordl_internal_get_IsPersistantBetweenSceneLoads() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsPersistantBetweenSceneLoads;
}
constexpr bool const& Oculus::Platform::CallbackRunner::__cordl_internal_get_IsPersistantBetweenSceneLoads() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsPersistantBetweenSceneLoads;
}
constexpr void Oculus::Platform::CallbackRunner::__cordl_internal_set_IsPersistantBetweenSceneLoads(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsPersistantBetweenSceneLoads = value;
}
inline void Oculus::Platform::CallbackRunner::ovr_UnityResetTestPlatform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "ovr_UnityResetTestPlatform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Oculus::Platform::CallbackRunner::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::CallbackRunner::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::CallbackRunner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::CallbackRunner::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { "OnApplicationQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::CallbackRunner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::CallbackRunner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::CallbackRunner* Oculus::Platform::CallbackRunner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::CallbackRunner*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::CallbackRunner::CallbackRunner() {}
