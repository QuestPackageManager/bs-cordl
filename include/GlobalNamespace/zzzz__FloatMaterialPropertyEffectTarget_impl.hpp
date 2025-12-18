#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatMaterialPropertyEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__FloatMaterialPropertyEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatMaterialPropertyEffectTarget.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatMaterialPropertyEffectTarget::*)()>(
    &::GlobalNamespace::FloatMaterialPropertyEffectTarget::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57e179c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatMaterialPropertyEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatMaterialPropertyEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatMaterialPropertyEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e17bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatMaterialPropertyEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatMaterialPropertyEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatMaterialPropertyEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e1824;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatMaterialPropertyEffectTarget.SetFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatMaterialPropertyEffectTarget::*)(float_t)>(
    &::GlobalNamespace::FloatMaterialPropertyEffectTarget::SetFloat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x57e17c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(), "SetFloat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatMaterialPropertyEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatMaterialPropertyEffectTarget::*)()>(
    &::GlobalNamespace::FloatMaterialPropertyEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57e1828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__valueBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__valueBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr void GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_set__valueBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueBounds = value;
}
constexpr float_t& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__granularityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granularityMultiplier;
}
constexpr float_t const& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__granularityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granularityMultiplier;
}
constexpr void GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_set__granularityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____granularityMultiplier = value;
}
constexpr int32_t& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::FloatMaterialPropertyEffectTarget::__cordl_internal_set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId = value;
}
inline void GlobalNamespace::FloatMaterialPropertyEffectTarget::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloatMaterialPropertyEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatMaterialPropertyEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatMaterialPropertyEffectTarget::SetFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(), "SetFloat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloatMaterialPropertyEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatMaterialPropertyEffectTarget* GlobalNamespace::FloatMaterialPropertyEffectTarget::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloatMaterialPropertyEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatMaterialPropertyEffectTarget::FloatMaterialPropertyEffectTarget() {}
