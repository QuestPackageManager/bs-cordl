#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_impl.hpp"
#include "UnityEngine/zzzz__HideFlags_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
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
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState::__ProBuilderMesh__CacheValidState(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState::__ProBuilderMesh__CacheValidState() {}
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState::SharedVertex{ static_cast<uint8_t>(0x1u) };
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState::SharedTexture{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x308652c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::*)()>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x308b8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh);
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Mesh", ty: "::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_VersionIndex", ty:
// "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::__ProBuilderMesh__NonVersionedEditScope(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> m_Mesh,
                                                                                                                      uint16_t m_VersionIndex) noexcept {
  this->m_Mesh = m_Mesh;
  this->m_VersionIndex = m_VersionIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__NonVersionedEditScope::__ProBuilderMesh__NonVersionedEditScope() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__ProBuilderMesh____c::*)()>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308b938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c._SetUVs_b__114_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::__ProBuilderMesh____c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh____c::_SetUVs_b__114_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x308b940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<SetUVs>b__114_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c._SetUVs_b__114_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::__ProBuilderMesh____c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh____c::_SetUVs_b__114_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x308b944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<SetUVs>b__114_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c._get_indexCount_b__122_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::__ProBuilderMesh____c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh____c::_get_indexCount_b__122_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x308b948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<get_indexCount>b__122_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c._get_triangleCount_b__124_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::__ProBuilderMesh____c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh____c::_get_triangleCount_b__124_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x308b968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<get_triangleCount>b__124_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c._CopyFrom_b__165_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (
    ::UnityEngine::ProBuilder::__ProBuilderMesh____c::*)(::UnityEngine::ProBuilder::Face*)>(&::UnityEngine::ProBuilder::__ProBuilderMesh____c::_CopyFrom_b__165_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x308b988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<CopyFrom>b__165_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::__ProBuilderMesh____c::setStaticF___9(::UnityEngine::ProBuilder::__ProBuilderMesh____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::__ProBuilderMesh____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>(value));
}
inline ::UnityEngine::ProBuilder::__ProBuilderMesh____c* UnityEngine::ProBuilder::__ProBuilderMesh____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::__ProBuilderMesh____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>();
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh____c::setStaticF___9__114_0(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__114_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* UnityEngine::ProBuilder::__ProBuilderMesh____c::getStaticF___9__114_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__114_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>();
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh____c::setStaticF___9__114_1(::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__114_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>* UnityEngine::ProBuilder::__ProBuilderMesh____c::getStaticF___9__114_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>*, "<>9__114_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>();
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh____c::setStaticF___9__122_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__122_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::__ProBuilderMesh____c::getStaticF___9__122_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__122_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>();
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh____c::setStaticF___9__124_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__124_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::__ProBuilderMesh____c::getStaticF___9__124_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__124_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>();
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh____c::setStaticF___9__165_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>*, "<>9__165_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::__ProBuilderMesh____c::getStaticF___9__165_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>*, "<>9__165_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get>();
}
inline ::UnityEngine::ProBuilder::__ProBuilderMesh____c* UnityEngine::ProBuilder::__ProBuilderMesh____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>());
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::__ProBuilderMesh____c::_SetUVs_b__114_0(::UnityEngine::Vector4 x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<SetUVs>b__114_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, x);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::__ProBuilderMesh____c::_SetUVs_b__114_1(::UnityEngine::Vector4 x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<SetUVs>b__114_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::__ProBuilderMesh____c::_get_indexCount_b__122_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<get_indexCount>b__122_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::__ProBuilderMesh____c::_get_triangleCount_b__124_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<get_triangleCount>b__124_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::__ProBuilderMesh____c::_CopyFrom_b__165_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c*>::get(), "<CopyFrom>b__165_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh____c::__ProBuilderMesh____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::*)()>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3087efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0._GetUnusedTextureGroup_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::_GetUnusedTextureGroup_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x308b9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0*>::get(), "<GetUnusedTextureGroup>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
inline ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0* UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0*>());
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::_GetUnusedTextureGroup_b__0(::UnityEngine::ProBuilder::Face* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0*>::get(), "<GetUnusedTextureGroup>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, element);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass168_0::__ProBuilderMesh____c__DisplayClass168_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::*)()>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3088020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0._UnusedElementGroup_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::_UnusedElementGroup_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x308ba10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0*>::get(), "<UnusedElementGroup>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
inline ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0* UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0*>());
}
inline void UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::_UnusedElementGroup_b__0(::UnityEngine::ProBuilder::Face* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0*>::get(), "<UnusedElementGroup>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, element);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh____c__DisplayClass170_0::__ProBuilderMesh____c__DisplayClass170_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_userCollisions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_userCollisions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_userCollisions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_userCollisions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_userCollisions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3083058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_userCollisions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_unwrapParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::UnwrapParameters* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_unwrapParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_unwrapParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_unwrapParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::UnwrapParameters*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_unwrapParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308306c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_unwrapParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::UnwrapParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_renderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::MeshRenderer> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_renderer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3080070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_renderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_filter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::MeshFilter> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_filter)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3083074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_filter",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_versionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_versionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308312c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_versionIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_preserveMeshAssetOnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_preserveMeshAssetOnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_preserveMeshAssetOnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_preserveMeshAssetOnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_preserveMeshAssetOnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x308313c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_preserveMeshAssetOnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.HasArrays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::MeshArrays)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::HasArrays)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x307e79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "HasArrays", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshArrays>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_facesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_facesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_facesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_facesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_facesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_facesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_faces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_faces)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3083158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_faces",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_faces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_faces)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x30831d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_faces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateSharedVertexLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedVertexLookup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3083278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "InvalidateSharedVertexLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateSharedTextureLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedTextureLookup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3083320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "InvalidateSharedTextureLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateFaces)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x30833c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "InvalidateFaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.InvalidateCaches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::InvalidateCaches)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x30836d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "InvalidateCaches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedVerticesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVerticesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_sharedVerticesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_sharedVerticesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVerticesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308370c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_sharedVerticesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3083714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_sharedVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_sharedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVertices)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3083790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_sharedVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedVertexLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertexLookup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x30839d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_sharedVertexLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSharedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSharedVertices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3083a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSharedVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_sharedTextures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_sharedTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_sharedTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_sharedTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_sharedTextureLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextureLookup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3083afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_sharedTextureLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSharedTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSharedTextures)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3083b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSharedTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_positionsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_positionsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_positionsInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_positionsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_positionsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3083c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_positionsInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_positions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_positions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3083c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_positions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_positions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_positions)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3083c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_positions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetVertices)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x307f638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetVertices", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetVerticesInList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetVerticesInList)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0x3083d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetVerticesInList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, bool)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetVertices)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x30845c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_normals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_normals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x30849b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_normals",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_normalsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_normalsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_normalsInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_normalsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_normalsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_normalsInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetNormals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x307ec98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetNormals",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_colorsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_colorsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_colorsInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_colorsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_colorsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_colorsInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_colors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Color>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_colors)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3084a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_colors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_colors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Color>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_colors)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3084ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_colors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Color>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetColors)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3084be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetColors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_tangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_tangents)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3084c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_tangents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_tangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_tangents)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3084d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_tangents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_tangentsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_tangentsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_tangentsInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_tangentsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_tangentsInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_tangentsInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetTangents)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x307ed20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetTangents",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_texturesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_texturesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_texturesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_texturesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_texturesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_texturesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_textures2Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector4>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_textures2Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_textures2Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_textures2Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_textures2Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_textures2Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_textures3Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector4>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_textures3Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_textures3Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_textures3Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_textures3Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3084e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_textures3Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_textures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_textures)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3084e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_textures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_textures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_textures)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3084ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_textures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetUVs)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x307e97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetUVs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>* (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetUVs)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3084fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetUVs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetUVs)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x30850e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetUVs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_faceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_faceCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3081678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_faceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_vertexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_vertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x307f5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_vertexCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_edgeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_edgeCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x30853c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_edgeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_indexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_indexCount)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x308544c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_indexCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_triangleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_triangleCount)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3085560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_triangleCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_meshWillBeDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_meshWillBeDestroyed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3085684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_meshWillBeDestroyed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_meshWillBeDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWillBeDestroyed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3085774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_meshWillBeDestroyed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_meshWasInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_meshWasInitialized)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3085864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_meshWasInitialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_meshWasInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWasInitialized)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3085958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_meshWasInitialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_componentWillBeDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_componentWillBeDestroyed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3085a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_componentWillBeDestroyed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_componentWillBeDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_componentWillBeDestroyed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3085b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_componentWillBeDestroyed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_componentHasBeenReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_componentHasBeenReset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3085c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_componentHasBeenReset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_componentHasBeenReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_componentHasBeenReset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3085d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_componentHasBeenReset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.add_elementSelectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::add_elementSelectionChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3085e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_elementSelectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.remove_elementSelectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::remove_elementSelectionChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3085f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_elementSelectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_mesh)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x308024c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_mesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::Mesh*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3086004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_mesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_id)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x307eda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_meshSyncState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::MeshSyncState (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_meshSyncState)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x308600c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_meshSyncState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_meshFormatVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_meshFormatVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3086130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_meshFormatVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3086138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x308654c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::OnDestroy)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x308661c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.IncrementVersionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::IncrementVersionIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x30849a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "IncrementVersionIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Clear)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3084894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.EnsureMeshFilterIsAssigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshFilterIsAssigned)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3086274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "EnsureMeshFilterIsAssigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.CreateInstanceWithPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::CreateInstanceWithPoints)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x308682c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "CreateInstanceWithPoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3086b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::Create)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3086c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*,
    ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::Create)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3086de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GeometryWithPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GeometryWithPoints)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x308694c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GeometryWithPoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RebuildWithPositionsAndFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::RebuildWithPositionsAndFaces)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3086cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "RebuildWithPositionsAndFaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Rebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::Rebuild)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x307f5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Rebuild",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.ToMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::MeshTopology)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::ToMesh)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x3086f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "ToMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.MakeUnique
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::MakeUnique)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x30873f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "MakeUnique",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.CopyFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::CopyFrom)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x3087464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "CopyFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::RefreshMask)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::Refresh)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x30872f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::RefreshMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.EnsureMeshColliderIsAssigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshColliderIsAssigned)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3086398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "EnsureMeshColliderIsAssigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetUnusedTextureGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetUnusedTextureGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3087dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetUnusedTextureGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.IsValidTextureGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::IsValidTextureGroup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3087f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "IsValidTextureGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.UnusedElementGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::UnusedElementGroup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3087f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "UnusedElementGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshUV)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x3087748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "RefreshUV", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetGroupUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::AutoUnwrapSettings, int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetGroupUV)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3088028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetGroupUV", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshColors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3087cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "RefreshColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetFaceColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::Color)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetFaceColor)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x30880ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetFaceColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Material*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetMaterial)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x3088460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshNormals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3087d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "RefreshNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RefreshTangents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::RefreshTangents)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3087d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "RefreshTangents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetSharedVertexHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandle)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x30889c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetSharedVertexHandle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetSharedVertexHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<int32_t>* (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandles)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x3088b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetSharedVertexHandles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3088eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x30894d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<int32_t>*)>(
        &::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x3089a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x3088f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetCoincidentVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x308a124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetVerticesCoincident
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetVerticesCoincident)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x308a2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetVerticesCoincident", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetTexturesCoincident
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetTexturesCoincident)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x308a3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetTexturesCoincident", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.AddToSharedVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t, int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::AddToSharedVertex)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x308a3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "AddToSharedVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.AddSharedVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::SharedVertex*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::AddSharedVertex)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x308a48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "AddSharedVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SharedVertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308a538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(bool)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_selectable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x308a540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFaceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x308a54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedFaceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedVertexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertexCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x308a568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedVertexCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedEdgeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgeCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x308a584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedEdgeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedSharedVerticesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVerticesCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x308a5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_selectedSharedVerticesCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedCoincidentVertexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertexCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x308ab08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_selectedCoincidentVertexCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedSharedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVertices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x308ab20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedSharedVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedCoincidentVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertices)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x308ab38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedCoincidentVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.CacheSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::CacheSelection)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x308a5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "CacheSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetSelectedFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::GetSelectedFaces)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x308ab50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "GetSelectedFaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFaceIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndexes)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x308ac58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedFaceIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x308acd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdges)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x308ad50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedEdges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFacesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFacesInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x308adcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedFacesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedFacesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFacesInternal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x308add0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectedFacesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedFaceIndicesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndicesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308ae98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_selectedFaceIndicesInternal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedFaceIndicesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFaceIndicesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308aea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectedFaceIndicesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedEdgesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308aea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedEdgesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedEdgesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>)>(&::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedEdgesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308aeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectedEdgesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.get_selectedIndexesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::get_selectedIndexesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308aeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "get_selectedIndexesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.set_selectedIndexesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::set_selectedIndexesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308aec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectedIndexesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetActiveFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveFace)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x308aec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "GetActiveFace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetActiveEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveEdge)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x308af24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "GetActiveEdge", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.GetActiveVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::GetActiveVertex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x308afac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "GetActiveVertex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.AddToFaceSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::AddToFaceSelection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x308afe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "AddToFaceSelection",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x308b254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSelectedFaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x308b054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSelectedFaces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(&::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedEdges)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x308b314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSelectedEdges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.SetSelectedVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedVertices)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x308b42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSelectedVertices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.RemoveFromFaceSelectionAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::RemoveFromFaceSelectionAtIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x308b57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "RemoveFromFaceSelectionAtIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh.ClearSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::ClearSelection)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3086498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                               "ClearSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ProBuilderMesh::*)()>(&::UnityEngine::ProBuilder::ProBuilderMesh::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x308b5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._set_selectedFacesInternal_b__225_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::_set_selectedFacesInternal_b__225_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x308b794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "<set_selectedFacesInternal>b__225_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._SetSelectedFaces_b__239_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::ProBuilderMesh::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__239_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x308b7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "<SetSelectedFaces>b__239_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._SetSelectedFaces_b__240_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(
    &::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__240_0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x308b844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "<SetSelectedFaces>b__240_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ProBuilderMesh._SetSelectedFaces_b__240_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* (
    ::UnityEngine::ProBuilder::ProBuilderMesh::*)(int32_t)>(&::UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__240_1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x308b87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "<SetSelectedFaces>b__240_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
constexpr ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Faces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Faces;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Faces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Faces;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Faces(::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Faces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedVertices;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const&
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedVertices;
}
constexpr void
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SharedVertices(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SharedVertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_CacheValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheValid;
}
constexpr ::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_CacheValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheValid;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_CacheValid(::UnityEngine::ProBuilder::__ProBuilderMesh__CacheValidState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CacheValid = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedVertexLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedVertexLookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const&
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedVertexLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedVertexLookup;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SharedVertexLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SharedVertexLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedTextures;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const&
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedTextures;
}
constexpr void
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SharedTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedTextureLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedTextureLookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const&
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SharedTextureLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedTextureLookup;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SharedTextureLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SharedTextureLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Positions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Positions;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Positions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures0;
}
constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures0;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Textures0(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Textures0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const&
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures2;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Textures2(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Textures2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures3;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> const&
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Textures3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures3;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Textures3(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Textures3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Tangents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tangents;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Tangents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tangents;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Tangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Tangents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Normals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normals;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Normals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normals;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Normals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Normals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_Colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_Colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::UnwrapParameters*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_UnwrapParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnwrapParameters;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_UnwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnwrapParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assetGuid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MeshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MeshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedFaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedFaces;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedFaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedFaces;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedFaces(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedFaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedEdges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedEdges;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedEdges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedEdges;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedEdges(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedEdges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedVertices;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedVertices;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedVertices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedVertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const&
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedSharedVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedSharedVertices;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedSharedVertices(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedSharedVertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedCoincidentVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCoincidentVertices;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const&
UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_get_m_SelectedCoincidentVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectedCoincidentVertices;
}
constexpr void UnityEngine::ProBuilder::ProBuilderMesh::__cordl_internal_set_m_SelectedCoincidentVertices(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedCoincidentVertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_meshWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "meshWillBeDestroyed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_meshWillBeDestroyed() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "meshWillBeDestroyed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_meshWasInitialized(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "meshWasInitialized",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_meshWasInitialized() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "meshWasInitialized",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_componentWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "componentWillBeDestroyed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_componentWillBeDestroyed() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "componentWillBeDestroyed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_componentHasBeenReset(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "componentHasBeenReset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_componentHasBeenReset() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "componentHasBeenReset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_elementSelectionChanged(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "elementSelectionChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_elementSelectionChanged() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, "elementSelectionChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>();
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::setStaticF_s_CachedHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_CachedHashSet",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::getStaticF_s_CachedHashSet() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_CachedHashSet",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get>();
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::get_userCollisions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_userCollisions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_userCollisions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_userCollisions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::UnwrapParameters* UnityEngine::ProBuilder::ProBuilderMesh::get_unwrapParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_unwrapParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::UnwrapParameters*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_unwrapParameters(::UnityEngine::ProBuilder::UnwrapParameters* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_unwrapParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::UnwrapParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::MeshRenderer> UnityEngine::ProBuilder::ProBuilderMesh::get_renderer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_renderer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshRenderer>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MeshFilter> UnityEngine::ProBuilder::ProBuilderMesh::get_filter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_filter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshFilter>, false>(this, ___internal_method);
}
inline uint16_t UnityEngine::ProBuilder::ProBuilderMesh::get_versionIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_versionIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::get_preserveMeshAssetOnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_preserveMeshAssetOnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_preserveMeshAssetOnDestroy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_preserveMeshAssetOnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::HasArrays(::UnityEngine::ProBuilder::MeshArrays channels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "HasArrays", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshArrays>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channels);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> UnityEngine::ProBuilder::ProBuilderMesh::get_facesInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_facesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_facesInternal(::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_facesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::ProBuilderMesh::get_faces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_faces",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_faces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_faces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedVertexLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "InvalidateSharedVertexLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::InvalidateSharedTextureLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "InvalidateSharedTextureLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::InvalidateFaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "InvalidateFaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::InvalidateCaches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "InvalidateCaches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVerticesInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_sharedVerticesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVerticesInternal(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_sharedVerticesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_sharedVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_sharedVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_sharedVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_sharedVertexLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_sharedVertexLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* indexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSharedVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexes);
}
inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_sharedTextures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_sharedTextures(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_sharedTextures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_sharedTextureLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_sharedTextureLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSharedTextures(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* indexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSharedTextures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexes);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::ProBuilder::ProBuilderMesh::get_positionsInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_positionsInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_positionsInternal(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_positionsInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* UnityEngine::ProBuilder::ProBuilderMesh::get_positions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_positions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_positions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_positions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param indexes: ::System::Collections::Generic::IList_1<int32_t>* (default: nullptr)
inline ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>
UnityEngine::ProBuilder::ProBuilderMesh::GetVertices(::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetVertices", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>, false>(this, ___internal_method, indexes);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetVerticesInList(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetVerticesInList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices);
}
/// @param applyMesh: bool (default: false)
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, bool applyMesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices, applyMesh);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* UnityEngine::ProBuilder::ProBuilderMesh::get_normals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_normals",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::ProBuilder::ProBuilderMesh::get_normalsInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_normalsInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_normalsInternal(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_normalsInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::ProBuilder::ProBuilderMesh::GetNormals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetNormals",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> UnityEngine::ProBuilder::ProBuilderMesh::get_colorsInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_colorsInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_colorsInternal(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_colorsInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Color>* UnityEngine::ProBuilder::ProBuilderMesh::get_colors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_colors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Color>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_colors(::System::Collections::Generic::IList_1<::UnityEngine::Color>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_colors", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Color>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> UnityEngine::ProBuilder::ProBuilderMesh::GetColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetColors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* UnityEngine::ProBuilder::ProBuilderMesh::get_tangents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_tangents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_tangents(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_tangents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> UnityEngine::ProBuilder::ProBuilderMesh::get_tangentsInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_tangentsInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_tangentsInternal(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_tangentsInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> UnityEngine::ProBuilder::ProBuilderMesh::GetTangents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetTangents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> UnityEngine::ProBuilder::ProBuilderMesh::get_texturesInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_texturesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_texturesInternal(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_texturesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* UnityEngine::ProBuilder::ProBuilderMesh::get_textures2Internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_textures2Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_textures2Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_textures2Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* UnityEngine::ProBuilder::ProBuilderMesh::get_textures3Internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_textures3Internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_textures3Internal(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_textures3Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* UnityEngine::ProBuilder::ProBuilderMesh::get_textures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_textures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_textures(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_textures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetUVs", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channel, uvs);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>* UnityEngine::ProBuilder::ProBuilderMesh::GetUVs(int32_t channel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetUVs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector2>*, false>(this, ___internal_method, channel);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetUVs", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channel, uvs);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_faceCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_faceCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_vertexCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_vertexCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_edgeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_edgeCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_indexCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_indexCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_triangleCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_triangleCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_meshWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_meshWillBeDestroyed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_meshWillBeDestroyed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_meshWasInitialized(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_meshWasInitialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_meshWasInitialized(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_meshWasInitialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_componentWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_componentWillBeDestroyed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_componentWillBeDestroyed(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_componentWillBeDestroyed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_componentHasBeenReset(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_componentHasBeenReset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_componentHasBeenReset(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_componentHasBeenReset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::add_elementSelectionChanged(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "add_elementSelectionChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::remove_elementSelectionChanged(::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "remove_elementSelectionChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::ProBuilder::ProBuilderMesh::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_mesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_mesh(::UnityEngine::Mesh* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_mesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::MeshSyncState UnityEngine::ProBuilder::ProBuilderMesh::get_meshSyncState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_meshSyncState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::MeshSyncState, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_meshFormatVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_meshFormatVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::IncrementVersionIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "IncrementVersionIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshFilterIsAssigned() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "EnsureMeshFilterIsAssigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>
UnityEngine::ProBuilder::ProBuilderMesh::CreateInstanceWithPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "CreateInstanceWithPoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, false>(nullptr, ___internal_method, positions);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ProBuilderMesh::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ProBuilderMesh::Create(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* positions,
                                                                                                           ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, false>(nullptr, ___internal_method, positions, faces);
}
/// @param sharedVertices: ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* (default: nullptr)
/// @param sharedTextures: ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* (default: nullptr)
/// @param materials: ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>* (default: nullptr)
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::ProBuilderMesh::Create(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>* materials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, false>(nullptr, ___internal_method, vertices, faces, sharedVertices, sharedTextures, materials);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GeometryWithPoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> points) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GeometryWithPoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, points);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RebuildWithPositionsAndFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* vertices,
                                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "RebuildWithPositionsAndFaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices, faces);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Rebuild",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param preferredTopology: ::UnityEngine::MeshTopology (default: static_cast<int32_t>(0x0))
inline void UnityEngine::ProBuilder::ProBuilderMesh::ToMesh(::UnityEngine::MeshTopology preferredTopology) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "ToMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshTopology>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preferredTopology);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::MakeUnique() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "MakeUnique",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::CopyFrom(::UnityEngine::ProBuilder::ProBuilderMesh* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "CopyFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
/// @param mask: ::UnityEngine::ProBuilder::RefreshMask (default: static_cast<int32_t>(0x1f))
inline void UnityEngine::ProBuilder::ProBuilderMesh::Refresh(::UnityEngine::ProBuilder::RefreshMask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::RefreshMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mask);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::EnsureMeshColliderIsAssigned() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "EnsureMeshColliderIsAssigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param i: int32_t (default: static_cast<int32_t>(0x1))
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::GetUnusedTextureGroup(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetUnusedTextureGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, i);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::IsValidTextureGroup(int32_t group) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "IsValidTextureGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, group);
}
/// @param i: int32_t (default: static_cast<int32_t>(0x1))
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::UnusedElementGroup(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "UnusedElementGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, i);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RefreshUV(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* facesToRefresh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "RefreshUV", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, facesToRefresh);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetGroupUV(::UnityEngine::ProBuilder::AutoUnwrapSettings settings, int32_t group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetGroupUV", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::AutoUnwrapSettings>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, group);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RefreshColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "RefreshColors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetFaceColor(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetFaceColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, face, color);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetMaterial(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, faces, material);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RefreshNormals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "RefreshNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RefreshTangents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "RefreshTangents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandle(int32_t vertex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetSharedVertexHandle",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, vertex);
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::GetSharedVertexHandles(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetSharedVertexHandles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<int32_t>*, false>(this, ___internal_method, vertices);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method, vertices);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                                           ::System::Collections::Generic::List_1<int32_t>* coincident) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, faces, coincident);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                                           ::System::Collections::Generic::List_1<int32_t>* coincident) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edges, coincident);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices,
                                                                           ::System::Collections::Generic::List_1<int32_t>* coincident) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices, coincident);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::GetCoincidentVertices(int32_t vertex, ::System::Collections::Generic::List_1<int32_t>* coincident) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetCoincidentVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertex, coincident);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetVerticesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetVerticesCoincident", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetTexturesCoincident(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetTexturesCoincident", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::AddToSharedVertex(int32_t sharedVertexHandle, int32_t vertex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "AddToSharedVertex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sharedVertexHandle, vertex);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::AddSharedVertex(::UnityEngine::ProBuilder::SharedVertex* vertex) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "AddSharedVertex", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SharedVertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertex);
}
inline bool UnityEngine::ProBuilder::ProBuilderMesh::get_selectable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedFaceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertexCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedVertexCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedEdgeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVerticesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedSharedVerticesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertexCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "get_selectedCoincidentVertexCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedSharedVertices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedSharedVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedCoincidentVertices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedCoincidentVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::CacheSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "CacheSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> UnityEngine::ProBuilder::ProBuilderMesh::GetSelectedFaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "GetSelectedFaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, false>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedFaceIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedVertices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedVertices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedEdges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFacesInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedFacesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFacesInternal(::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectedFacesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::ProBuilderMesh::get_selectedFaceIndicesInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedFaceIndicesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectedFaceIndicesInternal(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectedFaceIndicesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> UnityEngine::ProBuilder::ProBuilderMesh::get_selectedEdgesInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedEdgesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectedEdgesInternal(::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectedEdgesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::ProBuilderMesh::get_selectedIndexesInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "get_selectedIndexesInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::set_selectedIndexesInternal(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "set_selectedIndexesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::ProBuilderMesh::GetActiveFace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetActiveFace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::ProBuilderMesh::GetActiveEdge() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "GetActiveEdge",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::GetActiveVertex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "GetActiveVertex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::AddToFaceSelection(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "AddToFaceSelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* selected) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSelectedFaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selected);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedFaces(::System::Collections::Generic::IEnumerable_1<int32_t>* selected) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSelectedFaces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selected);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSelectedEdges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edges);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::SetSelectedVertices(::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "SetSelectedVertices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::RemoveFromFaceSelectionAtIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "RemoveFromFaceSelectionAtIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                             "ClearSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ProBuilderMesh* UnityEngine::ProBuilder::ProBuilderMesh::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::ProBuilderMesh*>());
}
inline void UnityEngine::ProBuilder::ProBuilderMesh::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::_set_selectedFacesInternal_b__225_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "<set_selectedFacesInternal>b__225_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__239_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "<SetSelectedFaces>b__239_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__240_0(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "<SetSelectedFaces>b__240_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::ProBuilderMesh::_SetSelectedFaces_b__240_1(int32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(), "<SetSelectedFaces>b__240_1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh::ProBuilderMesh() {}
constexpr ::UnityEngine::HideFlags UnityEngine::ProBuilder::ProBuilderMesh::k_MeshFilterHideFlags{ static_cast<int32_t>(0xa) };
