#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType::__OpenXRInteractionFeature__ActionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType::__OpenXRInteractionFeature__ActionType() {}
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType::Binary{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType::Axis1D{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType::Axis2D{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType::Pose{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType::Vibrate{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType::Count{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::*)()>(
    &::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b066c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__get_interactionProfileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionProfileName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__get_interactionProfileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionProfileName;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__set_interactionProfileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactionProfileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__get_interactionPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionPath;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__get_interactionPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionPath;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__set_interactionPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactionPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__get_userPaths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPaths;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__get_userPaths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPaths;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__set_userPaths(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userPaths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding* UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>());
}
inline void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding::__OpenXRInteractionFeature__ActionBinding() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::*)()>(
    &::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b066c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__set_type(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_localizedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_localizedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__set_localizedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>*&
UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>*> const&
UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindings;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__set_bindings(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_usages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usages;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__get_usages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usages;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__set_usages(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___usages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig* UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>());
}
inline void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig::__OpenXRInteractionFeature__ActionConfig() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::*)()>(
    &::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b066d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::InputDeviceCharacteristics& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::__get_characteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristics;
}
constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::__get_characteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristics;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::__set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristics = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::__get_userPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPath;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::__get_userPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userPath;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::__set_userPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig* UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>());
}
inline void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig::__OpenXRInteractionFeature__DeviceConfig() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::*)()>(
    &::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b066d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_localizedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_localizedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__set_localizedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>*&
UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_deviceInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>*> const&
UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_deviceInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceInfos;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__set_deviceInfos(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deviceInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>*&
UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_actions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>*> const&
UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_actions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__set_actions(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_desiredInteractionProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredInteractionProfile;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_desiredInteractionProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredInteractionProfile;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__set_desiredInteractionProfile(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___desiredInteractionProfile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_manufacturer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manufacturer;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_manufacturer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manufacturer;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__set_manufacturer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___manufacturer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__set_serialNumber(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serialNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig* UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>());
}
inline void UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig::__OpenXRInteractionFeature__ActionMapConfig() {}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__UserPaths::__OpenXRInteractionFeature__UserPaths() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.RegisterDeviceLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b06540;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.UnregisterDeviceLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b06544;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.RegisterActionMapsWithRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b06548;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b0654c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.CreateActionMaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>*)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::CreateActionMaps)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b03990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "CreateActionMaps", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.AddActionMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(
    ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*)>(&::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::AddActionMap)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2b0656c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "AddActionMap", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.OnEnabledChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnEnabledChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b066b4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.RegisterLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterLayouts)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2b0373c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "RegisterLayouts",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b066b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::setStaticF_m_CreatedActionMaps(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>*, "m_CreatedActionMaps",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>*
UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::getStaticF_m_CreatedActionMaps() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>*, "m_CreatedActionMaps",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get>();
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterDeviceLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "RegisterDeviceLayout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::UnregisterDeviceLayout() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "UnregisterDeviceLayout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterActionMapsWithRuntime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(),
                                               "RegisterActionMapsWithRuntime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnInstanceCreate(uint64_t xrSession) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "OnInstanceCreate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::CreateActionMaps(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>* configs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "CreateActionMaps", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configs);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::AddActionMap(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig* map) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "AddActionMap", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnEnabledChange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "OnEnabledChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterLayouts() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), "RegisterLayouts",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>());
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OpenXRInteractionFeature() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
