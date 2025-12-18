#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BuddyAllocation.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BuddyAllocation_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::BuddyAllocation::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c3dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocation>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocation.get_index2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::uint2 (::UnityEngine::Rendering::Universal::BuddyAllocation::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocation::get_index2D)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66c3dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocation>::get(),
                                                                               "get_index2D", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::BuddyAllocation::_ctor(int32_t level, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocation>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, index);
}
inline ::Unity::Mathematics::uint2 UnityEngine::Rendering::Universal::BuddyAllocation::get_index2D() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::BuddyAllocation>::get(),
                                                                             "get_index2D", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::BuddyAllocation::BuddyAllocation(int32_t level, int32_t index) noexcept {
  this->level = level;
  this->index = index;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::BuddyAllocation::BuddyAllocation() {}
