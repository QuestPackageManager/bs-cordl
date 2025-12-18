#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MotionVectorsPersistentData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionVectorsPersistentData_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x66c47d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_lastFrameIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_lastFrameIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66c4be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_lastFrameIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_viewProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewProjection)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66c4c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_viewProjection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousViewProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewProjection)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66c4c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_previousViewProjection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_viewProjectionStereo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewProjectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_viewProjectionStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousViewProjectionStereo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewProjectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_previousViewProjectionStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_projectionStereo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_projectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_projectionStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousProjectionStereo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousProjectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_previousProjectionStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousPreviousProjectionStereo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousProjectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_previousPreviousProjectionStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_viewStereo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_viewStereo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousViewStereo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_previousViewStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousPreviousViewStereo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousViewStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_previousPreviousViewStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_deltaTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_deltaTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_lastDeltaTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_lastDeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c4cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_lastDeltaTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_worldSpaceCameraPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_worldSpaceCameraPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66c4cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_worldSpaceCameraPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousWorldSpaceCameraPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousWorldSpaceCameraPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66c4cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_previousWorldSpaceCameraPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousPreviousWorldSpaceCameraPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousWorldSpaceCameraPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66c4cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "get_previousPreviousWorldSpaceCameraPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::Reset)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x66c4910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.GetXRMultiPassId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::GetXRMultiPassId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66c4ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "GetXRMultiPassId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::Update)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x66c4d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.SetGlobalMotionMatrices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Experimental::Rendering::XRPass*)>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::SetGlobalMotionMatrices)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x66c536c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                                 "SetGlobalMotionMatrices", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_Projection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Projection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_Projection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Projection;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_Projection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Projection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_View() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_View() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_View(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_View)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_ViewProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_ViewProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewProjection;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_ViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ViewProjection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousProjection;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousProjection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousView;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousView;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousView(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousViewProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousViewProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousViewProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousViewProjection;
}
constexpr void
UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousViewProjection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousPreviousProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPreviousProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousPreviousProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPreviousProjection;
}
constexpr void
UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousPreviousProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousPreviousProjection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousPreviousView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPreviousView;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousPreviousView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPreviousView;
}
constexpr void
UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousPreviousView(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousPreviousView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_LastFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameIndex;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_LastFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameIndex;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_LastFrameIndex(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LastFrameIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PrevAspectRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevAspectRatio;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PrevAspectRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevAspectRatio;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PrevAspectRatio(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PrevAspectRatio)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_deltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deltaTime;
}
constexpr float_t const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_deltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deltaTime;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_deltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_deltaTime = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_lastDeltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lastDeltaTime;
}
constexpr float_t const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_lastDeltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lastDeltaTime;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_lastDeltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_lastDeltaTime = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_worldSpaceCameraPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_worldSpaceCameraPos;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_worldSpaceCameraPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_worldSpaceCameraPos;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_worldSpaceCameraPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_worldSpaceCameraPos = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_previousWorldSpaceCameraPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_previousWorldSpaceCameraPos;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_previousWorldSpaceCameraPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_previousWorldSpaceCameraPos;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_previousWorldSpaceCameraPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_previousWorldSpaceCameraPos = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_previousPreviousWorldSpaceCameraPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_previousPreviousWorldSpaceCameraPos;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_previousPreviousWorldSpaceCameraPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_previousPreviousWorldSpaceCameraPos;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_previousPreviousWorldSpaceCameraPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_previousPreviousWorldSpaceCameraPos = value;
}
inline void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_lastFrameIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_lastFrameIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewProjection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_viewProjection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewProjection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_previousViewProjection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewProjectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_viewProjectionStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewProjectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_previousViewProjectionStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_projectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_projectionStereo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousProjectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_previousProjectionStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousProjectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_previousPreviousProjectionStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewStereo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_viewStereo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewStereo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_previousViewStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousViewStereo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_previousPreviousViewStereo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_deltaTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_deltaTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_lastDeltaTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "get_lastDeltaTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_worldSpaceCameraPos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_worldSpaceCameraPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousWorldSpaceCameraPos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_previousWorldSpaceCameraPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousWorldSpaceCameraPos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "get_previousPreviousWorldSpaceCameraPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::MotionVectorsPersistentData::GetXRMultiPassId(::UnityEngine::Experimental::Rendering::XRPass* xr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "GetXRMultiPassId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, xr);
}
inline void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::Update(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::SetGlobalMotionMatrices(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                    ::UnityEngine::Experimental::Rendering::XRPass* xr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>::get(),
                                               "SetGlobalMotionMatrices", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, xr);
}
inline ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* UnityEngine::Rendering::Universal::MotionVectorsPersistentData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::MotionVectorsPersistentData() {}
