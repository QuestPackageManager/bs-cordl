#pragma once
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_impl.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2113b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(), "get_intensity",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId.set_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::*)(float_t)>(
    &::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2113b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(), "set_intensity",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::*)(int32_t, float_t)>(
    &::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2113b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
inline float_t GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(), "get_intensity",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::set_intensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(), "set_intensity",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId* GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::New_ctor(int32_t lightId, float_t lightIntensity) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>(lightId, lightIntensity));
}
inline void GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightId, lightIntensity);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::__RuntimeLightWithIds__LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.get_mixType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorMixAndWeightingApproach (::GlobalNamespace::RuntimeLightWithIds::*)()>(
    &::GlobalNamespace::RuntimeLightWithIds::get_mixType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2112948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "get_mixType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::RuntimeLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.ProcessNewColorData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x211294c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.GetLightWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* (
    ::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x2112af8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.ProcessColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::RuntimeLightWithIds::*)(::UnityEngine::Color, float_t)>(
    &::GlobalNamespace::RuntimeLightWithIds::ProcessColor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2112ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "ProcessColor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x210e940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>&
GlobalNamespace::RuntimeLightWithIds::__get__lightIntensityData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*> const&
GlobalNamespace::RuntimeLightWithIds::__get__lightIntensityData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__lightIntensityData(
    ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightIntensityData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RuntimeLightWithIds::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithIds::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::RuntimeLightWithIds::__get__maxIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxIntensity;
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithIds::__get__maxIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxIntensity;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__maxIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxIntensity = value;
}
constexpr bool& GlobalNamespace::RuntimeLightWithIds::__get__multiplyColorByAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr bool const& GlobalNamespace::RuntimeLightWithIds::__get__multiplyColorByAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__multiplyColorByAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColorByAlpha = value;
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& GlobalNamespace::RuntimeLightWithIds::__get__mixType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixType;
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& GlobalNamespace::RuntimeLightWithIds::__get__mixType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixType;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__mixType(::GlobalNamespace::ColorMixAndWeightingApproach value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mixType = value;
}
inline ::GlobalNamespace::ColorMixAndWeightingApproach GlobalNamespace::RuntimeLightWithIds::get_mixType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "get_mixType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorMixAndWeightingApproach, false>(this, ___internal_method);
}
inline void GlobalNamespace::RuntimeLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "ColorWasSet", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::RuntimeLightWithIds::ProcessNewColorData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                                                             "ProcessNewColorData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GlobalNamespace::RuntimeLightWithIds::GetLightWithIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "GetLightWithIds",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::RuntimeLightWithIds::ProcessColor(::UnityEngine::Color color, float_t intensity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "ProcessColor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, color, intensity);
}
inline ::GlobalNamespace::RuntimeLightWithIds* GlobalNamespace::RuntimeLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RuntimeLightWithIds*>());
}
inline void GlobalNamespace::RuntimeLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeLightWithIds::RuntimeLightWithIds() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
