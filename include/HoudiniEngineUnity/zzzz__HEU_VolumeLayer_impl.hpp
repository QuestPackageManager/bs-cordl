#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_VolumeLayer.hpp"
#include "HoudiniEngineUnity/zzzz__HFLayerType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeLayer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeLayer.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeLayer::*)(::HoudiniEngineUnity::HEU_VolumeLayer*)>(
    &::HoudiniEngineUnity::HEU_VolumeLayer::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x25cdcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeLayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeLayer::*)()>(&::HoudiniEngineUnity::HEU_VolumeLayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25ce028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>"
constexpr HoudiniEngineUnity::HEU_VolumeLayer::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*
HoudiniEngineUnity::HEU_VolumeLayer::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_VolumeLayer__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*>(static_cast<void*>(this));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerName;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_PartData>& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__part() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____part;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_PartData> const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__part() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____part;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__part(::UnityW<::HoudiniEngineUnity::HEU_PartData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____part)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr float_t const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strength = value;
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__uiExpanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__uiExpanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__uiExpanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiExpanded = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__tile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tile;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__tile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tile;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__tile(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tile = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__xLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xLength;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__xLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xLength;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__xLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xLength = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__yLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yLength;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__yLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yLength;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__yLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yLength = value;
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__hasLayerAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLayerAttributes;
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__hasLayerAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLayerAttributes;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__hasLayerAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasLayerAttributes = value;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer>& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__terrainLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainLayer;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer> const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__terrainLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainLayer;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__terrainLayer(::UnityW<::UnityEngine::TerrainLayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainLayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HFLayerType& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__layerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerType;
}
constexpr ::HoudiniEngineUnity::HFLayerType const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__layerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerType;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__layerType(::HoudiniEngineUnity::HFLayerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layerType = value;
}
constexpr ::HoudiniEngineUnity::HEU_DetailPrototype*& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__detailPrototype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailPrototype;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_DetailPrototype*> const& HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_get__detailPrototype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailPrototype;
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__cordl_internal_set__detailPrototype(::HoudiniEngineUnity::HEU_DetailPrototype* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____detailPrototype)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HoudiniEngineUnity::HEU_VolumeLayer::IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeLayer* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_VolumeLayer* HoudiniEngineUnity::HEU_VolumeLayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_VolumeLayer*>());
}
inline void HoudiniEngineUnity::HEU_VolumeLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_VolumeLayer::HEU_VolumeLayer() {}
