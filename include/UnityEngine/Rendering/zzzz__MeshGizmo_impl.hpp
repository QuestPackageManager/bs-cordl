#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MeshGizmo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MeshGizmo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/Rendering/zzzz__MeshGizmo_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::Rendering::MeshGizmo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0::MeshGizmo___c__DisplayClass10_0(::UnityEngine::Rendering::MeshGizmo* __4__this, ::UnityEngine::Color color) noexcept {
  this->__4__this = __4__this;
  this->color = color;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0::MeshGizmo___c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::MeshGizmo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::MeshGizmo::*)(int32_t)>(&::UnityEngine::Rendering::MeshGizmo::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x66105d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MeshGizmo.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::MeshGizmo::*)()>(&::UnityEngine::Rendering::MeshGizmo::Clear)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6610744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MeshGizmo.AddWireCube
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::MeshGizmo::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::MeshGizmo::AddWireCube)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x66107ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "AddWireCube", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MeshGizmo.DrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::MeshGizmo::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::CompareFunction, ::StringW)>(&::UnityEngine::Rendering::MeshGizmo::DrawMesh)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6610d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MeshGizmo.RenderWireframe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::MeshGizmo::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::CompareFunction, ::StringW)>(&::UnityEngine::Rendering::MeshGizmo::RenderWireframe)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6610eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "RenderWireframe", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MeshGizmo.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::MeshGizmo::*)()>(&::UnityEngine::Rendering::MeshGizmo::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6610f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::MeshGizmo._AddWireCube_g__AddEdge_10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::MeshGizmo::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ByRef<::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0>)>(&::UnityEngine::Rendering::MeshGizmo::_AddWireCube_g__AddEdge_10_0)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x6610a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "<AddWireCube>g__AddEdge|10_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::Rendering::MeshGizmo::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::Rendering::MeshGizmo::__cordl_internal_set_vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr void UnityEngine::Rendering::MeshGizmo::__cordl_internal_set_indices(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colors;
}
constexpr void UnityEngine::Rendering::MeshGizmo::__cordl_internal_set_colors(::System::Collections::Generic::List_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_wireMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_wireMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMaterial;
}
constexpr void UnityEngine::Rendering::MeshGizmo::__cordl_internal_set_wireMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wireMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_dottedWireMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dottedWireMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_dottedWireMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dottedWireMaterial;
}
constexpr void UnityEngine::Rendering::MeshGizmo::__cordl_internal_set_dottedWireMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dottedWireMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_solidMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solidMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::MeshGizmo::__cordl_internal_get_solidMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___solidMaterial;
}
constexpr void UnityEngine::Rendering::MeshGizmo::__cordl_internal_set_solidMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___solidMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::MeshGizmo::setStaticF_vertexCountPerCube(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "vertexCountPerCube", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::MeshGizmo::getStaticF_vertexCountPerCube() {
  return ::cordl_internals::getStaticField<int32_t, "vertexCountPerCube", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get>();
}
inline void UnityEngine::Rendering::MeshGizmo::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
inline void UnityEngine::Rendering::MeshGizmo::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::MeshGizmo::AddWireCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "AddWireCube", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, center, size, color);
}
inline void UnityEngine::Rendering::MeshGizmo::DrawMesh(::UnityEngine::Matrix4x4 trs, ::UnityEngine::Material* mat, ::UnityEngine::MeshTopology topology,
                                                        ::UnityEngine::Rendering::CompareFunction depthTest, ::StringW gizmoName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "DrawMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trs, mat, topology, depthTest, gizmoName);
}
inline void UnityEngine::Rendering::MeshGizmo::RenderWireframe(::UnityEngine::Matrix4x4 trs, ::UnityEngine::Rendering::CompareFunction depthTest, ::StringW gizmoName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "RenderWireframe", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trs, depthTest, gizmoName);
}
inline void UnityEngine::Rendering::MeshGizmo::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::MeshGizmo::_AddWireCube_g__AddEdge_10_0(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2,
                                                                            ::ByRef<::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::MeshGizmo*>::get(), "<AddWireCube>g__AddEdge|10_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::MeshGizmo___c__DisplayClass10_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::MeshGizmo* UnityEngine::Rendering::MeshGizmo::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::MeshGizmo*>(capacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::MeshGizmo::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::MeshGizmo::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::MeshGizmo::MeshGizmo() {}
