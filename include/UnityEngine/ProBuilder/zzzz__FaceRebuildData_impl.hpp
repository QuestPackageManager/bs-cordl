#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\FaceRebuildData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::FaceRebuildData.Offset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::FaceRebuildData::*)()>(&::UnityEngine::ProBuilder::FaceRebuildData::Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66be168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(), { "Offset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::FaceRebuildData.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::FaceRebuildData::*)()>(&::UnityEngine::ProBuilder::FaceRebuildData::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x66be170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::FaceRebuildData.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>*, ::UnityEngine::ProBuilder::ProBuilderMesh*,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*)>(&::UnityEngine::ProBuilder::FaceRebuildData::Apply)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x66be264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(),
                            { "Apply",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>*>(),
                                ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::FaceRebuildData.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
                         ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*,
                         ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(&::UnityEngine::ProBuilder::FaceRebuildData::Apply)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x66be3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(),
                                                             { "Apply",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::FaceRebuildData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::FaceRebuildData::*)()>(&::UnityEngine::ProBuilder::FaceRebuildData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66be970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Face*& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get_face() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr ::UnityEngine::ProBuilder::Face* const& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get_face() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr void UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_set_face(::UnityEngine::ProBuilder::Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___face = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* const& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_set_vertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertices = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get_sharedIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedIndexes;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get_sharedIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedIndexes;
}
constexpr void UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_set_sharedIndexes(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedIndexes = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get_sharedIndexesUV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedIndexesUV;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get_sharedIndexesUV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedIndexesUV;
}
constexpr void UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_set_sharedIndexesUV(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedIndexesUV = value;
}
constexpr int32_t& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get__appliedOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appliedOffset;
}
constexpr int32_t const& UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_get__appliedOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appliedOffset;
}
constexpr void UnityEngine::ProBuilder::FaceRebuildData::__cordl_internal_set__appliedOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appliedOffset = value;
}
inline int32_t UnityEngine::ProBuilder::FaceRebuildData::Offset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(), { "Offset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::FaceRebuildData::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::FaceRebuildData::Apply(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>* newFaces,
                                                            ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(),
                                       { "Apply",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>*>(),
                                           ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newFaces, mesh, vertices, faces);
}
inline void UnityEngine::ProBuilder::FaceRebuildData::Apply(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>* newFaces,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                            ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                            ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedVertexLookup,
                                                            ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedTextureLookup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(),
                                                           { "Apply",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::FaceRebuildData*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newFaces, vertices, faces, sharedVertexLookup, sharedTextureLookup);
}
inline void UnityEngine::ProBuilder::FaceRebuildData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::FaceRebuildData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData* UnityEngine::ProBuilder::FaceRebuildData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::FaceRebuildData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::FaceRebuildData::FaceRebuildData() {}
