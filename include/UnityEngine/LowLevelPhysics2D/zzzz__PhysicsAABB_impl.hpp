#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsAABB.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsAABB_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsAABB.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsAABB::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsAABB::get_isValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd41a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsAABB.get_lowerBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::LowLevelPhysics2D::PhysicsAABB::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsAABB::get_lowerBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd41ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "get_lowerBound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsAABB.set_lowerBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsAABB::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsAABB::set_lowerBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd41b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "set_lowerBound", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsAABB.get_upperBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::LowLevelPhysics2D::PhysicsAABB::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsAABB::get_upperBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd41bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "get_upperBound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsAABB.set_upperBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsAABB::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsAABB::set_upperBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd41c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "set_upperBound", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsAABB.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsAABB::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsAABB::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6fd41cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), 3 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::LowLevelPhysics2D::PhysicsAABB::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::LowLevelPhysics2D::PhysicsAABB::get_lowerBound() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "get_lowerBound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsAABB::set_lowerBound(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "set_lowerBound", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::LowLevelPhysics2D::PhysicsAABB::get_upperBound() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "get_upperBound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsAABB::set_upperBound(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), { "set_upperBound", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsAABB::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsAABB>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_LowerBound", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_UpperBound", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsAABB::PhysicsAABB(::UnityEngine::Vector2 m_LowerBound, ::UnityEngine::Vector2 m_UpperBound) noexcept {
  this->m_LowerBound = m_LowerBound;
  this->m_UpperBound = m_UpperBound;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsAABB::PhysicsAABB() {}
