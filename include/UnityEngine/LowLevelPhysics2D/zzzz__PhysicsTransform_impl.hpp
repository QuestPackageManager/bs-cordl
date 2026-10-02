#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsTransform.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsRotate_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsRotate_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsTransform::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsTransform::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6fd4d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsTransform>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsTransform.GetPositionAndRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsTransform::*)(
    ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>)>(&::UnityEngine::LowLevelPhysics2D::PhysicsTransform::GetPositionAndRotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6fd4e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsTransform>(),
                            { "GetPositionAndRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsTransform.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsTransform::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsTransform::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6fd4e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsTransform>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsTransform>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::LowLevelPhysics2D::PhysicsTransform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsTransform>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsTransform::GetPositionAndRotation(::by_ref<::UnityEngine::Vector2> position, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate> rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsTransform>(),
                          { "GetPositionAndRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsTransform::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsTransform>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsRotate", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsTransform::PhysicsTransform(::UnityEngine::Vector2 position, ::UnityEngine::LowLevelPhysics2D::PhysicsRotate rotation) noexcept {
  this->position = position;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsTransform::PhysicsTransform() {}
