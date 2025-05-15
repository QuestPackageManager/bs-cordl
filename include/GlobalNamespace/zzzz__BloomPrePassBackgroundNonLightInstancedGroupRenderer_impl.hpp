#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundNonLightInstancedGroupRenderer.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightInstancedGroupRenderer_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightInstancedGroupRenderer_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType() {}
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType::Float{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType::Vector{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType::Color{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType::Matrix4x4{
  static_cast<int32_t>(0x3)
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d7a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::__cordl_internal_get_propertyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyType;
}
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType const&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::__cordl_internal_get_propertyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyType;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::__cordl_internal_set_propertyType(
    ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_PropertyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyType = value;
}
constexpr ::StringW& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::__cordl_internal_get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::__cordl_internal_get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::__cordl_internal_set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::__cordl_internal_get_propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyId;
}
constexpr int32_t const& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::__cordl_internal_get_propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyId;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::__cordl_internal_set_propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyId = value;
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty* GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39d6d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), "Awake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.InitIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::InitIfNeeded)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x39d6d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                                                 "InitIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Render)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x39d6f8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.GetCachedMatrixArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::StringW)>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedMatrixArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x39d7614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), "GetCachedMatrixArray",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.GetCachedFloatArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(
    ::StringW)>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedFloatArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x39d77c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), "GetCachedFloatArray",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.GetCachedVectorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> (
    ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::StringW)>(&::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedVectorArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x39d76ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), "GetCachedVectorArray",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer.AutoFillRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::AutoFillRenderers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x39d789c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                                                 "AutoFillRenderers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x39d78ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*>&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__renderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*> const&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__renderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_set__renderers(
    ::ArrayW<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>, ::Array<::UnityW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*,
                   ::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>*>&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__supportedProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedProperties;
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*,
                   ::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>*> const&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__supportedProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedProperties;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_set__supportedProperties(
    ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*,
             ::Array<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer_SupportedProperty*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____supportedProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>*&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableFloatArrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableFloatArrays;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>* const&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableFloatArrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableFloatArrays;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_set__reusableFloatArrays(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float_t, ::Array<float_t>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableFloatArrays)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>*&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableVectorArrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableVectorArrays;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>* const&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableVectorArrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableVectorArrays;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_set__reusableVectorArrays(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableVectorArrays)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableMatrixArrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableMatrixArrays;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* const&
GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableMatrixArrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableMatrixArrays;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_set__reusableMatrixArrays(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableMatrixArrays)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableArraysSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableArraysSize;
}
constexpr int32_t const& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableArraysSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableArraysSize;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_set__reusableArraysSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reusableArraysSize = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__commandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__commandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffer;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableSetMaterialPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableSetMaterialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableSetMaterialPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableSetMaterialPropertyBlock;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_set__reusableSetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableSetMaterialPropertyBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableGetMaterialPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableGetMaterialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_get__reusableGetMaterialPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableGetMaterialPropertyBlock;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::__cordl_internal_set__reusableGetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableGetMaterialPropertyBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::setStaticF__worldSpaceCameraPosID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_worldSpaceCameraPosID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::getStaticF__worldSpaceCameraPosID() {
  return ::cordl_internals::getStaticField<int32_t, "_worldSpaceCameraPosID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get>();
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), "Awake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::InitIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), "InitIfNeeded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix,
                                                                                          ::UnityEngine::Matrix4x4 projectionMatrix) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dest, viewMatrix, projectionMatrix);
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedMatrixArray(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), "GetCachedMatrixArray",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method, propertyName);
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedFloatArray(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), "GetCachedFloatArray",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method, propertyName);
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedVectorArray(::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), "GetCachedVectorArray",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, false>(this, ___internal_method, propertyName);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::AutoFillRenderers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(),
                                               "AutoFillRenderers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer* GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::BloomPrePassBackgroundNonLightInstancedGroupRenderer() {}
