#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Rotate_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Rotate.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Rotate::*)()>(&::GlobalNamespace::Rotate::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x20f3c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rotate.OnBecameVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Rotate::*)()>(&::GlobalNamespace::Rotate::OnBecameVisible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20f3d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "OnBecameVisible",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rotate.OnBecameInvisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Rotate::*)()>(&::GlobalNamespace::Rotate::OnBecameInvisible)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20f3de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "OnBecameInvisible",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rotate.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Rotate::*)()>(&::GlobalNamespace::Rotate::Update)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x20f3dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rotate.Randomize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Rotate::*)()>(&::GlobalNamespace::Rotate::Randomize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20f3d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "Randomize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Rotate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Rotate::*)()>(&::GlobalNamespace::Rotate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20f3ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::Rotate::__get__rotationVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Rotate::__get__rotationVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationVector;
}
constexpr void GlobalNamespace::Rotate::__set__rotationVector(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationVector = value;
}
constexpr float_t& GlobalNamespace::Rotate::__get__speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr float_t const& GlobalNamespace::Rotate::__get__speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr void GlobalNamespace::Rotate::__set__speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speed = value;
}
constexpr bool& GlobalNamespace::Rotate::__get__randomize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomize;
}
constexpr bool const& GlobalNamespace::Rotate::__get__randomize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomize;
}
constexpr void GlobalNamespace::Rotate::__set__randomize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomize = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Rotate::__get__randomMinMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomMinMultiplier;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Rotate::__get__randomMinMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomMinMultiplier;
}
constexpr void GlobalNamespace::Rotate::__set__randomMinMultiplier(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomMinMultiplier = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Rotate::__get__randomMaxMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomMaxMultiplier;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Rotate::__get__randomMaxMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomMaxMultiplier;
}
constexpr void GlobalNamespace::Rotate::__set__randomMaxMultiplier(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomMaxMultiplier = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::Rotate::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::Rotate::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::Rotate::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Rotate::__get__startRotationAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startRotationAngles;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Rotate::__get__startRotationAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startRotationAngles;
}
constexpr void GlobalNamespace::Rotate::__set__startRotationAngles(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startRotationAngles = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Rotate::__get__randomizedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedMultiplier;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Rotate::__get__randomizedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomizedMultiplier;
}
constexpr void GlobalNamespace::Rotate::__set__randomizedMultiplier(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomizedMultiplier = value;
}
inline void GlobalNamespace::Rotate::Awake() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Rotate::OnBecameVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "OnBecameVisible",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Rotate::OnBecameInvisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "OnBecameInvisible",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Rotate::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Rotate::Randomize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), "Randomize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::Rotate* GlobalNamespace::Rotate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::Rotate*>());
}
inline void GlobalNamespace::Rotate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Rotate*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Rotate::Rotate() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
