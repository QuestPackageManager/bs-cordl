#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRDeviceDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRDeviceDescriptor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRFeatureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRDeviceDescriptor.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::XR::XRDeviceDescriptor::*)()>(
    &::UnityEngine::InputSystem::XR::XRDeviceDescriptor::ToJson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63d44b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                                                                               "ToJson", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRDeviceDescriptor.FromJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::XRDeviceDescriptor* (*)(::StringW)>(
    &::UnityEngine::InputSystem::XR::XRDeviceDescriptor::FromJson)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63d1324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(), "FromJson",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRDeviceDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::XRDeviceDescriptor::*)()>(
    &::UnityEngine::InputSystem::XR::XRDeviceDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63d44b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_deviceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceName;
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_deviceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceName;
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_set_deviceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deviceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_manufacturer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manufacturer;
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_manufacturer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___manufacturer;
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_set_manufacturer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___manufacturer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_serialNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_serialNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serialNumber;
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_set_serialNumber(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serialNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::InputDeviceCharacteristics& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_characteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristics;
}
constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_characteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristics;
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characteristics = value;
}
constexpr int32_t& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_deviceId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceId;
}
constexpr int32_t const& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_deviceId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceId;
}
constexpr void UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_set_deviceId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceId = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*& UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_inputFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFeatures;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* const&
UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_get_inputFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFeatures;
}
constexpr void
UnityEngine::InputSystem::XR::XRDeviceDescriptor::__cordl_internal_set_inputFeatures(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputFeatures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::InputSystem::XR::XRDeviceDescriptor::ToJson() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                                                                             "ToJson", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* UnityEngine::InputSystem::XR::XRDeviceDescriptor::FromJson(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(), "FromJson",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*, false>(nullptr, ___internal_method, json);
}
inline void UnityEngine::InputSystem::XR::XRDeviceDescriptor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* UnityEngine::InputSystem::XR::XRDeviceDescriptor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRDeviceDescriptor::XRDeviceDescriptor() {}
