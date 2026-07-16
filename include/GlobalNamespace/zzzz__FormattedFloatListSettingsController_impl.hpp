#pragma once
// IWYU pragma private; include "GlobalNamespace/FormattedFloatListSettingsController.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FormattedFloatListSettingsController_ValueType::FormattedFloatListSettingsController_ValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FormattedFloatListSettingsController_ValueType::FormattedFloatListSettingsController_ValueType() {}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController_ValueType GlobalNamespace::FormattedFloatListSettingsController_ValueType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::FormattedFloatListSettingsController_ValueType GlobalNamespace::FormattedFloatListSettingsController_ValueType::Normalized{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::FormattedFloatListSettingsController_ValueType GlobalNamespace::FormattedFloatListSettingsController_ValueType::InvertedNormalized{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.add_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*)>(&::GlobalNamespace::FormattedFloatListSettingsController::add_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a0dd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(),
                                         { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.remove_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*)>(&::GlobalNamespace::FormattedFloatListSettingsController::remove_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a0ddc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(),
                                         { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FormattedFloatListSettingsController::*)()>(&::GlobalNamespace::FormattedFloatListSettingsController::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0de80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.get_values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::FormattedFloatListSettingsController::*)()>(
    &::GlobalNamespace::FormattedFloatListSettingsController::get_values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0de88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { "get_values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.set_values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(::ArrayW<float_t>)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::set_values)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a0de90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { "set_values", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(float_t, bool)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::SetValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a0dec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { "SetValue", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FormattedFloatListSettingsController::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5a0dedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)(int32_t)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a0e040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FormattedFloatListSettingsController::*)(int32_t)>(
    &::GlobalNamespace::FormattedFloatListSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a0e098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedFloatListSettingsController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedFloatListSettingsController::*)()>(&::GlobalNamespace::FormattedFloatListSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a0e160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set__values(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
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
  this->____formattingString = value;
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController_ValueType& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get_valueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController_ValueType const& GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get_valueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr void GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set_valueType(::GlobalNamespace::FormattedFloatListSettingsController_ValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueType = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*&
GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get_valueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* const&
GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_get_valueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr void
GlobalNamespace::FormattedFloatListSettingsController::__cordl_internal_set_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueDidChangeEvent = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(),
                                       { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FormattedFloatListSettingsController::remove_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(),
                                       { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::FormattedFloatListSettingsController::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::ArrayW<float_t> GlobalNamespace::FormattedFloatListSettingsController::get_values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { "get_values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::FormattedFloatListSettingsController::set_values(::ArrayW<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { "set_values", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FormattedFloatListSettingsController::SetValue(float_t value, bool callCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { "SetValue", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, callCallback);
}
inline bool GlobalNamespace::FormattedFloatListSettingsController::GetInitValues(::by_ref<int32_t> idx, ::by_ref<int32_t> numberOfElements) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::FormattedFloatListSettingsController::ApplyValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::FormattedFloatListSettingsController::TextForValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, idx);
}
inline void GlobalNamespace::FormattedFloatListSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FormattedFloatListSettingsController* GlobalNamespace::FormattedFloatListSettingsController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FormattedFloatListSettingsController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FormattedFloatListSettingsController::FormattedFloatListSettingsController() {}
