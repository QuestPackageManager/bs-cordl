#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceNumInfo.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer::InstanceNumInfo__InstanceNums_e__FixedBuffer(int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer::InstanceNumInfo__InstanceNums_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo.InitDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceNumInfo::*)()>(&::UnityEngine::Rendering::InstanceNumInfo::InitDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6828930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(), { "InitDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceNumInfo::*)(::UnityEngine::Rendering::InstanceType, int32_t)>(
    &::UnityEngine::Rendering::InstanceNumInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6828938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceNumInfo::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::InstanceNumInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6828944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo.GetInstanceNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceNumInfo::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceNumInfo::GetInstanceNum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682894c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(), { "GetInstanceNum", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo.GetInstanceNumIncludingChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceNumInfo::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceNumInfo::GetInstanceNumIncludingChildren)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6828954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(),
                                                                                           { "GetInstanceNumIncludingChildren", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo.GetTotalInstanceNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::InstanceNumInfo::*)()>(&::UnityEngine::Rendering::InstanceNumInfo::GetTotalInstanceNum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6828a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(), { "GetTotalInstanceNum", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceNumInfo::InitDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(), { "InitDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceNumInfo::_ctor(::UnityEngine::Rendering::InstanceType type, int32_t instanceNum) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, instanceNum);
}
inline void UnityEngine::Rendering::InstanceNumInfo::_ctor(int32_t meshRendererNum, int32_t speedTreeNum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshRendererNum, speedTreeNum);
}
inline int32_t UnityEngine::Rendering::InstanceNumInfo::GetInstanceNum(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(), { "GetInstanceNum", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, type);
}
inline int32_t UnityEngine::Rendering::InstanceNumInfo::GetInstanceNumIncludingChildren(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(),
                                                                                         { "GetInstanceNumIncludingChildren", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, type);
}
inline int32_t UnityEngine::Rendering::InstanceNumInfo::GetTotalInstanceNum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceNumInfo>(), { "GetTotalInstanceNum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "InstanceNums", ty: "::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceNumInfo::InstanceNumInfo(::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer InstanceNums) noexcept {
  this->InstanceNums = InstanceNums;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceNumInfo::InstanceNumInfo() {}
