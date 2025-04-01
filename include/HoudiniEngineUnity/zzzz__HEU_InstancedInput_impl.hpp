#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InstancedInput.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InstancedInput_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InstancedInput.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InstancedInput::*)(::HoudiniEngineUnity::HEU_InstancedInput*)>(
    &::HoudiniEngineUnity::HEU_InstancedInput::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3a24438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstancedInput*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstancedInput*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InstancedInput._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InstancedInput::*)()>(&::HoudiniEngineUnity::HEU_InstancedInput::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a245d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstancedInput*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& HoudiniEngineUnity::HEU_InstancedInput::__cordl_internal_get__instancedGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancedGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HoudiniEngineUnity::HEU_InstancedInput::__cordl_internal_get__instancedGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancedGameObject;
}
constexpr void HoudiniEngineUnity::HEU_InstancedInput::__cordl_internal_set__instancedGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instancedGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InstancedInput::__cordl_internal_get__rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InstancedInput::__cordl_internal_get__rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr void HoudiniEngineUnity::HEU_InstancedInput::__cordl_internal_set__rotationOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InstancedInput::__cordl_internal_get__scaleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleOffset;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InstancedInput::__cordl_internal_get__scaleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleOffset;
}
constexpr void HoudiniEngineUnity::HEU_InstancedInput::__cordl_internal_set__scaleOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleOffset = value;
}
inline bool HoudiniEngineUnity::HEU_InstancedInput::IsEquivalentTo(::HoudiniEngineUnity::HEU_InstancedInput* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstancedInput*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstancedInput*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void HoudiniEngineUnity::HEU_InstancedInput::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstancedInput*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_InstancedInput* HoudiniEngineUnity::HEU_InstancedInput::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_InstancedInput*>());
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>"
constexpr HoudiniEngineUnity::HEU_InstancedInput::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>*
HoudiniEngineUnity::HEU_InstancedInput::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_InstancedInput__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InstancedInput::HEU_InstancedInput() {}
