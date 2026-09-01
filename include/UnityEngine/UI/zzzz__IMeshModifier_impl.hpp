#pragma once
// IWYU pragma private; include "UnityEngine\UI\IMeshModifier.hpp"
#include "UnityEngine/UI/zzzz__IMeshModifier_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IMeshModifier.ModifyMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::IMeshModifier::*)(::UnityEngine::Mesh*)>(&::UnityEngine::UI::IMeshModifier::ModifyMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::IMeshModifier*>(), { ::i2c::class_of<::UnityEngine::UI::IMeshModifier*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::IMeshModifier.ModifyMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::IMeshModifier::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::IMeshModifier::ModifyMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::IMeshModifier*>(), { ::i2c::class_of<::UnityEngine::UI::IMeshModifier*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::IMeshModifier::ModifyMesh(::UnityEngine::Mesh* mesh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::IMeshModifier*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline void UnityEngine::UI::IMeshModifier::ModifyMesh(::UnityEngine::UI::VertexHelper* verts) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::IMeshModifier*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts);
}
