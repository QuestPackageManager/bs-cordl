#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRResult_2.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::get_Success() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(),
                                                                             "get_Success", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValue, typename TStatus> inline TStatus GlobalNamespace::OVRResult_2<TValue, TStatus>::get_Status() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(),
                                                                             "get_Status", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TStatus, false>(this, ___internal_method);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::get_HasValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(),
                                                                             "get_HasValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValue, typename TStatus> inline TValue GlobalNamespace::OVRResult_2<TValue, TStatus>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::TryGetValue(::ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), "TryGetValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename TValue, typename TStatus> inline void GlobalNamespace::OVRResult_2<TValue, TStatus>::_ctor(TValue value, TStatus status) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, status);
}
template <typename TValue, typename TStatus> inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> GlobalNamespace::OVRResult_2<TValue, TStatus>::From(TValue value, TStatus status) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), "From", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TValue, TStatus>, false>(nullptr, ___internal_method, value, status);
}
template <typename TValue, typename TStatus> inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> GlobalNamespace::OVRResult_2<TValue, TStatus>::FromSuccess(TValue value, TStatus status) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), "FromSuccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TValue, TStatus>, false>(nullptr, ___internal_method, value, status);
}
template <typename TValue, typename TStatus> inline ::GlobalNamespace::OVRResult_2<TValue, TStatus> GlobalNamespace::OVRResult_2<TValue, TStatus>::FromFailure(TStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), "FromFailure",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TValue, TStatus>, false>(nullptr, ___internal_method, status);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::Equals(::GlobalNamespace::OVRResult_2<TValue, TStatus> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename TValue, typename TStatus> inline int32_t GlobalNamespace::OVRResult_2<TValue, TStatus>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue, typename TStatus> inline ::StringW GlobalNamespace::OVRResult_2<TValue, TStatus>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TValue, typename TStatus> inline bool GlobalNamespace::OVRResult_2<TValue, TStatus>::op_Implicit_bool(::GlobalNamespace::OVRResult_2<TValue, TStatus> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
template <typename TValue, typename TStatus>
inline ::GlobalNamespace::OVRResult_2<TValue, TStatus>
GlobalNamespace::OVRResult_2<TValue, TStatus>::op_Implicit___GlobalNamespace__OVRResult_2_TValue_TStatus_(::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_2<TValue, TStatus>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TValue, TStatus>, false>(nullptr, ___internal_method, result);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue,TStatus>>"
template <typename TValue, typename TStatus> constexpr GlobalNamespace::OVRResult_2<TValue, TStatus>::operator ::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue,TStatus>>"
template <typename TValue, typename TStatus>
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>*
GlobalNamespace::OVRResult_2<TValue, TStatus>::i___System__IEquatable_1___GlobalNamespace__OVRResult_2_TValue_TStatus__() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRResult_2<TValue, TStatus>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
