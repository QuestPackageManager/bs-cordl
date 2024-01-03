#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleMaterialSetter_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQualitySO_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQuality_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)()>(&::GlobalNamespace::ObstacleMaterialSetter::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x238e5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.SetCoreMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(::UnityEngine::Renderer*, ::GlobalNamespace::ObstaclesQuality)>(
    &::GlobalNamespace::ObstacleMaterialSetter::SetCoreMaterial)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x238e61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "SetCoreMaterial", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstaclesQuality>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.SetFakeGlowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(::UnityEngine::Renderer*, ::GlobalNamespace::ObstaclesQuality)>(
    &::GlobalNamespace::ObstacleMaterialSetter::SetFakeGlowMaterial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x238e754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "SetFakeGlowMaterial", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstaclesQuality>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)()>(&::GlobalNamespace::ObstacleMaterialSetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238e790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::ObstacleMaterialSetter::__get__screenDisplacement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenDisplacement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::ObstacleMaterialSetter::__get__screenDisplacement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenDisplacement;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__screenDisplacement(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenDisplacement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObstaclesQualitySO*& GlobalNamespace::ObstacleMaterialSetter::__get__obstaclesQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesQuality;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstaclesQualitySO*> const& GlobalNamespace::ObstacleMaterialSetter::__get__obstaclesQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesQuality;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__obstaclesQuality(::GlobalNamespace::ObstaclesQualitySO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstaclesQuality)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::ObstacleMaterialSetter::__get__lwCoreMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lwCoreMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::ObstacleMaterialSetter::__get__lwCoreMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lwCoreMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__lwCoreMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lwCoreMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::ObstacleMaterialSetter::__get__hwCoreMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hwCoreMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::ObstacleMaterialSetter::__get__hwCoreMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hwCoreMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__hwCoreMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hwCoreMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::ObstacleMaterialSetter::__get__texturedCoreMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturedCoreMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::ObstacleMaterialSetter::__get__texturedCoreMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturedCoreMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__texturedCoreMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____texturedCoreMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::ObstacleMaterialSetter::__get__fakeGlowLWMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowLWMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::ObstacleMaterialSetter::__get__fakeGlowLWMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowLWMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__fakeGlowLWMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fakeGlowLWMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::ObstacleMaterialSetter::__get__fakeGlowTexturedMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowTexturedMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::ObstacleMaterialSetter::__get__fakeGlowTexturedMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowTexturedMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__fakeGlowTexturedMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fakeGlowTexturedMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Renderer*& GlobalNamespace::ObstacleMaterialSetter::__get__obstacleCoreRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& GlobalNamespace::ObstacleMaterialSetter::__get__obstacleCoreRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreRenderer;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__obstacleCoreRenderer(::UnityEngine::Renderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleCoreRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Renderer*& GlobalNamespace::ObstacleMaterialSetter::__get__obstacleFakeGlowRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlowRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& GlobalNamespace::ObstacleMaterialSetter::__get__obstacleFakeGlowRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlowRenderer;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__obstacleFakeGlowRenderer(::UnityEngine::Renderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleFakeGlowRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ObstacleMaterialSetter::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleMaterialSetter::SetCoreMaterial(::UnityEngine::Renderer* renderer, ::GlobalNamespace::ObstaclesQuality obstaclesQuality) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "SetCoreMaterial", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstaclesQuality>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, obstaclesQuality);
}
inline void GlobalNamespace::ObstacleMaterialSetter::SetFakeGlowMaterial(::UnityEngine::Renderer* renderer, ::GlobalNamespace::ObstaclesQuality obstaclesQuality) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "SetFakeGlowMaterial", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstaclesQuality>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, obstaclesQuality);
}
inline ::GlobalNamespace::ObstacleMaterialSetter* GlobalNamespace::ObstacleMaterialSetter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ObstacleMaterialSetter*>());
}
inline void GlobalNamespace::ObstacleMaterialSetter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleMaterialSetter::ObstacleMaterialSetter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
