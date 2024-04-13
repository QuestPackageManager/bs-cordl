#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InstanceInputUIState_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InstanceInputUIState.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InstanceInputUIState::*)(::HoudiniEngineUnity::HEU_InstanceInputUIState*)>(
    &::HoudiniEngineUnity::HEU_InstanceInputUIState::CopyTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x245c6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InstanceInputUIState.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InstanceInputUIState::*)(::HoudiniEngineUnity::HEU_InstanceInputUIState*)>(
    &::HoudiniEngineUnity::HEU_InstanceInputUIState::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x245c6fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InstanceInputUIState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InstanceInputUIState::*)()>(&::HoudiniEngineUnity::HEU_InstanceInputUIState::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x245c8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>"
constexpr HoudiniEngineUnity::HEU_InstanceInputUIState::operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>*
HoudiniEngineUnity::HEU_InstanceInputUIState::i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_InstanceInputUIState__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>*>(static_cast<void*>(this));
}
constexpr bool& HoudiniEngineUnity::HEU_InstanceInputUIState::__cordl_internal_get__showInstanceInputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showInstanceInputs;
}
constexpr bool const& HoudiniEngineUnity::HEU_InstanceInputUIState::__cordl_internal_get__showInstanceInputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showInstanceInputs;
}
constexpr void HoudiniEngineUnity::HEU_InstanceInputUIState::__cordl_internal_set__showInstanceInputs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showInstanceInputs = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_InstanceInputUIState::__cordl_internal_get__numInputsToShowUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numInputsToShowUI;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InstanceInputUIState::__cordl_internal_get__numInputsToShowUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numInputsToShowUI;
}
constexpr void HoudiniEngineUnity::HEU_InstanceInputUIState::__cordl_internal_set__numInputsToShowUI(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numInputsToShowUI = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_InstanceInputUIState::__cordl_internal_get__inputsPageIndexUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputsPageIndexUI;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InstanceInputUIState::__cordl_internal_get__inputsPageIndexUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputsPageIndexUI;
}
constexpr void HoudiniEngineUnity::HEU_InstanceInputUIState::__cordl_internal_set__inputsPageIndexUI(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputsPageIndexUI = value;
}
inline void HoudiniEngineUnity::HEU_InstanceInputUIState::CopyTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* dest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dest);
}
inline bool HoudiniEngineUnity::HEU_InstanceInputUIState::IsEquivalentTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_InstanceInputUIState* HoudiniEngineUnity::HEU_InstanceInputUIState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_InstanceInputUIState*>());
}
inline void HoudiniEngineUnity::HEU_InstanceInputUIState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstanceInputUIState*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InstanceInputUIState::HEU_InstanceInputUIState() {}
