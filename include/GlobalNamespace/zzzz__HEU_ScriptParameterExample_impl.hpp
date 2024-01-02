#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HEU_ScriptParameterExample_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptParameterExample.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptParameterExample::*)()>(&::GlobalNamespace::HEU_ScriptParameterExample::Start)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x214d9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptParameterExample.UpdateGravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptParameterExample::*)()>(
    &::GlobalNamespace::HEU_ScriptParameterExample::UpdateGravity)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x214dc48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(),
                                                                               "UpdateGravity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptParameterExample._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptParameterExample::*)()>(&::GlobalNamespace::HEU_ScriptParameterExample::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x214dd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& GlobalNamespace::HEU_ScriptParameterExample::__get__evergreenGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evergreenGameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::HEU_ScriptParameterExample::__get__evergreenGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evergreenGameObject;
}
constexpr void GlobalNamespace::HEU_ScriptParameterExample::__set__evergreenGameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____evergreenGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset*& GlobalNamespace::HEU_ScriptParameterExample::__get__evergreenAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evergreenAsset;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> const& GlobalNamespace::HEU_ScriptParameterExample::__get__evergreenAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evergreenAsset;
}
constexpr void GlobalNamespace::HEU_ScriptParameterExample::__set__evergreenAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____evergreenAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::HEU_ScriptParameterExample::__get__updateRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRate;
}
constexpr float_t const& GlobalNamespace::HEU_ScriptParameterExample::__get__updateRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRate;
}
constexpr void GlobalNamespace::HEU_ScriptParameterExample::__set__updateRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateRate = value;
}
constexpr float_t& GlobalNamespace::HEU_ScriptParameterExample::__get__scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr float_t const& GlobalNamespace::HEU_ScriptParameterExample::__get__scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr void GlobalNamespace::HEU_ScriptParameterExample::__set__scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scale = value;
}
inline void GlobalNamespace::HEU_ScriptParameterExample::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HEU_ScriptParameterExample::UpdateGravity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(),
                                                                             "UpdateGravity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HEU_ScriptParameterExample* GlobalNamespace::HEU_ScriptParameterExample::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HEU_ScriptParameterExample*>());
}
inline void GlobalNamespace::HEU_ScriptParameterExample::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HEU_ScriptParameterExample::HEU_ScriptParameterExample() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
