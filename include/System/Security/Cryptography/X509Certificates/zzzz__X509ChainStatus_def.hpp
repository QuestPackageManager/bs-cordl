#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(X509ChainStatus)
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509ChainStatus);
// Type: System.Security.Cryptography.X509Certificates::X509ChainStatus
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6992))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7019))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ChainStatus
struct CORDL_TYPE X509ChainStatus {
public:
  // Declarations
  __declspec(property(get = get_Status, put = set_Status))::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags Status;

  __declspec(property(put = set_StatusInformation))::StringW StatusInformation;

  /// @brief Method .ctor, addr 0x2984d80, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag);

  /// @brief Method get_Status, addr 0x29876ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_Status();

  /// @brief Method set_Status, addr 0x29876f4, size 0x8, virtual false, abstract: false, final false
  inline void set_Status(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);

  /// @brief Method set_StatusInformation, addr 0x29876fc, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusInformation(::StringW value);

  /// @brief Method GetInformation, addr 0x2983808, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW GetInformation(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags);

  // Ctor Parameters [CppParam { name: "status", ty: "::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags", modifiers: "", def_value: None }, CppParam { name: "info", ty:
  // "::StringW", modifiers: "", def_value: None }]
  constexpr X509ChainStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status, ::StringW info) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainStatus();

  /// @brief Field status, offset: 0x0, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status;

  /// @brief Field info, offset: 0x8, size: 0x8, def value: None
  ::StringW info;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainStatus, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainStatus, status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainStatus, info) == 0x8, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainStatus, "System.Security.Cryptography.X509Certificates", "X509ChainStatus");
