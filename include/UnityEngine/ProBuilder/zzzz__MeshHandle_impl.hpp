#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshHandle.get_mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (::UnityEngine::ProBuilder::MeshHandle::*)()>(
    &::UnityEngine::ProBuilder::MeshHandle::get_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b4c104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshHandle*>::get(), "get_mesh",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshHandle::*)(::UnityEngine::Transform*, ::UnityEngine::Mesh*)>(
    &::UnityEngine::ProBuilder::MeshHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b4c10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshHandle*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshHandle.DrawMeshNow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshHandle::*)(int32_t)>(&::UnityEngine::ProBuilder::MeshHandle::DrawMeshNow)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2b4c138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshHandle*>::get(), "DrawMeshNow", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& UnityEngine::ProBuilder::MeshHandle::__get_m_Transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& UnityEngine::ProBuilder::MeshHandle::__get_m_Transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Transform;
}
constexpr void UnityEngine::ProBuilder::MeshHandle::__set_m_Transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Mesh*& UnityEngine::ProBuilder::MeshHandle::__get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Mesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& UnityEngine::ProBuilder::MeshHandle::__get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::ProBuilder::MeshHandle::__set_m_Mesh(::UnityEngine::Mesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Mesh* UnityEngine::ProBuilder::MeshHandle::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshHandle*>::get(), "get_mesh",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::MeshHandle* UnityEngine::ProBuilder::MeshHandle::New_ctor(::UnityEngine::Transform* transform, ::UnityEngine::Mesh* mesh) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshHandle*>(transform, mesh));
}
inline void UnityEngine::ProBuilder::MeshHandle::_ctor(::UnityEngine::Transform* transform, ::UnityEngine::Mesh* mesh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshHandle*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, mesh);
}
inline void UnityEngine::ProBuilder::MeshHandle::DrawMeshNow(int32_t submeshIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshHandle*>::get(), "DrawMeshNow", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, submeshIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshHandle::MeshHandle() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
