#pragma once
// IWYU pragma private; include "GlobalNamespace/RuntimeLightWithIds.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_impl.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f2c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>::get(), "get_intensity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId.set_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::*)(float_t)>(
    &::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f2c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>::get(), "set_intensity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::*)(int32_t, float_t)>(
    &::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x39f2c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
inline float_t GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>::get(), "get_intensity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::set_intensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>::get(), "set_intensity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightId, lightIntensity);
}
inline ::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId* GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::New_ctor(int32_t lightId, float_t lightIntensity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>(lightId, lightIntensity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId::RuntimeLightWithIds_LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.get_mixType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorMixAndWeightingApproach (::GlobalNamespace::RuntimeLightWithIds::*)()>(
    &::GlobalNamespace::RuntimeLightWithIds::get_mixType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39f2a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "get_mixType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::RuntimeLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.ProcessNewColorData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x39f2a4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.GetLightWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* (
    ::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f2c10;

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
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x39f2bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "ProcessColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x39f24b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>*>&
GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__lightIntensityData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr ::ArrayW<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>*> const&
GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__lightIntensityData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__cordl_internal_set__lightIntensityData(
    ::ArrayW<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::RuntimeLightWithIds_LightIntensitiesWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightIntensityData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__maxIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxIntensity;
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__maxIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxIntensity;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__cordl_internal_set__maxIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxIntensity = value;
}
constexpr bool& GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__multiplyColorByAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr bool const& GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__multiplyColorByAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__cordl_internal_set__multiplyColorByAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColorByAlpha = value;
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__mixType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixType;
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& GlobalNamespace::RuntimeLightWithIds::__cordl_internal_get__mixType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixType;
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__cordl_internal_set__mixType(::GlobalNamespace::ColorMixAndWeightingApproach value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mixType = value;
}
inline ::GlobalNamespace::ColorMixAndWeightingApproach GlobalNamespace::RuntimeLightWithIds::get_mixType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "get_mixType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorMixAndWeightingApproach, false>(this, ___internal_method);
}
inline void GlobalNamespace::RuntimeLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::RuntimeLightWithIds::ProcessNewColorData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GlobalNamespace::RuntimeLightWithIds::GetLightWithIds() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::RuntimeLightWithIds::ProcessColor(::UnityEngine::Color color, float_t intensity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), "ProcessColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, color, intensity);
}
inline void GlobalNamespace::RuntimeLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RuntimeLightWithIds* GlobalNamespace::RuntimeLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RuntimeLightWithIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeLightWithIds::RuntimeLightWithIds() {}
