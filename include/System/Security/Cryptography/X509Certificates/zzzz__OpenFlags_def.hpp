#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenFlags)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct OpenFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::OpenFlags);
// Type: System.Security.Cryptography.X509Certificates::OpenFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: ::System.Security.Cryptography.X509Certificates::OpenFlags
struct CORDL_TYPE OpenFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenFlags_Unwrapped
  enum struct __OpenFlags_Unwrapped : int32_t {
    __E_ReadOnly = static_cast<int32_t>(0x0),
    __E_ReadWrite = static_cast<int32_t>(0x1),
    __E_MaxAllowed = static_cast<int32_t>(0x2),
    __E_OpenExistingOnly = static_cast<int32_t>(0x4),
    __E_IncludeArchived = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenFlags_Unwrapped() const noexcept {
    return static_cast<__OpenFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__OpenFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IncludeArchived value: static_cast<int32_t>(0x8)
  static ::System::Security::Cryptography::X509Certificates::OpenFlags const IncludeArchived;

  /// @brief Field MaxAllowed value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::X509Certificates::OpenFlags const MaxAllowed;

  /// @brief Field OpenExistingOnly value: static_cast<int32_t>(0x4)
  static ::System::Security::Cryptography::X509Certificates::OpenFlags const OpenExistingOnly;

  /// @brief Field ReadOnly value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::X509Certificates::OpenFlags const ReadOnly;

  /// @brief Field ReadWrite value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::X509Certificates::OpenFlags const ReadWrite;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::OpenFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::OpenFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::OpenFlags, "System.Security.Cryptography.X509Certificates", "OpenFlags");
