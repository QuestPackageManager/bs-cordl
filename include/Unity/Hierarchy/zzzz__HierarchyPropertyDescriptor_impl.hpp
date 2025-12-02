#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyPropertyDescriptor.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyStorageType_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyDescriptor_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyPropertyStorageType_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyPropertyDescriptor.set_Size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyPropertyDescriptor::*)(int32_t)>(
    &::Unity::Hierarchy::HierarchyPropertyDescriptor::set_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69063f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyDescriptor>::get(), "set_Size",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyPropertyDescriptor.set_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyPropertyDescriptor::*)(::Unity::Hierarchy::HierarchyPropertyStorageType)>(
    &::Unity::Hierarchy::HierarchyPropertyDescriptor::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69063fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyDescriptor>::get(), "set_Type", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyPropertyStorageType>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyPropertyDescriptor::set_Size(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyDescriptor>::get(), "set_Size",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchyPropertyDescriptor::set_Type(::Unity::Hierarchy::HierarchyPropertyStorageType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyPropertyDescriptor>::get(), "set_Type", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyPropertyStorageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::Unity::Hierarchy::HierarchyPropertyStorageType", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyPropertyDescriptor::HierarchyPropertyDescriptor(int32_t m_Size, ::Unity::Hierarchy::HierarchyPropertyStorageType m_Type) noexcept {
  this->m_Size = m_Size;
  this->m_Type = m_Type;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyPropertyDescriptor::HierarchyPropertyDescriptor() {}
