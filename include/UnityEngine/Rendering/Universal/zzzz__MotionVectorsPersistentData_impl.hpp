#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\MotionVectorsPersistentData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionVectorsPersistentData_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x687cba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_lastFrameIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_lastFrameIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x687cfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_lastFrameIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_viewProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewProjection)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x687cfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_viewProjection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousViewProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewProjection)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x687d018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousViewProjection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_viewProjectionStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewProjectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_viewProjectionStereo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousViewProjectionStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewProjectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousViewProjectionStereo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_projectionStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_projectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_projectionStereo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousProjectionStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousProjectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousProjectionStereo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousPreviousProjectionStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousProjectionStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousPreviousProjectionStereo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_viewStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_viewStereo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousViewStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousViewStereo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousPreviousViewStereo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousViewStereo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousPreviousViewStereo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_deltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_deltaTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_lastDeltaTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_lastDeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687d094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_lastDeltaTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_worldSpaceCameraPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_worldSpaceCameraPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687d09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_worldSpaceCameraPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousWorldSpaceCameraPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousWorldSpaceCameraPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687d0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousWorldSpaceCameraPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.get_previousPreviousWorldSpaceCameraPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousWorldSpaceCameraPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687d0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousPreviousWorldSpaceCameraPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)()>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::Reset)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x687cce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.GetXRMultiPassId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::GetXRMultiPassId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x687d0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(),
                                                                                           { "GetXRMultiPassId", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::Update)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x687d0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(),
                                                                                           { "Update", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData.SetGlobalMotionMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Experimental::Rendering::XRPass*)>(&::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::SetGlobalMotionMatrices)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x687d744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(),
                         { "SetGlobalMotionMatrices", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_Projection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Projection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_Projection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Projection;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_Projection(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Projection = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_View() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_View() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_View;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_View(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_View = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_ViewProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_ViewProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewProjection;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_ViewProjection(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ViewProjection = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousProjection;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousProjection(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousProjection = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousView;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousView;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousView(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousView = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousViewProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousViewProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousViewProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousViewProjection;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousViewProjection(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousViewProjection = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousPreviousProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPreviousProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousPreviousProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPreviousProjection;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousPreviousProjection(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousPreviousProjection = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousPreviousView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPreviousView;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PreviousPreviousView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPreviousView;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PreviousPreviousView(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousPreviousView = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_LastFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameIndex;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_LastFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameIndex;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_LastFrameIndex(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastFrameIndex = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PrevAspectRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevAspectRatio;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_get_m_PrevAspectRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevAspectRatio;
}
constexpr void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::__cordl_internal_set_m_PrevAspectRatio(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevAspectRatio = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_lastFrameIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_lastFrameIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewProjection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_viewProjection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewProjection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousViewProjection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewProjectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_viewProjectionStereo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewProjectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousViewProjectionStereo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_projectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_projectionStereo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousProjectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousProjectionStereo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousProjectionStereo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousPreviousProjectionStereo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_viewStereo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_viewStereo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousViewStereo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousViewStereo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Matrix4x4> UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousViewStereo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousPreviousViewStereo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4>>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_deltaTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_deltaTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_lastDeltaTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_lastDeltaTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_worldSpaceCameraPos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_worldSpaceCameraPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousWorldSpaceCameraPos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousWorldSpaceCameraPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::MotionVectorsPersistentData::get_previousPreviousWorldSpaceCameraPos() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "get_previousPreviousWorldSpaceCameraPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::MotionVectorsPersistentData::GetXRMultiPassId(::UnityEngine::Experimental::Rendering::XRPass* xr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(),
                                                                                         { "GetXRMultiPassId", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, xr);
}
inline void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::Update(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(),
                                                                                         { "Update", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::MotionVectorsPersistentData::SetGlobalMotionMatrices(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                    ::UnityEngine::Experimental::Rendering::XRPass* xr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(),
                          { "SetGlobalMotionMatrices", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, xr);
}
inline ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* UnityEngine::Rendering::Universal::MotionVectorsPersistentData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData::MotionVectorsPersistentData() {}
