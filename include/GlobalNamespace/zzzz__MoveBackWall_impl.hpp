#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MoveBackWall_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MoveBackWall.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveBackWall::*)()>(&::GlobalNamespace::MoveBackWall::Start)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x225fc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveBackWall*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveBackWall.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveBackWall::*)()>(&::GlobalNamespace::MoveBackWall::Update)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x225fcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveBackWall*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveBackWall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveBackWall::*)()>(&::GlobalNamespace::MoveBackWall::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x225fd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveBackWall*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MoveBackWall::__get__fadeInRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInRegion;
}
constexpr float_t const& GlobalNamespace::MoveBackWall::__get__fadeInRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInRegion;
}
constexpr void GlobalNamespace::MoveBackWall::__set__fadeInRegion(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInRegion = value;
}
constexpr ::UnityEngine::MeshRenderer*& GlobalNamespace::MoveBackWall::__get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& GlobalNamespace::MoveBackWall::__get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::MoveBackWall::__set__meshRenderer(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerTransforms*& GlobalNamespace::MoveBackWall::__get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& GlobalNamespace::MoveBackWall::__get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::MoveBackWall::__set__playerTransforms(::GlobalNamespace::PlayerTransforms* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MoveBackWall::__get__thisZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thisZ;
}
constexpr float_t const& GlobalNamespace::MoveBackWall::__get__thisZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____thisZ;
}
constexpr void GlobalNamespace::MoveBackWall::__set__thisZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____thisZ = value;
}
constexpr bool& GlobalNamespace::MoveBackWall::__get__isVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isVisible;
}
constexpr bool const& GlobalNamespace::MoveBackWall::__get__isVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isVisible;
}
constexpr void GlobalNamespace::MoveBackWall::__set__isVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isVisible = value;
}
constexpr ::UnityEngine::Material*& GlobalNamespace::MoveBackWall::__get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::MoveBackWall::__get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::MoveBackWall::__set__material(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MoveBackWall::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveBackWall*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MoveBackWall::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveBackWall*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MoveBackWall* GlobalNamespace::MoveBackWall::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MoveBackWall*>());
}
inline void GlobalNamespace::MoveBackWall::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveBackWall*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MoveBackWall::MoveBackWall() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
