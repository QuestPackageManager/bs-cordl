#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InputInterfaceMesh.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceMesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceMesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::*)()>(
    &::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25c4d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>*&
HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__cordl_internal_get__inputMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputMeshes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>*> const&
HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__cordl_internal_get__inputMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputMeshes;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__cordl_internal_set__inputMeshes(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputMeshes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__cordl_internal_get__hasLOD() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLOD;
}
constexpr bool const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__cordl_internal_get__hasLOD() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLOD;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__cordl_internal_set__hasLOD(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasLOD = value;
}
inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes* HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes*>());
}
inline void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__HEU_InputInterfaceMesh__HEU_InputDataMeshes() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::*)()>(
    &::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25c4dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__materials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const&
HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__materials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materials;
}
constexpr void
HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__materials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__meshPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshPath;
}
constexpr ::StringW const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__meshPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshPath;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__meshPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__meshName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshName;
}
constexpr ::StringW const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__meshName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshName;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__meshName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__numVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numVertices;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__numVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numVertices;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__numVertices(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numVertices = value;
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__numSubMeshes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numSubMeshes;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__numSubMeshes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numSubMeshes;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__numSubMeshes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numSubMeshes = value;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__indexStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexStart;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__indexStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexStart;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__indexStart(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indexStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__indexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexCount;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__indexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexCount;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__indexCount(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indexCount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__LODScreenTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LODScreenTransition;
}
constexpr float_t const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__LODScreenTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LODScreenTransition;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__LODScreenTransition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LODScreenTransition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh* HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>());
}
inline void HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh::__HEU_InputInterfaceMesh__HEU_InputDataMesh() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceMesh::*)()>(&::HoudiniEngineUnity::HEU_InputInterfaceMesh::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25c1140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceMesh.CreateInputNodeWithDataUpload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::UnityEngine::GameObject*, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateInputNodeWithDataUpload)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x25c1160;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceMesh.IsThisInputObjectSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceMesh::IsThisInputObjectSupported)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x25c3848;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceMesh.GetUVsFromMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t)>(
        &::HoudiniEngineUnity::HEU_InputInterfaceMesh::GetUVsFromMesh)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25c39ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "GetUVsFromMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceMesh.UploadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::HoudiniEngineUnity::HEU_InputData*)>(&::HoudiniEngineUnity::HEU_InputInterfaceMesh::UploadData)> {
  constexpr static std::size_t size = 0x21f0;
  constexpr static std::size_t addrs = 0x25c1658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "UploadData", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceMesh.GenerateMeshDatasFromGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes* (
    ::HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputInterfaceMesh::GenerateMeshDatasFromGameObject)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x25c12e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "GenerateMeshDatasFromGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceMesh.CreateSingleMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh* (*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateSingleMeshData)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x25c3a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "CreateSingleMeshData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceMesh.GetMeshFromObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceMesh::GetMeshFromObject)> {
  constexpr static std::size_t size = 0x1138;
  constexpr static std::size_t addrs = 0x25c3c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "GetMeshFromObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::HEU_InputInterfaceMesh* HoudiniEngineUnity::HEU_InputInterfaceMesh::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>());
}
inline void HoudiniEngineUnity::HEU_InputInterfaceMesh::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t connectNodeID, ::UnityEngine::GameObject* inputObject,
                                                                                      ByRef<int32_t> inputNodeID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, connectNodeID, inputObject, inputNodeID);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceMesh::IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inputObject);
}
inline void HoudiniEngineUnity::HEU_InputInterfaceMesh::GetUVsFromMesh(::UnityEngine::Mesh* mesh, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> srcUVs,
                                                                       ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* destUVs, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "GetUVsFromMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, srcUVs, destUVs, index);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceMesh::UploadData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t inputNodeID, ::HoudiniEngineUnity::HEU_InputData* inputData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "UploadData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, inputNodeID, inputData);
}
inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes* HoudiniEngineUnity::HEU_InputInterfaceMesh::GenerateMeshDatasFromGameObject(::UnityEngine::GameObject* inputObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "GenerateMeshDatasFromGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes*, false>(this, ___internal_method, inputObject);
}
inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh* HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateSingleMeshData(::UnityEngine::GameObject* meshGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "CreateSingleMeshData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*, false>(nullptr, ___internal_method, meshGameObject);
}
inline ::UnityW<::UnityEngine::Mesh> HoudiniEngineUnity::HEU_InputInterfaceMesh::GetMeshFromObject(::UnityEngine::GameObject* meshGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceMesh*>::get(), "GetMeshFromObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method, meshGameObject);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputInterfaceMesh() {}
