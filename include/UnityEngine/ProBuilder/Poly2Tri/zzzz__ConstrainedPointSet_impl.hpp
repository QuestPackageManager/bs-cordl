#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\ConstrainedPointSet.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointSet_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__ConstrainedPointSet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationMode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet.get_EdgeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::get_EdgeIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b16c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(), { "get_EdgeIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet.set_EdgeIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::*)(::ArrayW<int32_t>)>(
    &::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::set_EdgeIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b16cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(), { "set_EdgeIndex", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*, ::ArrayW<int32_t>)>(&::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66b16d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet.get_TriangulationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode (::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::get_TriangulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b177c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet.Prepare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::Prepare)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x66b1784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::__cordl_internal_get__EdgeIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EdgeIndex_k__BackingField;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::__cordl_internal_get__EdgeIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EdgeIndex_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::__cordl_internal_set__EdgeIndex_k__BackingField(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EdgeIndex_k__BackingField = value;
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::get_EdgeIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(), { "get_EdgeIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::set_EdgeIndex(::ArrayW<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(), { "set_EdgeIndex", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::_ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points,
                                                                          ::ArrayW<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(),
                       { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, index);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::get_TriangulationMode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tcx);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*
UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::New_ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points, ::ArrayW<int32_t> index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*>(points, index));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet::ConstrainedPointSet() {}
