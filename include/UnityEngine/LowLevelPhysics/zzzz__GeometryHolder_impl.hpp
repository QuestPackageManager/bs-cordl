#pragma once
// IWYU pragma private; include "UnityEngine\LowLevelPhysics\GeometryHolder.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__GeometryHolder_def.hpp"
#include "UnityEngine/LowLevelPhysics/zzzz__GeometryHolder_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer::GeometryHolder__m_Blob_e__FixedBuffer(uint32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer::GeometryHolder__m_Blob_e__FixedBuffer() {}
template <typename T> inline T UnityEngine::LowLevelPhysics::GeometryHolder::As() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics::GeometryHolder>(), { "As", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Type", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataStart", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_FakePointer0", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FakePointer1", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Blob", ty: "::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevelPhysics::GeometryHolder::GeometryHolder(int32_t m_Type, uint32_t m_DataStart, ::System::IntPtr m_FakePointer0, ::System::IntPtr m_FakePointer1,
                                                                         ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer m_Blob) noexcept {
  this->m_Type = m_Type;
  this->m_DataStart = m_DataStart;
  this->m_FakePointer0 = m_FakePointer0;
  this->m_FakePointer1 = m_FakePointer1;
  this->m_Blob = m_Blob;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics::GeometryHolder::GeometryHolder() {}
