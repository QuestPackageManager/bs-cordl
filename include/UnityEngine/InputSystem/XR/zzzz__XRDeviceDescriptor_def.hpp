#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRDeviceDescriptor)
namespace UnityEngine::InputSystem::XR {
struct XRFeatureDescriptor;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRDeviceDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRDeviceDescriptor);
// Type: UnityEngine.InputSystem.XR::XRDeviceDescriptor
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6336))
// CS Name: ::UnityEngine.InputSystem.XR::XRDeviceDescriptor*
class CORDL_TYPE XRDeviceDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field deviceName, offset 0x10, size 0x8
  __declspec(property(get = __get_deviceName, put = __set_deviceName))::StringW deviceName;

  /// @brief Field manufacturer, offset 0x18, size 0x8
  __declspec(property(get = __get_manufacturer, put = __set_manufacturer))::StringW manufacturer;

  /// @brief Field serialNumber, offset 0x20, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::StringW serialNumber;

  /// @brief Field characteristics, offset 0x28, size 0x4
  __declspec(property(get = __get_characteristics, put = __set_characteristics))::UnityEngine::XR::InputDeviceCharacteristics characteristics;

  /// @brief Field deviceId, offset 0x2c, size 0x4
  __declspec(property(get = __get_deviceId, put = __set_deviceId)) int32_t deviceId;

  /// @brief Field inputFeatures, offset 0x30, size 0x8
  __declspec(property(get = __get_inputFeatures, put = __set_inputFeatures))::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* inputFeatures;

  constexpr ::StringW& __get_deviceName();

  constexpr ::StringW const& __get_deviceName() const;

  constexpr void __set_deviceName(::StringW value);

  constexpr ::StringW& __get_manufacturer();

  constexpr ::StringW const& __get_manufacturer() const;

  constexpr void __set_manufacturer(::StringW value);

  constexpr ::StringW& __get_serialNumber();

  constexpr ::StringW const& __get_serialNumber() const;

  constexpr void __set_serialNumber(::StringW value);

  constexpr ::UnityEngine::XR::InputDeviceCharacteristics& __get_characteristics();

  constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& __get_characteristics() const;

  constexpr void __set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics value);

  constexpr int32_t& __get_deviceId();

  constexpr int32_t const& __get_deviceId() const;

  constexpr void __set_deviceId(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*& __get_inputFeatures();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*> const& __get_inputFeatures() const;

  constexpr void __set_inputFeatures(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* value);

  /// @brief Method ToJson addr 0x2ac8328 size 0x8 virtual false final false
  inline ::StringW ToJson();

  /// @brief Method FromJson addr 0x2ac5be8 size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* FromJson(::StringW json);

  static inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* New_ctor();

  /// @brief Method .ctor addr 0x2ac8330 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDeviceDescriptor(XRDeviceDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDeviceDescriptor(XRDeviceDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDeviceDescriptor();

public:
  /// @brief Field deviceName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___deviceName;

  /// @brief Field manufacturer, offset: 0x18, size: 0x8, def value: None
  ::StringW ___manufacturer;

  /// @brief Field serialNumber, offset: 0x20, size: 0x8, def value: None
  ::StringW ___serialNumber;

  /// @brief Field characteristics, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::XR::InputDeviceCharacteristics ___characteristics;

  /// @brief Field deviceId, offset: 0x2c, size: 0x4, def value: None
  int32_t ___deviceId;

  /// @brief Field inputFeatures, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* ___inputFeatures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRDeviceDescriptor, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRDeviceDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRDeviceDescriptor*, "UnityEngine.InputSystem.XR", "XRDeviceDescriptor");
