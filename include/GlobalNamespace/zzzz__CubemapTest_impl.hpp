#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CubemapTest_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CubemapTest.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapTest::*)()>(&::GlobalNamespace::CubemapTest::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22f7500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapTest.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapTest::*)()>(&::GlobalNamespace::CubemapTest::Update)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x22f757c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapTest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapTest::*)()>(&::GlobalNamespace::CubemapTest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f778c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Camera*& GlobalNamespace::CubemapTest::__get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::CubemapTest::__get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::CubemapTest::__set__camera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::CubemapTest::__get__cubemapMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::CubemapTest::__get__cubemapMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapMaterial;
}
constexpr void GlobalNamespace::CubemapTest::__set__cubemapMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cubemapMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::CubemapTest::__get__flatMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::CubemapTest::__get__flatMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatMaterial;
}
constexpr void GlobalNamespace::CubemapTest::__set__flatMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flatMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTexture*& GlobalNamespace::CubemapTest::__get__cubemapRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapRenderTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& GlobalNamespace::CubemapTest::__get__cubemapRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapRenderTexture;
}
constexpr void GlobalNamespace::CubemapTest::__set__cubemapRenderTexture(::UnityEngine::RenderTexture* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cubemapRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTexture*& GlobalNamespace::CubemapTest::__get__downsampledCubemapRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsampledCubemapRenderTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& GlobalNamespace::CubemapTest::__get__downsampledCubemapRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsampledCubemapRenderTexture;
}
constexpr void GlobalNamespace::CubemapTest::__set__downsampledCubemapRenderTexture(::UnityEngine::RenderTexture* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____downsampledCubemapRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTexture*& GlobalNamespace::CubemapTest::__get__cubemapFlatTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapFlatTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& GlobalNamespace::CubemapTest::__get__cubemapFlatTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapFlatTexture;
}
constexpr void GlobalNamespace::CubemapTest::__set__cubemapFlatTexture(::UnityEngine::RenderTexture* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cubemapFlatTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CubemapTest::setStaticF__cubePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_cubePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CubemapTest::getStaticF__cubePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_cubePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get>();
}
inline void GlobalNamespace::CubemapTest::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CubemapTest::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CubemapTest* GlobalNamespace::CubemapTest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CubemapTest*>());
}
inline void GlobalNamespace::CubemapTest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CubemapTest::CubemapTest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
