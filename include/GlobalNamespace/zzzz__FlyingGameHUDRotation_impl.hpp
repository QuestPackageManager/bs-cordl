#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingGameHUDRotation_def.hpp"
#include "GlobalNamespace/zzzz__BeatLineManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSpawnRotation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingGameHUDRotation.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingGameHUDRotation::*)()>(&::GlobalNamespace::FlyingGameHUDRotation::Start)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23b4684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingGameHUDRotation.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingGameHUDRotation::*)()>(&::GlobalNamespace::FlyingGameHUDRotation::FixedUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x23b4760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(), "FixedUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingGameHUDRotation.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingGameHUDRotation::*)()>(&::GlobalNamespace::FlyingGameHUDRotation::LateUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23b48d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingGameHUDRotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingGameHUDRotation::*)()>(&::GlobalNamespace::FlyingGameHUDRotation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23b4960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FlyingGameHUDRotation::__get__smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr float_t const& GlobalNamespace::FlyingGameHUDRotation::__get__smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__smooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smooth = value;
}
constexpr ::GlobalNamespace::BeatLineManager*& GlobalNamespace::FlyingGameHUDRotation::__get__beatLineManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLineManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatLineManager*> const& GlobalNamespace::FlyingGameHUDRotation::__get__beatLineManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLineManager;
}
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__beatLineManager(::GlobalNamespace::BeatLineManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatLineManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentSpawnRotation*& GlobalNamespace::FlyingGameHUDRotation::__get__environmentSpawnRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSpawnRotation;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSpawnRotation*> const& GlobalNamespace::FlyingGameHUDRotation::__get__environmentSpawnRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSpawnRotation;
}
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__environmentSpawnRotation(::GlobalNamespace::EnvironmentSpawnRotation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentSpawnRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FlyingGameHUDRotation::__get__prevYAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevYAngle;
}
constexpr float_t const& GlobalNamespace::FlyingGameHUDRotation::__get__prevYAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevYAngle;
}
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__prevYAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevYAngle = value;
}
constexpr float_t& GlobalNamespace::FlyingGameHUDRotation::__get__yAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yAngle;
}
constexpr float_t const& GlobalNamespace::FlyingGameHUDRotation::__get__yAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yAngle;
}
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__yAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yAngle = value;
}
inline void GlobalNamespace::FlyingGameHUDRotation::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FlyingGameHUDRotation::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(), "FixedUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FlyingGameHUDRotation::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FlyingGameHUDRotation* GlobalNamespace::FlyingGameHUDRotation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingGameHUDRotation*>());
}
inline void GlobalNamespace::FlyingGameHUDRotation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingGameHUDRotation::FlyingGameHUDRotation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
