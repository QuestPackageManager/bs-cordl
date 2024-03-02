#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceDescription)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceDescription__DeviceDescriptionJson;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceDescription__DeviceDescriptionJson;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputDeviceDescription);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson);
// Type: ::DeviceDescriptionJson
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputDeviceDescription::DeviceDescriptionJson
struct CORDL_TYPE __InputDeviceDescription__DeviceDescriptionJson {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputDeviceDescription__DeviceDescriptionJson();

  // Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "serial", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers:
  // "", def_value: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "capabilities", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __InputDeviceDescription__DeviceDescriptionJson(::StringW interface, ::StringW type, ::StringW product, ::StringW serial, ::StringW version, ::StringW manufacturer,
                                                            ::StringW capabilities) noexcept;

  /// @brief Field interface, offset: 0x0, size: 0x8, def value: None
  ::StringW interface;

  /// @brief Field type, offset: 0x8, size: 0x8, def value: None
  ::StringW type;

  /// @brief Field product, offset: 0x10, size: 0x8, def value: None
  ::StringW product;

  /// @brief Field serial, offset: 0x18, size: 0x8, def value: None
  ::StringW serial;

  /// @brief Field version, offset: 0x20, size: 0x8, def value: None
  ::StringW version;

  /// @brief Field manufacturer, offset: 0x28, size: 0x8, def value: None
  ::StringW manufacturer;

  /// @brief Field capabilities, offset: 0x30, size: 0x8, def value: None
  ::StringW capabilities;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, interface) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, product) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, serial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, manufacturer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, capabilities) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputDeviceDescription
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.Layouts::InputDeviceDescription
struct CORDL_TYPE InputDeviceDescription {
public:
  // Declarations
  using DeviceDescriptionJson = ::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson;

  __declspec(property(get = get_capabilities, put = set_capabilities))::StringW capabilities;

  __declspec(property(get = get_deviceClass, put = set_deviceClass))::StringW deviceClass;

  __declspec(property(get = get_empty)) bool empty;

  __declspec(property(get = get_interfaceName, put = set_interfaceName))::StringW interfaceName;

  __declspec(property(get = get_manufacturer, put = set_manufacturer))::StringW manufacturer;

  __declspec(property(get = get_product, put = set_product))::StringW product;

  __declspec(property(get = get_serial, put = set_serial))::StringW serial;

  __declspec(property(get = get_version, put = set_version))::StringW version;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*();

  /// @brief Method ComparePropertyToDeviceDescriptor, addr 0x2becdbc, size 0x90, virtual false, abstract: false, final false
  static inline bool ComparePropertyToDeviceDescriptor(::StringW propertyName, ::StringW propertyValue, ::StringW deviceDescriptor);

  /// @brief Method Equals, addr 0x2beca3c, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2bec98c, size 0xb0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Layouts::InputDeviceDescription other);

  /// @brief Method FromJson, addr 0x2beccf0, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription FromJson(::StringW json);

  /// @brief Method GetHashCode, addr 0x2becad4, size 0x128, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToJson, addr 0x2becc70, size 0x80, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToString, addr 0x2bec688, size 0x304, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_capabilities, addr 0x2bec5f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_capabilities();

  /// @brief Method get_deviceClass, addr 0x2bec5a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_deviceClass();

  /// @brief Method get_empty, addr 0x2bec604, size 0x84, virtual false, abstract: false, final false
  inline bool get_empty();

  /// @brief Method get_interfaceName, addr 0x2bec594, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_interfaceName();

  /// @brief Method get_manufacturer, addr 0x2bec5b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_manufacturer();

  /// @brief Method get_product, addr 0x2bec5c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_product();

  /// @brief Method get_serial, addr 0x2bec5d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_serial();

  /// @brief Method get_version, addr 0x2bec5e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* i___System__IEquatable_1___UnityEngine__InputSystem__Layouts__InputDeviceDescription_();

  /// @brief Method op_Equality, addr 0x2becbfc, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription left, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription right);

  /// @brief Method op_Inequality, addr 0x2becc34, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription left, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription right);

  /// @brief Method set_capabilities, addr 0x2bec5fc, size 0x8, virtual false, abstract: false, final false
  inline void set_capabilities(::StringW value);

  /// @brief Method set_deviceClass, addr 0x2bec5ac, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceClass(::StringW value);

  /// @brief Method set_interfaceName, addr 0x2bec59c, size 0x8, virtual false, abstract: false, final false
  inline void set_interfaceName(::StringW value);

  /// @brief Method set_manufacturer, addr 0x2bec5bc, size 0x8, virtual false, abstract: false, final false
  inline void set_manufacturer(::StringW value);

  /// @brief Method set_product, addr 0x2bec5cc, size 0x8, virtual false, abstract: false, final false
  inline void set_product(::StringW value);

  /// @brief Method set_serial, addr 0x2bec5dc, size 0x8, virtual false, abstract: false, final false
  inline void set_serial(::StringW value);

  /// @brief Method set_version, addr 0x2bec5ec, size 0x8, virtual false, abstract: false, final false
  inline void set_version(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceDescription();

  // Ctor Parameters [CppParam { name: "m_InterfaceName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_DeviceClass", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "m_Manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Serial",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Capabilities", ty: "::StringW", modifiers:
  // "", def_value: None }]
  constexpr InputDeviceDescription(::StringW m_InterfaceName, ::StringW m_DeviceClass, ::StringW m_Manufacturer, ::StringW m_Product, ::StringW m_Serial, ::StringW m_Version,
                                   ::StringW m_Capabilities) noexcept;

  /// @brief Field m_InterfaceName, offset: 0x0, size: 0x8, def value: None
  ::StringW m_InterfaceName;

  /// @brief Field m_DeviceClass, offset: 0x8, size: 0x8, def value: None
  ::StringW m_DeviceClass;

  /// @brief Field m_Manufacturer, offset: 0x10, size: 0x8, def value: None
  ::StringW m_Manufacturer;

  /// @brief Field m_Product, offset: 0x18, size: 0x8, def value: None
  ::StringW m_Product;

  /// @brief Field m_Serial, offset: 0x20, size: 0x8, def value: None
  ::StringW m_Serial;

  /// @brief Field m_Version, offset: 0x28, size: 0x8, def value: None
  ::StringW m_Version;

  /// @brief Field m_Capabilities, offset: 0x30, size: 0x8, def value: None
  ::StringW m_Capabilities;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_InterfaceName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_DeviceClass) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Manufacturer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Product) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Serial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, m_Capabilities) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, "UnityEngine.InputSystem.Layouts", "InputDeviceDescription");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson, "UnityEngine.InputSystem.Layouts", "InputDeviceDescription/DeviceDescriptionJson");
