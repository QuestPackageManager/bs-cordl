#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierSpline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "GlobalNamespace/zzzz__BezierCurve_def.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BezierSpline_ComputeControlPointsResults._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierSpline_ComputeControlPointsResults::*)(
    ::ArrayW<float_t, ::Array<float_t>*>, ::ArrayW<float_t, ::Array<float_t>*>)>(&::GlobalNamespace::BezierSpline_ComputeControlPointsResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2266454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline_ComputeControlPointsResults>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BezierSpline_ComputeControlPointsResults::_ctor(::ArrayW<float_t, ::Array<float_t>*> p1, ::ArrayW<float_t, ::Array<float_t>*> p2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline_ComputeControlPointsResults>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2);
}
// Ctor Parameters [CppParam { name: "p1", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "p2", ty: "::ArrayW<float_t,::Array<float_t>*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BezierSpline_ComputeControlPointsResults::BezierSpline_ComputeControlPointsResults(::ArrayW<float_t, ::Array<float_t>*> p1,
                                                                                                                ::ArrayW<float_t, ::Array<float_t>*> p2) noexcept {
  this->p1 = p1;
  this->p2 = p2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierSpline_ComputeControlPointsResults::BezierSpline_ComputeControlPointsResults() {}
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierSpline___c::*)()>(&::GlobalNamespace::BezierSpline___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22664b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._SortSourceData_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BezierSpline___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::BezierSpline___c::_SortSourceData_b__6_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22664c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), "<SortSourceData>b__6_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._ComputeControlPoints_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BezierSpline___c::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22664f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), "<ComputeControlPoints>b__8_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._ComputeControlPoints_b__8_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BezierSpline___c::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22664f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), "<ComputeControlPoints>b__8_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline___c._ComputeControlPoints_b__8_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BezierSpline___c::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22664fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), "<ComputeControlPoints>b__8_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BezierSpline___c::setStaticF___9(::GlobalNamespace::BezierSpline___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BezierSpline___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>(
      std::forward<::GlobalNamespace::BezierSpline___c*>(value));
}
inline ::GlobalNamespace::BezierSpline___c* GlobalNamespace::BezierSpline___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BezierSpline___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>();
}
inline void GlobalNamespace::BezierSpline___c::setStaticF___9__6_0(::System::Comparison_1<::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Vector3>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Vector3>* GlobalNamespace::BezierSpline___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Vector3>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>();
}
inline void GlobalNamespace::BezierSpline___c::setStaticF___9__8_0(::System::Func_2<::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3, float_t>* GlobalNamespace::BezierSpline___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>();
}
inline void GlobalNamespace::BezierSpline___c::setStaticF___9__8_1(::System::Func_2<::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3, float_t>* GlobalNamespace::BezierSpline___c::getStaticF___9__8_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>();
}
inline void GlobalNamespace::BezierSpline___c::setStaticF___9__8_2(::System::Func_2<::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3, float_t>* GlobalNamespace::BezierSpline___c::getStaticF___9__8_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__8_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get>();
}
inline void GlobalNamespace::BezierSpline___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BezierSpline___c::_SortSourceData_b__6_0(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), "<SortSourceData>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, point1, point2);
}
inline float_t GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_0(::UnityEngine::Vector3 p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), "<ComputeControlPoints>b__8_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, p);
}
inline float_t GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_1(::UnityEngine::Vector3 p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), "<ComputeControlPoints>b__8_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, p);
}
inline float_t GlobalNamespace::BezierSpline___c::_ComputeControlPoints_b__8_2(::UnityEngine::Vector3 p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline___c*>::get(), "<ComputeControlPoints>b__8_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, p);
}
inline ::GlobalNamespace::BezierSpline___c* GlobalNamespace::BezierSpline___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BezierSpline___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierSpline___c::BezierSpline___c() {}
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.get_segments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* (::GlobalNamespace::BezierSpline::*)()>(
    &::GlobalNamespace::BezierSpline::get_segments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2265db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "get_segments",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.AddPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierSpline::*)(float_t, ::UnityEngine::Vector2)>(
    &::GlobalNamespace::BezierSpline::AddPoint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x226139c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "AddPoint", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.SortSourceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::SortSourceData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2265dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "SortSourceData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.AddArtificialStartAndFinishPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::AddArtificialStartAndFinishPoint)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2261470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "AddArtificialStartAndFinishPoint",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.ComputeControlPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::ComputeControlPoints)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x2261664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "ComputeControlPoints",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22663e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline.ComputeControlPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BezierSpline_ComputeControlPointsResults (::GlobalNamespace::BezierSpline::*)(
    ::System::Collections::Generic::List_1<float_t>*)>(&::GlobalNamespace::BezierSpline::ComputeControlPoints)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x2265ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "ComputeControlPoints", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BezierSpline._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BezierSpline::*)()>(&::GlobalNamespace::BezierSpline::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2261150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*& GlobalNamespace::BezierSpline::__cordl_internal_get__segments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segments;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* const& GlobalNamespace::BezierSpline::__cordl_internal_get__segments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____segments;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set__segments(::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____segments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::BezierSpline::__cordl_internal_get__sourceDataPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceDataPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::BezierSpline::__cordl_internal_get__sourceDataPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceDataPoints;
}
constexpr void GlobalNamespace::BezierSpline::__cordl_internal_set__sourceDataPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sourceDataPoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* GlobalNamespace::BezierSpline::get_segments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "get_segments",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::AddPoint(float_t distance, ::UnityEngine::Vector2 point) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "AddPoint", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance, point);
}
inline void GlobalNamespace::BezierSpline::SortSourceData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "SortSourceData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::AddArtificialStartAndFinishPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(),
                                                                             "AddArtificialStartAndFinishPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::ComputeControlPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "ComputeControlPoints",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BezierSpline::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BezierSpline_ComputeControlPointsResults GlobalNamespace::BezierSpline::ComputeControlPoints(::System::Collections::Generic::List_1<float_t>* k) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), "ComputeControlPoints", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BezierSpline_ComputeControlPointsResults, false>(this, ___internal_method, k);
}
inline void GlobalNamespace::BezierSpline::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BezierSpline*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BezierSpline* GlobalNamespace::BezierSpline::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BezierSpline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BezierSpline::BezierSpline() {}
