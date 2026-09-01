#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DisallowGPUDrivenRendering.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DisallowGPUDrivenRendering_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DisallowGPUDrivenRendering.get_applyToChildrenRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DisallowGPUDrivenRendering::*)()>(
    &::UnityEngine::Rendering::DisallowGPUDrivenRendering::get_applyToChildrenRecursively)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x680a320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "get_applyToChildrenRecursively", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DisallowGPUDrivenRendering.set_applyToChildrenRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DisallowGPUDrivenRendering::*)(bool)>(
    &::UnityEngine::Rendering::DisallowGPUDrivenRendering::set_applyToChildrenRecursively)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x680a328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "set_applyToChildrenRecursively", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DisallowGPUDrivenRendering.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DisallowGPUDrivenRendering::*)()>(&::UnityEngine::Rendering::DisallowGPUDrivenRendering::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x680a36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DisallowGPUDrivenRendering.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DisallowGPUDrivenRendering::*)()>(&::UnityEngine::Rendering::DisallowGPUDrivenRendering::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x680a344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DisallowGPUDrivenRendering.AllowGPUDrivenRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, bool)>(&::UnityEngine::Rendering::DisallowGPUDrivenRendering::AllowGPUDrivenRendering)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x680a6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(),
                                                             { "AllowGPUDrivenRendering", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DisallowGPUDrivenRendering.AllowGPUDrivenRenderingRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, bool)>(&::UnityEngine::Rendering::DisallowGPUDrivenRendering::AllowGPUDrivenRenderingRecursively)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x680a398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(),
                                                             { "AllowGPUDrivenRenderingRecursively", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DisallowGPUDrivenRendering.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DisallowGPUDrivenRendering::*)()>(&::UnityEngine::Rendering::DisallowGPUDrivenRendering::OnValidate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x680a790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DisallowGPUDrivenRendering._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DisallowGPUDrivenRendering::*)()>(&::UnityEngine::Rendering::DisallowGPUDrivenRendering::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x680a7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::DisallowGPUDrivenRendering::__cordl_internal_get_m_AppliedRecursively() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AppliedRecursively;
}
constexpr bool const& UnityEngine::Rendering::DisallowGPUDrivenRendering::__cordl_internal_get_m_AppliedRecursively() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AppliedRecursively;
}
constexpr void UnityEngine::Rendering::DisallowGPUDrivenRendering::__cordl_internal_set_m_AppliedRecursively(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AppliedRecursively = value;
}
constexpr bool& UnityEngine::Rendering::DisallowGPUDrivenRendering::__cordl_internal_get_m_applyToChildrenRecursively() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_applyToChildrenRecursively;
}
constexpr bool const& UnityEngine::Rendering::DisallowGPUDrivenRendering::__cordl_internal_get_m_applyToChildrenRecursively() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_applyToChildrenRecursively;
}
constexpr void UnityEngine::Rendering::DisallowGPUDrivenRendering::__cordl_internal_set_m_applyToChildrenRecursively(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_applyToChildrenRecursively = value;
}
inline bool UnityEngine::Rendering::DisallowGPUDrivenRendering::get_applyToChildrenRecursively() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "get_applyToChildrenRecursively", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DisallowGPUDrivenRendering::set_applyToChildrenRecursively(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "set_applyToChildrenRecursively", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DisallowGPUDrivenRendering::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DisallowGPUDrivenRendering::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DisallowGPUDrivenRendering::AllowGPUDrivenRendering(::UnityEngine::Transform* transform, bool allow) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(),
                                                                                         { "AllowGPUDrivenRendering", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, allow);
}
inline void UnityEngine::Rendering::DisallowGPUDrivenRendering::AllowGPUDrivenRenderingRecursively(::UnityEngine::Transform* transform, bool allow) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(),
                                                           { "AllowGPUDrivenRenderingRecursively", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, allow);
}
inline void UnityEngine::Rendering::DisallowGPUDrivenRendering::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DisallowGPUDrivenRendering::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DisallowGPUDrivenRendering* UnityEngine::Rendering::DisallowGPUDrivenRendering::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DisallowGPUDrivenRendering*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DisallowGPUDrivenRendering::DisallowGPUDrivenRendering() {}
