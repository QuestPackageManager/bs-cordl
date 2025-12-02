#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/PolylineRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_Copies)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5858cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                               "get_Copies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.get_BufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_BufferSize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5858d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                               "get_BufferSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.get_LineScaleFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_LineScaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5858d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                               "get_LineScaleFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.set_LineScaleFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(float_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::set_LineScaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5858d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "set_LineScaleFactor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(::UnityEngine::Material*, bool)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::_ctor)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x585503c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::Cleanup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x585551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetLines
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::Color)>(&::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetLines)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5858d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetLines", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetLines
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*, int32_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetLines)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x585564c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetLines", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Color>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetPositions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetPositions)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5858de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetPositions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetColors)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5859238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetColors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Color>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(int32_t, ::UnityEngine::Color)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetColor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5859164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetDrawCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetDrawCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5859120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetDrawCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.PrepareColorBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::PrepareColorBuffer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5859358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "PrepareColorBuffer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.RenderLines
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)()>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::RenderLines)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x58556e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                               "RenderLines", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer.SetTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::*)(::UnityEngine::Transform*)>(
    &::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetTransform)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5859468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positions;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positions;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____baseMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____argsBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__argsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argsData;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_get__argsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argsData;
}
constexpr void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::__cordl_internal_set__argsData(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____argsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                             "get_Copies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_BufferSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                             "get_BufferSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::get_LineScaleFactor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                             "get_LineScaleFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::set_LineScaleFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "set_LineScaleFactor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::_ctor(::UnityEngine::Material* material, bool renderSinglePass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, renderSinglePass);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                             "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetLines(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetLines", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, color);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetLines(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions,
                                                                           ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors, int32_t maxCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetLines", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Color>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, colors, maxCount);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetPositions(int32_t count, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetPositions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count, positions);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetColors(int32_t count, ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetColors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Color>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count, colors);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetColor(int32_t count, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count, color);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetDrawCount(int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetDrawCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::PrepareColorBuffer(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "PrepareColorBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::RenderLines() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(),
                                                                             "RenderLines", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::SetTransform(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>::get(), "SetTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
inline ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::New_ctor(::UnityEngine::Material* material, bool renderSinglePass) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*>(material, renderSinglePass));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer::PolylineRenderer() {}
