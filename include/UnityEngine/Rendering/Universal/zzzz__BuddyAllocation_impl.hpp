#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\BuddyAllocation.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BuddyAllocation_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::BuddyAllocation::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::BuddyAllocation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687c198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocation>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::BuddyAllocation.get_index2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (::UnityEngine::Rendering::Universal::BuddyAllocation::*)()>(
    &::UnityEngine::Rendering::Universal::BuddyAllocation::get_index2D)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687c1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocation>(), { "get_index2D", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::BuddyAllocation::_ctor(int32_t level, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocation>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, level, index);
}
inline ::Unity::Mathematics::uint2 UnityEngine::Rendering::Universal::BuddyAllocation::get_index2D() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::BuddyAllocation>(), { "get_index2D", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::BuddyAllocation::BuddyAllocation(int32_t level, int32_t index) noexcept {
  this->level = level;
  this->index = index;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::BuddyAllocation::BuddyAllocation() {}
