#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRResult_2.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::get_Success() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "get_Success", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TValue, typename TStatus> inline TStatus GlobalNamespace::OVRResult_2<TValue, TStatus>::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TStatus>(*this, ___internal_method);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::get_HasValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "get_HasValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TValue, typename TStatus> inline TValue GlobalNamespace::OVRResult_2<TValue, TStatus>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::TryGetValue(::by_ref<TValue> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "TryGetValue", {}, { ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template <typename TValue, typename TStatus> inline void GlobalNamespace::OVRResult_2<TValue, TStatus>::_ctor(TValue value, TStatus status) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { ".ctor", {}, { ::i2c::type_of<TValue>(), ::i2c::type_of<TStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, status);
}
template <typename TValue, typename TStatus> inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> GlobalNamespace::OVRResult_2<TValue, TStatus>::From(TValue value, TStatus status) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "From", {}, { ::i2c::type_of<TValue>(), ::i2c::type_of<TStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(nullptr, ___internal_method, value, status);
}
template <typename TValue, typename TStatus> inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> GlobalNamespace::OVRResult_2<TValue, TStatus>::FromSuccess(TValue value, TStatus status) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "FromSuccess", {}, { ::i2c::type_of<TValue>(), ::i2c::type_of<TStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(nullptr, ___internal_method, value, status);
}
template <typename TValue, typename TStatus> inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> GlobalNamespace::OVRResult_2<TValue, TStatus>::FromFailure(TStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "FromFailure", {}, { ::i2c::type_of<TStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(nullptr, ___internal_method, status);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::Equals(::GlobalNamespace::OVRResult_2<TValue, TStatus> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename TValue, typename TStatus> inline int32_t GlobalNamespace::OVRResult_2<TValue, TStatus>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TValue, typename TStatus> inline ::StringW GlobalNamespace::OVRResult_2<TValue, TStatus>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::op_Implicit_bool(::GlobalNamespace::OVRResult_2<TValue, TStatus> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
template <typename TValue, typename TStatus>
inline ::GlobalNamespace::OVRResult_2<TValue, TStatus>
GlobalNamespace::OVRResult_2<TValue, TStatus>::op_Implicit___GlobalNamespace__OVRResult_2_TValue_TStatus_(::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TValue, TStatus>>(nullptr, ___internal_method, result);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue,TStatus>>"
template <typename TValue, typename TStatus> constexpr GlobalNamespace::OVRResult_2<TValue, TStatus>::operator ::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue,TStatus>>"
template <typename TValue, typename TStatus>
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>*
GlobalNamespace::OVRResult_2<TValue, TStatus>::i___System__IEquatable_1___GlobalNamespace__OVRResult_2_TValue_TStatus__() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_initialized", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_value", ty: "TValue", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_statusCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_status", ty: "TStatus", modifiers: "", def_value: Some("{}") }]
template <typename TValue, typename TStatus> constexpr ::GlobalNamespace::OVRResult_2<TValue, TStatus>::OVRResult_2(bool _initialized, TValue _value, int32_t _statusCode, TStatus _status) noexcept {
  this->_initialized = _initialized;
  this->_value = _value;
  this->_statusCode = _statusCode;
  this->_status = _status;
}
// Ctor Parameters []
template <typename TValue, typename TStatus> constexpr ::GlobalNamespace::OVRResult_2<TValue, TStatus>::OVRResult_2() {}
