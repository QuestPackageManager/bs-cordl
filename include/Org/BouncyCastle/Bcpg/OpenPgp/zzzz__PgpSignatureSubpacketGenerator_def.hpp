#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSignatureSubpacketGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSignatureSubpacketGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct RevocationReasonTag;
}
namespace System::Collections {
class IList;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSignatureSubpacketGenerator
class CORDL_TYPE PgpSignatureSubpacketGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::IList* list;

  /// @brief Method Generate, addr 0x254a9f8, size 0x2c4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* Generate();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator* New_ctor();

  /// @brief Method SetEmbeddedSignature, addr 0x254a3d8, size 0x15c, virtual false, abstract: false, final false
  inline void SetEmbeddedSignature(bool isCritical, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* pgpSignature);

  /// @brief Method SetExportable, addr 0x2549840, size 0xe8, virtual false, abstract: false, final false
  inline void SetExportable(bool isCritical, bool isExportable);

  /// @brief Method SetFeature, addr 0x2549928, size 0xe8, virtual false, abstract: false, final false
  inline void SetFeature(bool isCritical, uint8_t feature);

  /// @brief Method SetIssuerKeyID, addr 0x254a910, size 0xe8, virtual false, abstract: false, final false
  inline void SetIssuerKeyID(bool isCritical, int64_t keyID);

  /// @brief Method SetKeyExpirationTime, addr 0x2549b08, size 0xe8, virtual false, abstract: false, final false
  inline void SetKeyExpirationTime(bool isCritical, int64_t seconds);

  /// @brief Method SetKeyFlags, addr 0x254a084, size 0xe8, virtual false, abstract: false, final false
  inline void SetKeyFlags(bool isCritical, int32_t flags);

  /// @brief Method SetNotationData, addr 0x254a61c, size 0x100, virtual false, abstract: false, final false
  inline void SetNotationData(bool isCritical, bool isHumanReadable, ::StringW notationName, ::StringW notationValue);

  /// @brief Method SetPreferredCompressionAlgorithms, addr 0x2549f98, size 0xec, virtual false, abstract: false, final false
  inline void SetPreferredCompressionAlgorithms(bool isCritical, ::ArrayW<int32_t, ::Array<int32_t>*> algorithms);

  /// @brief Method SetPreferredHashAlgorithms, addr 0x2549dc0, size 0xec, virtual false, abstract: false, final false
  inline void SetPreferredHashAlgorithms(bool isCritical, ::ArrayW<int32_t, ::Array<int32_t>*> algorithms);

  /// @brief Method SetPreferredSymmetricAlgorithms, addr 0x2549eac, size 0xec, virtual false, abstract: false, final false
  inline void SetPreferredSymmetricAlgorithms(bool isCritical, ::ArrayW<int32_t, ::Array<int32_t>*> algorithms);

  /// @brief Method SetPrimaryUserId, addr 0x254a534, size 0xe8, virtual false, abstract: false, final false
  inline void SetPrimaryUserId(bool isCritical, bool isPrimaryUserId);

  /// @brief Method SetRevocable, addr 0x2549758, size 0xe8, virtual false, abstract: false, final false
  inline void SetRevocable(bool isCritical, bool isRevocable);

  /// @brief Method SetRevocationKey, addr 0x254a814, size 0xfc, virtual false, abstract: false, final false
  inline void SetRevocationKey(bool isCritical, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint);

  /// @brief Method SetRevocationReason, addr 0x254a71c, size 0xf8, virtual false, abstract: false, final false
  inline void SetRevocationReason(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description);

  /// @brief Method SetSignatureCreationTime, addr 0x2549cd8, size 0xe8, virtual false, abstract: false, final false
  inline void SetSignatureCreationTime(bool isCritical, ::System::DateTime date);

  /// @brief Method SetSignatureExpirationTime, addr 0x2549bf0, size 0xe8, virtual false, abstract: false, final false
  inline void SetSignatureExpirationTime(bool isCritical, int64_t seconds);

  /// @brief Method SetSignerUserId, addr 0x254a2a0, size 0x138, virtual false, abstract: false, final false
  inline void SetSignerUserId(bool isCritical, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawUserId);

  /// @brief Method SetSignerUserId, addr 0x254a16c, size 0x134, virtual false, abstract: false, final false
  inline void SetSignerUserId(bool isCritical, ::StringW userId);

  /// @brief Method SetTrust, addr 0x2549a10, size 0xf8, virtual false, abstract: false, final false
  inline void SetTrust(bool isCritical, int32_t depth, int32_t trustAmount);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_list();

  constexpr void __cordl_internal_set_list(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x254acbc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSignatureSubpacketGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSignatureSubpacketGenerator(PgpSignatureSubpacketGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSignatureSubpacketGenerator(PgpSignatureSubpacketGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1669 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator, ___list) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignatureSubpacketGenerator");
