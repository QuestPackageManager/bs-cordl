#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Tessellation_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Tessellation_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshBuilder_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteData_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__Tessellation__Edges::__Tessellation__Edges(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__Tessellation__Edges::__Tessellation__Edges() {}
constexpr ::UnityEngine::UIElements::UIR::__Tessellation__Edges UnityEngine::UIElements::UIR::__Tessellation__Edges::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UIR::__Tessellation__Edges UnityEngine::UIElements::UIR::__Tessellation__Edges::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UIR::__Tessellation__Edges UnityEngine::UIElements::UIR::__Tessellation__Edges::Top{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UIR::__Tessellation__Edges UnityEngine::UIElements::UIR::__Tessellation__Edges::Right{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::UIR::__Tessellation__Edges UnityEngine::UIElements::UIR::__Tessellation__Edges::Bottom{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::UIR::__Tessellation__Edges UnityEngine::UIElements::UIR::__Tessellation__Edges::All{ static_cast<int32_t>(0xf) };
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, float_t, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, bool)>(
        &::UnityEngine::UIElements::UIR::Tessellation::TessellateRect)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2e92ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRect", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, float_t, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData)>(
        &::UnityEngine::UIElements::UIR::Tessellation::TessellateQuad)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x2e92324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuad", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, float_t, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData)>(
        &::UnityEngine::UIElements::UIR::Tessellation::TessellateBorder)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2e91f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateBorder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateRoundedCorners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>, float_t, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage,
                         ByRef<uint16_t>, ByRef<uint16_t>, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::TessellateRoundedCorners)> {
  constexpr static std::size_t size = 0xe64;
  constexpr static std::size_t addrs = 0x2e9a764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRoundedCorners", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateRoundedBorders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>, float_t, ::UnityEngine::UIElements::MeshWriteData*, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(
        &::UnityEngine::UIElements::UIR::Tessellation::TessellateRoundedBorders)> {
  constexpr static std::size_t size = 0xec8;
  constexpr static std::size_t addrs = 0x2e9b910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRoundedBorders", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateRoundedCorner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Color32, float_t, ::UnityEngine::Vector2, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>,
                         ByRef<uint16_t>, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::TessellateRoundedCorner)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2e9c7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRoundedCorner", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateRoundedBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rect, ::UnityEngine::Color32, ::UnityEngine::Color32, float_t, ::UnityEngine::Vector2, float_t, float_t, ::UnityEngine::UIElements::MeshWriteData*,
    ::UnityEngine::UIElements::ColorPage, ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::TessellateRoundedBorder)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x2e9ce28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRoundedBorder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.IntersectLines
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2,
                                                                                                             ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UIR::Tessellation::IntersectLines)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2ea0734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "IntersectLines", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.LooseCompare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(float_t, float_t)>(&::UnityEngine::UIElements::UIR::Tessellation::LooseCompare)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e9fc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "LooseCompare", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateComplexBorderCorner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Vector2, float_t, float_t, ::UnityEngine::Color32, ::UnityEngine::Color32, float_t, ::UnityEngine::UIElements::MeshWriteData*,
                         ::UnityEngine::UIElements::ColorPage, ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(
        &::UnityEngine::UIElements::UIR::Tessellation::TessellateComplexBorderCorner)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x2ea0048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateComplexBorderCorner", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Color32, float_t, ::UnityEngine::UIElements::MeshWriteData*,
                                                                                           ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(
    &::UnityEngine::UIElements::UIR::Tessellation::TessellateQuad)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2ea1028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuad", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::UnityEngine::Color32, float_t, ::UnityEngine::UIElements::MeshWriteData*,
                         ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::TessellateQuad)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e9b824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuad", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.EdgesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::UIElements::UIR::__Tessellation__Edges)>(
    &::UnityEngine::UIElements::UIR::Tessellation::EdgesCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ea1364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "EdgesCount", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::cordl_internals::Ptr<::UnityEngine::Vector2>, ::UnityEngine::Color32, float_t,
    ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::TessellateQuad)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x2ea0838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuad", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::Vector2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.EncodeStraightArc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::UnityEngine::UIElements::Vertex>, ByRef<::UnityEngine::UIElements::Vertex>, ByRef<::UnityEngine::UIElements::Vertex>, float_t)>(
        &::UnityEngine::UIElements::UIR::Tessellation::EncodeStraightArc)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2ea18ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "EncodeStraightArc", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.ExpandTriangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::UIElements::UIR::Tessellation::ExpandTriangle)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2ea1a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "ExpandTriangle", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateQuadSingleEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::UnityEngine::Color32, float_t, ::UnityEngine::UIElements::MeshWriteData*,
                         ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::TessellateQuadSingleEdge)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x2ea1388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuadSingleEdge", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateStraightBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges, float_t, ::UnityEngine::Color, float_t, ::UnityEngine::UIElements::MeshWriteData*,
                         ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::TessellateStraightBorder)> {
  constexpr static std::size_t size = 0x1ef4;
  constexpr static std::size_t addrs = 0x2e9dd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateStraightBorder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.GetInterpolatedCircle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector2, ByRef<::UnityEngine::UIElements::Vertex>, ByRef<::UnityEngine::UIElements::Vertex>, ByRef<::UnityEngine::UIElements::Vertex>)>(
        &::UnityEngine::UIElements::UIR::Tessellation::GetInterpolatedCircle)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2ea1c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "GetInterpolatedCircle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.ComputeBarycentricCoordinates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(
        &::UnityEngine::UIElements::UIR::Tessellation::ComputeBarycentricCoordinates)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2ea1d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "ComputeBarycentricCoordinates", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateFilledFan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, ::UnityEngine::Color32, ::UnityEngine::Color32, float_t, ::UnityEngine::UIElements::MeshWriteData*,
    ::UnityEngine::UIElements::ColorPage, ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::TessellateFilledFan)> {
  constexpr static std::size_t size = 0x788;
  constexpr static std::size_t addrs = 0x2e9d5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateFilledFan", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.TessellateBorderedFan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, ::UnityEngine::Color32, ::UnityEngine::Color32, float_t, ::UnityEngine::UIElements::MeshWriteData*,
    ::UnityEngine::UIElements::ColorPage, ::UnityEngine::UIElements::ColorPage, ByRef<uint16_t>, ByRef<uint16_t>, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::TessellateBorderedFan)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x2e9fcc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateBorderedFan", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.MirrorVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, int32_t,
                                                                                           int32_t, bool)>(&::UnityEngine::UIElements::UIR::Tessellation::MirrorVertices)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2e9cb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "MirrorVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.FlipWinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::NativeSlice_1<uint16_t>, int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIR::Tessellation::FlipWinding)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2e9cd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "FlipWinding", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Tessellation.ComputeUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>)>(
        &::UnityEngine::UIElements::UIR::Tessellation::ComputeUVs)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2e9b5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "ComputeUVs", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::Tessellation::setStaticF_kEpsilon(float_t value) {
  ::cordl_internals::setStaticField<float_t, "kEpsilon", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::UIR::Tessellation::getStaticF_kEpsilon() {
  return ::cordl_internals::getStaticField<float_t, "kEpsilon", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>();
}
inline void UnityEngine::UIElements::UIR::Tessellation::setStaticF_kUnusedArc(float_t value) {
  ::cordl_internals::setStaticField<float_t, "kUnusedArc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::UIR::Tessellation::getStaticF_kUnusedArc() {
  return ::cordl_internals::getStaticField<float_t, "kUnusedArc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>();
}
inline void UnityEngine::UIElements::UIR::Tessellation::setStaticF_kSubdivisions(uint16_t value) {
  ::cordl_internals::setStaticField<uint16_t, "kSubdivisions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>(
      std::forward<uint16_t>(value));
}
inline uint16_t UnityEngine::UIElements::UIR::Tessellation::getStaticF_kSubdivisions() {
  return ::cordl_internals::getStaticField<uint16_t, "kSubdivisions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>();
}
inline void UnityEngine::UIElements::UIR::Tessellation::setStaticF_s_MarkerTessellateRect(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerTessellateRect",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::Tessellation::getStaticF_s_MarkerTessellateRect() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerTessellateRect",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>();
}
inline void UnityEngine::UIElements::UIR::Tessellation::setStaticF_s_MarkerTessellateBorder(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerTessellateBorder",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::Tessellation::getStaticF_s_MarkerTessellateBorder() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerTessellateBorder",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>();
}
inline void UnityEngine::UIElements::UIR::Tessellation::setStaticF_s_AllEdges(
    ::ArrayW<::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::Array<::UnityEngine::UIElements::UIR::__Tessellation__Edges>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::Array<::UnityEngine::UIElements::UIR::__Tessellation__Edges>*>, "s_AllEdges",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>(
      std::forward<::ArrayW<::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::Array<::UnityEngine::UIElements::UIR::__Tessellation__Edges>*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::Array<::UnityEngine::UIElements::UIR::__Tessellation__Edges>*>
UnityEngine::UIElements::UIR::Tessellation::getStaticF_s_AllEdges() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::UIR::__Tessellation__Edges, ::Array<::UnityEngine::UIElements::UIR::__Tessellation__Edges>*>, "s_AllEdges",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get>();
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                                                       ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, bool computeUVs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRect", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rectParams, posZ, meshAlloc, computeUVs);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateQuad(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                                                       ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuad", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rectParams, posZ, meshAlloc);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateBorder(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams borderParams, float_t posZ,
                                                                         ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateBorder", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, borderParams, posZ, meshAlloc);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateRoundedCorners(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams> rectParams, float_t posZ,
                                                                                 ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage colorPage,
                                                                                 ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRoundedCorners", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rectParams, posZ, mesh, colorPage, vertexCount, indexCount, countOnly);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateRoundedBorders(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams> border, float_t posZ,
                                                                                 ::UnityEngine::UIElements::MeshWriteData* mesh, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount,
                                                                                 bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRoundedBorders", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, border, posZ, mesh, vertexCount, indexCount, countOnly);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateRoundedCorner(::UnityEngine::Rect rect, ::UnityEngine::Color32 color, float_t posZ, ::UnityEngine::Vector2 radius,
                                                                                ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage colorPage,
                                                                                ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRoundedCorner", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, color, posZ, radius, mesh, colorPage, vertexCount, indexCount, countOnly);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateRoundedBorder(::UnityEngine::Rect rect, ::UnityEngine::Color32 leftColor, ::UnityEngine::Color32 topColor, float_t posZ,
                                                                                ::UnityEngine::Vector2 radius, float_t leftWidth, float_t topWidth, ::UnityEngine::UIElements::MeshWriteData* mesh,
                                                                                ::UnityEngine::UIElements::ColorPage leftColorPage, ::UnityEngine::UIElements::ColorPage topColorPage,
                                                                                ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateRoundedBorder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, leftColor, topColor, posZ, radius, leftWidth, topWidth, mesh, leftColorPage, topColorPage, vertexCount,
                                                          indexCount, countOnly);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIR::Tessellation::IntersectLines(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "IntersectLines", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, p0, p1, p2, p3);
}
inline int32_t UnityEngine::UIElements::UIR::Tessellation::LooseCompare(float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "LooseCompare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateComplexBorderCorner(::UnityEngine::Rect rect, ::UnityEngine::Vector2 radius, float_t leftWidth, float_t topWidth,
                                                                                      ::UnityEngine::Color32 leftColor, ::UnityEngine::Color32 topColor, float_t posZ,
                                                                                      ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage leftColorPage,
                                                                                      ::UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount,
                                                                                      bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateComplexBorderCorner", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, radius, leftWidth, topWidth, leftColor, topColor, posZ, mesh, leftColorPage, topColorPage, vertexCount,
                                                          indexCount, countOnly);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateQuad(::UnityEngine::Rect rect, ::UnityEngine::Color32 color, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh,
                                                                       ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuad", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, color, posZ, mesh, colorPage, vertexCount, indexCount, countOnly);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateQuad(::UnityEngine::Rect rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges smoothedEdges, ::UnityEngine::Color32 color,
                                                                       float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage colorPage,
                                                                       ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuad", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, smoothedEdges, color, posZ, mesh, colorPage, vertexCount, indexCount, countOnly);
}
inline int32_t UnityEngine::UIElements::UIR::Tessellation::EdgesCount(::UnityEngine::UIElements::UIR::__Tessellation__Edges edges) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "EdgesCount", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, edges);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateQuad(::UnityEngine::Rect rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges smoothedEdges,
                                                                       ::cordl_internals::Ptr<::UnityEngine::Vector2> offsets, ::UnityEngine::Color32 color, float_t posZ,
                                                                       ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount,
                                                                       ByRef<uint16_t> indexCount, bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuad", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::Vector2>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, smoothedEdges, offsets, color, posZ, mesh, colorPage, vertexCount, indexCount, countOnly);
}
inline void UnityEngine::UIElements::UIR::Tessellation::EncodeStraightArc(ByRef<::UnityEngine::UIElements::Vertex> v0, ByRef<::UnityEngine::UIElements::Vertex> v1,
                                                                          ByRef<::UnityEngine::UIElements::Vertex> center, float_t radius) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "EncodeStraightArc", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, v0, v1, center, radius);
}
inline void UnityEngine::UIElements::UIR::Tessellation::ExpandTriangle(ByRef<::UnityEngine::Vector3> v0, ByRef<::UnityEngine::Vector3> v1, ::UnityEngine::Vector3 center, float_t factor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "ExpandTriangle", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, v0, v1, center, factor);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateQuadSingleEdge(::UnityEngine::Rect rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges smoothedEdge,
                                                                                 ::UnityEngine::Color32 color, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh,
                                                                                 ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount,
                                                                                 bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateQuadSingleEdge", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, smoothedEdge, color, posZ, mesh, colorPage, vertexCount, indexCount, countOnly);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateStraightBorder(::UnityEngine::Rect rect, ::UnityEngine::UIElements::UIR::__Tessellation__Edges smoothedEdge, float_t miterOffset,
                                                                                 ::UnityEngine::Color color, float_t posZ, ::UnityEngine::UIElements::MeshWriteData* mesh,
                                                                                 ::UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount,
                                                                                 bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateStraightBorder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__Tessellation__Edges>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, smoothedEdge, miterOffset, color, posZ, mesh, colorPage, vertexCount, indexCount, countOnly);
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::Tessellation::GetInterpolatedCircle(::UnityEngine::Vector2 p, ByRef<::UnityEngine::UIElements::Vertex> v0,
                                                                                                ByRef<::UnityEngine::UIElements::Vertex> v1, ByRef<::UnityEngine::UIElements::Vertex> v2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "GetInterpolatedCircle", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Vertex>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(nullptr, ___internal_method, p, v0, v1, v2);
}
inline void UnityEngine::UIElements::UIR::Tessellation::ComputeBarycentricCoordinates(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c,
                                                                                      ByRef<float_t> u, ByRef<float_t> v, ByRef<float_t> w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "ComputeBarycentricCoordinates", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p, a, b, c, u, v, w);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateFilledFan(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 radius, ::UnityEngine::Vector2 miterOffset, float_t leftWidth,
                                                                            float_t topWidth, ::UnityEngine::Color32 leftColor, ::UnityEngine::Color32 topColor, float_t posZ,
                                                                            ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage leftColorPage,
                                                                            ::UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount,
                                                                            bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateFilledFan", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, center, radius, miterOffset, leftWidth, topWidth, leftColor, topColor, posZ, mesh, leftColorPage, topColorPage,
                                                          vertexCount, indexCount, countOnly);
}
inline void UnityEngine::UIElements::UIR::Tessellation::TessellateBorderedFan(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 outerRadius, float_t leftWidth, float_t topWidth,
                                                                              ::UnityEngine::Color32 leftColor, ::UnityEngine::Color32 topColor, float_t posZ,
                                                                              ::UnityEngine::UIElements::MeshWriteData* mesh, ::UnityEngine::UIElements::ColorPage leftColorPage,
                                                                              ::UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount,
                                                                              bool countOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "TessellateBorderedFan", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshWriteData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ColorPage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, center, outerRadius, leftWidth, topWidth, leftColor, topColor, posZ, mesh, leftColorPage, topColorPage,
                                                          vertexCount, indexCount, countOnly);
}
inline void UnityEngine::UIElements::UIR::Tessellation::MirrorVertices(::UnityEngine::Rect rect, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, int32_t vertexStart,
                                                                       int32_t vertexCount, bool flipHorizontal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "MirrorVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, vertices, vertexStart, vertexCount, flipHorizontal);
}
inline void UnityEngine::UIElements::UIR::Tessellation::FlipWinding(::Unity::Collections::NativeSlice_1<uint16_t> indices, int32_t indexStart, int32_t indexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "FlipWinding", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, indices, indexStart, indexCount);
}
inline void UnityEngine::UIElements::UIR::Tessellation::ComputeUVs(::UnityEngine::Rect tessellatedRect, ::UnityEngine::Rect textureRect, ::UnityEngine::Rect uvRegion,
                                                                   ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Tessellation*>::get(), "ComputeUVs", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tessellatedRect, textureRect, uvRegion, vertices);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Tessellation::Tessellation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
