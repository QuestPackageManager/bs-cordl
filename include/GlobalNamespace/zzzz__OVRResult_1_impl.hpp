#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRResult_1.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TStatus> inline bool GlobalNamespace::OVRResult_1<TStatus>::get_Success() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), { "get_Success", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TStatus> inline TStatus GlobalNamespace::OVRResult_1<TStatus>::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TStatus>(*this, ___internal_method);
}
template <typename TStatus> inline void GlobalNamespace::OVRResult_1<TStatus>::_ctor(TStatus status) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), { ".ctor", {}, { ::i2c::type_of<TStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, status);
}
template <typename TStatus> inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult_1<TStatus>::From(TStatus status) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), { "From", {}, { ::i2c::type_of<TStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>>(nullptr, ___internal_method, status);
}
template <typename TStatus> inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult_1<TStatus>::FromSuccess(TStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), { "FromSuccess", {}, { ::i2c::type_of<TStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>>(nullptr, ___internal_method, status);
}
template <typename TStatus> inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult_1<TStatus>::FromFailure(TStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), { "FromFailure", {}, { ::i2c::type_of<TStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>>(nullptr, ___internal_method, status);
}
template <typename TStatus> inline bool GlobalNamespace::OVRResult_1<TStatus>::Equals(::GlobalNamespace::OVRResult_1<TStatus> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRResult_1<TStatus>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename TStatus> inline bool GlobalNamespace::OVRResult_1<TStatus>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename TStatus> inline int32_t GlobalNamespace::OVRResult_1<TStatus>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TStatus> inline ::StringW GlobalNamespace::OVRResult_1<TStatus>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename TStatus> inline bool GlobalNamespace::OVRResult_1<TStatus>::op_Implicit_bool(::GlobalNamespace::OVRResult_1<TStatus> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::OVRResult_1<TStatus>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
template <typename TStatus>
inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult_1<TStatus>::op_Implicit___GlobalNamespace__OVRResult_1_TStatus_(::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRResult_1<TStatus>>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>>(nullptr, ___internal_method, result);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>"
template <typename TStatus> constexpr GlobalNamespace::OVRResult_1<TStatus>::operator ::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>"
template <typename TStatus>
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>* GlobalNamespace::OVRResult_1<TStatus>::i___System__IEquatable_1___GlobalNamespace__OVRResult_1_TStatus__() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_initialized", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_statusCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "_status", ty: "TStatus", modifiers: "", def_value: Some("{}") }]
template <typename TStatus> constexpr ::GlobalNamespace::OVRResult_1<TStatus>::OVRResult_1(bool _initialized, int32_t _statusCode, TStatus _status) noexcept {
  this->_initialized = _initialized;
  this->_statusCode = _statusCode;
  this->_status = _status;
}
// Ctor Parameters []
template <typename TStatus> constexpr ::GlobalNamespace::OVRResult_1<TStatus>::OVRResult_1() {}
