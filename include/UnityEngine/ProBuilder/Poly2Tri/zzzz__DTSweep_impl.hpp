#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweep_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweep_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Orientation_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b338f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0._SplitEdge_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::*)(
    ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*)>(&::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::_SplitEdge_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2b3434c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0*>::get(), "<SplitEdge>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::__get_ep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ep;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::__get_ep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ep;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::__set_ep(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ep)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0* UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0*>());
}
inline void UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::_SplitEdge_b__0(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0*>::get(), "<SplitEdge>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::__DTSweep____c__DisplayClass21_0::__DTSweep____c__DisplayClass21_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.Triangulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::Triangulate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b2de08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "Triangulate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.Sweep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::Sweep)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2b30f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "Sweep", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FinalizationConvexHull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationConvexHull)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2b31234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FinalizationConvexHull", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.TurnAdvancingFrontConvex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::TurnAdvancingFrontConvex)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2b31830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "TurnAdvancingFrontConvex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FinalizationPolygon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationPolygon)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b3118c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FinalizationPolygon", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.PointEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::PointEvent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2b314c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "PointEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.NewFrontTriangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*,
                                                                 ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::NewFrontTriangle)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2b3234c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "NewFrontTriangle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.EdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2b316a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "EdgeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillEdgeEvent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b3297c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillEdgeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillRightConcaveEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConcaveEdgeEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2b32d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillRightConcaveEdgeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillRightConvexEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConvexEdgeEvent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2b32e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillRightConvexEdgeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillRightBelowEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightBelowEdgeEvent)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2b32fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillRightBelowEdgeEvent", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillRightAboveEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightAboveEdgeEvent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2b32b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillRightAboveEdgeEvent", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillLeftConvexEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConvexEdgeEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2b330e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillLeftConvexEdgeEvent", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillLeftConcaveEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConcaveEdgeEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2b331fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillLeftConcaveEdgeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillLeftBelowEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftBelowEdgeEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2b332f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillLeftBelowEdgeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillLeftAboveEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftAboveEdgeEvent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2b32c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillLeftAboveEdgeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.IsEdgeSideOfTriangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsEdgeSideOfTriangle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2b328bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "IsEdgeSideOfTriangle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.EdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*,
                         ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2b329a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "EdgeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.SplitEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::SplitEdge)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2b337d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "SplitEdge", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FlipEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*,
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipEdgeEvent)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2b33454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FlipEdgeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.NextFlipPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*,
                                                                             ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipPoint)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2b33aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "NextFlipPoint", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.NextFlipTriangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::Orientation,
                                                                           ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*,
                                                                           ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipTriangle)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b33a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "NextFlipTriangle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::Orientation>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FlipScanEdgeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*,
                         ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(
        &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipScanEdgeEvent)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2b33c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FlipScanEdgeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillAdvancingFront
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillAdvancingFront)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b32508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillAdvancingFront", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillBasin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasin)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2b33f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillBasin", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillBasinReq
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasinReq)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2b3409c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillBasinReq", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.IsShallow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsShallow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b3420c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "IsShallow", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.HoleAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::HoleAngle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b33dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "HoleAngle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.BasinAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::DTSweep::BasinAngle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b33e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "BasinAngle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.Fill
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::Fill)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2b321ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "Fill", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.Legalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::Legalize)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2b32600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "Legalize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.RotateTrianglePair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*,
                         ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::RotateTrianglePair)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x2b3199c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "RotateTrianglePair", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::Triangulate(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "Triangulate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::Sweep(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "Sweep", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationConvexHull(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FinalizationConvexHull", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::TurnAdvancingFrontConvex(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* b,
                                                                                 ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "TurnAdvancingFrontConvex", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, b, c);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationPolygon(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FinalizationPolygon", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::DTSweep::PointEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx,
                                                                                                                       ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "PointEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, false>(nullptr, ___internal_method, tcx, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::DTSweep::NewFrontTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx,
                                                                                                                             ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point,
                                                                                                                             ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "NewFrontTriangle", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, false>(nullptr, ___internal_method, tcx, point, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "EdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                      ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx,
                                                                                  ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                                  ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillRightConcaveEdgeEvent", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                                 ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillRightConvexEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                                ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillRightBelowEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                                ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillRightAboveEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                                ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillLeftConvexEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                                 ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillLeftConcaveEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                               ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillLeftBelowEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge,
                                                                               ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillLeftAboveEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, edge, node);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsEdgeSideOfTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle,
                                                                             ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "IsEdgeSideOfTriangle", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, triangle, ep, eq);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                                                  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle,
                                                                  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "EdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, ep, eq, triangle, point);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::SplitEdge(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq,
                                                                  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "SplitEdge", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ep, eq, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                                                      ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t,
                                                                      ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FlipEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, ep, eq, t, p);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                                                                                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq,
                                                                                                                          ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot,
                                                                                                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "NextFlipPoint", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, false>(nullptr, ___internal_method, ep, eq, ot, op);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*
UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::Orientation o,
                                                             ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot,
                                                             ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "NextFlipTriangle", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::Orientation>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, false>(nullptr, ___internal_method, tcx, o, t, ot, p, op);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipScanEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep,
                                                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq,
                                                                          ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* flipTriangle, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t,
                                                                          ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FlipScanEdgeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, ep, eq, flipTriangle, t, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillAdvancingFront(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* n) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillAdvancingFront", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, n);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasin(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillBasin", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasinReq(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "FillBasinReq", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, node);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsShallow(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "IsShallow", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tcx, node);
}
inline double_t UnityEngine::ProBuilder::Poly2Tri::DTSweep::HoleAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "HoleAngle", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, node);
}
inline double_t UnityEngine::ProBuilder::Poly2Tri::DTSweep::BasinAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "BasinAngle", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::Fill(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "Fill", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcx, node);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DTSweep::Legalize(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "Legalize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tcx, t);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::RotateTrianglePair(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p,
                                                                           ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>::get(), "RotateTrianglePair", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, p, ot, op);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweep::DTSweep() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
