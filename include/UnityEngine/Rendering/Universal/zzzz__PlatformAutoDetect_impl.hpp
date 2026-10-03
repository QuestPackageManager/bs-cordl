#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PlatformAutoDetect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PlatformAutoDetect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PlatformAutoDetect_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShEvalMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::*)()>(
    &::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6d10d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isXRMobile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isXRMobile;
}
constexpr bool const& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isXRMobile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isXRMobile;
}
constexpr void UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_set_isXRMobile(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isXRMobile = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isShaderAPIMobileDefined() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isShaderAPIMobileDefined;
}
constexpr bool const& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isShaderAPIMobileDefined() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isShaderAPIMobileDefined;
}
constexpr void UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_set_isShaderAPIMobileDefined(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isShaderAPIMobileDefined = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isSwitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSwitch;
}
constexpr bool const& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isSwitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSwitch;
}
constexpr void UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_set_isSwitch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSwitch = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isSwitch2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSwitch2;
}
constexpr bool const& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isSwitch2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSwitch2;
}
constexpr void UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_set_isSwitch2(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSwitch2 = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isRunningOnPowerVRGPU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRunningOnPowerVRGPU;
}
constexpr bool const& UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_get_isRunningOnPowerVRGPU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRunningOnPowerVRGPU;
}
constexpr void UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::__cordl_internal_set_isRunningOnPowerVRGPU(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRunningOnPowerVRGPU = value;
}
inline void UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache* UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache::PlatformAutoDetect_PlatformDetectionCache() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PlatformAutoDetect___c::*)()>(&::UnityEngine::Rendering::Universal::PlatformAutoDetect___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d10f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c.__cctor_b__16_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache* (
    ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c::*)()>(&::UnityEngine::Rendering::Universal::PlatformAutoDetect___c::__cctor_b__16_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d10f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*>(), { "<.cctor>b__16_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::PlatformAutoDetect___c::setStaticF___9(::UnityEngine::Rendering::Universal::PlatformAutoDetect___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*, "<>9", ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*>(
      std::forward<::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c* UnityEngine::Rendering::Universal::PlatformAutoDetect___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*, "<>9", ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*>();
}
inline void UnityEngine::Rendering::Universal::PlatformAutoDetect___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache* UnityEngine::Rendering::Universal::PlatformAutoDetect___c::__cctor_b__16_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*>(), { "<.cctor>b__16_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c* UnityEngine::Rendering::Universal::PlatformAutoDetect___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PlatformAutoDetect___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PlatformAutoDetect___c::PlatformAutoDetect___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::Universal::PlatformAutoDetect::Initialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6d105ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect.IsRunningXRMobile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::PlatformAutoDetect::IsRunningXRMobile)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6d10650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "IsRunningXRMobile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect.get_isXRMobile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isXRMobile)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d107f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isXRMobile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect.get_isShaderAPIMobileDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isShaderAPIMobileDefined)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d108a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isShaderAPIMobileDefined", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect.get_isSwitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isSwitch)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d1094c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isSwitch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect.get_isSwitch2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isSwitch2)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d109f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isSwitch2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect.get_isRunningOnPowerVRGPU
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isRunningOnPowerVRGPU)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d10aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isRunningOnPowerVRGPU", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PlatformAutoDetect.ShAutoDetect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ShEvalMode (*)(::UnityEngine::Rendering::Universal::ShEvalMode)>(
    &::UnityEngine::Rendering::Universal::PlatformAutoDetect::ShAutoDetect)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6d10b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(),
                                                                                           { "ShAutoDetect", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ShEvalMode>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::PlatformAutoDetect::setStaticF_platformCache(::System::Lazy_1<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>*, "platformCache",
                                    ::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(
      std::forward<::System::Lazy_1<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>*>(value));
}
inline ::System::Lazy_1<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>* UnityEngine::Rendering::Universal::PlatformAutoDetect::getStaticF_platformCache() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<::UnityEngine::Rendering::Universal::PlatformAutoDetect_PlatformDetectionCache*>*, "platformCache",
                                           ::UnityEngine::Rendering::Universal::PlatformAutoDetect*>();
}
inline void UnityEngine::Rendering::Universal::PlatformAutoDetect::setStaticF_displaySubsystemList(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "displaySubsystemList", ::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* UnityEngine::Rendering::Universal::PlatformAutoDetect::getStaticF_displaySubsystemList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "displaySubsystemList", ::UnityEngine::Rendering::Universal::PlatformAutoDetect*>();
}
inline void UnityEngine::Rendering::Universal::PlatformAutoDetect::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::PlatformAutoDetect::IsRunningXRMobile() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "IsRunningXRMobile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isXRMobile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isXRMobile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isShaderAPIMobileDefined() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isShaderAPIMobileDefined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isSwitch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isSwitch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isSwitch2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isSwitch2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::PlatformAutoDetect::get_isRunningOnPowerVRGPU() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(), { "get_isRunningOnPowerVRGPU", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ShEvalMode UnityEngine::Rendering::Universal::PlatformAutoDetect::ShAutoDetect(::UnityEngine::Rendering::Universal::ShEvalMode mode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PlatformAutoDetect*>(),
                                                                                         { "ShAutoDetect", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ShEvalMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ShEvalMode>(nullptr, ___internal_method, mode);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PlatformAutoDetect::PlatformAutoDetect() {}
