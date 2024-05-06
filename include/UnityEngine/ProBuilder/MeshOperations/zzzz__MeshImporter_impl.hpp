#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/MeshImporter.hpp"
#include "System/zzzz__Object_impl.hpp"
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
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f1854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c._Import_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::*)(
    ::UnityEngine::ProBuilder::Vertex*)>(&::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::_Import_b__9_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32f185c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>::get(), "<Import>b__9_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c* UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__9_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__9_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>::get>();
}
inline ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c* UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::_Import_b__9_0(::UnityEngine::ProBuilder::Vertex* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*>::get(), "<Import>b__9_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c::__MeshImporter____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x32f000c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(
    ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>, ::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x32f0178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32f02a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*)>(&::UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x32f02c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshImporter.Import
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::MeshImporter::*)(
    ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*)>(&::UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import)> {
  constexpr static std::size_t size = 0xab8;
  constexpr static std::size_t addrs = 0x32f044c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SourceMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_SourceMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const&
UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_SourceMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceMaterials;
}
constexpr void
UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_set_m_SourceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SourceMaterials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*>& UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_Vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> const&
UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_get_m_Vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vertices;
}
constexpr void
UnityEngine::ProBuilder::MeshOperations::MeshImporter::__cordl_internal_set_m_Vertices(::ArrayW<::UnityEngine::ProBuilder::Vertex*, ::Array<::UnityEngine::ProBuilder::Vertex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::setStaticF_k_DefaultImportSettings(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*, "k_DefaultImportSettings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* UnityEngine::ProBuilder::MeshOperations::MeshImporter::getStaticF_k_DefaultImportSettings() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*, "k_DefaultImportSettings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get>();
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor(::UnityEngine::GameObject* gameObject) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(gameObject));
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameObject);
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter*
UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor(::UnityEngine::Mesh* sourceMesh, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> sourceMaterials,
                                                                ::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(sourceMesh, sourceMaterials, destination));
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor(::UnityEngine::Mesh* sourceMesh, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> sourceMaterials,
                                                                         ::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceMesh, sourceMaterials, destination);
}
inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* UnityEngine::ProBuilder::MeshOperations::MeshImporter::New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>(destination));
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::_ctor(::UnityEngine::ProBuilder::ProBuilderMesh* destination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination);
}
/// @param importSettings: ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* (default: nullptr)
inline bool UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import(::UnityEngine::GameObject* go, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, go, importSettings);
}
/// @param importSettings: ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* (default: nullptr)
inline void UnityEngine::ProBuilder::MeshOperations::MeshImporter::Import(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshImporter*>::get(), "Import", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, importSettings);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshImporter::MeshImporter() {}
