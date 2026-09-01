#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXRigidBodyCollisionEventBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXRigidBodyCollisionEventBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder.SetEventAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::*)(::ArrayW<::System::Object*>)>(
    &::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::SetEventAttribute)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x69e14e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder.OnCollisionEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::*)(::UnityEngine::Collision*)>(
    &::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x69e15e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*>(),
                                                                                           { "OnCollisionEnter", {}, { ::i2c::type_of<::UnityEngine::Collision*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::*)()>(
    &::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69e1734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::__cordl_internal_get_positionParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionParameter;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::__cordl_internal_get_positionParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionParameter;
}
constexpr void UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::__cordl_internal_set_positionParameter(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionParameter = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::__cordl_internal_get_directionParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directionParameter;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::__cordl_internal_get_directionParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directionParameter;
}
constexpr void UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::__cordl_internal_set_directionParameter(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directionParameter = value;
}
inline void UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::SetEventAttribute(::ArrayW<::System::Object*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::OnCollisionEnter(::UnityEngine::Collision* collision) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*>(),
                                                                                         { "OnCollisionEnter", {}, { ::i2c::type_of<::UnityEngine::Collision*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder* UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXRigidBodyCollisionEventBinder::VFXRigidBodyCollisionEventBinder() {}
