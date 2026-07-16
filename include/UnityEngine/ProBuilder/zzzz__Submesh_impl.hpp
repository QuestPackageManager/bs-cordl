#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Submesh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Submesh_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.get_indexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::Submesh::*)()>(
    &::UnityEngine::ProBuilder::Submesh::get_indexes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66f1a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "get_indexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.set_indexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Submesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::Submesh::set_indexes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66f1a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(),
                                                                                           { "set_indexes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.get_topology
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshTopology (::UnityEngine::ProBuilder::Submesh::*)()>(&::UnityEngine::ProBuilder::Submesh::get_topology)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f1aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "get_topology", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.set_topology
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Submesh::*)(::UnityEngine::MeshTopology)>(&::UnityEngine::ProBuilder::Submesh::set_topology)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f1af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "set_topology", {}, { ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.get_submeshIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Submesh::*)()>(&::UnityEngine::ProBuilder::Submesh::get_submeshIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f1afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "get_submeshIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.set_submeshIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Submesh::*)(int32_t)>(&::UnityEngine::ProBuilder::Submesh::set_submeshIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f1b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "set_submeshIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Submesh::*)(int32_t, ::UnityEngine::MeshTopology, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::Submesh::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66f1b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(),
                            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Submesh::*)(::UnityEngine::Mesh*, int32_t)>(&::UnityEngine::ProBuilder::Submesh::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66f1bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Submesh::*)()>(&::UnityEngine::ProBuilder::Submesh::ToString)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x66f1cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.GetSubmeshCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::Submesh::GetSubmeshCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66f1dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "GetSubmeshCount", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.GetSubmeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Submesh*> (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, int32_t,
                                                                                                         ::UnityEngine::MeshTopology)>(&::UnityEngine::ProBuilder::Submesh::GetSubmeshes)> {
  constexpr static std::size_t size = 0x914;
  constexpr static std::size_t addrs = 0x66f1e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "GetSubmeshes",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Submesh.MapFaceMaterialsToSubmeshIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::Submesh::MapFaceMaterialsToSubmeshIndex)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x66f2750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "MapFaceMaterialsToSubmeshIndex", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& UnityEngine::ProBuilder::Submesh::__cordl_internal_get_m_Indexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indexes;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::ProBuilder::Submesh::__cordl_internal_get_m_Indexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Indexes;
}
constexpr void UnityEngine::ProBuilder::Submesh::__cordl_internal_set_m_Indexes(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Indexes = value;
}
constexpr ::UnityEngine::MeshTopology& UnityEngine::ProBuilder::Submesh::__cordl_internal_get_m_Topology() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Topology;
}
constexpr ::UnityEngine::MeshTopology const& UnityEngine::ProBuilder::Submesh::__cordl_internal_get_m_Topology() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Topology;
}
constexpr void UnityEngine::ProBuilder::Submesh::__cordl_internal_set_m_Topology(::UnityEngine::MeshTopology value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Topology = value;
}
constexpr int32_t& UnityEngine::ProBuilder::Submesh::__cordl_internal_get_m_SubmeshIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmeshIndex;
}
constexpr int32_t const& UnityEngine::ProBuilder::Submesh::__cordl_internal_get_m_SubmeshIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmeshIndex;
}
constexpr void UnityEngine::ProBuilder::Submesh::__cordl_internal_set_m_SubmeshIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubmeshIndex = value;
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::Submesh::get_indexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "get_indexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Submesh::set_indexes(::System::Collections::Generic::IEnumerable_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "set_indexes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::MeshTopology UnityEngine::ProBuilder::Submesh::get_topology() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "get_topology", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Submesh::set_topology(::UnityEngine::MeshTopology value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "set_topology", {}, { ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ProBuilder::Submesh::get_submeshIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "get_submeshIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Submesh::set_submeshIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "set_submeshIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Submesh::_ctor(int32_t submeshIndex, ::UnityEngine::MeshTopology topology, ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(),
                          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submeshIndex, topology, indexes);
}
inline void UnityEngine::ProBuilder::Submesh::_ctor(::UnityEngine::Mesh* mesh, int32_t subMeshIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, subMeshIndex);
}
inline ::StringW UnityEngine::ProBuilder::Submesh::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::Submesh::GetSubmeshCount(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "GetSubmeshCount", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mesh);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Submesh*> UnityEngine::ProBuilder::Submesh::GetSubmeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                                                                    int32_t submeshCount, ::UnityEngine::MeshTopology preferredTopology) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(), { "GetSubmeshes",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Submesh*>>(nullptr, ___internal_method, faces, submeshCount, preferredTopology);
}
inline void UnityEngine::ProBuilder::Submesh::MapFaceMaterialsToSubmeshIndex(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Submesh*>(),
                                                                                         { "MapFaceMaterialsToSubmeshIndex", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
inline ::UnityEngine::ProBuilder::Submesh* UnityEngine::ProBuilder::Submesh::New_ctor(int32_t submeshIndex, ::UnityEngine::MeshTopology topology,
                                                                                      ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Submesh*>(submeshIndex, topology, indexes));
}
inline ::UnityEngine::ProBuilder::Submesh* UnityEngine::ProBuilder::Submesh::New_ctor(::UnityEngine::Mesh* mesh, int32_t subMeshIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Submesh*>(mesh, subMeshIndex));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Submesh::Submesh() {}
