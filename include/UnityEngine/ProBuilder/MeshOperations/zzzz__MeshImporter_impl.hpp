#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/MeshImporter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__MeshImporter_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__MeshImportSettings_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__MeshImporter_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::*)()>(&::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x672fd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c._Import_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::*)(::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::_Import_b__9_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x672fd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>(),
                                                                                           { "<Import>b__9_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c* UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__9_0", ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__9_0", ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::_Import_b__9_0(::UnityEngine::ProBuilder::Vertex* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>(),
                                                                                         { "<Import>b__9_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c* UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c::MeshImporter___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x672e5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(
    ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Material*>, ::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x672e758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x672e870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*)>(&::UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x672e878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(),
                                                { "Import", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter.Import
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import)> {
  constexpr static std::size_t size = 0xabc;
  constexpr static std::size_t addrs = 0x672ea08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(),
                                                                                           { "Import", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_SourceMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_SourceMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceMesh;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_set_m_SourceMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceMesh = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_SourceMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_SourceMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceMaterials;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_set_m_SourceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceMaterials = value;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_Destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Destination;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_Destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Destination;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_set_m_Destination(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Destination = value;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*>& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_Vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*> const& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_Vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_set_m_Vertices(::ArrayW<::UnityEngine::ProBuilder::Vertex*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Vertices = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::setStaticF_k_DefaultImportSettings(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*, "k_DefaultImportSettings", ::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* UnityEngine::ProBuilder::MeshOperations::MeshImporter::getStaticF_k_DefaultImportSettings() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*, "k_DefaultImportSettings", ::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor(::UnityEngine::Mesh* sourceMesh, ::ArrayW<::UnityEngine::Material*> sourceMaterials,
                                                                         ::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceMesh, sourceMaterials, destination);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline bool UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import(::UnityEngine::GameObject* go, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(),
                                              { "Import", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, go, importSettings);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(),
                                                                                         { "Import", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, importSettings);
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor(::UnityEngine::GameObject* gameObject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(gameObject));
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor(::UnityEngine::Mesh* sourceMesh,
                                                                                                                                ::ArrayW<::UnityEngine::Material*> sourceMaterials,
                                                                                                                                ::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(sourceMesh, sourceMaterials, destination));
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(destination));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshImporter::MeshImporter() {}
