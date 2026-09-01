#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\XR\XRDeviceDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRDeviceDescriptor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRFeatureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRDeviceDescriptor.ToJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::XR::XRDeviceDescriptor::*)()>(&::UnityEngine::InputSystem::XR::XRDeviceDescriptor::ToJson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658ab2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>(), { "ToJson", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRDeviceDescriptor.FromJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::XRDeviceDescriptor* (*)(::StringW)>(&::UnityEngine::InputSystem::XR::XRDeviceDescriptor::FromJson)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65879a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRDeviceDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::XRDeviceDescriptor::*)()>(&::UnityEngine::InputSystem::XR::XRDeviceDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x658ab34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>(), { ".ctor", {}, {} })));
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
  this->___deviceName = value;
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
  this->___manufacturer = value;
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
  this->___serialNumber = value;
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
  this->___inputFeatures = value;
}
inline ::StringW UnityEngine::InputSystem::XR::XRDeviceDescriptor::ToJson() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>(), { "ToJson", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* UnityEngine::InputSystem::XR::XRDeviceDescriptor::FromJson(::StringW json) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>(nullptr, ___internal_method, json);
}
inline void UnityEngine::InputSystem::XR::XRDeviceDescriptor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* UnityEngine::InputSystem::XR::XRDeviceDescriptor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRDeviceDescriptor::XRDeviceDescriptor() {}
