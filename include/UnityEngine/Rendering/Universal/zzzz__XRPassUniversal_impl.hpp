#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\XRPassUniversal.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPassUniversal_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPassCreateInfo_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::XRPass* (*)(::UnityEngine::Experimental::Rendering::XRPassCreateInfo)>(
    &::UnityEngine::Rendering::Universal::XRPassUniversal::Create)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x68e8ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(),
                                                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRPassUniversal::*)()>(&::UnityEngine::Rendering::Universal::XRPassUniversal::Release)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68e8c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.get_isLateLatchEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::XRPassUniversal::*)()>(
    &::UnityEngine::Rendering::Universal::XRPassUniversal::get_isLateLatchEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e8d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "get_isLateLatchEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.set_isLateLatchEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRPassUniversal::*)(bool)>(
    &::UnityEngine::Rendering::Universal::XRPassUniversal::set_isLateLatchEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e8d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "set_isLateLatchEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.get_canMarkLateLatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::XRPassUniversal::*)()>(&::UnityEngine::Rendering::Universal::XRPassUniversal::get_canMarkLateLatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e8d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "get_canMarkLateLatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.set_canMarkLateLatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRPassUniversal::*)(bool)>(
    &::UnityEngine::Rendering::Universal::XRPassUniversal::set_canMarkLateLatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e8d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "set_canMarkLateLatch", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.get_hasMarkedLateLatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::XRPassUniversal::*)()>(
    &::UnityEngine::Rendering::Universal::XRPassUniversal::get_hasMarkedLateLatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e8d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "get_hasMarkedLateLatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.set_hasMarkedLateLatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRPassUniversal::*)(bool)>(
    &::UnityEngine::Rendering::Universal::XRPassUniversal::set_hasMarkedLateLatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e8d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "set_hasMarkedLateLatch", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.get_canFoveateIntermediatePasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::XRPassUniversal::*)()>(
    &::UnityEngine::Rendering::Universal::XRPassUniversal::get_canFoveateIntermediatePasses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e8d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "get_canFoveateIntermediatePasses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal.set_canFoveateIntermediatePasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRPassUniversal::*)(bool)>(
    &::UnityEngine::Rendering::Universal::XRPassUniversal::set_canFoveateIntermediatePasses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e8d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "set_canFoveateIntermediatePasses", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRPassUniversal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRPassUniversal::*)()>(&::UnityEngine::Rendering::Universal::XRPassUniversal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e8d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_get__isLateLatchEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLateLatchEnabled_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_get__isLateLatchEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLateLatchEnabled_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_set__isLateLatchEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLateLatchEnabled_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_get__canMarkLateLatch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canMarkLateLatch_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_get__canMarkLateLatch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canMarkLateLatch_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_set__canMarkLateLatch_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canMarkLateLatch_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_get__hasMarkedLateLatch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasMarkedLateLatch_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_get__hasMarkedLateLatch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasMarkedLateLatch_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_set__hasMarkedLateLatch_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasMarkedLateLatch_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_get__canFoveateIntermediatePasses_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canFoveateIntermediatePasses_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_get__canFoveateIntermediatePasses_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canFoveateIntermediatePasses_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::XRPassUniversal::__cordl_internal_set__canFoveateIntermediatePasses_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canFoveateIntermediatePasses_k__BackingField = value;
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Rendering::Universal::XRPassUniversal::Create(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRPass*>(nullptr, ___internal_method, createInfo);
}
inline void UnityEngine::Rendering::Universal::XRPassUniversal::Release() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::XRPassUniversal::get_isLateLatchEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "get_isLateLatchEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRPassUniversal::set_isLateLatchEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "set_isLateLatchEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::XRPassUniversal::get_canMarkLateLatch() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "get_canMarkLateLatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRPassUniversal::set_canMarkLateLatch(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "set_canMarkLateLatch", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::XRPassUniversal::get_hasMarkedLateLatch() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "get_hasMarkedLateLatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRPassUniversal::set_hasMarkedLateLatch(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "set_hasMarkedLateLatch", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::XRPassUniversal::get_canFoveateIntermediatePasses() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "get_canFoveateIntermediatePasses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRPassUniversal::set_canFoveateIntermediatePasses(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { "set_canFoveateIntermediatePasses", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::XRPassUniversal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRPassUniversal*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::XRPassUniversal* UnityEngine::Rendering::Universal::XRPassUniversal::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::XRPassUniversal*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRPassUniversal::XRPassUniversal() {}
