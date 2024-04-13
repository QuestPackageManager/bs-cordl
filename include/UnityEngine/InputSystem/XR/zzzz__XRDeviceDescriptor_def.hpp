#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRDeviceDescriptor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem::XR {
struct XRFeatureDescriptor;
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
// CS Name: ::UnityEngine.InputSystem.XR::XRDeviceDescriptor*
class CORDL_TYPE XRDeviceDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristics, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_characteristics, put = __cordl_internal_set_characteristics))::UnityEngine::XR::InputDeviceCharacteristics characteristics;

  /// @brief Field deviceId, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_deviceId, put = __cordl_internal_set_deviceId)) int32_t deviceId;

  /// @brief Field deviceName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_deviceName, put = __cordl_internal_set_deviceName))::StringW deviceName;

  /// @brief Field inputFeatures, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFeatures,
                      put = __cordl_internal_set_inputFeatures))::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* inputFeatures;

  /// @brief Field manufacturer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_manufacturer, put = __cordl_internal_set_manufacturer))::StringW manufacturer;

  /// @brief Field serialNumber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber))::StringW serialNumber;

  /// @brief Method FromJson, addr 0x2ff950c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* FromJson(::StringW json);

  static inline ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* New_ctor();

  /// @brief Method ToJson, addr 0x2ffbc4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& __cordl_internal_get_characteristics() const;

  constexpr ::UnityEngine::XR::InputDeviceCharacteristics& __cordl_internal_get_characteristics();

  constexpr int32_t const& __cordl_internal_get_deviceId() const;

  constexpr int32_t& __cordl_internal_get_deviceId();

  constexpr ::StringW const& __cordl_internal_get_deviceName() const;

  constexpr ::StringW& __cordl_internal_get_deviceName();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*& __cordl_internal_get_inputFeatures();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*> const& __cordl_internal_get_inputFeatures() const;

  constexpr ::StringW const& __cordl_internal_get_manufacturer() const;

  constexpr ::StringW& __cordl_internal_get_manufacturer();

  constexpr ::StringW const& __cordl_internal_get_serialNumber() const;

  constexpr ::StringW& __cordl_internal_get_serialNumber();

  constexpr void __cordl_internal_set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics value);

  constexpr void __cordl_internal_set_deviceId(int32_t value);

  constexpr void __cordl_internal_set_deviceName(::StringW value);

  constexpr void __cordl_internal_set_inputFeatures(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* value);

  constexpr void __cordl_internal_set_manufacturer(::StringW value);

  constexpr void __cordl_internal_set_serialNumber(::StringW value);

  /// @brief Method .ctor, addr 0x2ffbc54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDeviceDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDeviceDescriptor(XRDeviceDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDeviceDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDeviceDescriptor(XRDeviceDescriptor const&) = delete;

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

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor, ___deviceName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor, ___manufacturer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor, ___serialNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor, ___characteristics) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor, ___deviceId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRDeviceDescriptor, ___inputFeatures) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRDeviceDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRDeviceDescriptor*, "UnityEngine.InputSystem.XR", "XRDeviceDescriptor");
