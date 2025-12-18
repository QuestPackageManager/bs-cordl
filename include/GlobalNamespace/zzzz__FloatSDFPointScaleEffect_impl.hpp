#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatSDFPointScaleEffect.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__FloatSDFPointScaleEffect_def.hpp"
#include "GlobalNamespace/zzzz__SDFPoint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)()>(&::GlobalNamespace::FloatSDFPointScaleEffect::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57e1840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatSDFPointScaleEffect::SetValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57e184c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatSDFPointScaleEffect::TriggerValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57e18b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect.Scale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)(float_t)>(
    &::GlobalNamespace::FloatSDFPointScaleEffect::Scale)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57e1880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), "Scale", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatSDFPointScaleEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatSDFPointScaleEffect::*)()>(&::GlobalNamespace::FloatSDFPointScaleEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e18e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SDFPoint>& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__colorPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorPoints;
}
constexpr ::UnityW<::GlobalNamespace::SDFPoint> const& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__colorPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorPoints;
}
constexpr void GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_set__colorPoints(::UnityW<::GlobalNamespace::SDFPoint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorPoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__valueBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__valueBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr void GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_set__valueBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueBounds = value;
}
constexpr float_t& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__startScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startScale;
}
constexpr float_t const& GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_get__startScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startScale;
}
constexpr void GlobalNamespace::FloatSDFPointScaleEffect::__cordl_internal_set__startScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startScale = value;
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::Scale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), "Scale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloatSDFPointScaleEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatSDFPointScaleEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatSDFPointScaleEffect* GlobalNamespace::FloatSDFPointScaleEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloatSDFPointScaleEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatSDFPointScaleEffect::FloatSDFPointScaleEffect() {}
