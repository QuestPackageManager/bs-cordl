#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MeshOperations\MeshValidation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__MeshValidation_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__MeshValidation_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy::MeshValidation_AttributeValidationStrategy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy::MeshValidation_AttributeValidationStrategy() {}
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy::Resize{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy::Nullify{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67388f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c._EnsureFacesAreComposedOfContiguousTriangles_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::*)(::UnityEngine::ProBuilder::Triangle)>(
        &::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67388f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(),
                                                             { "<EnsureFacesAreComposedOfContiguousTriangles>b__4_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c._EnsureFacesAreComposedOfContiguousTriangles_b__4_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::*)(::UnityEngine::ProBuilder::Triangle)>(
        &::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6738920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(),
                                                             { "<EnsureFacesAreComposedOfContiguousTriangles>b__4_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c._RemoveUnusedVertices_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::*)(::UnityEngine::ProBuilder::Face*)>(
        &::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::_RemoveUnusedVertices_b__7_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6738948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(),
                                                                                           { "<RemoveUnusedVertices>b__7_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c* UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::setStaticF___9__4_0(
    ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__4_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__4_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::setStaticF___9__4_1(
    ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__4_1",
                                    ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::getStaticF___9__4_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__4_1",
                                           ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>();
}
inline void
UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::setStaticF___9__7_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__7_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>* UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<int32_t>*>*, "<>9__7_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_0(::UnityEngine::ProBuilder::Triangle x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(),
                                                           { "<EnsureFacesAreComposedOfContiguousTriangles>b__4_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_1(::UnityEngine::ProBuilder::Triangle x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(),
                                                           { "<EnsureFacesAreComposedOfContiguousTriangles>b__4_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::_RemoveUnusedVertices_b__7_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>(),
                                                                                         { "<RemoveUnusedVertices>b__7_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c* UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c::MeshValidation___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6737fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0._RebuildSelectionIndexes_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::_RebuildSelectionIndexes_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6738960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0*>(),
                                                                                           { "<RebuildSelectionIndexes>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::__cordl_internal_get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::__cordl_internal_get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::__cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mesh = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::_RebuildSelectionIndexes_b__0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0*>(),
                                                                                         { "<RebuildSelectionIndexes>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0* UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0::MeshValidation___c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6736ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0._CollectFaceGroups_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::*)(::UnityEngine::ProBuilder::Triangle)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::_CollectFaceGroups_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67389c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0*>(),
                                                                                           { "<CollectFaceGroups>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Triangle& UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::__cordl_internal_get_triangle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangle;
}
constexpr ::UnityEngine::ProBuilder::Triangle const& UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::__cordl_internal_get_triangle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triangle;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::__cordl_internal_set_triangle(::UnityEngine::ProBuilder::Triangle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___triangle = value;
}
constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>*& UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::__cordl_internal_get___9__0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* const& UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::__cordl_internal_get___9__0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__0;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::__cordl_internal_set___9__0(::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__0 = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::_CollectFaceGroups_b__0(::UnityEngine::ProBuilder::Triangle x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0*>(),
                                                                                         { "<CollectFaceGroups>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Triangle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0* UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0::MeshValidation___c__DisplayClass5_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsDegenerateTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6735968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                                                           { "ContainsDegenerateTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsDegenerateTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x673597c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                            { "ContainsDegenerateTriangles",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsDegenerateTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6735d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                         { "ContainsDegenerateTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsNonContiguousTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsNonContiguousTriangles)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6735ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                            { "ContainsNonContiguousTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureFacesAreComposedOfContiguousTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureFacesAreComposedOfContiguousTriangles)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x6735ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                            { "EnsureFacesAreComposedOfContiguousTriangles",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.CollectFaceGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::CollectFaceGroups)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x67366d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                { "CollectFaceGroups", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RemoveDegenerateTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveDegenerateTriangles)> {
  constexpr static std::size_t size = 0xa58;
  constexpr static std::size_t addrs = 0x6736ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                         { "RemoveDegenerateTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RemoveUnusedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveUnusedVertices)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x6733888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                            { "RemoveUnusedVertices", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RebuildIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<int32_t>* (*)(::System::Collections::Generic::IEnumerable_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildIndexes)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x673752c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                         { "RebuildIndexes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RebuildEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::Edge>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildEdges)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x673793c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                                                           { "RebuildEdges",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RebuildSelectionIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Face*>>, ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>,
                         ::by_ref<::ArrayW<int32_t>>, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildSelectionIndexes)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6737da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                             { "RebuildSelectionIndexes",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Face*>>>(),
                                                                 ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureMeshIsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::by_ref<int32_t>)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureMeshIsValid)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6737fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                             { "EnsureMeshIsValid", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureRealNumbers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6738304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                             { "EnsureRealNumbers", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureRealNumbers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x67384d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                             { "EnsureRealNumbers", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureRealNumbers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x67386bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                             { "EnsureRealNumbers", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureValidAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureValidAttributes)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x67380ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                                                           { "EnsureValidAttributes", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                                                         { "ContainsDegenerateTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                          { "ContainsDegenerateTriangles",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, faces);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                       { "ContainsDegenerateTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, face);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                          { "ContainsNonContiguousTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, face);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                     ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                          { "EnsureFacesAreComposedOfContiguousTriangles",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, faces);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation::CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                              { "CollectFaceGroups", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>*>(nullptr, ___internal_method, mesh,
                                                                                                                                                                    face);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                               ::System::Collections::Generic::List_1<int32_t>* removed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                          { "RemoveDegenerateTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, removed);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<int32_t>* removed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                          { "RemoveUnusedVertices", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, removed);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildIndexes(::System::Collections::Generic::IEnumerable_1<int32_t>* indices,
                                                                                                                                ::System::Collections::Generic::List_1<int32_t>* removed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                       { "RebuildIndexes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(nullptr, ___internal_method, indices, removed);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                      ::System::Collections::Generic::List_1<int32_t>* removed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                                                         { "RebuildEdges",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>(nullptr, ___internal_method, edges, removed);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                             ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Face*>> faces,
                                                                                             ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>> edges, ::by_ref<::ArrayW<int32_t>> indices,
                                                                                             ::System::Collections::Generic::IEnumerable_1<int32_t>* removed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                           { "RebuildSelectionIndexes",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Face*>>>(),
                                                               ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces, edges, indices, removed);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::by_ref<int32_t> removedVertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                           { "EnsureMeshIsValid", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, removedVertices);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                           { "EnsureRealNumbers", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attribute);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                           { "EnsureRealNumbers", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attribute);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                           { "EnsureRealNumbers", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attribute);
}
template <typename T>
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureArraySize(::by_ref<::ArrayW<T>> attribute, int32_t expectedVertexCount,
                                                                                     ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy strategy, T fill) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                           { "EnsureArraySize",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attribute, expectedVertexCount, strategy, fill);
}
template <typename T>
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureListSize(::by_ref<::System::Collections::Generic::List_1<T>*> attribute, int32_t expectedVertexCount,
                                                                                    ::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy strategy, T fill) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                           { "EnsureListSize",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation_AttributeValidationStrategy>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attribute, expectedVertexCount, strategy, fill);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureValidAttributes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshValidation*>(),
                                                                                         { "EnsureValidAttributes", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::MeshValidation() {}
