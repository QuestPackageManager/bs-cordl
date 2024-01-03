#pragma once
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsValueController_impl.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsValueController_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsValueController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::__FormattedFloatListSettingsValueController__ValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::__FormattedFloatListSettingsValueController__ValueType() {}
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::Normalized{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType::InvertedNormalized{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController.GetInitValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FormattedFloatListSettingsValueController::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::GlobalNamespace::FormattedFloatListSettingsValueController::GetInitValues)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22aa814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController.ApplyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsValueController::*)(int32_t)>(
    &::GlobalNamespace::FormattedFloatListSettingsValueController::ApplyValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22aa8f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FormattedFloatListSettingsValueController::*)(int32_t)>(
    &::GlobalNamespace::FormattedFloatListSettingsValueController::TextForValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22aa968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsValueController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsValueController::*)()>(
    &::GlobalNamespace::FormattedFloatListSettingsValueController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22aaa44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::FormattedFloatListSettingsValueController::__get__settingsValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsValue;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::FormattedFloatListSettingsValueController::__get__settingsValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsValue;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__settingsValue(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::FormattedFloatListSettingsValueController::__get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::FormattedFloatListSettingsValueController::__get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__values(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::FormattedFloatListSettingsValueController::__get__formattingString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattingString;
}
constexpr ::StringW const& GlobalNamespace::FormattedFloatListSettingsValueController::__get__formattingString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattingString;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__formattingString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formattingString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType& GlobalNamespace::FormattedFloatListSettingsValueController::__get_valueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType const& GlobalNamespace::FormattedFloatListSettingsValueController::__get_valueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set_valueType(::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueType = value;
}
constexpr float_t& GlobalNamespace::FormattedFloatListSettingsValueController::__get__min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
constexpr float_t const& GlobalNamespace::FormattedFloatListSettingsValueController::__get__min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____min = value;
}
constexpr float_t& GlobalNamespace::FormattedFloatListSettingsValueController::__get__max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
constexpr float_t const& GlobalNamespace::FormattedFloatListSettingsValueController::__get__max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsValueController::__set__max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____max = value;
}
inline bool GlobalNamespace::FormattedFloatListSettingsValueController::GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::FormattedFloatListSettingsValueController::ApplyValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::FormattedFloatListSettingsValueController::TextForValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::FormattedFloatListSettingsValueController* GlobalNamespace::FormattedFloatListSettingsValueController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FormattedFloatListSettingsValueController*>());
}
inline void GlobalNamespace::FormattedFloatListSettingsValueController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsValueController*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FormattedFloatListSettingsValueController::FormattedFloatListSettingsValueController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
