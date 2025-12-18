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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceNumInfo::*)()>(&::UnityEngine::Rendering::InstanceNumInfo::InitDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6676fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), "InitDefault",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceNumInfo::*)(::UnityEngine::Rendering::InstanceType, int32_t)>(
    &::UnityEngine::Rendering::InstanceNumInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6676fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::InstanceNumInfo::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceNumInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6676ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo.GetInstanceNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::InstanceNumInfo::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceNumInfo::GetInstanceNum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6676ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), "GetInstanceNum", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo.GetInstanceNumIncludingChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::InstanceNumInfo::*)(::UnityEngine::Rendering::InstanceType)>(
    &::UnityEngine::Rendering::InstanceNumInfo::GetInstanceNumIncludingChildren)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6677004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), "GetInstanceNumIncludingChildren", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceNumInfo.GetTotalInstanceNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::InstanceNumInfo::*)()>(
    &::UnityEngine::Rendering::InstanceNumInfo::GetTotalInstanceNum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6677144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(),
                                                                               "GetTotalInstanceNum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceNumInfo::InitDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), "InitDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceNumInfo::_ctor(::UnityEngine::Rendering::InstanceType type, int32_t instanceNum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, instanceNum);
}
inline void UnityEngine::Rendering::InstanceNumInfo::_ctor(int32_t meshRendererNum, int32_t speedTreeNum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshRendererNum, speedTreeNum);
}
inline int32_t UnityEngine::Rendering::InstanceNumInfo::GetInstanceNum(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), "GetInstanceNum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type);
}
inline int32_t UnityEngine::Rendering::InstanceNumInfo::GetInstanceNumIncludingChildren(::UnityEngine::Rendering::InstanceType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(), "GetInstanceNumIncludingChildren", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::InstanceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, type);
}
inline int32_t UnityEngine::Rendering::InstanceNumInfo::GetTotalInstanceNum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceNumInfo>::get(),
                                                                             "GetTotalInstanceNum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "InstanceNums", ty: "::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceNumInfo::InstanceNumInfo(::UnityEngine::Rendering::InstanceNumInfo__InstanceNums_e__FixedBuffer InstanceNums) noexcept {
  this->InstanceNums = InstanceNums;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceNumInfo::InstanceNumInfo() {}
