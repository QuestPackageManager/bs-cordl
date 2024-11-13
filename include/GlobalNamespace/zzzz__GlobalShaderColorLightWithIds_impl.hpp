#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalShaderColorLightWithIds.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__GlobalShaderColorLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__GlobalShaderColorLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x398b904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>::get(),
                                                 "get_intensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId.set_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::*)(float_t)>(
    &::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x398b90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>::get(), "set_intensity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::*)(int32_t, float_t)>(
    &::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x398b914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
inline float_t GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>::get(),
                                               "get_intensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::set_intensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>::get(), "set_intensity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId* GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::New_ctor(int32_t lightId,
                                                                                                                                                                      float_t lightIntensity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>(lightId, lightIntensity));
}
inline void GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightId, lightIntensity);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId::__GlobalShaderColorLightWithIds__LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::GlobalShaderColorLightWithIds.ProcessNewColorData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GlobalShaderColorLightWithIds::*)()>(
    &::GlobalNamespace::GlobalShaderColorLightWithIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x398b738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalShaderColorLightWithIds.GetLightWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* (
    ::GlobalNamespace::GlobalShaderColorLightWithIds::*)()>(&::GlobalNamespace::GlobalShaderColorLightWithIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x398b884;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalShaderColorLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GlobalShaderColorLightWithIds::*)()>(
    &::GlobalNamespace::GlobalShaderColorLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x398b88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>*>&
GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__lightIntensityData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr ::ArrayW<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>*> const&
GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__lightIntensityData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr void GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_set__lightIntensityData(
    ::ArrayW<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightIntensityData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__overrideSaturation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideSaturation;
}
constexpr bool const& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__overrideSaturation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideSaturation;
}
constexpr void GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_set__overrideSaturation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideSaturation = value;
}
constexpr float_t& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__saturation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saturation;
}
constexpr float_t const& GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_get__saturation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saturation;
}
constexpr void GlobalNamespace::GlobalShaderColorLightWithIds::__cordl_internal_set__saturation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saturation = value;
}
inline void GlobalNamespace::GlobalShaderColorLightWithIds::setStaticF__globalLightTintColorPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_globalLightTintColorPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GlobalShaderColorLightWithIds::getStaticF__globalLightTintColorPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_globalLightTintColorPropertyId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get>();
}
inline void GlobalNamespace::GlobalShaderColorLightWithIds::ProcessNewColorData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GlobalNamespace::GlobalShaderColorLightWithIds::GetLightWithIds() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GlobalShaderColorLightWithIds* GlobalNamespace::GlobalShaderColorLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GlobalShaderColorLightWithIds*>());
}
inline void GlobalNamespace::GlobalShaderColorLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GlobalShaderColorLightWithIds*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlobalShaderColorLightWithIds::GlobalShaderColorLightWithIds() {}
