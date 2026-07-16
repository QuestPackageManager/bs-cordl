#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMesh.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider.GetMeshType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMesh_MeshType (::GlobalNamespace::OVRMesh_IOVRMeshDataProvider::*)()>(
    &::GlobalNamespace::OVRMesh_IOVRMeshDataProvider::GetMeshType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>(), { ::i2c::class_of<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRMesh_IOVRMeshDataProvider::GetMeshType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMesh_MeshType>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRMesh_MeshType::OVRMesh_MeshType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMesh_MeshType::OVRMesh_MeshType() {}
constexpr ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRMesh_MeshType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRMesh_MeshType::HandLeft{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRMesh_MeshType::HandRight{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRMesh_MeshType::XRHandLeft{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRMesh_MeshType::XRHandRight{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.get_IsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efebe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "get_IsInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.set_IsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMesh::*)(bool)>(&::GlobalNamespace::OVRMesh::set_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efebf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "set_IsInitialized", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.get_Mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::get_Mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efebf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "get_Mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.GetMeshType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMesh_MeshType (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::GetMeshType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efec00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "GetMeshType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.SetMeshType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMesh::*)(::GlobalNamespace::OVRMesh_MeshType)>(&::GlobalNamespace::OVRMesh::SetMeshType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efec08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "SetMeshType", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5efec10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.ShouldInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::ShouldInitialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5efed20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "ShouldInitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMesh::*)(::GlobalNamespace::OVRMesh_MeshType)>(&::GlobalNamespace::OVRMesh::Initialize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5efed48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.TransformOvrpMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMesh::*)(::GlobalNamespace::OVRPlugin_Mesh*, ::UnityEngine::Mesh*)>(
    &::GlobalNamespace::OVRMesh::TransformOvrpMesh)> {
  constexpr static std::size_t size = 0xa58;
  constexpr static std::size_t addrs = 0x5efee08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(),
                                                             { "TransformOvrpMesh", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Mesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5eff860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*& GlobalNamespace::OVRMesh::__cordl_internal_get__dataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProvider;
}
constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* const& GlobalNamespace::OVRMesh::__cordl_internal_get__dataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProvider;
}
constexpr void GlobalNamespace::OVRMesh::__cordl_internal_set__dataProvider(::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataProvider = value;
}
constexpr ::GlobalNamespace::OVRMesh_MeshType& GlobalNamespace::OVRMesh::__cordl_internal_get__meshType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshType;
}
constexpr ::GlobalNamespace::OVRMesh_MeshType const& GlobalNamespace::OVRMesh::__cordl_internal_get__meshType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshType;
}
constexpr void GlobalNamespace::OVRMesh::__cordl_internal_set__meshType(::GlobalNamespace::OVRMesh_MeshType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshType = value;
}
constexpr ::GlobalNamespace::OVRMesh_MeshType& GlobalNamespace::OVRMesh::__cordl_internal_get__loadedMeshType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedMeshType;
}
constexpr ::GlobalNamespace::OVRMesh_MeshType const& GlobalNamespace::OVRMesh::__cordl_internal_get__loadedMeshType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedMeshType;
}
constexpr void GlobalNamespace::OVRMesh::__cordl_internal_set__loadedMeshType(::GlobalNamespace::OVRMesh_MeshType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadedMeshType = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::OVRMesh::__cordl_internal_get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::OVRMesh::__cordl_internal_get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void GlobalNamespace::OVRMesh::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mesh = value;
}
constexpr bool& GlobalNamespace::OVRMesh::__cordl_internal_get__IsInitialized_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRMesh::__cordl_internal_get__IsInitialized_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr void GlobalNamespace::OVRMesh::__cordl_internal_set__IsInitialized_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsInitialized_k__BackingField = value;
}
inline bool GlobalNamespace::OVRMesh::get_IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "get_IsInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMesh::set_IsInitialized(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "set_IsInitialized", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::OVRMesh::get_Mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "get_Mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRMesh::GetMeshType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "GetMeshType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMesh_MeshType>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMesh::SetMeshType(::GlobalNamespace::OVRMesh_MeshType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "SetMeshType", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::OVRMesh::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRMesh::ShouldInitialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "ShouldInitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMesh::Initialize(::GlobalNamespace::OVRMesh_MeshType meshType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::OVRMesh_MeshType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshType);
}
inline void GlobalNamespace::OVRMesh::TransformOvrpMesh(::GlobalNamespace::OVRPlugin_Mesh* ovrpMesh, ::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(),
                                                           { "TransformOvrpMesh", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Mesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ovrpMesh, mesh);
}
inline void GlobalNamespace::OVRMesh::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRMesh*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMesh* GlobalNamespace::OVRMesh::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRMesh*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMesh::OVRMesh() {}
