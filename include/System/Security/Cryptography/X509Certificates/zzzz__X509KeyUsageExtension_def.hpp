#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509KeyUsageExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509KeyUsageExtension)
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyUsageFlags;
}
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509KeyUsageExtension;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension);
// Dependencies System.Security.Cryptography.AsnDecodeStatus, System.Security.Cryptography.X509Certificates.X509Extension, System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
class CORDL_TYPE X509KeyUsageExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
  // Declarations
  __declspec(property(get = get_KeyUsages)) ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags KeyUsages;

  /// @brief Field _keyUsages, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__keyUsages, put = __cordl_internal_set__keyUsages)) ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _keyUsages;

  /// @brief Field _status, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status)) ::System::Security::Cryptography::AsnDecodeStatus _status;

  /// @brief Method CopyFrom, addr 0x61fbeb4, size 0x1c4, virtual true, abstract: false, final false
  inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);

  /// @brief Method Decode, addr 0x61fba74, size 0x1b0, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> extension);

  /// @brief Method Encode, addr 0x61fbcfc, size 0x154, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode();

  /// @brief Method GetValidFlags, addr 0x61fbcec, size 0x10, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags GetValidFlags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags flags);

  static inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension* New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedKeyUsage, bool critical);

  static inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension* New_ctor(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical);

  /// @brief Method ToString, addr 0x61fc078, size 0x59c, virtual true, abstract: false, final false
  inline ::StringW ToString(bool multiLine);

  constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const& __cordl_internal_get__keyUsages() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags& __cordl_internal_get__keyUsages();

  constexpr ::System::Security::Cryptography::AsnDecodeStatus const& __cordl_internal_get__status() const;

  constexpr ::System::Security::Cryptography::AsnDecodeStatus& __cordl_internal_get__status();

  constexpr void __cordl_internal_set__keyUsages(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);

  constexpr void __cordl_internal_set__status(::System::Security::Cryptography::AsnDecodeStatus value);

  /// @brief Method .ctor, addr 0x61fb928, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x61fb9b4, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::AsnEncodedData* encodedKeyUsage, bool critical);

  /// @brief Method .ctor, addr 0x61fbc24, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical);

  /// @brief Method get_KeyUsages, addr 0x61fbe50, size 0x64, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags get_KeyUsages();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509KeyUsageExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509KeyUsageExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509KeyUsageExtension(X509KeyUsageExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509KeyUsageExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509KeyUsageExtension(X509KeyUsageExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11188 };

  /// @brief Field all value: I32(33023)
  static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const all;

  /// @brief Field friendlyName offset 0xffffffff size 0x8
  static constexpr ::ConstString friendlyName{ u"Key Usage" };

  /// @brief Field oid offset 0xffffffff size 0x8
  static constexpr ::ConstString oid{ u"2.5.29.15" };

  /// @brief Field _keyUsages, offset: 0x24, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags ____keyUsages;

  /// @brief Field _status, offset: 0x28, size: 0x4, def value: None
  ::System::Security::Cryptography::AsnDecodeStatus ____status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension, ____keyUsages) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension, ____status) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension, 0x30>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*, "System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension");
