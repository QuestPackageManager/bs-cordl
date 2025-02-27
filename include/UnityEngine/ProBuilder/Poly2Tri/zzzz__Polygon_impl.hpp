#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/Polygon.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Triangulatable_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Polygon_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonPoint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationMode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x4704518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x47048c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(
    ::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::Array<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4704950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::Array<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.get_TriangulationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::Polygon::get_TriangulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4704954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                               "get_TriangulationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddSteinerPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddSteinerPoint)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x470495c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddSteinerPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddSteinerPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddSteinerPoints)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4704a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddSteinerPoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.ClearSteinerPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::Polygon::ClearSteinerPoints)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4704ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                               "ClearSteinerPoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddHole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::Polygon*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddHole)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4704b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddHole", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.InsertPointAfter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::InsertPointAfter)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4704c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "InsertPointAfter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddPoints)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x4704d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddPoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddPoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x470516c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddPoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.RemovePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::Polygon::RemovePoint)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x470522c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "RemovePoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.get_Points
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* (
    ::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Points)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47052a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                               "get_Points", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.get_Triangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* (
    ::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Triangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47052a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                               "get_Triangles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.get_Holes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* (
    ::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Holes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47052b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                               "get_Holes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddTriangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x47052b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddTriangle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.AddTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x470535c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddTriangles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.ClearTriangles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::Polygon::ClearTriangles)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x47053b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                               "ClearTriangles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::Polygon.Prepare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::Polygon::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::Polygon::Prepare)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x4705420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__points() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* const& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__points() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____points;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____points)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__steinerPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steinerPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* const&
UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__steinerPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steinerPoints;
}
constexpr void
UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_set__steinerPoints(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steinerPoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__holes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____holes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* const& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__holes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____holes;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_set__holes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____holes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__triangles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangles;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* const& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__triangles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____triangles;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_set__triangles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____triangles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__last() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____last;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* const& UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_get__last() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____last;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::Polygon::__cordl_internal_set__last(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____last)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, points);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, points);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::_ctor(::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::Array<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*> points) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::Array<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, points);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode UnityEngine::ProBuilder::Poly2Tri::Polygon::get_TriangulationMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                             "get_TriangulationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddSteinerPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddSteinerPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddSteinerPoints(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddSteinerPoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, points);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::ClearSteinerPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                             "ClearSteinerPoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddHole(::UnityEngine::ProBuilder::Poly2Tri::Polygon* poly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddHole", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poly);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::InsertPointAfter(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* point, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* newPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "InsertPointAfter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point, newPoint);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddPoints(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddPoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddPoint(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddPoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::RemovePoint(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "RemovePoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Points() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "get_Points",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Triangles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                             "get_Triangles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>* UnityEngine::ProBuilder::Poly2Tri::Polygon::get_Holes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "get_Holes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddTriangle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "AddTriangles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::ClearTriangles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(),
                                                                             "ClearTriangles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::Polygon::Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tcx);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon*
UnityEngine::ProBuilder::Poly2Tri::Polygon::New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(points));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon*
UnityEngine::ProBuilder::Poly2Tri::Polygon::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(points));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::Polygon*
UnityEngine::ProBuilder::Poly2Tri::Polygon::New_ctor(::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, ::Array<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*> points) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::Poly2Tri::Polygon*>(points));
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
constexpr UnityEngine::ProBuilder::Poly2Tri::Polygon::operator ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
constexpr ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* UnityEngine::ProBuilder::Poly2Tri::Polygon::i___UnityEngine__ProBuilder__Poly2Tri__Triangulatable() noexcept {
  return static_cast<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::Polygon::Polygon() {}
