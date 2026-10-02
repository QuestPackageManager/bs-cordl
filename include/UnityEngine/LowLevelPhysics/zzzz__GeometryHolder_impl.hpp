#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/GeometryHolder.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__IGeometry_impl.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__GeometryHolder_def.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__GeometryHolder_def.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__GeometryType_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer::GeometryHolder__m_Data_e__FixedBuffer(int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer::GeometryHolder__m_Data_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics::GeometryHolder.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics::GeometryType (::UnityEngine::LowLevelPhysics::GeometryHolder::*)()>(
    &::UnityEngine::LowLevelPhysics::GeometryHolder::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7009abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics::GeometryHolder>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::LowLevelPhysics::IGeometry*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T UnityEngine::LowLevelPhysics::GeometryHolder::As() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics::GeometryHolder>(), { "As", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics::GeometryType UnityEngine::LowLevelPhysics::GeometryHolder::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics::GeometryHolder>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics::GeometryType>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics::GeometryHolder::GeometryHolder(::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer m_Data) noexcept {
  this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics::GeometryHolder::GeometryHolder() {}
