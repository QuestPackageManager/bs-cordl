#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRInteractionFeature.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType::OpenXRInteractionFeature_ActionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType::OpenXRInteractionFeature_ActionType() {}
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType::Binary{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType::Axis1D{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType::Axis2D{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType::Pose{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType::Vibrate{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType::Count{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c40d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::__cordl_internal_get_interactionProfileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionProfileName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::__cordl_internal_get_interactionProfileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionProfileName;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::__cordl_internal_set_interactionProfileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactionProfileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::__cordl_internal_get_interactionPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionPath;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::__cordl_internal_get_interactionPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionPath;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::__cordl_internal_set_interactionPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactionPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::__cordl_internal_get_userPaths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPaths;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::__cordl_internal_get_userPaths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPaths;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::__cordl_internal_set_userPaths(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userPaths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding* UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding::OpenXRInteractionFeature_ActionBinding() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c40dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_set_type(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_localizedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_localizedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_set_localizedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>*&
UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindings;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>* const&
UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindings;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_set_bindings(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_usages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usages;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_usages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usages;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_set_usages(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___usages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_isAdditive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAdditive;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_get_isAdditive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAdditive;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::__cordl_internal_set_isAdditive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isAdditive = value;
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig* UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig::OpenXRInteractionFeature_ActionConfig() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c40e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::__cordl_internal_get_characteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristics;
}
constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::__cordl_internal_get_characteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristics;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::__cordl_internal_set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristics = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::__cordl_internal_get_userPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPath;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::__cordl_internal_get_userPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPath;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::__cordl_internal_set_userPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig* UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig::OpenXRInteractionFeature_DeviceConfig() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c40e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_localizedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_localizedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_set_localizedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>*&
UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_deviceInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceInfos;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>* const&
UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_deviceInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceInfos;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_set_deviceInfos(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deviceInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>*&
UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_actions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>* const&
UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_actions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_set_actions(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_desiredInteractionProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredInteractionProfile;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_desiredInteractionProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredInteractionProfile;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_set_desiredInteractionProfile(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___desiredInteractionProfile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_manufacturer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manufacturer;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_manufacturer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manufacturer;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_set_manufacturer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___manufacturer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::__cordl_internal_set_serialNumber(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serialNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig::OpenXRInteractionFeature_ActionMapConfig() {}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_UserPaths::OpenXRInteractionFeature_UserPaths() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType::OpenXRInteractionFeature_InteractionProfileType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType::OpenXRInteractionFeature_InteractionProfileType() {}
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType::Device{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType::XRController{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.get_IsAdditive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::get_IsAdditive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c3e10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.RegisterDeviceLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c3e18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.UnregisterDeviceLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c3e1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.RegisterActionMapsWithRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c3e20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67c3e24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.GetInteractionProfileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType (
    ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::GetInteractionProfileType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c3e44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.GetDeviceLayoutName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67c3e4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.CreateActionMaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::CreateActionMaps)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67beef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "CreateActionMaps", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.AddActionMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(
    ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*)>(&::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::AddActionMap)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x67c3e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "AddActionMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.AddAdditiveActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*,
    ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*)>(&::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::AddAdditiveActions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c4008;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.OnEnabledChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnEnabledChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c400c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.RegisterLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterLayouts)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67bec38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "RegisterLayouts",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c4010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::setStaticF_m_CreatedActionMaps(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*, "m_CreatedActionMaps",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*
UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::getStaticF_m_CreatedActionMaps() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*, "m_CreatedActionMaps",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get>();
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::setStaticF_m_InteractionProfileEnabledMaps(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType, ::System::Collections::Generic::Dictionary_2<::StringW, bool>*>*
        value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType,
                                                                                 ::System::Collections::Generic::Dictionary_2<::StringW, bool>*>*,
                                    "m_InteractionProfileEnabledMaps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, bool>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType,
                                                    ::System::Collections::Generic::Dictionary_2<::StringW, bool>*>*
UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::getStaticF_m_InteractionProfileEnabledMaps() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType,
                                                                                        ::System::Collections::Generic::Dictionary_2<::StringW, bool>*>*,
                                           "m_InteractionProfileEnabledMaps",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get>();
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::get_IsAdditive() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterDeviceLayout() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::UnregisterDeviceLayout() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterActionMapsWithRuntime() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnInstanceCreate(uint64_t xrSession) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xrSession);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::GetInteractionProfileType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::GetDeviceLayoutName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::CreateActionMaps(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* configs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "CreateActionMaps", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configs);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::AddActionMap(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* map) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "AddActionMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::AddAdditiveActions(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* actionMaps,
    ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* additiveMap) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionMaps, additiveMap);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnEnabledChange() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterLayouts() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "RegisterLayouts",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OpenXRInteractionFeature() {}
