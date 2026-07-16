#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/TriangulationPoint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint.get_Edges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* (
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_Edges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66ac7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "get_Edges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint.set_Edges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::set_Edges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66ac7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                { "set_Edges", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)(double_t, double_t, int32_t)>(
    &::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66a65bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x66ac7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint.get_Xf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_Xf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66ac910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "get_Xf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint.set_Xf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)(float_t)>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::set_Xf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66ac91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "set_Xf", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint.get_Yf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_Yf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66ac928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "get_Yf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint.set_Yf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)(float_t)>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::set_Yf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66ac934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "set_Yf", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint.AddEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::AddEdge)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x66ab500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                                                           { "AddEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint.get_HasEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_HasEdges)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66a8630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "get_HasEdges", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*&
UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_get__Edges_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Edges_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* const&
UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_get__Edges_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Edges_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_set__Edges_k__BackingField(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Edges_k__BackingField = value;
}
constexpr double_t& UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_get_X() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X;
}
constexpr double_t const& UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_get_X() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_set_X(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___X = value;
}
constexpr double_t& UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_get_Y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Y;
}
constexpr double_t const& UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_get_Y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Y;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_set_Y(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Y = value;
}
constexpr int32_t& UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_get_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr int32_t const& UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_get_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::__cordl_internal_set_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Index = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_Edges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "get_Edges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::set_Edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                              { "set_Edges", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::_ctor(double_t x, double_t y, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, index);
}
inline ::StringW UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_Xf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "get_Xf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::set_Xf(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "set_Xf", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_Yf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "get_Yf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::set_Yf(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "set_Yf", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::AddEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(),
                                                                                         { "AddEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::get_HasEdges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), { "get_HasEdges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::New_ctor(double_t x, double_t y, int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(x, y, index));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint::TriangulationPoint() {}
