#pragma once
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType::__FormattedFloatListSettingsController__ValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType::__FormattedFloatListSettingsController__ValueType() {}
constexpr ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType GlobalNamespace::__FormattedFloatListSettingsController__ValueType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType GlobalNamespace::__FormattedFloatListSettingsController__ValueType::Normalized{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType GlobalNamespace::__FormattedFloatListSettingsController__ValueType::InvertedNormalized{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.add_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*)>(&::GlobalNamespace::FormattedFloatListSettingsController::add_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23ac49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), "add_valueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.remove_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*)>(&::GlobalNamespace::FormattedFloatListSettingsController::remove_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23ac54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), "remove_valueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::FormattedFloatListSettingsController::*)()>(
    &::GlobalNamespace::FormattedFloatListSettingsController::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ac5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                               "get_value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.get_values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::GlobalNamespace::FormattedFloatListSettingsController::*)()>(
    &::GlobalNamespace::FormattedFloatListSettingsController::get_values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ac604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                               "get_values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.set_values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(::ArrayW<float_t, ::Array<float_t>*>)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::set_values)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23ac60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), "set_values", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(float_t, bool)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::SetValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23a5e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FormattedFloatListSettingsController::*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x23ac61c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(int32_t)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23ac76c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FormattedFloatListSettingsController::*)(int32_t)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23ac7c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)()>(
    &::GlobalNamespace::FormattedFloatListSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23ac8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set__values(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__formattingString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattingString;
}
constexpr ::StringW const& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__formattingString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattingString;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set__formattingString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formattingString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get_valueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType const& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get_valueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set_valueType(::GlobalNamespace::__FormattedFloatListSettingsController__ValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueType = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*&
GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get_valueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*> const&
GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get_valueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr void
GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr float_t const& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set__value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr float_t& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
constexpr float_t const& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set__min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____min = value;
}
constexpr float_t& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
constexpr float_t const& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set__max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____max = value;
}
constexpr bool& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr bool const& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValue;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set__hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValue = value;
}
inline void GlobalNamespace::FormattedFloatListSettingsController::add_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), "add_valueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FormattedFloatListSettingsController::remove_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), "remove_valueDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::FormattedFloatListSettingsController::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                             "get_value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::FormattedFloatListSettingsController::get_values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                             "get_values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::FormattedFloatListSettingsController::set_values(::ArrayW<float_t, ::Array<float_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), "set_values", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param callCallback: bool (default: false)
inline void GlobalNamespace::FormattedFloatListSettingsController::SetValue(float_t value, bool callCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, callCallback);
}
inline bool GlobalNamespace::FormattedFloatListSettingsController::GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::FormattedFloatListSettingsController::ApplyValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::FormattedFloatListSettingsController::TextForValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::FormattedFloatListSettingsController* GlobalNamespace::FormattedFloatListSettingsController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FormattedFloatListSettingsController*>());
}
inline void GlobalNamespace::FormattedFloatListSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FormattedFloatListSettingsController::FormattedFloatListSettingsController() {}
