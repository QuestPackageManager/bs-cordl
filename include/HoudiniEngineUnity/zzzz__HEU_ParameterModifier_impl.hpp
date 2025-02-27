#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ParameterModifier.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ParameterModifier_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ParameterModifier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction::HEU_ParameterModifier_ModifierAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction::HEU_ParameterModifier_ModifierAction() {}
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction::MULTIPARM_INSERT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction::MULTIPARM_REMOVE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction::MULTIPARM_CLEAR{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction::SET_FLOAT{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction::SET_INT{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ParameterModifier.GetNewModifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::HEU_ParameterModifier* (*)(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction, int32_t, int32_t, int32_t)>(
        &::HoudiniEngineUnity::HEU_ParameterModifier::GetNewModifier)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3a57620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(), "GetNewModifier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ParameterModifier.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ParameterModifier::*)(::HoudiniEngineUnity::HEU_ParameterModifier*)>(
    &::HoudiniEngineUnity::HEU_ParameterModifier::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x3a576ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterModifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ParameterModifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ParameterModifier::*)()>(&::HoudiniEngineUnity::HEU_ParameterModifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a576a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__parameterIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__parameterIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterIndex;
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_set__parameterIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parameterIndex = value;
}
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action;
}
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction const& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action;
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_set__action(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____action = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__instanceIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__instanceIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceIndex;
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_set__instanceIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instanceIndex = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__modifierValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifierValue;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__modifierValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifierValue;
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_set__modifierValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifierValue = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__floatValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr float_t const& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__floatValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_set__floatValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatValue = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__intValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intValue;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_get__intValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intValue;
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__cordl_internal_set__intValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intValue = value;
}
inline ::HoudiniEngineUnity::HEU_ParameterModifier* HoudiniEngineUnity::HEU_ParameterModifier::GetNewModifier(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction action, int32_t parameterIndex,
                                                                                                              int32_t instanceIndex, int32_t modifierValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(), "GetNewModifier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ParameterModifier*, false>(nullptr, ___internal_method, action, parameterIndex, instanceIndex, modifierValue);
}
inline bool HoudiniEngineUnity::HEU_ParameterModifier::IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterModifier* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterModifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void HoudiniEngineUnity::HEU_ParameterModifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_ParameterModifier* HoudiniEngineUnity::HEU_ParameterModifier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_ParameterModifier*>());
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>"
constexpr HoudiniEngineUnity::HEU_ParameterModifier::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*
HoudiniEngineUnity::HEU_ParameterModifier::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_ParameterModifier__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_ParameterModifier::HEU_ParameterModifier() {}
