#pragma once
// IWYU pragma private; include "System/Security/AccessControl/ResourceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceType)
// Forward declare root types
namespace System::Security::AccessControl {
struct ResourceType;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::ResourceType);
// Type: System.Security.AccessControl::ResourceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: true
// CS Name: ::System.Security.AccessControl::ResourceType
struct CORDL_TYPE ResourceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ResourceType_Unwrapped
  enum struct __ResourceType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_FileObject = static_cast<int32_t>(0x1),
    __E_Service = static_cast<int32_t>(0x2),
    __E_Printer = static_cast<int32_t>(0x3),
    __E_RegistryKey = static_cast<int32_t>(0x4),
    __E_LMShare = static_cast<int32_t>(0x5),
    __E_KernelObject = static_cast<int32_t>(0x6),
    __E_WindowObject = static_cast<int32_t>(0x7),
    __E_DSObject = static_cast<int32_t>(0x8),
    __E_DSObjectAll = static_cast<int32_t>(0x9),
    __E_ProviderDefined = static_cast<int32_t>(0xa),
    __E_WmiGuidObject = static_cast<int32_t>(0xb),
    __E_RegistryWow6432Key = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ResourceType_Unwrapped() const noexcept {
    return static_cast<__ResourceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ResourceType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DSObject value: static_cast<int32_t>(0x8)
  static ::System::Security::AccessControl::ResourceType const DSObject;

  /// @brief Field DSObjectAll value: static_cast<int32_t>(0x9)
  static ::System::Security::AccessControl::ResourceType const DSObjectAll;

  /// @brief Field FileObject value: static_cast<int32_t>(0x1)
  static ::System::Security::AccessControl::ResourceType const FileObject;

  /// @brief Field KernelObject value: static_cast<int32_t>(0x6)
  static ::System::Security::AccessControl::ResourceType const KernelObject;

  /// @brief Field LMShare value: static_cast<int32_t>(0x5)
  static ::System::Security::AccessControl::ResourceType const LMShare;

  /// @brief Field Printer value: static_cast<int32_t>(0x3)
  static ::System::Security::AccessControl::ResourceType const Printer;

  /// @brief Field ProviderDefined value: static_cast<int32_t>(0xa)
  static ::System::Security::AccessControl::ResourceType const ProviderDefined;

  /// @brief Field RegistryKey value: static_cast<int32_t>(0x4)
  static ::System::Security::AccessControl::ResourceType const RegistryKey;

  /// @brief Field RegistryWow6432Key value: static_cast<int32_t>(0xc)
  static ::System::Security::AccessControl::ResourceType const RegistryWow6432Key;

  /// @brief Field Service value: static_cast<int32_t>(0x2)
  static ::System::Security::AccessControl::ResourceType const Service;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::System::Security::AccessControl::ResourceType const Unknown;

  /// @brief Field WindowObject value: static_cast<int32_t>(0x7)
  static ::System::Security::AccessControl::ResourceType const WindowObject;

  /// @brief Field WmiGuidObject value: static_cast<int32_t>(0xb)
  static ::System::Security::AccessControl::ResourceType const WmiGuidObject;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3047 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::ResourceType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::ResourceType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ResourceType, "System.Security.AccessControl", "ResourceType");
