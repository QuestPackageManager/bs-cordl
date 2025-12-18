#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatLocalScaleEffect.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FloatLocalScaleEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatLocalScaleEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatLocalScaleEffect::*)()>(&::GlobalNamespace::FloatLocalScaleEffect::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x57e1688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatLocalScaleEffect.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatLocalScaleEffect::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatLocalScaleEffect::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e16f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatLocalScaleEffect.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatLocalScaleEffect::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatLocalScaleEffect::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e1788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatLocalScaleEffect.Move
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatLocalScaleEffect::*)(float_t)>(&::GlobalNamespace::FloatLocalScaleEffect::Move)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x57e16f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), "Move", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatLocalScaleEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatLocalScaleEffect::*)()>(&::GlobalNamespace::FloatLocalScaleEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e178c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& GlobalNamespace::FloatLocalScaleEffect::__cordl_internal_get__transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& GlobalNamespace::FloatLocalScaleEffect::__cordl_internal_get__transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr void GlobalNamespace::FloatLocalScaleEffect::__cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatLocalScaleEffect::__cordl_internal_get__valueBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatLocalScaleEffect::__cordl_internal_get__valueBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr void GlobalNamespace::FloatLocalScaleEffect::__cordl_internal_set__valueBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueBounds = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloatLocalScaleEffect::__cordl_internal_get__startScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloatLocalScaleEffect::__cordl_internal_get__startScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startScale;
}
constexpr void GlobalNamespace::FloatLocalScaleEffect::__cordl_internal_set__startScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startScale = value;
}
inline void GlobalNamespace::FloatLocalScaleEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloatLocalScaleEffect::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatLocalScaleEffect::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatLocalScaleEffect::Move(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), "Move",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloatLocalScaleEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatLocalScaleEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatLocalScaleEffect* GlobalNamespace::FloatLocalScaleEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloatLocalScaleEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatLocalScaleEffect::FloatLocalScaleEffect() {}
