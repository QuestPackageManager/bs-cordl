#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\DelaunayTriangle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedBitArray3_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.get_IsInterior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::get_IsInterior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66ac02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "get_IsInterior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.set_IsInterior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(bool)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::set_IsInterior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66ac034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "set_IsInterior", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66ac03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                             ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexOf)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x66ac0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "IndexOf", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.IndexCWFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCWFrom)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66ac150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "IndexCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.IndexCCWFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCCWFrom)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66ac184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "IndexCCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Contains)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66ac1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "Contains", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkNeighbor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x66ac214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                         { "MarkNeighbor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                             ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkNeighbor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x66ac3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "MarkNeighbor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.OppositePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::OppositePoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66ac52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
            { "OppositePoint", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.NeighborCWFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCWFrom)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x66ac5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "NeighborCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.NeighborCCWFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCCWFrom)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x66ac684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "NeighborCCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.NeighborAcrossFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x66ac728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "NeighborAcrossFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.PointCCWFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCCWFrom)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x66ac7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "PointCCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.PointCWFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCWFrom)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x66ac558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "PointCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.RotateCW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::RotateCW)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66ac834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "RotateCW", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.Legalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Legalize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x66ac898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
            { "Legalize", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::ToString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x66ac930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkNeighborEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighborEdges)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x66aca64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "MarkNeighborEdges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkEdge)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x66acc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                           { "MarkEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkEdge)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x66acd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                { "MarkEdge", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkConstrainedEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(int32_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66aceb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "MarkConstrainedEdge", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkConstrainedEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66acf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "MarkConstrainedEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkConstrainedEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66acbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                            { "MarkConstrainedEdge",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.Area
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Area)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x66acf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "Area", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.Centroid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Centroid)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66acff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "Centroid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.EdgeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::EdgeIndex)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x66ac2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
            { "EdgeIndex", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetConstrainedEdgeCCW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66ad0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "GetConstrainedEdgeCCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetConstrainedEdgeCW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66ad0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "GetConstrainedEdgeCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetConstrainedEdgeAcross
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeAcross)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66ad130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "GetConstrainedEdgeAcross", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetConstrainedEdgeCCW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66ad14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "SetConstrainedEdgeCCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetConstrainedEdgeCW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66ad198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "SetConstrainedEdgeCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetConstrainedEdgeAcross
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeAcross)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66ad1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                { "SetConstrainedEdgeAcross", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetDelaunayEdgeCCW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66ad210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "GetDelaunayEdgeCCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetDelaunayEdgeCW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66ad24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "GetDelaunayEdgeCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetDelaunayEdgeAcross
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeAcross)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66ad288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "GetDelaunayEdgeAcross", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetDelaunayEdgeCCW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66ad2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "SetDelaunayEdgeCCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetDelaunayEdgeCW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x66ad2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "SetDelaunayEdgeCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetDelaunayEdgeAcross
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeAcross)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66ad33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                             { "SetDelaunayEdgeAcross", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>&
UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Points() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Points;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const&
UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Points() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Points;
}
constexpr void
UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set_Points(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Points = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>&
UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Neighbors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Neighbors;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> const&
UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Neighbors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Neighbors;
}
constexpr void
UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set_Neighbors(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Neighbors = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsConstrained() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EdgeIsConstrained;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsConstrained() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EdgeIsConstrained;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set_EdgeIsConstrained(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EdgeIsConstrained = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsDelaunay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EdgeIsDelaunay;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsDelaunay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EdgeIsDelaunay;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set_EdgeIsDelaunay(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EdgeIsDelaunay = value;
}
constexpr bool& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get__IsInterior_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInterior_k__BackingField;
}
constexpr bool const& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get__IsInterior_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInterior_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set__IsInterior_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsInterior_k__BackingField = value;
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::get_IsInterior() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "get_IsInterior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::set_IsInterior(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "set_IsInterior", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2,
                                                                       ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                           ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, p3);
}
inline int32_t UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexOf(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "IndexOf", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline int32_t UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "IndexCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline int32_t UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "IndexCCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Contains(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "Contains", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2,
                                                                              ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                       { "MarkNeighbor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                           ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, t);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "MarkNeighbor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::OppositePoint(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t,
                                                                                                                                   ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
          { "OppositePoint", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(this, ___internal_method, t, p);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "NeighborCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "NeighborCCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "NeighborAcrossFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "PointCCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "PointCWFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(this, ___internal_method, point);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::RotateCW() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "RotateCW", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Legalize(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* oPoint,
                                                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* nPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
          { "Legalize", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oPoint, nPoint);
}
inline ::StringW UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighborEdges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "MarkNeighborEdges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkEdge(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "MarkEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangle);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkEdge(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* tList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "MarkEdge", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tList);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "MarkConstrainedEdge", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "MarkConstrainedEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p,
                                                                                     ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* q) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
          { "MarkConstrainedEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, q);
}
inline double_t UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Area() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "Area", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Centroid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), { "Centroid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::EdgeIndex(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1,
                                                                              ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
          { "EdgeIndex", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p1, p2);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "GetConstrainedEdgeCCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "GetConstrainedEdgeCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "GetConstrainedEdgeAcross", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "SetConstrainedEdgeCCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "SetConstrainedEdgeCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                              { "SetConstrainedEdgeAcross", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "GetDelaunayEdgeCCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                                                         { "GetDelaunayEdgeCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "GetDelaunayEdgeAcross", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "SetDelaunayEdgeCCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "SetDelaunayEdgeCW", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeAcross(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                                                           { "SetDelaunayEdgeAcross", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1,
                                                                                                                            ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2,
                                                                                                                            ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(p1, p2, p3));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::DelaunayTriangle() {}
