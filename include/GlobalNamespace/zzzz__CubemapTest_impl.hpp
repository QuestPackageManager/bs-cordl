#pragma once
// IWYU pragma private; include "GlobalNamespace/CubemapTest.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CubemapTest_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CubemapTest.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapTest::*)()>(&::GlobalNamespace::CubemapTest::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3b1b14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapTest.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapTest::*)()>(&::GlobalNamespace::CubemapTest::Update)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3b1b1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubemapTest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CubemapTest::*)()>(&::GlobalNamespace::CubemapTest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1b3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::CubemapTest::__cordl_internal_get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::CubemapTest::__cordl_internal_get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::CubemapTest::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CubemapTest::__cordl_internal_get__cubemapMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CubemapTest::__cordl_internal_get__cubemapMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapMaterial;
}
constexpr void GlobalNamespace::CubemapTest::__cordl_internal_set__cubemapMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cubemapMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CubemapTest::__cordl_internal_get__flatMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CubemapTest::__cordl_internal_get__flatMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatMaterial;
}
constexpr void GlobalNamespace::CubemapTest::__cordl_internal_set__flatMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flatMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::CubemapTest::__cordl_internal_get__cubemapRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::CubemapTest::__cordl_internal_get__cubemapRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapRenderTexture;
}
constexpr void GlobalNamespace::CubemapTest::__cordl_internal_set__cubemapRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cubemapRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::CubemapTest::__cordl_internal_get__downsampledCubemapRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsampledCubemapRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::CubemapTest::__cordl_internal_get__downsampledCubemapRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsampledCubemapRenderTexture;
}
constexpr void GlobalNamespace::CubemapTest::__cordl_internal_set__downsampledCubemapRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____downsampledCubemapRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::CubemapTest::__cordl_internal_get__cubemapFlatTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapFlatTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::CubemapTest::__cordl_internal_get__cubemapFlatTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubemapFlatTexture;
}
constexpr void GlobalNamespace::CubemapTest::__cordl_internal_set__cubemapFlatTexture(::UnityW<::UnityEngine::RenderTexture> value) {
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
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CubemapTest::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CubemapTest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CubemapTest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CubemapTest* GlobalNamespace::CubemapTest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CubemapTest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CubemapTest::CubemapTest() {}
