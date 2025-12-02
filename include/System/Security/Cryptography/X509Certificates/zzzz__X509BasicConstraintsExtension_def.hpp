#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509BasicConstraintsExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509BasicConstraintsExtension)
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509BasicConstraintsExtension;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension);
// Dependencies System.Security.Cryptography.AsnDecodeStatus, System.Security.Cryptography.X509Certificates.X509Extension
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
class CORDL_TYPE X509BasicConstraintsExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
  // Declarations
  __declspec(property(get = get_CertificateAuthority)) bool CertificateAuthority;

  __declspec(property(get = get_HasPathLengthConstraint)) bool HasPathLengthConstraint;

  __declspec(property(get = get_PathLengthConstraint)) int32_t PathLengthConstraint;

  /// @brief Field _certificateAuthority, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__certificateAuthority, put = __cordl_internal_set__certificateAuthority)) bool _certificateAuthority;

  /// @brief Field _hasPathLengthConstraint, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__hasPathLengthConstraint, put = __cordl_internal_set__hasPathLengthConstraint)) bool _hasPathLengthConstraint;

  /// @brief Field _pathLengthConstraint, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__pathLengthConstraint, put = __cordl_internal_set__pathLengthConstraint)) int32_t _pathLengthConstraint;

  /// @brief Field _status, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status)) ::System::Security::Cryptography::AsnDecodeStatus _status;

  /// @brief Method CopyFrom, addr 0x6187fa0, size 0x1c0, virtual true, abstract: false, final false
  inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);

  /// @brief Method Decode, addr 0x6187a38, size 0x1d8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> extension);

  /// @brief Method Encode, addr 0x6187d38, size 0x13c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode();

  static inline ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension* New_ctor(bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint,
                                                                                                            bool critical);

  static inline ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension* New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical);

  /// @brief Method ToString, addr 0x6188160, size 0x2c8, virtual true, abstract: false, final false
  inline ::StringW ToString(bool multiLine);

  constexpr bool const& __cordl_internal_get__certificateAuthority() const;

  constexpr bool& __cordl_internal_get__certificateAuthority();

  constexpr bool const& __cordl_internal_get__hasPathLengthConstraint() const;

  constexpr bool& __cordl_internal_get__hasPathLengthConstraint();

  constexpr int32_t const& __cordl_internal_get__pathLengthConstraint() const;

  constexpr int32_t& __cordl_internal_get__pathLengthConstraint();

  constexpr ::System::Security::Cryptography::AsnDecodeStatus const& __cordl_internal_get__status() const;

  constexpr ::System::Security::Cryptography::AsnDecodeStatus& __cordl_internal_get__status();

  constexpr void __cordl_internal_set__certificateAuthority(bool value);

  constexpr void __cordl_internal_set__hasPathLengthConstraint(bool value);

  constexpr void __cordl_internal_set__pathLengthConstraint(int32_t value);

  constexpr void __cordl_internal_set__status(::System::Security::Cryptography::AsnDecodeStatus value);

  /// @brief Method .ctor, addr 0x61879ac, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6187c10, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint, bool critical);

  /// @brief Method .ctor, addr 0x61864a0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical);

  /// @brief Method get_CertificateAuthority, addr 0x6187e74, size 0x64, virtual false, abstract: false, final false
  inline bool get_CertificateAuthority();

  /// @brief Method get_HasPathLengthConstraint, addr 0x6187ed8, size 0x64, virtual false, abstract: false, final false
  inline bool get_HasPathLengthConstraint();

  /// @brief Method get_PathLengthConstraint, addr 0x6187f3c, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_PathLengthConstraint();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509BasicConstraintsExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509BasicConstraintsExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509BasicConstraintsExtension(X509BasicConstraintsExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509BasicConstraintsExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509BasicConstraintsExtension(X509BasicConstraintsExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11161 };

  /// @brief Field friendlyName offset 0xffffffff size 0x8
  static constexpr ::ConstString friendlyName{ u"Basic Constraints" };

  /// @brief Field oid offset 0xffffffff size 0x8
  static constexpr ::ConstString oid{ u"2.5.29.19" };

  /// @brief Field _certificateAuthority, offset: 0x21, size: 0x1, def value: None
  bool ____certificateAuthority;

  /// @brief Field _hasPathLengthConstraint, offset: 0x22, size: 0x1, def value: None
  bool ____hasPathLengthConstraint;

  /// @brief Field _pathLengthConstraint, offset: 0x24, size: 0x4, def value: None
  int32_t ____pathLengthConstraint;

  /// @brief Field _status, offset: 0x28, size: 0x4, def value: None
  ::System::Security::Cryptography::AsnDecodeStatus ____status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, ____certificateAuthority) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, ____hasPathLengthConstraint) == 0x22, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, ____pathLengthConstraint) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, ____status) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, 0x30>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*, "System.Security.Cryptography.X509Certificates", "X509BasicConstraintsExtension");
