#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRResult_1.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TStatus> inline bool GlobalNamespace::OVRResult_1<TStatus>::get_Success() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), "get_Success",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TStatus> inline TStatus GlobalNamespace::OVRResult_1<TStatus>::get_Status() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), "get_Status",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TStatus, false>(this, ___internal_method);
}
template <typename TStatus> inline void GlobalNamespace::OVRResult_1<TStatus>::_ctor(TStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status);
}
template <typename TStatus> inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult_1<TStatus>::From(TStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), "From", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>, false>(nullptr, ___internal_method, status);
}
template <typename TStatus> inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult_1<TStatus>::FromSuccess(TStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), "FromSuccess",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>, false>(nullptr, ___internal_method, status);
}
template <typename TStatus> inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult_1<TStatus>::FromFailure(TStatus status) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), "FromFailure",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>, false>(nullptr, ___internal_method, status);
}
template <typename TStatus> inline bool GlobalNamespace::OVRResult_1<TStatus>::Equals(::GlobalNamespace::OVRResult_1<TStatus> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRResult_1<TStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename TStatus> inline bool GlobalNamespace::OVRResult_1<TStatus>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename TStatus> inline int32_t GlobalNamespace::OVRResult_1<TStatus>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TStatus> inline ::StringW GlobalNamespace::OVRResult_1<TStatus>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TStatus> inline bool GlobalNamespace::OVRResult_1<TStatus>::op_Implicit_bool(::GlobalNamespace::OVRResult_1<TStatus> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRResult_1<TStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
template <typename TStatus>
inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult_1<TStatus>::op_Implicit___GlobalNamespace__OVRResult_1_TStatus_(::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult_1<TStatus>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>, false>(nullptr, ___internal_method, result);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>"
template <typename TStatus> constexpr GlobalNamespace::OVRResult_1<TStatus>::operator ::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>"
template <typename TStatus>
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>* GlobalNamespace::OVRResult_1<TStatus>::i___System__IEquatable_1___GlobalNamespace__OVRResult_1_TStatus__() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRResult_1<TStatus>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
