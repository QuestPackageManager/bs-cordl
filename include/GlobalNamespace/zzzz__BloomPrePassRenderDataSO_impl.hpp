#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassRenderDataSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderDataSO_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BloomPrePassRenderDataSO__Data._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomPrePassRenderDataSO__Data::*)()>(
    &::GlobalNamespace::__BloomPrePassRenderDataSO__Data::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2513398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_bloomPrePassRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_bloomPrePassRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassRenderTexture;
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_set_bloomPrePassRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bloomPrePassRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_textureToScreenRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureToScreenRatio;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_textureToScreenRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureToScreenRatio;
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_set_textureToScreenRatio(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureToScreenRatio = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_viewMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_viewMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewMatrix;
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_projectionMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_projectionMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionMatrix;
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_set_projectionMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___projectionMatrix = value;
}
constexpr float_t& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_stereoCameraEyeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoCameraEyeOffset;
}
constexpr float_t const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_stereoCameraEyeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoCameraEyeOffset;
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_set_stereoCameraEyeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stereoCameraEyeOffset = value;
}
constexpr ::GlobalNamespace::ToneMapping& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_toneMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toneMapping;
}
constexpr ::GlobalNamespace::ToneMapping const& GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_get_toneMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toneMapping;
}
constexpr void GlobalNamespace::__BloomPrePassRenderDataSO__Data::__cordl_internal_set_toneMapping(::GlobalNamespace::ToneMapping value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toneMapping = value;
}
inline ::GlobalNamespace::__BloomPrePassRenderDataSO__Data* GlobalNamespace::__BloomPrePassRenderDataSO__Data::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*>());
}
inline void GlobalNamespace::__BloomPrePassRenderDataSO__Data::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassRenderDataSO__Data::__BloomPrePassRenderDataSO__Data() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRenderDataSO::*)()>(&::GlobalNamespace::BloomPrePassRenderDataSO::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2517e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRenderDataSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__BloomPrePassRenderDataSO__Data*& GlobalNamespace::BloomPrePassRenderDataSO::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BloomPrePassRenderDataSO__Data*> const& GlobalNamespace::BloomPrePassRenderDataSO::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void GlobalNamespace::BloomPrePassRenderDataSO::__cordl_internal_set_data(::GlobalNamespace::__BloomPrePassRenderDataSO__Data* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BloomPrePassRenderDataSO* GlobalNamespace::BloomPrePassRenderDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassRenderDataSO*>());
}
inline void GlobalNamespace::BloomPrePassRenderDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRenderDataSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRenderDataSO::BloomPrePassRenderDataSO() {}
