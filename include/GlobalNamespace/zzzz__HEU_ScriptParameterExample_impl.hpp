#pragma once
// IWYU pragma private; include "GlobalNamespace/HEU_ScriptParameterExample.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HEU_ScriptParameterExample_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptParameterExample.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptParameterExample::*)()>(&::GlobalNamespace::HEU_ScriptParameterExample::Start)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x3a054fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptParameterExample.UpdateGravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptParameterExample::*)()>(
    &::GlobalNamespace::HEU_ScriptParameterExample::UpdateGravity)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3a0576c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(),
                                                                               "UpdateGravity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptParameterExample._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptParameterExample::*)()>(&::GlobalNamespace::HEU_ScriptParameterExample::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a05850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_get__evergreenGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evergreenGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_get__evergreenGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evergreenGameObject;
}
constexpr void GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_set__evergreenGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____evergreenGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_get__evergreenAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evergreenAsset;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_get__evergreenAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evergreenAsset;
}
constexpr void GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_set__evergreenAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____evergreenAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_get__updateRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRate;
}
constexpr float_t const& GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_get__updateRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRate;
}
constexpr void GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_set__updateRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateRate = value;
}
constexpr float_t& GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_get__scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr float_t const& GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_get__scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr void GlobalNamespace::HEU_ScriptParameterExample::__cordl_internal_set__scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scale = value;
}
inline void GlobalNamespace::HEU_ScriptParameterExample::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HEU_ScriptParameterExample::UpdateGravity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(),
                                                                             "UpdateGravity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HEU_ScriptParameterExample::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptParameterExample*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HEU_ScriptParameterExample* GlobalNamespace::HEU_ScriptParameterExample::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HEU_ScriptParameterExample*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HEU_ScriptParameterExample::HEU_ScriptParameterExample() {}
