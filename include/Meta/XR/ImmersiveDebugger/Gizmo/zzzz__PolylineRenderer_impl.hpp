#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/PolylineRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Gizmo/zzzz__PolylineRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.get_Copies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_Copies)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a6c9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "get_Copies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.get_BufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_BufferSize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a6c9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "get_BufferSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.get_LineScaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_LineScaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6c9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "get_LineScaleFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.set_LineScaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(float_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::set_LineScaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6c9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "set_LineScaleFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(::UnityEngine::Material*, bool)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::_ctor)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5a68cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::Cleanup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a691cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::Color)>(&::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetLines)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a6c9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                { "SetLines", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,
                                                                                                                        ::System::Collections::Generic::List_1<::UnityEngine::Color>*, int32_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetLines)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a692fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                             { "SetLines",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetPositions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetPositions)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5a6ca90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                { "SetPositions", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetColors)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a6cee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                             { "SetColors", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(int32_t, ::UnityEngine::Color)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetColor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a6ce14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                                                           { "SetColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetDrawCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetDrawCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a6cdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "SetDrawCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.PrepareColorBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::PrepareColorBuffer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a6d008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "PrepareColorBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.RenderLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(&::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::RenderLines)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5a69398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "RenderLines", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(::UnityEngine::Transform*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetTransform)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a6d118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "SetTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4>& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positions;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positions;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positions = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positionsNeedUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionsNeedUpdate;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positionsNeedUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionsNeedUpdate;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__positionsNeedUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionsNeedUpdate = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colors = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colorsNeedUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsNeedUpdate;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colorsNeedUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsNeedUpdate;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__colorsNeedUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorsNeedUpdate = value;
}
constexpr ::UnityEngine::Bounds& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__bounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr ::UnityEngine::Bounds const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__bounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__bounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bounds = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__baseMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__baseMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseMesh;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__baseMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____material = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__renderSinglePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderSinglePass;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__renderSinglePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderSinglePass;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__renderSinglePass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderSinglePass = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positionBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positionBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionBuffer;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__positionBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colorBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colorBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBuffer;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__colorBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__argsBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argsBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__argsBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argsBuffer;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__argsBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____argsBuffer = value;
}
constexpr ::ArrayW<uint32_t>& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__argsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argsData;
}
constexpr ::ArrayW<uint32_t> const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__argsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argsData;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__argsData(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____argsData = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positionBufferShaderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionBufferShaderID;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positionBufferShaderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionBufferShaderID;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__positionBufferShaderID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionBufferShaderID = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colorBufferShaderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferShaderID;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colorBufferShaderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferShaderID;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__colorBufferShaderID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorBufferShaderID = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__localToWorldShaderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localToWorldShaderID;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__localToWorldShaderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localToWorldShaderID;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__localToWorldShaderID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localToWorldShaderID = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__scaleShaderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleShaderID;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__scaleShaderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleShaderID;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__scaleShaderID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleShaderID = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__maxLineCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLineCount;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__maxLineCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLineCount;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__maxLineCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxLineCount = value;
}
constexpr ::UnityEngine::Matrix4x4& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__matrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__matrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matrix;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__matrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____matrix = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__lineScaleFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineScaleFactor;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__lineScaleFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineScaleFactor;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__lineScaleFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineScaleFactor = value;
}
inline int32_t Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_Copies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "get_Copies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_BufferSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "get_BufferSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_LineScaleFactor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "get_LineScaleFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::set_LineScaleFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "set_LineScaleFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::_ctor(::UnityEngine::Material* material, bool renderSinglePass) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, renderSinglePass);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetLines(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                              { "SetLines", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions, color);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetLines(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions,
                                                                           ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors, int32_t maxCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                           { "SetLines",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions, colors, maxCount);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetPositions(int32_t count, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                           { "SetPositions", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, positions);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetColors(int32_t count, ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                           { "SetColors", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, colors);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetColor(int32_t count, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(),
                                                                                         { "SetColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, color);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetDrawCount(int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "SetDrawCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::PrepareColorBuffer(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "PrepareColorBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::RenderLines() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "RenderLines", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetTransform(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(), { "SetTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::New_ctor(::UnityEngine::Material* material, bool renderSinglePass) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(material, renderSinglePass));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::PolylineRenderer() {}
