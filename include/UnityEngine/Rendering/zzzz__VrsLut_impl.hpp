#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VrsLut.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VrsLut_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VrsLut.CreateDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VrsLut* (*)()>(&::UnityEngine::Rendering::VrsLut::CreateDefault)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6befd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "CreateDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsLut.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::VrsLut::*)(::UnityEngine::Rendering::ShadingRateFragmentSize)>(
    &::UnityEngine::Rendering::VrsLut::get_Item)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6beff58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "get_Item", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsLut.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VrsLut::*)(::UnityEngine::Rendering::ShadingRateFragmentSize, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::VrsLut::set_Item)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6beff24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(),
                                                             { "set_Item", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsLut.CreateBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Rendering::VrsLut::*)(bool)>(&::UnityEngine::Rendering::VrsLut::CreateBuffer)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x6beff8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "CreateBuffer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsLut.MapFragmentShadingRateToBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::VrsLut::*)(::UnityEngine::Rendering::ShadingRateFragmentSize)>(
    &::UnityEngine::Rendering::VrsLut::MapFragmentShadingRateToBinary)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6bf03a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "MapFragmentShadingRateToBinary", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsLut.EncodeShadingRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::VrsLut::*)(uint32_t, uint32_t)>(&::UnityEngine::Rendering::VrsLut::EncodeShadingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bf03c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "EncodeShadingRate", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VrsLut._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VrsLut::*)()>(&::UnityEngine::Rendering::VrsLut::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6befea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Color>& UnityEngine::Rendering::VrsLut::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr ::ArrayW<::UnityEngine::Color> const& UnityEngine::Rendering::VrsLut::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr void UnityEngine::Rendering::VrsLut::__cordl_internal_set_m_Data(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Data = value;
}
inline ::UnityEngine::Rendering::VrsLut* UnityEngine::Rendering::VrsLut::CreateDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "CreateDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VrsLut*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::Rendering::VrsLut::get_Item(::UnityEngine::Rendering::ShadingRateFragmentSize fragmentSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "get_Item", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, fragmentSize);
}
inline void UnityEngine::Rendering::VrsLut::set_Item(::UnityEngine::Rendering::ShadingRateFragmentSize fragmentSize, ::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(),
                                                           { "set_Item", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fragmentSize, value);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::VrsLut::CreateBuffer(bool forVisualization) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "CreateBuffer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, forVisualization);
}
inline uint32_t UnityEngine::Rendering::VrsLut::MapFragmentShadingRateToBinary(::UnityEngine::Rendering::ShadingRateFragmentSize fs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "MapFragmentShadingRateToBinary", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, fs);
}
inline uint32_t UnityEngine::Rendering::VrsLut::EncodeShadingRate(uint32_t x, uint32_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { "EncodeShadingRate", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, x, y);
}
inline void UnityEngine::Rendering::VrsLut::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VrsLut*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VrsLut* UnityEngine::Rendering::VrsLut::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VrsLut*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VrsLut::VrsLut() {}
