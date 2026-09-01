#pragma once
// IWYU pragma private; include "GlobalNamespace\FormattedIntListSettingsController.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__FormattedIntListSettingsController_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FormattedIntListSettingsController.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FormattedIntListSettingsController::*)()>(&::GlobalNamespace::FormattedIntListSettingsController::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a146fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedIntListSettingsController.add_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedIntListSettingsController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>*)>(&::GlobalNamespace::FormattedIntListSettingsController::add_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a14704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(),
                                         { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedIntListSettingsController.remove_valueDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedIntListSettingsController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>*)>(&::GlobalNamespace::FormattedIntListSettingsController::remove_valueDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a147c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(),
                                         { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedIntListSettingsController.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedIntListSettingsController::*)(int32_t, bool)>(
    &::GlobalNamespace::FormattedIntListSettingsController::SetValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a14884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedIntListSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FormattedIntListSettingsController::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::FormattedIntListSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a14898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedIntListSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedIntListSettingsController::*)(int32_t)>(&::GlobalNamespace::FormattedIntListSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a148c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedIntListSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FormattedIntListSettingsController::*)(int32_t)>(
    &::GlobalNamespace::FormattedIntListSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a148f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormattedIntListSettingsController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormattedIntListSettingsController::*)()>(&::GlobalNamespace::FormattedIntListSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a14954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get__minValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minValue;
}
constexpr int32_t const& GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get__minValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minValue;
}
constexpr void GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_set__minValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minValue = value;
}
constexpr int32_t& GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get__maxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxValue;
}
constexpr int32_t const& GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get__maxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxValue;
}
constexpr void GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_set__maxValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxValue = value;
}
constexpr ::StringW& GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get__formattingString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattingString;
}
constexpr ::StringW const& GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get__formattingString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattingString;
}
constexpr void GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_set__formattingString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formattingString = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>*&
GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get_valueDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* const&
GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get_valueDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueDidChangeEvent;
}
constexpr void
GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_set_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueDidChangeEvent = value;
}
constexpr int32_t& GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr int32_t const& GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::FormattedIntListSettingsController::__cordl_internal_set__value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
inline int32_t GlobalNamespace::FormattedIntListSettingsController::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::FormattedIntListSettingsController::add_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(),
                                              { "add_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FormattedIntListSettingsController::remove_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(),
                                       { "remove_valueDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FormattedIntListSettingsController::SetValue(int32_t value, bool callCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), { "SetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, callCallback);
}
inline bool GlobalNamespace::FormattedIntListSettingsController::GetInitValues(::by_ref<int32_t> idx, ::by_ref<int32_t> numberOfElements) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::FormattedIntListSettingsController::ApplyValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::FormattedIntListSettingsController::TextForValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, idx);
}
inline void GlobalNamespace::FormattedIntListSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FormattedIntListSettingsController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FormattedIntListSettingsController* GlobalNamespace::FormattedIntListSettingsController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FormattedIntListSettingsController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FormattedIntListSettingsController::FormattedIntListSettingsController() {}
