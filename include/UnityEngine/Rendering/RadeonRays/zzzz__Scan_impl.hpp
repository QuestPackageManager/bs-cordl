#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/Scan.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Scan_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadeonRaysShaders_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Scan._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::Scan::*)(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*)>(
    &::UnityEngine::Rendering::RadeonRays::Scan::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6dfe28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Scan*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Scan.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::Scan::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t,
                                                                                                            uint32_t, uint32_t, uint32_t)>(&::UnityEngine::Rendering::RadeonRays::Scan::Execute)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6dfe338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Scan*>(),
                                                             { "Execute",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Scan.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::Scan::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, int32_t, uint32_t,
                                                                                                            ::UnityEngine::GraphicsBuffer*, uint32_t, uint32_t, uint32_t)>(
    &::UnityEngine::Rendering::RadeonRays::Scan::SetState)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6dfe70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Scan*>(),
                            { "SetState",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(),
                                ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::Scan.GetScratchDataSizeInDwords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t)>(&::UnityEngine::Rendering::RadeonRays::Scan::GetScratchDataSizeInDwords)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6dfe578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Scan*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_get_shaderScan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderScan;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_get_shaderScan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderScan;
}
constexpr void UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_set_shaderScan(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaderScan = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_get_kernelScan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelScan;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_get_kernelScan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelScan;
}
constexpr void UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_set_kernelScan(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelScan = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_get_shaderReduce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderReduce;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_get_shaderReduce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderReduce;
}
constexpr void UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_set_shaderReduce(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaderReduce = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_get_kernelReduce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelReduce;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_get_kernelReduce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelReduce;
}
constexpr void UnityEngine::Rendering::RadeonRays::Scan::__cordl_internal_set_kernelReduce(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelReduce = value;
}
inline void UnityEngine::Rendering::RadeonRays::Scan::_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Scan*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaders);
}
inline void UnityEngine::Rendering::RadeonRays::Scan::Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* buffer, uint32_t inputKeysOffset, uint32_t outputKeysOffset,
                                                              uint32_t scratchDataOffset, uint32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Scan*>(),
                                                           { "Execute",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, buffer, inputKeysOffset, outputKeysOffset, scratchDataOffset, size);
}
inline void UnityEngine::Rendering::RadeonRays::Scan::SetState(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* shader, int32_t kernelIndex, uint32_t size,
                                                               ::UnityEngine::GraphicsBuffer* buffer, uint32_t inputKeysOffset, uint32_t scratchDataOffset, uint32_t outputKeysOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Scan*>(),
                          { "SetState",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(),
                              ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, shader, kernelIndex, size, buffer, inputKeysOffset, scratchDataOffset, outputKeysOffset);
}
inline uint64_t UnityEngine::Rendering::RadeonRays::Scan::GetScratchDataSizeInDwords(uint32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::Scan*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, size);
}
inline ::UnityEngine::Rendering::RadeonRays::Scan* UnityEngine::Rendering::RadeonRays::Scan::New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::Scan*>(shaders));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::Scan::Scan() {}
