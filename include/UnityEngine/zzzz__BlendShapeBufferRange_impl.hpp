#pragma once
// IWYU pragma private; include "UnityEngine/BlendShapeBufferRange.hpp"
#include "UnityEngine/zzzz__BlendShapeBufferRange_def.hpp"
//  Writing Method size for method: ::UnityEngine::BlendShapeBufferRange.set_startIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::BlendShapeBufferRange::*)(uint32_t)>(&::UnityEngine::BlendShapeBufferRange::set_startIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aae648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BlendShapeBufferRange>(), { "set_startIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BlendShapeBufferRange.set_endIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::BlendShapeBufferRange::*)(uint32_t)>(&::UnityEngine::BlendShapeBufferRange::set_endIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aae658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BlendShapeBufferRange>(), { "set_endIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::BlendShapeBufferRange::set_startIndex(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BlendShapeBufferRange>(), { "set_startIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::BlendShapeBufferRange::set_endIndex(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BlendShapeBufferRange>(), { "set_endIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_StartIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::BlendShapeBufferRange::BlendShapeBufferRange(uint32_t m_StartIndex, uint32_t m_EndIndex) noexcept {
  this->m_StartIndex = m_StartIndex;
  this->m_EndIndex = m_EndIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::BlendShapeBufferRange::BlendShapeBufferRange() {}
