#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OnWillRenderObjectTrigger_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnWillRenderObjectTrigger.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OnWillRenderObjectTrigger::*)()>(&::GlobalNamespace::OnWillRenderObjectTrigger::OnEnable)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x21159a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnWillRenderObjectTrigger.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OnWillRenderObjectTrigger::*)()>(&::GlobalNamespace::OnWillRenderObjectTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2115d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(),
                                                                               "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnWillRenderObjectTrigger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OnWillRenderObjectTrigger::*)()>(&::GlobalNamespace::OnWillRenderObjectTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2115dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Shader*& GlobalNamespace::OnWillRenderObjectTrigger::__get__overrideShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::OnWillRenderObjectTrigger::__get__overrideShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideShader;
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__overrideShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OnWillRenderObjectTrigger::__get__renderQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderQueue;
}
constexpr int32_t const& GlobalNamespace::OnWillRenderObjectTrigger::__get__renderQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderQueue;
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__renderQueue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderQueue = value;
}
constexpr ::UnityEngine::Material*& GlobalNamespace::OnWillRenderObjectTrigger::__get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::OnWillRenderObjectTrigger::__get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__material(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Mesh*& GlobalNamespace::OnWillRenderObjectTrigger::__get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& GlobalNamespace::OnWillRenderObjectTrigger::__get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__mesh(::UnityEngine::Mesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshFilter*& GlobalNamespace::OnWillRenderObjectTrigger::__get__meshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& GlobalNamespace::OnWillRenderObjectTrigger::__get__meshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__meshFilter(::UnityEngine::MeshFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshRenderer*& GlobalNamespace::OnWillRenderObjectTrigger::__get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& GlobalNamespace::OnWillRenderObjectTrigger::__get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__meshRenderer(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OnWillRenderObjectTrigger::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OnWillRenderObjectTrigger::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OnWillRenderObjectTrigger* GlobalNamespace::OnWillRenderObjectTrigger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OnWillRenderObjectTrigger*>());
}
inline void GlobalNamespace::OnWillRenderObjectTrigger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnWillRenderObjectTrigger::OnWillRenderObjectTrigger() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
