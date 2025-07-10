#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509EnhancedKeyUsageExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509EnhancedKeyUsageExtension)
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
namespace System::Security::Cryptography {
class OidCollection;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509EnhancedKeyUsageExtension;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension);
// Dependencies System.Security.Cryptography.AsnDecodeStatus, System.Security.Cryptography.X509Certificates.X509Extension
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
class CORDL_TYPE X509EnhancedKeyUsageExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
  // Declarations
  __declspec(property(get = get_EnhancedKeyUsages)) ::System::Security::Cryptography::OidCollection* EnhancedKeyUsages;

  /// @brief Field _enhKeyUsage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__enhKeyUsage, put = __cordl_internal_set__enhKeyUsage)) ::System::Security::Cryptography::OidCollection* _enhKeyUsage;

  /// @brief Field _status, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status)) ::System::Security::Cryptography::AsnDecodeStatus _status;

  /// @brief Method CopyFrom, addr 0x4442bf4, size 0x1c8, virtual true, abstract: false, final false
  inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);

  /// @brief Method Decode, addr 0x4442690, size 0x240, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> extension);

  /// @brief Method Encode, addr 0x4442a4c, size 0xbc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode();

  static inline ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedEnhancedKeyUsages, bool critical);

  static inline ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* New_ctor(::System::Security::Cryptography::OidCollection* enhancedKeyUsages, bool critical);

  /// @brief Method ToString, addr 0x4442dbc, size 0x2d8, virtual true, abstract: false, final false
  inline ::StringW ToString(bool multiLine);

  constexpr ::System::Security::Cryptography::OidCollection* const& __cordl_internal_get__enhKeyUsage() const;

  constexpr ::System::Security::Cryptography::OidCollection*& __cordl_internal_get__enhKeyUsage();

  constexpr ::System::Security::Cryptography::AsnDecodeStatus const& __cordl_internal_get__status() const;

  constexpr ::System::Security::Cryptography::AsnDecodeStatus& __cordl_internal_get__status();

  constexpr void __cordl_internal_set__enhKeyUsage(::System::Security::Cryptography::OidCollection* value);

  constexpr void __cordl_internal_set__status(::System::Security::Cryptography::AsnDecodeStatus value);

  /// @brief Method .ctor, addr 0x4439fc8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4436358, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::AsnEncodedData* encodedEnhancedKeyUsages, bool critical);

  /// @brief Method .ctor, addr 0x44428d0, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::OidCollection* enhancedKeyUsages, bool critical);

  /// @brief Method get_EnhancedKeyUsages, addr 0x4442b08, size 0xec, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::OidCollection* get_EnhancedKeyUsages();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509EnhancedKeyUsageExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509EnhancedKeyUsageExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509EnhancedKeyUsageExtension(X509EnhancedKeyUsageExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509EnhancedKeyUsageExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509EnhancedKeyUsageExtension(X509EnhancedKeyUsageExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9331 };

  /// @brief Field _enhKeyUsage, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Cryptography::OidCollection* ____enhKeyUsage;

  /// @brief Field _status, offset: 0x30, size: 0x4, def value: None
  ::System::Security::Cryptography::AsnDecodeStatus ____status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension, ____enhKeyUsage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension, ____status) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension, 0x38>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*, "System.Security.Cryptography.X509Certificates", "X509EnhancedKeyUsageExtension");
