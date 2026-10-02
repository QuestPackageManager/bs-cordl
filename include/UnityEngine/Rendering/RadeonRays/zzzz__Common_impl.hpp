#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/Common.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Common_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Common.CeilDivide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::Rendering::RadeonRays::Common::CeilDivide)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6dfb71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Common*>(), { "CeilDivide", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Common.EnableKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::StringW, bool)>(
    &::UnityEngine::Rendering::RadeonRays::Common::EnableKeyword)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6dfb72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Common*>(),
                            { "EnableKeyword",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::RadeonRays::Common::CeilDivide(uint32_t val, uint32_t div) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Common*>(), { "CeilDivide", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, val, div);
}
inline void UnityEngine::Rendering::RadeonRays::Common::EnableKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* shader, ::StringW keyword, bool enable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Common*>(),
                          { "EnableKeyword",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, shader, keyword, enable);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::Common::Common() {}
