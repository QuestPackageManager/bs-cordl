#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\ProBuilderMesh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__HideFlags_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshArrays_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__MeshSyncState_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__RefreshMask_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__UnwrapParameters_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState::ProBuilderMesh_CacheValidState(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState::ProBuilderMesh_CacheValidState() {}
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState::SharedVertex{ static_cast<uint8_t>(0x1u) };
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState::SharedTexture{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66d6734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66dbc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Mesh", ty: "::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_VersionIndex", ty: "uint16_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::ProBuilderMesh_NonVersionedEditScope(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> m_Mesh,
                                                                                                                uint16_t m_VersionIndex) noexcept {
  this->m_Mesh = m_Mesh;
  this->m_VersionIndex = m_VersionIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_NonVersionedEditScope::ProBuilderMesh_NonVersionedEditScope() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh___c::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66dbcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c._SetUVs_b__119_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::ProBuilderMesh___c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh___c::_SetUVs_b__119_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66dbcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(), { "<SetUVs>b__119_0", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c._SetUVs_b__119_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::ProBuilderMesh___c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh___c::_SetUVs_b__119_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66dbcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(), { "<SetUVs>b__119_1", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c._get_indexCount_b__127_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh___c::_get_indexCount_b__127_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66dbcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(),
                                                                                           { "<get_indexCount>b__127_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c._get_triangleCount_b__129_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh___c::_get_triangleCount_b__129_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66dbcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(),
                                                                                           { "<get_triangleCount>b__129_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c._CopyFrom_b__172_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::ProBuilderMesh___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh___c::_CopyFrom_b__172_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66dbcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(), { "<CopyFrom>b__172_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::ProBuilderMesh___c::setStaticF___9(::UnityEngine::ProBuilder::ProBuilderMesh___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::ProBuilderMesh___c*, "<>9", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>(
      std::forward<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(value));
}
inline ::UnityEngine::ProBuilder::ProBuilderMesh___c* UnityEngine::ProBuilder::ProBuilderMesh___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::ProBuilderMesh___c*, "<>9", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh___c::setStaticF___9__119_0(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__119_0", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* UnityEngine::ProBuilder::ProBuilderMesh___c::getStaticF___9__119_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__119_0", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh___c::setStaticF___9__119_1(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__119_1", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* UnityEngine::ProBuilder::ProBuilderMesh___c::getStaticF___9__119_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__119_1", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh___c::setStaticF___9__127_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__127_0", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::ProBuilderMesh___c::getStaticF___9__127_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__127_0", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh___c::setStaticF___9__129_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__129_0", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::ProBuilderMesh___c::getStaticF___9__129_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__129_0", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh___c::setStaticF___9__172_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>*, "<>9__172_0", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::ProBuilderMesh___c::getStaticF___9__172_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>*, "<>9__172_0", ::UnityEngine::ProBuilder::ProBuilderMesh___c*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::ProBuilderMesh___c::_SetUVs_b__119_0(::UnityEngine::Vector4 x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(), { "<SetUVs>b__119_0", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, x);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::ProBuilderMesh___c::_SetUVs_b__119_1(::UnityEngine::Vector4 x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(), { "<SetUVs>b__119_1", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh___c::_get_indexCount_b__127_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(), { "<get_indexCount>b__127_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh___c::_get_triangleCount_b__129_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(),
                                                                                         { "<get_triangleCount>b__129_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::ProBuilderMesh___c::_CopyFrom_b__172_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c*>(), { "<CopyFrom>b__172_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::ProBuilderMesh___c* UnityEngine::ProBuilder::ProBuilderMesh___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ProBuilderMesh___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh___c::ProBuilderMesh___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66d856c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0._GetUnusedTextureGroup_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::_GetUnusedTextureGroup_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66dbd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0*>(),
                                                                                           { "<GetUnusedTextureGroup>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
inline void UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::_GetUnusedTextureGroup_b__0(::UnityEngine::ProBuilder::Face* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0*>(),
                                                                                         { "<GetUnusedTextureGroup>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0* UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass175_0::ProBuilderMesh___c__DisplayClass175_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66d8674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0._UnusedElementGroup_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::_UnusedElementGroup_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66dbd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0*>(),
                                                                                           { "<UnusedElementGroup>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
inline void UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::_UnusedElementGroup_b__0(::UnityEngine::ProBuilder::Face* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0*>(),
                                                                                         { "<UnusedElementGroup>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0* UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh___c__DisplayClass177_0::ProBuilderMesh___c__DisplayClass177_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_userCollisions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_userCollisions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d3004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_userCollisions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_userCollisions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_userCollisions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d300c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_userCollisions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_unwrapParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::UnwrapParameters* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_unwrapParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d3014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_unwrapParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_unwrapParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::UnwrapParameters*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_unwrapParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d301c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "set_unwrapParameters", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::UnwrapParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_renderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshRenderer> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_renderer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66cfea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_renderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_filter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshFilter> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_filter)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x66d3024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_filter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_versionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_versionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d30dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_versionIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_nonSerializedVersionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_nonSerializedVersionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d30e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_nonSerializedVersionIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_preserveMeshAssetOnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_preserveMeshAssetOnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d30ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_preserveMeshAssetOnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_preserveMeshAssetOnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_preserveMeshAssetOnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d30f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_preserveMeshAssetOnDestroy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.HasArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::MeshArrays)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::HasArrays)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x66ce404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "HasArrays", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshArrays>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_facesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_facesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d30fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_facesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_facesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::Face*>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_facesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d3104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "set_facesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_faces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_faces)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66d310c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_faces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_faces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_faces)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x66d3184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "set_faces", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateSharedVertexLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedVertexLookup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x66d3230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "InvalidateSharedVertexLookup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateSharedTextureLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedTextureLookup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x66d3310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "InvalidateSharedTextureLookup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateFaces)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x66d33f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "InvalidateFaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateCaches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateCaches)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x66d36d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "InvalidateCaches", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedVerticesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVerticesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d3704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedVerticesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_sharedVerticesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVerticesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d370c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "set_sharedVerticesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertices)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66d3714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedVertices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_sharedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVertices)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x66d378c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "set_sharedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedVertexLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertexLookup)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66d39b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedVertexLookup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSharedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSharedVertices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66d3a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                            { "SetSharedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d3af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_sharedTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d3af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "set_sharedTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedTextureLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextureLookup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x66d3b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedTextureLookup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSharedTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSharedTextures)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66d3bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                            { "SetSharedTextures", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_positionsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_positionsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d3c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_positionsInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_positionsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector3>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_positionsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d3c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_positionsInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_positions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_positions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66d3c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_positions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_positions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_positions)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x66d3cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "set_positions", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Vertex*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetVertices)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x66cf31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "GetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetVerticesInList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetVerticesInList)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x66d3d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "GetVerticesInList", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, bool)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetVertices)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x66d45d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                { "SetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_normals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_normals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66d499c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_normals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_normalsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_normalsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_normalsInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_normalsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector3>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_normalsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_normalsInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetNormals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66ce920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetNormals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_colorsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_colorsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_colorsInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_colorsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Color>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_colorsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_colorsInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_colors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Color>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_colors)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66d4a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_colors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_colors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Color>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_colors)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x66d4aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "set_colors", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetColors)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x66d4c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_tangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_tangents)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x66d4cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_tangents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_tangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_tangents)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x66d4d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "set_tangents", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_tangentsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_tangentsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_tangentsInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_tangentsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector4>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_tangentsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_tangentsInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetTangents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66ce9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetTangents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_texturesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_texturesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_texturesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_texturesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector2>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_texturesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_texturesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_textures2Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector4>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_textures2Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_textures2Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_textures2Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_textures2Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "set_textures2Internal", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_textures3Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector4>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_textures3Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_textures3Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_textures3Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_textures3Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d4f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "set_textures3Internal", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_textures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_textures)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66d4f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_textures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_textures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_textures)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x66d4f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "set_textures", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetUVs)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x66ce5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "GetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetUVs)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x66d50bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetUVs", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetUVs)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x66d51ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_faceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_faceCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66d14d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_faceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_vertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_vertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66cf2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_vertexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_edgeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_edgeCount)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66d54d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_edgeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_indexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_indexCount)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x66d5570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_indexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_triangleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_triangleCount)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x66d568c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_triangleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_meshWillBeDestroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_meshWillBeDestroyed)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x66d57b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "add_meshWillBeDestroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_meshWillBeDestroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWillBeDestroyed)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x66d58bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "remove_meshWillBeDestroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_meshWasInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_meshWasInitialized)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x66d59c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "add_meshWasInitialized", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_meshWasInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWasInitialized)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x66d5ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "remove_meshWasInitialized", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_componentWillBeDestroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_componentWillBeDestroyed)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x66d5bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "add_componentWillBeDestroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_componentWillBeDestroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_componentWillBeDestroyed)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x66d5cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                { "remove_componentWillBeDestroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_componentHasBeenReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_componentHasBeenReset)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x66d5de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "add_componentHasBeenReset", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_componentHasBeenReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_componentHasBeenReset)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x66d5ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "remove_componentHasBeenReset", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_elementSelectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_elementSelectionChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x66d5ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "add_elementSelectionChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_elementSelectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_elementSelectionChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x66d60f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                { "remove_elementSelectionChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_mesh)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66d0074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_mesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_mesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::Mesh*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d6200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_mesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_id)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66d6208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_meshSyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::MeshSyncState (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_meshSyncState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66d6228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_meshSyncState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_meshFormatVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_meshFormatVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66d62e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_meshFormatVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Awake)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x66d62f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Reset)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x66d6750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::OnDestroy)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x66d6814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.DestroyUnityMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::DestroyUnityMesh)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x66d6968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "DestroyUnityMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.IncrementVersionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::IncrementVersionIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66d497c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "IncrementVersionIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Clear)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x66d4854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.EnsureMeshFilterIsAssigned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshFilterIsAssigned)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x66d6458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "EnsureMeshFilterIsAssigned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.CreateInstanceWithPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::ArrayW<::UnityEngine::Vector3>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::CreateInstanceWithPoints)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x66d6a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "CreateInstanceWithPoints", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Create)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x66d6db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*,
                                                                                                               ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::Create)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x66d6e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*,
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::Create)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x66d7040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "Create",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GeometryWithPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Vector3>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GeometryWithPoints)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x66d6ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GeometryWithPoints", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RebuildWithPositionsAndFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*,
                                                                                                           ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::RebuildWithPositionsAndFaces)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x66d6f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "RebuildWithPositionsAndFaces",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Rebuild)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66cf2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Rebuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.ToMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::MeshTopology)>(&::UnityEngine::ProBuilder::ProBuilderMesh::ToMesh)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x66d71e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "ToMesh", {}, { ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.FinalizeToMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(&::UnityEngine::ProBuilder::ProBuilderMesh::FinalizeToMesh)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66d78d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "FinalizeToMesh", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.MakeUnique
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::MakeUnique)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x66d7920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "MakeUnique", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::CopyFrom)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x66d7af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::RefreshMask)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::Refresh)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x66d77bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Refresh", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::RefreshMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.EnsureMeshColliderIsAssigned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshColliderIsAssigned)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x66d6584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "EnsureMeshColliderIsAssigned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetUnusedTextureGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetUnusedTextureGroup)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x66d8474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetUnusedTextureGroup", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.IsValidTextureGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::IsValidTextureGroup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66d8570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "IsValidTextureGroup", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.UnusedElementGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::UnusedElementGroup)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x66d857c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "UnusedElementGroup", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::RefreshUV)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x66d7df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "RefreshUV", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetGroupUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::AutoUnwrapSettings, int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetGroupUV)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66d8678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "SetGroupUV", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshColors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66d835c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "RefreshColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetFaceColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::Color)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetFaceColor)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x66d8740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "SetFaceColor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*,
                                                                                                           ::UnityEngine::Material*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetMaterial)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x66d8a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                         { "SetMaterial", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshNormals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66d838c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "RefreshNormals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshTangents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshTangents)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66d8400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "RefreshTangents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetSharedVertexHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandle)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x66d8fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetSharedVertexHandle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetSharedVertexHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<int32_t>* (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandles)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x66d910c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "GetSharedVertexHandles", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x66d9488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "GetCoincidentVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*,
                                                                                                           ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x66d9aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "GetCoincidentVertices",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<int32_t>*)>(
        &::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x66da094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "GetCoincidentVertices",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x66d9564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
            { "GetCoincidentVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x66da710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "GetCoincidentVertices", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetVerticesCoincident
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetVerticesCoincident)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x66da8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "SetVerticesCoincident", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetTexturesCoincident
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetTexturesCoincident)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x66da994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "SetTexturesCoincident", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.AddToSharedVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::AddToSharedVertex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66da9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "AddToSharedVertex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.AddSharedVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::SharedVertex*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::AddSharedVertex)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x66daa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "AddSharedVertex", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SharedVertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66dab1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_selectable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66dab24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_selectable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFaceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66dab2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedFaceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedVertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66dab44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedVertexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedEdgeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgeCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66dab5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedEdgeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedSharedVerticesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVerticesCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66dab74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedSharedVerticesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedCoincidentVertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66dae58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedCoincidentVertexCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedSharedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVertices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66dae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedSharedVertices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedCoincidentVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66dae88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedCoincidentVertices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.CacheSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::CacheSelection)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x66dab8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "CacheSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetSelectedFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetSelectedFaces)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x66daea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetSelectedFaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFaceIndexes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndexes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66daf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedFaceIndexes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertices)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66dafe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedVertices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdges)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66db060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedEdges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFacesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFacesInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66db0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedFacesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedFacesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::Face*>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFacesInternal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x66db0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "set_selectedFacesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFaceIndicesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndicesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66db1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedFaceIndicesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedFaceIndicesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<int32_t>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFaceIndicesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66db1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_selectedFaceIndicesInternal", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedEdgesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66db1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedEdgesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedEdgesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::ProBuilder::Edge>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedEdgesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66db1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "set_selectedEdgesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedIndexesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedIndexesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66db1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedIndexesInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedIndexesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<int32_t>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedIndexesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66db1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_selectedIndexesInternal", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetActiveFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveFace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66db1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetActiveFace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetActiveEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveEdge)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x66db234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetActiveEdge", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetActiveVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveVertex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66db2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetActiveVertex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.AddToFaceSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::AddToFaceSelection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66db2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "AddToFaceSelection", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66db580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "SetSelectedFaces", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x66db36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "SetSelectedFaces", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedEdges)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x66db648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "SetSelectedEdges", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedVertices)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x66db76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                             { "SetSelectedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RemoveFromFaceSelectionAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::RemoveFromFaceSelectionAtIndex)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66db8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "RemoveFromFaceSelectionAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.ClearSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::ClearSelection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66d6698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "ClearSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x66db940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._set_selectedFacesInternal_b__232_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::_set_selectedFacesInternal_b__232_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66dbb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                           { "<set_selectedFacesInternal>b__232_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._SetSelectedFaces_b__246_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__246_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66dbb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "<SetSelectedFaces>b__246_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._SetSelectedFaces_b__247_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__247_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66dbbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "<SetSelectedFaces>b__247_0", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._SetSelectedFaces_b__247_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__247_1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66dbc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "<SetSelectedFaces>b__247_1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_MeshFormatVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshFormatVersion;
}
constexpr int32_t const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_MeshFormatVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshFormatVersion;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_MeshFormatVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MeshFormatVersion = value;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Face*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Faces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Faces;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Face*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Faces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Faces;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Faces(::ArrayW<::UnityEngine::ProBuilder::Face*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Faces = value;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedVertices;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedVertices;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SharedVertices(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SharedVertices = value;
}
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_CacheValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheValid;
}
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_CacheValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheValid;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_CacheValid(::UnityEngine::ProBuilder::ProBuilderMesh_CacheValidState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CacheValid = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedVertexLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedVertexLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedVertexLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedVertexLookup;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SharedVertexLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SharedVertexLookup = value;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedTextures;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedTextures;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SharedTextures = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedTextureLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedTextureLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedTextureLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedTextureLookup;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SharedTextureLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SharedTextureLookup = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Positions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Positions;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Positions(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Positions = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures0;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures0;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Textures0(::ArrayW<::UnityEngine::Vector2> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Textures0 = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures2;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures2;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Textures2(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Textures2 = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures3;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures3;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Textures3(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Textures3 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Tangents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tangents;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Tangents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tangents;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Tangents(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tangents = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Normals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Normals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normals;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Normals(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Normals = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Colors(::ArrayW<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Colors = value;
}
constexpr bool& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get__userCollisions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userCollisions_k__BackingField;
}
constexpr bool const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get__userCollisions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userCollisions_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set__userCollisions_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userCollisions_k__BackingField = value;
}
constexpr ::UnityEngine::ProBuilder::UnwrapParameters*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_UnwrapParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnwrapParameters;
}
constexpr ::UnityEngine::ProBuilder::UnwrapParameters* const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_UnwrapParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnwrapParameters;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_UnwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnwrapParameters = value;
}
constexpr bool& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_PreserveMeshAssetOnDestroy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreserveMeshAssetOnDestroy;
}
constexpr bool const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_PreserveMeshAssetOnDestroy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreserveMeshAssetOnDestroy;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_PreserveMeshAssetOnDestroy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreserveMeshAssetOnDestroy = value;
}
constexpr ::StringW& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_assetGuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetGuid;
}
constexpr ::StringW const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_assetGuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetGuid;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_assetGuid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assetGuid = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Mesh = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_MeshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_MeshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshRenderer;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_MeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MeshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_MeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_MeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshFilter;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_MeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MeshFilter = value;
}
constexpr uint16_t& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_VersionIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VersionIndex;
}
constexpr uint16_t const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_VersionIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VersionIndex;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_VersionIndex(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VersionIndex = value;
}
constexpr uint16_t& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_InstanceVersionIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceVersionIndex;
}
constexpr uint16_t const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_InstanceVersionIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceVersionIndex;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_InstanceVersionIndex(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceVersionIndex = value;
}
constexpr bool& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_IsSelectable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSelectable;
}
constexpr bool const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_IsSelectable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsSelectable;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_IsSelectable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsSelectable = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedFaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedFaces;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedFaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedFaces;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedFaces(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedFaces = value;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedEdges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedEdges;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedEdges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedEdges;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedEdges(::ArrayW<::UnityEngine::ProBuilder::Edge> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedEdges = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedVertices;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedVertices;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedVertices(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedVertices = value;
}
constexpr bool& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedCacheDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCacheDirty;
}
constexpr bool const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedCacheDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCacheDirty;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedCacheDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedCacheDirty = value;
}
constexpr int32_t& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedSharedVerticesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedSharedVerticesCount;
}
constexpr int32_t const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedSharedVerticesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedSharedVerticesCount;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedSharedVerticesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedSharedVerticesCount = value;
}
constexpr int32_t& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedCoincidentVertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCoincidentVertexCount;
}
constexpr int32_t const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedCoincidentVertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCoincidentVertexCount;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedCoincidentVertexCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedCoincidentVertexCount = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedSharedVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedSharedVertices;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedSharedVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedSharedVertices;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedSharedVertices(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedSharedVertices = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedCoincidentVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCoincidentVertices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedCoincidentVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCoincidentVertices;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedCoincidentVertices(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectedCoincidentVertices = value;
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_meshWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "meshWillBeDestroyed", ::UnityEngine::ProBuilder::ProBuilderMesh*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_meshWillBeDestroyed() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "meshWillBeDestroyed", ::UnityEngine::ProBuilder::ProBuilderMesh*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_meshWasInitialized(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "meshWasInitialized", ::UnityEngine::ProBuilder::ProBuilderMesh*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_meshWasInitialized() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "meshWasInitialized", ::UnityEngine::ProBuilder::ProBuilderMesh*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_componentWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "componentWillBeDestroyed", ::UnityEngine::ProBuilder::ProBuilderMesh*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_componentWillBeDestroyed() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "componentWillBeDestroyed", ::UnityEngine::ProBuilder::ProBuilderMesh*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_componentHasBeenReset(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "componentHasBeenReset", ::UnityEngine::ProBuilder::ProBuilderMesh*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_componentHasBeenReset() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "componentHasBeenReset", ::UnityEngine::ProBuilder::ProBuilderMesh*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_elementSelectionChanged(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "elementSelectionChanged", ::UnityEngine::ProBuilder::ProBuilderMesh*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_elementSelectionChanged() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "elementSelectionChanged", ::UnityEngine::ProBuilder::ProBuilderMesh*>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_s_CachedHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_CachedHashSet", ::UnityEngine::ProBuilder::ProBuilderMesh*>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_s_CachedHashSet() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_CachedHashSet", ::UnityEngine::ProBuilder::ProBuilderMesh*>();
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::get_userCollisions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_userCollisions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_userCollisions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_userCollisions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::UnwrapParameters* UnityEngine::ProBuilder::ProBuilderMesh::get_unwrapParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_unwrapParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::UnwrapParameters*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_unwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "set_unwrapParameters", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::UnwrapParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::MeshRenderer> UnityEngine::ProBuilder::ProBuilderMesh::get_renderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_renderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshRenderer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MeshFilter> UnityEngine::ProBuilder::ProBuilderMesh::get_filter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_filter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshFilter>>(this, ___internal_method);
}
inline uint16_t UnityEngine::ProBuilder::ProBuilderMesh::get_versionIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_versionIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t UnityEngine::ProBuilder::ProBuilderMesh::get_nonSerializedVersionIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_nonSerializedVersionIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::get_preserveMeshAssetOnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_preserveMeshAssetOnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_preserveMeshAssetOnDestroy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_preserveMeshAssetOnDestroy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::HasArrays(::UnityEngine::ProBuilder::MeshArrays channels) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "HasArrays", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::MeshArrays>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, channels);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*> UnityEngine::ProBuilder::ProBuilderMesh::get_facesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_facesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_facesInternal(::ArrayW<::UnityEngine::ProBuilder::Face*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_facesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::ProBuilderMesh::get_faces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_faces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_faces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "set_faces", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedVertexLookup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "InvalidateSharedVertexLookup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedTextureLookup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "InvalidateSharedTextureLookup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::InvalidateFaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "InvalidateFaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::InvalidateCaches() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "InvalidateCaches", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVerticesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedVerticesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVerticesInternal(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "set_sharedVerticesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedVertices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "set_sharedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertexLookup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedVertexLookup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                          { "SetSharedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexes);
}
inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_sharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "set_sharedTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextureLookup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_sharedTextureLookup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSharedTextures(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                          { "SetSharedTextures", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexes);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::ProBuilderMesh::get_positionsInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_positionsInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_positionsInternal(::ArrayW<::UnityEngine::Vector3> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_positionsInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* UnityEngine::ProBuilder::ProBuilderMesh::get_positions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_positions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_positions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "set_positions", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*> UnityEngine::ProBuilder::ProBuilderMesh::GetVertices(::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Vertex*>>(this, ___internal_method, indexes);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetVerticesInList(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "GetVerticesInList", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, bool applyMesh) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                              { "SetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, applyMesh);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* UnityEngine::ProBuilder::ProBuilderMesh::get_normals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_normals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::ProBuilderMesh::get_normalsInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_normalsInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_normalsInternal(::ArrayW<::UnityEngine::Vector3> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_normalsInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::ProBuilderMesh::GetNormals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetNormals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::ProBuilder::ProBuilderMesh::get_colorsInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_colorsInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_colorsInternal(::ArrayW<::UnityEngine::Color> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_colorsInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Color>* UnityEngine::ProBuilder::ProBuilderMesh::get_colors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_colors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Color>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_colors(::System::Collections::Generic::IList_1<::UnityEngine::Color>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "set_colors", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::ProBuilder::ProBuilderMesh::GetColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* UnityEngine::ProBuilder::ProBuilderMesh::get_tangents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_tangents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_tangents(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "set_tangents", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::ProBuilder::ProBuilderMesh::get_tangentsInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_tangentsInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_tangentsInternal(::ArrayW<::UnityEngine::Vector4> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_tangentsInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::ProBuilder::ProBuilderMesh::GetTangents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetTangents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::ProBuilder::ProBuilderMesh::get_texturesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_texturesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_texturesInternal(::ArrayW<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_texturesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* UnityEngine::ProBuilder::ProBuilderMesh::get_textures2Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_textures2Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_textures2Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "set_textures2Internal", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* UnityEngine::ProBuilder::ProBuilderMesh::get_textures3Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_textures3Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_textures3Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "set_textures3Internal", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* UnityEngine::ProBuilder::ProBuilderMesh::get_textures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_textures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_textures(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "set_textures", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "GetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>* UnityEngine::ProBuilder::ProBuilderMesh::GetUVs(int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetUVs", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>*>(this, ___internal_method, channel);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "SetUVs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_faceCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_faceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_vertexCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_vertexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_edgeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_edgeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_indexCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_indexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_triangleCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_triangleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_meshWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "add_meshWillBeDestroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "remove_meshWillBeDestroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_meshWasInitialized(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "add_meshWasInitialized", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWasInitialized(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "remove_meshWasInitialized", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_componentWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "add_componentWillBeDestroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_componentWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "remove_componentWillBeDestroyed", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_componentHasBeenReset(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "add_componentHasBeenReset", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_componentHasBeenReset(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "remove_componentHasBeenReset", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_elementSelectionChanged(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "add_elementSelectionChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_elementSelectionChanged(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "remove_elementSelectionChanged", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ProBuilder::ProBuilderMesh::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_mesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_mesh(::UnityEngine::Mesh* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_mesh", {}, { ::i2c::type_of<::UnityEngine::Mesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::MeshSyncState UnityEngine::ProBuilder::ProBuilderMesh::get_meshSyncState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_meshSyncState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::MeshSyncState>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_meshFormatVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_meshFormatVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::DestroyUnityMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "DestroyUnityMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::IncrementVersionIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "IncrementVersionIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshFilterIsAssigned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "EnsureMeshFilterIsAssigned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ProBuilderMesh::CreateInstanceWithPoints(::ArrayW<::UnityEngine::Vector3> positions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "CreateInstanceWithPoints", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, positions);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ProBuilderMesh::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ProBuilderMesh::Create(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* positions,
                                                                                                           ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "Create",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, positions, faces);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ProBuilderMesh::Create(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>* materials) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "Create",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, vertices, faces, sharedVertices, sharedTextures, materials);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GeometryWithPoints(::ArrayW<::UnityEngine::Vector3> points) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GeometryWithPoints", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RebuildWithPositionsAndFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* vertices,
                                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "RebuildWithPositionsAndFaces",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, faces);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Rebuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::ToMesh(::UnityEngine::MeshTopology preferredTopology) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "ToMesh", {}, { ::i2c::type_of<::UnityEngine::MeshTopology>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preferredTopology);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::FinalizeToMesh(bool usedInParticleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "FinalizeToMesh", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usedInParticleSystem);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::MakeUnique() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "MakeUnique", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::CopyFrom(::UnityEngine::ProBuilder::ProBuilderMesh* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::Refresh(::UnityEngine::ProBuilder::RefreshMask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "Refresh", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::RefreshMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mask);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshColliderIsAssigned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "EnsureMeshColliderIsAssigned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::GetUnusedTextureGroup(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetUnusedTextureGroup", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::IsValidTextureGroup(int32_t group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "IsValidTextureGroup", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, group);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::UnusedElementGroup(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "UnusedElementGroup", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RefreshUV(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* facesToRefresh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "RefreshUV", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, facesToRefresh);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetGroupUV(::UnityEngine::ProBuilder::AutoUnwrapSettings settings, int32_t group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "SetGroupUV", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, group);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RefreshColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "RefreshColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetFaceColor(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "SetFaceColor", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, face, color);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetMaterial(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                          { "SetMaterial", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, faces, material);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RefreshNormals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "RefreshNormals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RefreshTangents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "RefreshTangents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandle(int32_t vertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetSharedVertexHandle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, vertex);
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandles(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "GetSharedVertexHandles", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<int32_t>*>(this, ___internal_method, vertices);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "GetCoincidentVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method, vertices);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                                           ::System::Collections::Generic::List_1<int32_t>* coincident) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "GetCoincidentVertices",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, faces, coincident);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                           ::System::Collections::Generic::List_1<int32_t>* coincident) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "GetCoincidentVertices",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edges, coincident);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices,
                                                                           ::System::Collections::Generic::List_1<int32_t>* coincident) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
          { "GetCoincidentVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, coincident);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(int32_t vertex, ::System::Collections::Generic::List_1<int32_t>* coincident) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "GetCoincidentVertices", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertex, coincident);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetVerticesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "SetVerticesCoincident", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetTexturesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "SetTexturesCoincident", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::AddToSharedVertex(int32_t sharedVertexHandle, int32_t vertex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "AddToSharedVertex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sharedVertexHandle, vertex);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::AddSharedVertex(::UnityEngine::ProBuilder::SharedVertex* vertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "AddSharedVertex", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SharedVertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertex);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::get_selectable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_selectable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedFaceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertexCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedVertexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedEdgeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVerticesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedSharedVerticesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertexCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedCoincidentVertexCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVertices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedSharedVertices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedCoincidentVertices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::CacheSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "CacheSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*> UnityEngine::ProBuilder::ProBuilderMesh::GetSelectedFaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetSelectedFaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndexes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedFaceIndexes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedVertices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedEdges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>*>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*> UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFacesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedFacesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFacesInternal(::ArrayW<::UnityEngine::ProBuilder::Face*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "set_selectedFacesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndicesInternal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedFaceIndicesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFaceIndicesInternal(::ArrayW<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_selectedFaceIndicesInternal", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedEdgesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectedEdgesInternal(::ArrayW<::UnityEngine::ProBuilder::Edge> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "set_selectedEdgesInternal", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::ProBuilderMesh::get_selectedIndexesInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "get_selectedIndexesInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectedIndexesInternal(::ArrayW<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "set_selectedIndexesInternal", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::ProBuilderMesh::GetActiveFace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetActiveFace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::ProBuilderMesh::GetActiveEdge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetActiveEdge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::GetActiveVertex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "GetActiveVertex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::AddToFaceSelection(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "AddToFaceSelection", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* selected) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "SetSelectedFaces", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<int32_t>* selected) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "SetSelectedFaces", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "SetSelectedEdges", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edges);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                           { "SetSelectedVertices", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RemoveFromFaceSelectionAtIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "RemoveFromFaceSelectionAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "ClearSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::_set_selectedFacesInternal_b__232_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                         { "<set_selectedFacesInternal>b__232_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__246_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "<SetSelectedFaces>b__246_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__247_0(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "<SetSelectedFaces>b__247_0", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__247_1(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), { "<SetSelectedFaces>b__247_1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::ProBuilderMesh* UnityEngine::ProBuilder::ProBuilderMesh::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ProBuilderMesh*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh::ProBuilderMesh() {}
constexpr ::UnityEngine::HideFlags UnityEngine::ProBuilder::ProBuilderMesh::k_MeshFilterHideFlags{ static_cast<int32_t>(0xa) };
