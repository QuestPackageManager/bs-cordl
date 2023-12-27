#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509SubjectKeyIdentifierExtension)
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
namespace System::Security::Cryptography::X509Certificates {
class PublicKey;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509SubjectKeyIdentifierHashAlgorithm;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509SubjectKeyIdentifierExtension;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension);
// Type: System.Security.Cryptography.X509Certificates::X509SubjectKeyIdentifierExtension
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9011)), TypeDefinitionIndex(TypeDefinitionIndex(8976))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9017))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509SubjectKeyIdentifierExtension*
class CORDL_TYPE X509SubjectKeyIdentifierExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
  // Declarations
  /// @brief Field _subjectKeyIdentifier, offset 0x28, size 0x8
  __declspec(property(get = __get__subjectKeyIdentifier, put = __set__subjectKeyIdentifier))::ArrayW<uint8_t, ::Array<uint8_t>*> _subjectKeyIdentifier;

  /// @brief Field _ski, offset 0x30, size 0x8
  __declspec(property(get = __get__ski, put = __set__ski))::StringW _ski;

  /// @brief Field _status, offset 0x38, size 0x4
  __declspec(property(get = __get__status, put = __set__status))::System::Security::Cryptography::AsnDecodeStatus _status;

  __declspec(property(get = get_SubjectKeyIdentifier))::StringW SubjectKeyIdentifier;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__subjectKeyIdentifier();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__subjectKeyIdentifier() const;

  constexpr void __set__subjectKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get__ski();

  constexpr ::StringW const& __get__ski() const;

  constexpr void __set__ski(::StringW value);

  constexpr ::System::Security::Cryptography::AsnDecodeStatus& __get__status();

  constexpr ::System::Security::Cryptography::AsnDecodeStatus const& __get__status() const;

  constexpr void __set__status(::System::Security::Cryptography::AsnDecodeStatus value);

  static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor();

  /// @brief Method .ctor addr 0x2986774 size 0x9c virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedSubjectKeyIdentifier,
                                                                                                                bool critical);

  /// @brief Method .ctor addr 0x2986810 size 0xcc virtual false final false
  inline void _ctor(::System::Security::Cryptography::AsnEncodedData* encodedSubjectKeyIdentifier, bool critical);

  static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier, bool critical);

  /// @brief Method .ctor addr 0x2986a40 size 0x1b8 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier, bool critical);

  static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor(::StringW subjectKeyIdentifier, bool critical);

  /// @brief Method .ctor addr 0x2986c6c size 0x168 virtual false final false
  inline void _ctor(::StringW subjectKeyIdentifier, bool critical);

  static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* New_ctor(::System::Security::Cryptography::X509Certificates::PublicKey* key, bool critical);

  /// @brief Method .ctor addr 0x2986ec4 size 0xc virtual false final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::PublicKey* key, bool critical);

  static inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*
  New_ctor(::System::Security::Cryptography::X509Certificates::PublicKey* key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical);

  /// @brief Method .ctor addr 0x2986ed0 size 0x3cc virtual false final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::PublicKey* key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm,
                    bool critical);

  /// @brief Method get_SubjectKeyIdentifier addr 0x298729c size 0x88 virtual false final false
  inline ::StringW get_SubjectKeyIdentifier();

  /// @brief Method CopyFrom addr 0x2987324 size 0x1e0 virtual true final false
  inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);

  /// @brief Method FromHexChar addr 0x2987504 size 0x48 virtual false final false
  static inline uint8_t FromHexChar(char16_t c);

  /// @brief Method FromHexChars addr 0x298754c size 0x9c virtual false final false
  static inline uint8_t FromHexChars(char16_t c1, char16_t c2);

  /// @brief Method FromHex addr 0x2986dd4 size 0xf0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromHex(::StringW hex);

  /// @brief Method Decode addr 0x29868dc size 0x164 virtual false final false
  inline ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> extension);

  /// @brief Method Encode addr 0x2986bf8 size 0x74 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode();

  /// @brief Method ToString addr 0x29875e8 size 0x22c virtual true final false
  inline ::StringW ToString(bool multiLine);

  // Ctor Parameters [CppParam { name: "", ty: "X509SubjectKeyIdentifierExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509SubjectKeyIdentifierExtension(X509SubjectKeyIdentifierExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509SubjectKeyIdentifierExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509SubjectKeyIdentifierExtension(X509SubjectKeyIdentifierExtension const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509SubjectKeyIdentifierExtension();

public:
  /// @brief Field _subjectKeyIdentifier, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____subjectKeyIdentifier;

  /// @brief Field _ski, offset: 0x30, size: 0x8, def value: None
  ::StringW ____ski;

  /// @brief Field _status, offset: 0x38, size: 0x4, def value: None
  ::System::Security::Cryptography::AsnDecodeStatus ____status;

  /// @brief Field oid offset 0xffffffff size 0x8
  static constexpr ::ConstString oid{ u"2.5.29.14" };

  /// @brief Field friendlyName offset 0xffffffff size 0x8
  static constexpr ::ConstString friendlyName{ u"Subject Key Identifier" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension, 0x40>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension");
