#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectInfo_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "GlobalNamespace/zzzz__HEU_BoundingVolume_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectInfo.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputObjectInfo::*)(::HoudiniEngineUnity::HEU_InputObjectInfo*)>(
    &::HoudiniEngineUnity::HEU_InputObjectInfo::CopyTo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x216fcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectInfo.SetReferencesFromGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputObjectInfo::*)()>(
    &::HoudiniEngineUnity::HEU_InputObjectInfo::SetReferencesFromGameObject)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x216ffa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                                                                               "SetReferencesFromGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectInfo.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputObjectInfo::*)(::HoudiniEngineUnity::HEU_InputObjectInfo*)>(
    &::HoudiniEngineUnity::HEU_InputObjectInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2171fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputObjectInfo::*)()>(&::HoudiniEngineUnity::HEU_InputObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x216fbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>"
constexpr HoudiniEngineUnity::HEU_InputObjectInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::GameObject*& HoudiniEngineUnity::HEU_InputObjectInfo::__get__gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameObject;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__gameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Terrain*& HoudiniEngineUnity::HEU_InputObjectInfo::__get__terrainReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____terrainReference;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Terrain*> const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__terrainReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____terrainReference;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__terrainReference(::UnityEngine::Terrain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HEU_BoundingVolume*& HoudiniEngineUnity::HEU_InputObjectInfo::__get__boundingVolumeReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____boundingVolumeReference;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HEU_BoundingVolume*> const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__boundingVolumeReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____boundingVolumeReference;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__boundingVolumeReference(::GlobalNamespace::HEU_BoundingVolume* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boundingVolumeReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Tilemaps::Tilemap*& HoudiniEngineUnity::HEU_InputObjectInfo::__get__tilemapReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tilemapReference;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Tilemaps::Tilemap*> const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__tilemapReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tilemapReference;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__tilemapReference(::UnityEngine::Tilemaps::Tilemap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tilemapReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Matrix4x4& HoudiniEngineUnity::HEU_InputObjectInfo::__get__syncdTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____syncdTransform;
}
constexpr ::UnityEngine::Matrix4x4 const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__syncdTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____syncdTransform;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__syncdTransform(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____syncdTransform = value;
}
constexpr bool& HoudiniEngineUnity::HEU_InputObjectInfo::__get__useTransformOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useTransformOffset;
}
constexpr bool const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__useTransformOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useTransformOffset;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__useTransformOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____useTransformOffset = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectInfo::__get__translateOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____translateOffset;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__translateOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____translateOffset;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__translateOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____translateOffset = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectInfo::__get__rotateOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotateOffset;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__rotateOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotateOffset;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__rotateOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____rotateOffset = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectInfo::__get__scaleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scaleOffset;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__scaleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scaleOffset;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__scaleOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____scaleOffset = value;
}
constexpr ::System::Type*& HoudiniEngineUnity::HEU_InputObjectInfo::__get__inputInterfaceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inputInterfaceType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& HoudiniEngineUnity::HEU_InputObjectInfo::__get__inputInterfaceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inputInterfaceType;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectInfo::__set__inputInterfaceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputInterfaceType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_InputObjectInfo::CopyTo(::HoudiniEngineUnity::HEU_InputObjectInfo* destObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destObject);
}
inline void HoudiniEngineUnity::HEU_InputObjectInfo::SetReferencesFromGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(),
                                                                             "SetReferencesFromGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_InputObjectInfo::IsEquivalentTo(::HoudiniEngineUnity::HEU_InputObjectInfo* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_InputObjectInfo* HoudiniEngineUnity::HEU_InputObjectInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_InputObjectInfo*>());
}
inline void HoudiniEngineUnity::HEU_InputObjectInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputObjectInfo::HEU_InputObjectInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
