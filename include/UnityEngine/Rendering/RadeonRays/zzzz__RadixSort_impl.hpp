#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RadixSort.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadixSort_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadeonRaysShaders_def.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__Scan_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadixSort._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RadixSort::*)(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*)>(
    &::UnityEngine::Rendering::RadeonRays::RadixSort::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6dfb918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadixSort*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadixSort.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RadixSort::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)>(&::UnityEngine::Rendering::RadeonRays::RadixSort::Execute)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6dfc148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadixSort*>(),
                                                { "Execute",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(),
                                                    ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadixSort.GetScratchDataSizeInDwords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t)>(&::UnityEngine::Rendering::RadeonRays::RadixSort::GetScratchDataSizeInDwords)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6dfc4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadixSort*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_shaderBitHistogram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderBitHistogram;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_shaderBitHistogram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderBitHistogram;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_set_shaderBitHistogram(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaderBitHistogram = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_kernelBitHistogram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelBitHistogram;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_kernelBitHistogram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelBitHistogram;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_set_kernelBitHistogram(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelBitHistogram = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_shaderScatter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderScatter;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_shaderScatter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderScatter;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_set_shaderScatter(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaderScatter = value;
}
constexpr int32_t& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_kernelScatter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelScatter;
}
constexpr int32_t const& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_kernelScatter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelScatter;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_set_kernelScatter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelScatter = value;
}
constexpr ::UnityEngine::Rendering::RadeonRays::Scan*& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_scan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scan;
}
constexpr ::UnityEngine::Rendering::RadeonRays::Scan* const& UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_get_scan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scan;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadixSort::__cordl_internal_set_scan(::UnityEngine::Rendering::RadeonRays::Scan* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scan = value;
}
inline void UnityEngine::Rendering::RadeonRays::RadixSort::_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadixSort*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaders);
}
inline void UnityEngine::Rendering::RadeonRays::RadixSort::Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* buffer, uint32_t inputKeysOffset,
                                                                   uint32_t outputKeysOffset, uint32_t inputValuesOffset, uint32_t outputValuesOffset, uint32_t scratchDataOffset, uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadixSort*>(),
                                              { "Execute",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<uint32_t>(),
                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, buffer, inputKeysOffset, outputKeysOffset, inputValuesOffset, outputValuesOffset, scratchDataOffset, size);
}
inline uint64_t UnityEngine::Rendering::RadeonRays::RadixSort::GetScratchDataSizeInDwords(uint32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadixSort*>(), { "GetScratchDataSizeInDwords", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, size);
}
inline ::UnityEngine::Rendering::RadeonRays::RadixSort* UnityEngine::Rendering::RadeonRays::RadixSort::New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::RadixSort*>(shaders));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::RadixSort::RadixSort() {}
