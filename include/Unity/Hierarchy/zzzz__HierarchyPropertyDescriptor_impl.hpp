#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyPropertyDescriptor.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyStorageType_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyDescriptor_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyStorageType_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyPropertyDescriptor.set_Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyPropertyDescriptor::*)(int32_t)>(&::Unity::Hierarchy::HierarchyPropertyDescriptor::set_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b371d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyDescriptor>(), { "set_Size", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyPropertyDescriptor.set_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Hierarchy::HierarchyPropertyDescriptor::*)(::Unity::Hierarchy::HierarchyPropertyStorageType)>(
    &::Unity::Hierarchy::HierarchyPropertyDescriptor::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b371dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyDescriptor>(),
                                                                                           { "set_Type", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyPropertyStorageType>() } })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyPropertyDescriptor::set_Size(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyDescriptor>(), { "set_Size", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchyPropertyDescriptor::set_Type(::Unity::Hierarchy::HierarchyPropertyStorageType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyPropertyDescriptor>(),
                                                                                         { "set_Type", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyPropertyStorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::Unity::Hierarchy::HierarchyPropertyStorageType", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyPropertyDescriptor::HierarchyPropertyDescriptor(int32_t m_Size, ::Unity::Hierarchy::HierarchyPropertyStorageType m_Type) noexcept {
  this->m_Size = m_Size;
  this->m_Type = m_Type;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyPropertyDescriptor::HierarchyPropertyDescriptor() {}
