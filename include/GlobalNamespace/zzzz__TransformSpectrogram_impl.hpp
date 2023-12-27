#pragma once
#include "GlobalNamespace/zzzz__LightAxis_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TransformSpectrogram_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformSpectrogram.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TransformSpectrogram::*)()>(&::GlobalNamespace::TransformSpectrogram::Awake)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x23b72f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformSpectrogram.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TransformSpectrogram::*)()>(&::GlobalNamespace::TransformSpectrogram::Update)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x23b7478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformSpectrogram._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TransformSpectrogram::*)()>(&::GlobalNamespace::TransformSpectrogram::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23b76e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& GlobalNamespace::TransformSpectrogram::__get__transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transforms;
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& GlobalNamespace::TransformSpectrogram::__get__transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transforms;
}
constexpr void GlobalNamespace::TransformSpectrogram::__set__transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LightAxis& GlobalNamespace::TransformSpectrogram::__get__axis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____axis;
}
constexpr ::GlobalNamespace::LightAxis const& GlobalNamespace::TransformSpectrogram::__get__axis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____axis;
}
constexpr void GlobalNamespace::TransformSpectrogram::__set__axis(::GlobalNamespace::LightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____axis = value;
}
constexpr float_t& GlobalNamespace::TransformSpectrogram::__get__minPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minPosition;
}
constexpr float_t const& GlobalNamespace::TransformSpectrogram::__get__minPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minPosition;
}
constexpr void GlobalNamespace::TransformSpectrogram::__set__minPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minPosition = value;
}
constexpr float_t& GlobalNamespace::TransformSpectrogram::__get__maxPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxPosition;
}
constexpr float_t const& GlobalNamespace::TransformSpectrogram::__get__maxPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxPosition;
}
constexpr void GlobalNamespace::TransformSpectrogram::__set__maxPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____maxPosition = value;
}
constexpr bool& GlobalNamespace::TransformSpectrogram::__get__scaleSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scaleSamples;
}
constexpr bool const& GlobalNamespace::TransformSpectrogram::__get__scaleSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scaleSamples;
}
constexpr void GlobalNamespace::TransformSpectrogram::__set__scaleSamples(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____scaleSamples = value;
}
constexpr float_t& GlobalNamespace::TransformSpectrogram::__get__scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scale;
}
constexpr float_t const& GlobalNamespace::TransformSpectrogram::__get__scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scale;
}
constexpr void GlobalNamespace::TransformSpectrogram::__set__scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____scale = value;
}
constexpr ::GlobalNamespace::BasicSpectrogramData*& GlobalNamespace::TransformSpectrogram::__get__spectrogramData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spectrogramData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicSpectrogramData*> const& GlobalNamespace::TransformSpectrogram::__get__spectrogramData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spectrogramData;
}
constexpr void GlobalNamespace::TransformSpectrogram::__set__spectrogramData(::GlobalNamespace::BasicSpectrogramData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spectrogramData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransformSpectrogram::__get__direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransformSpectrogram::__get__direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____direction;
}
constexpr void GlobalNamespace::TransformSpectrogram::__set__direction(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____direction = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::TransformSpectrogram::__get__defaultPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____defaultPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::TransformSpectrogram::__get__defaultPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____defaultPositions;
}
constexpr void GlobalNamespace::TransformSpectrogram::__set__defaultPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TransformSpectrogram::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TransformSpectrogram::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TransformSpectrogram* GlobalNamespace::TransformSpectrogram::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TransformSpectrogram*>());
}
inline void GlobalNamespace::TransformSpectrogram::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformSpectrogram::TransformSpectrogram() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
