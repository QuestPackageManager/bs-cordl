#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MenuNeonLightsGenerator_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuNeonLightsGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuNeonLightsGenerator::*)()>(&::GlobalNamespace::MenuNeonLightsGenerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23765e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuNeonLightsGenerator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MenuNeonLightsGenerator::__get__generate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generate;
}
constexpr bool const& GlobalNamespace::MenuNeonLightsGenerator::__get__generate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generate;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__generate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generate = value;
}
constexpr float_t& GlobalNamespace::MenuNeonLightsGenerator::__get__radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr float_t const& GlobalNamespace::MenuNeonLightsGenerator::__get__radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius = value;
}
constexpr float_t& GlobalNamespace::MenuNeonLightsGenerator::__get__angle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____angle;
}
constexpr float_t const& GlobalNamespace::MenuNeonLightsGenerator::__get__angle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____angle;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__angle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____angle = value;
}
constexpr int32_t& GlobalNamespace::MenuNeonLightsGenerator::__get__numberOfElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElements;
}
constexpr int32_t const& GlobalNamespace::MenuNeonLightsGenerator::__get__numberOfElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfElements;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__numberOfElements(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfElements = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MenuNeonLightsGenerator::__get__intensityCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensityCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::MenuNeonLightsGenerator::__get__intensityCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensityCurve;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__intensityCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intensityCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MenuNeonLightsGenerator::__get__intensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensityMultiplier;
}
constexpr float_t const& GlobalNamespace::MenuNeonLightsGenerator::__get__intensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensityMultiplier;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__intensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensityMultiplier = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MenuNeonLightsGenerator::__get__lengthCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::MenuNeonLightsGenerator::__get__lengthCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthCurve;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__lengthCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lengthCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MenuNeonLightsGenerator::__get__lengthMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthMultiplier;
}
constexpr float_t const& GlobalNamespace::MenuNeonLightsGenerator::__get__lengthMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthMultiplier;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__lengthMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lengthMultiplier = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MenuNeonLightsGenerator::__get__widthCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____widthCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::MenuNeonLightsGenerator::__get__widthCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____widthCurve;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__widthCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____widthCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MenuNeonLightsGenerator::__get__widthMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____widthMultiplier;
}
constexpr float_t const& GlobalNamespace::MenuNeonLightsGenerator::__get__widthMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____widthMultiplier;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__widthMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____widthMultiplier = value;
}
constexpr ::GlobalNamespace::TubeBloomPrePassLight*& GlobalNamespace::MenuNeonLightsGenerator::__get__neonLightPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neonLightPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> const& GlobalNamespace::MenuNeonLightsGenerator::__get__neonLightPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neonLightPrefab;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__neonLightPrefab(::GlobalNamespace::TubeBloomPrePassLight* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____neonLightPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MenuNeonLightsGenerator::__get__afterSpawnRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____afterSpawnRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MenuNeonLightsGenerator::__get__afterSpawnRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____afterSpawnRotation;
}
constexpr void GlobalNamespace::MenuNeonLightsGenerator::__set__afterSpawnRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____afterSpawnRotation = value;
}
inline ::GlobalNamespace::MenuNeonLightsGenerator* GlobalNamespace::MenuNeonLightsGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MenuNeonLightsGenerator*>());
}
inline void GlobalNamespace::MenuNeonLightsGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuNeonLightsGenerator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuNeonLightsGenerator::MenuNeonLightsGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
