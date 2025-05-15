#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_HandleParamBinding.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HandleParamBinding_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HandleParamBinding_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType::HEU_HandleParamBinding_HEU_HandleParamType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType::HEU_HandleParamBinding_HEU_HandleParamType() {}
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType::TRANSLATE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType::ROTATE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType::SCALE{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HandleParamBinding.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_HandleParamBinding::*)(::HoudiniEngineUnity::HEU_HandleParamBinding*)>(
    &::HoudiniEngineUnity::HEU_HandleParamBinding::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x3a48100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HandleParamBinding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HandleParamBinding::*)()>(&::HoudiniEngineUnity::HEU_HandleParamBinding::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a471ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__paramType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramType;
}
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType const& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__paramType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramType;
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_set__paramType(::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paramType = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__parmID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parmID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__parmID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parmID;
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_set__parmID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parmID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__paramName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__paramName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paramName;
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_set__paramName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paramName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__bDisabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bDisabled;
}
constexpr bool const& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__bDisabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bDisabled;
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_set__bDisabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bDisabled = value;
}
constexpr ::ArrayW<bool, ::Array<bool>*>& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__boundChannels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundChannels;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_get__boundChannels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundChannels;
}
constexpr void HoudiniEngineUnity::HEU_HandleParamBinding::__cordl_internal_set__boundChannels(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boundChannels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HoudiniEngineUnity::HEU_HandleParamBinding::IsEquivalentTo(::HoudiniEngineUnity::HEU_HandleParamBinding* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void HoudiniEngineUnity::HEU_HandleParamBinding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HandleParamBinding*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HandleParamBinding* HoudiniEngineUnity::HEU_HandleParamBinding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_HandleParamBinding*>());
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>"
constexpr HoudiniEngineUnity::HEU_HandleParamBinding::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>*
HoudiniEngineUnity::HEU_HandleParamBinding::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_HandleParamBinding__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding::HEU_HandleParamBinding() {}
