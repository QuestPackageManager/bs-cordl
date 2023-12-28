#pragma once
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MoveInDirectionEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MoveInDirectionEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveInDirectionEffect::*)()>(&::GlobalNamespace::MoveInDirectionEffect::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a6788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveInDirectionEffect.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveInDirectionEffect::*)(float_t)>(&::GlobalNamespace::MoveInDirectionEffect::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23a68a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveInDirectionEffect.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveInDirectionEffect::*)(float_t)>(
    &::GlobalNamespace::MoveInDirectionEffect::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23a68f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveInDirectionEffect.Move
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveInDirectionEffect::*)(float_t)>(&::GlobalNamespace::MoveInDirectionEffect::Move)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23a68a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), "Move", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveInDirectionEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveInDirectionEffect::*)()>(&::GlobalNamespace::MoveInDirectionEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23a68f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::MoveInDirectionEffect::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::MoveInDirectionEffect::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::MoveInDirectionEffect::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MoveInDirectionEffect::__get__moveOrigin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveOrigin;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MoveInDirectionEffect::__get__moveOrigin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveOrigin;
}
constexpr void GlobalNamespace::MoveInDirectionEffect::__set__moveOrigin(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveOrigin = value;
}
constexpr float_t& GlobalNamespace::MoveInDirectionEffect::__get__moveScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveScale;
}
constexpr float_t const& GlobalNamespace::MoveInDirectionEffect::__get__moveScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveScale;
}
constexpr void GlobalNamespace::MoveInDirectionEffect::__set__moveScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveScale = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MoveInDirectionEffect::__get__startPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MoveInDirectionEffect::__get__startPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPosition;
}
constexpr void GlobalNamespace::MoveInDirectionEffect::__set__startPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MoveInDirectionEffect::__get__moveDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MoveInDirectionEffect::__get__moveDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveDirection;
}
constexpr void GlobalNamespace::MoveInDirectionEffect::__set__moveDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveDirection = value;
}
inline void GlobalNamespace::MoveInDirectionEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MoveInDirectionEffect::SetValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), "SetValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MoveInDirectionEffect::TriggerValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), "TriggerValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MoveInDirectionEffect::Move(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), "Move", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MoveInDirectionEffect* GlobalNamespace::MoveInDirectionEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MoveInDirectionEffect*>());
}
inline void GlobalNamespace::MoveInDirectionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveInDirectionEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MoveInDirectionEffect::MoveInDirectionEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
