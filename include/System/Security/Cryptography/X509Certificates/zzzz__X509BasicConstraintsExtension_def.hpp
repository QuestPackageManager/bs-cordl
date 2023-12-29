#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Security.Cryptography.X509Certificates::X509BasicConstraintsExtension
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7813)), TypeDefinitionIndex(TypeDefinitionIndex(7848))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7829))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509BasicConstraintsExtension*
class CORDL_TYPE X509BasicConstraintsExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
  // Declarations
  /// @brief Field _certificateAuthority, offset 0x21, size 0x1
  __declspec(property(get = __get__certificateAuthority, put = __set__certificateAuthority)) bool _certificateAuthority;

  /// @brief Field _hasPathLengthConstraint, offset 0x22, size 0x1
  __declspec(property(get = __get__hasPathLengthConstraint, put = __set__hasPathLengthConstraint)) bool _hasPathLengthConstraint;

  /// @brief Field _pathLengthConstraint, offset 0x24, size 0x4
  __declspec(property(get = __get__pathLengthConstraint, put = __set__pathLengthConstraint)) int32_t _pathLengthConstraint;

  /// @brief Field _status, offset 0x28, size 0x4
  __declspec(property(get = __get__status, put = __set__status))::System::Security::Cryptography::AsnDecodeStatus _status;

  __declspec(property(get = get_CertificateAuthority)) bool CertificateAuthority;

  __declspec(property(get = get_HasPathLengthConstraint)) bool HasPathLengthConstraint;

  __declspec(property(get = get_PathLengthConstraint)) int32_t PathLengthConstraint;

  constexpr bool& __get__certificateAuthority();

  constexpr bool const& __get__certificateAuthority() const;

  constexpr void __set__certificateAuthority(bool value);

  constexpr bool& __get__hasPathLengthConstraint();

  constexpr bool const& __get__hasPathLengthConstraint() const;

  constexpr void __set__hasPathLengthConstraint(bool value);

  constexpr int32_t& __get__pathLengthConstraint();

  constexpr int32_t const& __get__pathLengthConstraint() const;

  constexpr void __set__pathLengthConstraint(int32_t value);

  constexpr ::System::Security::Cryptography::AsnDecodeStatus& __get__status();

  constexpr ::System::Security::Cryptography::AsnDecodeStatus const& __get__status() const;

  constexpr void __set__status(::System::Security::Cryptography::AsnDecodeStatus value);

  static inline ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension* New_ctor();

  /// @brief Method .ctor addr 0x27faf04 size 0xa8 virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension* New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical);

  /// @brief Method .ctor addr 0x27f98cc size 0xd8 virtual false final false
  inline void _ctor(::System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical);

  static inline ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension* New_ctor(bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint,
                                                                                                            bool critical);

  /// @brief Method .ctor addr 0x27fb170 size 0x140 virtual false final false
  inline void _ctor(bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint, bool critical);

  /// @brief Method get_CertificateAuthority addr 0x27fb408 size 0x6c virtual false final false
  inline bool get_CertificateAuthority();

  /// @brief Method get_HasPathLengthConstraint addr 0x27fb474 size 0x6c virtual false final false
  inline bool get_HasPathLengthConstraint();

  /// @brief Method get_PathLengthConstraint addr 0x27fb4e0 size 0x6c virtual false final false
  inline int32_t get_PathLengthConstraint();

  /// @brief Method CopyFrom addr 0x27fb54c size 0x1dc virtual true final false
  inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);

  /// @brief Method Decode addr 0x27fafac size 0x1c4 virtual false final false
  inline ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> extension);

  /// @brief Method Encode addr 0x27fb2b0 size 0x158 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode();

  /// @brief Method ToString addr 0x27fb728 size 0x298 virtual true final false
  inline ::StringW ToString(bool multiLine);

  // Ctor Parameters [CppParam { name: "", ty: "X509BasicConstraintsExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509BasicConstraintsExtension(X509BasicConstraintsExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509BasicConstraintsExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509BasicConstraintsExtension(X509BasicConstraintsExtension const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509BasicConstraintsExtension();

public:
  /// @brief Field _certificateAuthority, offset: 0x21, size: 0x1, def value: None
  bool ____certificateAuthority;

  /// @brief Field _hasPathLengthConstraint, offset: 0x22, size: 0x1, def value: None
  bool ____hasPathLengthConstraint;

  /// @brief Field _pathLengthConstraint, offset: 0x24, size: 0x4, def value: None
  int32_t ____pathLengthConstraint;

  /// @brief Field _status, offset: 0x28, size: 0x4, def value: None
  ::System::Security::Cryptography::AsnDecodeStatus ____status;

  /// @brief Field oid offset 0xffffffff size 0x8
  static constexpr ::ConstString oid{ u"2.5.29.19" };

  /// @brief Field friendlyName offset 0xffffffff size 0x8
  static constexpr ::ConstString friendlyName{ u"Basic Constraints" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, ____certificateAuthority) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, ____hasPathLengthConstraint) == 0x22, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, ____pathLengthConstraint) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, ____status) == 0x28, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*, "System.Security.Cryptography.X509Certificates", "X509BasicConstraintsExtension");
