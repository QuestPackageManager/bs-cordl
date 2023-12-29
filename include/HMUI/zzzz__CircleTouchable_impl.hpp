#pragma once
#include "HMUI/zzzz__Touchable_impl.hpp"
#include "HMUI/zzzz__CircleTouchable_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HMUI::CircleTouchable.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleTouchable::*)()>(&::HMUI::CircleTouchable::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fce610;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable.UpdateCachedReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleTouchable::*)()>(&::HMUI::CircleTouchable::UpdateCachedReferences)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1fce62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), "UpdateCachedReferences",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::CircleTouchable::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::HMUI::CircleTouchable::Raycast)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1fce698;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleTouchable::*)()>(&::HMUI::CircleTouchable::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1fce764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), "OnDrawGizmosSelected",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable.DrawGizmoCircle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleTouchable::*)(::UnityEngine::Vector3, float_t, int32_t)>(
    &::HMUI::CircleTouchable::DrawGizmoCircle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1fce874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), "DrawGizmoCircle", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::CircleTouchable::*)()>(&::HMUI::CircleTouchable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fce954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::CircleTouchable::__get__minRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minRadius;
}
constexpr float_t const& HMUI::CircleTouchable::__get__minRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minRadius;
}
constexpr void HMUI::CircleTouchable::__set__minRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minRadius = value;
}
constexpr float_t& HMUI::CircleTouchable::__get__maxRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRadius;
}
constexpr float_t const& HMUI::CircleTouchable::__get__maxRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRadius;
}
constexpr void HMUI::CircleTouchable::__set__maxRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxRadius = value;
}
constexpr ::UnityEngine::RectTransform*& HMUI::CircleTouchable::__get__containerRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerRect;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& HMUI::CircleTouchable::__get__containerRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerRect;
}
constexpr void HMUI::CircleTouchable::__set__containerRect(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____containerRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::CircleTouchable::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::CircleTouchable::UpdateCachedReferences() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), "UpdateCachedReferences",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::CircleTouchable::Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), "Raycast", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sp, eventCamera);
}
inline void HMUI::CircleTouchable::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), "OnDrawGizmosSelected",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::CircleTouchable::DrawGizmoCircle(::UnityEngine::Vector3 center, float_t radius, int32_t steps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), "DrawGizmoCircle", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, center, radius, steps);
}
inline ::HMUI::CircleTouchable* HMUI::CircleTouchable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::CircleTouchable*>());
}
inline void HMUI::CircleTouchable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::CircleTouchable*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::CircleTouchable::CircleTouchable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
