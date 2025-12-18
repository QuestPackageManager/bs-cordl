#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Spline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Spline_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__BezierPoint_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.Extrude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, float_t, int32_t, int32_t, bool, bool)>(&::UnityEngine::ProBuilder::Spline::Extrude)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x653e5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "Extrude", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.Extrude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, float_t, int32_t, int32_t, bool, bool, ::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*>)>(
        &::UnityEngine::ProBuilder::Spline::Extrude)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x653e5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "Extrude", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.GetControlPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, int32_t, bool,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*)>(&::UnityEngine::ProBuilder::Spline::GetControlPoints)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x653e6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "GetControlPoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.Extrude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, float_t, int32_t, bool, bool, ::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*>,
                         ::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>*)>(&::UnityEngine::ProBuilder::Spline::Extrude)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x653ebe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "Extrude", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.GetRingRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, int32_t, bool,
                                                                                                                ::ByRef<float_t>)>(&::UnityEngine::ProBuilder::Spline::GetRingRotation)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x653f578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "GetRingRotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.VertexRing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, int32_t)>(&::UnityEngine::ProBuilder::Spline::VertexRing)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x653fe68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "VertexRing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::Spline::Extrude(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* points,
                                                                                                    float_t radius, int32_t columns, int32_t rows, bool closeLoop, bool smooth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "Extrude", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, false>(nullptr, ___internal_method, points, radius, columns, rows, closeLoop, smooth);
}
inline void UnityEngine::ProBuilder::Spline::Extrude(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* bezierPoints, float_t radius, int32_t columns, int32_t rows,
                                                     bool closeLoop, bool smooth, ::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*> target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "Extrude", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bezierPoints, radius, columns, rows, closeLoop, smooth, target);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*
UnityEngine::ProBuilder::Spline::GetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* bezierPoints, int32_t subdivisionsPerSegment, bool closeLoop,
                                                  ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rotations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "GetControlPoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, false>(nullptr, ___internal_method, bezierPoints, subdivisionsPerSegment, closeLoop,
                                                                                                                     rotations);
}
inline void UnityEngine::ProBuilder::Spline::Extrude(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t radius, int32_t radiusRows, bool closeLoop, bool smooth,
                                                     ::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*> target, ::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>* pointRotations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "Extrude", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ProBuilder::ProBuilderMesh*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, points, radius, radiusRows, closeLoop, smooth, target, pointRotations);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::Spline::GetRingRotation(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, int32_t i, bool closeLoop,
                                                                                  ::ByRef<float_t> secant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "GetRingRotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, points, i, closeLoop, secant);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::ProBuilder::Spline::VertexRing(::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 offset,
                                                                                                                      float_t radius, int32_t segments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Spline*>::get(), "VertexRing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(nullptr, ___internal_method, orientation, offset, radius, segments);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Spline::Spline() {}
