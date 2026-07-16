#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/VertexPositioning.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__VertexPositioning_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::VertexPositioning.VerticesInWorldSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::VertexPositioning::VerticesInWorldSpace)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x66f98f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                                                           { "VerticesInWorldSpace", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::VertexPositioning.TranslateVerticesInWorldSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t>, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInWorldSpace)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x66f9a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
            { "TranslateVerticesInWorldSpace", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::VertexPositioning.TranslateVerticesInWorldSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t>, ::UnityEngine::Vector3, float_t, bool)>(
    &::UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInWorldSpace)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x66f9b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                                                           { "TranslateVerticesInWorldSpace",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::VertexPositioning.TranslateVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::VertexPositioning::TranslateVertices)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x66fa10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                             { "TranslateVertices",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::VertexPositioning.TranslateVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*,
                                                                ::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::VertexPositioning::TranslateVertices)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x66fa3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                { "TranslateVertices",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::VertexPositioning.TranslateVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*,
                                                                ::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::VertexPositioning::TranslateVertices)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x66fa4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                { "TranslateVertices",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::VertexPositioning.TranslateVerticesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInternal)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x66fa240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                             { "TranslateVerticesInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::VertexPositioning.SetSharedVertexPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int32_t, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::VertexPositioning::SetSharedVertexPosition)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x66fa61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                            { "SetSharedVertexPosition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::VertexPositioning.SetSharedVertexValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int32_t, ::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::VertexPositioning::SetSharedVertexValues)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x66fa988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
            { "SetSharedVertexValues", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::VertexPositioning::setStaticF_s_CoincidentVertices(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_CoincidentVertices", ::UnityEngine::ProBuilder::VertexPositioning*>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::VertexPositioning::getStaticF_s_CoincidentVertices() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_CoincidentVertices", ::UnityEngine::ProBuilder::VertexPositioning*>();
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::VertexPositioning::VerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                                                         { "VerticesInWorldSpace", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, mesh);
}
inline void UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t> indexes, ::UnityEngine::Vector3 offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
          { "TranslateVerticesInWorldSpace", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, indexes, offset);
}
inline void UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInWorldSpace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t> indexes, ::UnityEngine::Vector3 offset,
                                                                                      float_t snapValue, bool snapAxisOnly) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                                                         { "TranslateVerticesInWorldSpace",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, indexes, offset, snapValue, snapAxisOnly);
}
inline void UnityEngine::ProBuilder::VertexPositioning::TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes,
                                                                          ::UnityEngine::Vector3 offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                           { "TranslateVertices",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, indexes, offset);
}
inline void UnityEngine::ProBuilder::VertexPositioning::TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                          ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::UnityEngine::Vector3 offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                              { "TranslateVertices",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, edges, offset);
}
inline void UnityEngine::ProBuilder::VertexPositioning::TranslateVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                          ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Vector3 offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                              { "TranslateVertices",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces, offset);
}
inline void UnityEngine::ProBuilder::VertexPositioning::TranslateVerticesInternal(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indices,
                                                                                  ::UnityEngine::Vector3 offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                                                           { "TranslateVerticesInternal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, indices, offset);
}
inline void UnityEngine::ProBuilder::VertexPositioning::SetSharedVertexPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t sharedVertexHandle, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
                          { "SetSharedVertexPosition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, sharedVertexHandle, position);
}
inline void UnityEngine::ProBuilder::VertexPositioning::SetSharedVertexValues(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t sharedVertexHandle, ::UnityEngine::ProBuilder::Vertex* vertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::VertexPositioning*>(),
          { "SetSharedVertexValues", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, sharedVertexHandle, vertex);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::VertexPositioning::VertexPositioning() {}
