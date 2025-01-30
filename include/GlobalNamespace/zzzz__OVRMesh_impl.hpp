#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMesh.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider.GetMeshType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMesh_MeshType (::GlobalNamespace::OVRMesh_IOVRMeshDataProvider::*)()>(
    &::GlobalNamespace::OVRMesh_IOVRMeshDataProvider::GetMeshType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRMesh_MeshType GlobalNamespace::OVRMesh_IOVRMeshDataProvider::GetMeshType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMesh_MeshType, false>(this, ___internal_method);
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
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.get_IsInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4038c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "get_IsInitialized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.set_IsInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMesh::*)(bool)>(&::GlobalNamespace::OVRMesh::set_IsInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4038c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "set_IsInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.get_Mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::get_Mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4038c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "get_Mesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.SetMeshType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMesh::*)(::GlobalNamespace::OVRMesh_MeshType)>(
    &::GlobalNamespace::OVRMesh::SetMeshType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4038c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "SetMeshType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMesh_MeshType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4038c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.ShouldInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::ShouldInitialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4038d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "ShouldInitialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMesh::*)(::GlobalNamespace::OVRMesh_MeshType)>(&::GlobalNamespace::OVRMesh::Initialize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4038da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMesh_MeshType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh.TransformOvrpMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMesh::*)(::GlobalNamespace::OVRPlugin_Mesh*, ::UnityEngine::Mesh*)>(
    &::GlobalNamespace::OVRMesh::TransformOvrpMesh)> {
  constexpr static std::size_t size = 0xa78;
  constexpr static std::size_t addrs = 0x4038e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "TransformOvrpMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Mesh*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMesh::*)()>(&::GlobalNamespace::OVRMesh::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x40398d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "get_IsInitialized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMesh::set_IsInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "set_IsInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::OVRMesh::get_Mesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "get_Mesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMesh::SetMeshType(::GlobalNamespace::OVRMesh_MeshType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "SetMeshType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMesh_MeshType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void GlobalNamespace::OVRMesh::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRMesh::ShouldInitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "ShouldInitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMesh::Initialize(::GlobalNamespace::OVRMesh_MeshType meshType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMesh_MeshType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshType);
}
inline void GlobalNamespace::OVRMesh::TransformOvrpMesh(::GlobalNamespace::OVRPlugin_Mesh* ovrpMesh, ::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), "TransformOvrpMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Mesh*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ovrpMesh, mesh);
}
inline void GlobalNamespace::OVRMesh::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMesh*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMesh* GlobalNamespace::OVRMesh::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRMesh*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMesh::OVRMesh() {}
