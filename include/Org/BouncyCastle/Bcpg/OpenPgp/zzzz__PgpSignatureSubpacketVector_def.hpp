#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSignatureSubpacketVector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSignatureSubpacketVector)
namespace Org::BouncyCastle::Bcpg::Sig {
class Features;
}
namespace Org::BouncyCastle::Bcpg::Sig {
class NotationData;
}
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignatureSubpacketVector");
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket, System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSignatureSubpacketVector
class CORDL_TYPE PgpSignatureSubpacketVector : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief [Obsolete("Use \'Count\' property instead")]
  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field packets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_packets, put = __cordl_internal_set_packets)) ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> packets;

  /// @brief Method GetCriticalTags, addr 0x382bd9c, size 0xec, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag> GetCriticalTags();

  /// @brief Method GetFeatures, addr 0x382be88, size 0x80, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::Sig::Features* GetFeatures();

  /// @brief Method GetIssuerKeyId, addr 0x382b77c, size 0x94, virtual false, abstract: false, final false
  inline int64_t GetIssuerKeyId();

  /// @brief Method GetKeyExpirationTime, addr 0x382b990, size 0x94, virtual false, abstract: false, final false
  inline int64_t GetKeyExpirationTime();

  /// @brief Method GetKeyFlags, addr 0x382bbe0, size 0x94, virtual false, abstract: false, final false
  inline int32_t GetKeyFlags();

  /// [Obsolete("Use \'GetNotationDataOccurrences\' instead")]
  /// @brief Method GetNotationDataOccurences, addr 0x382b778, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*> GetNotationDataOccurences();

  /// @brief Method GetNotationDataOccurrences, addr 0x382b608, size 0x170, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*> GetNotationDataOccurrences();

  /// @brief Method GetPreferredCompressionAlgorithms, addr 0x382bb4c, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetPreferredCompressionAlgorithms();

  /// @brief Method GetPreferredHashAlgorithms, addr 0x382ba24, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetPreferredHashAlgorithms();

  /// @brief Method GetPreferredSymmetricAlgorithms, addr 0x382bab8, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t> GetPreferredSymmetricAlgorithms();

  /// @brief Method GetSignatureCreationTime, addr 0x382b82c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::DateTime GetSignatureCreationTime();

  /// @brief Method GetSignatureExpirationTime, addr 0x382b8fc, size 0x94, virtual false, abstract: false, final false
  inline int64_t GetSignatureExpirationTime();

  /// @brief Method GetSignerUserId, addr 0x382bc74, size 0x94, virtual false, abstract: false, final false
  inline ::StringW GetSignerUserId();

  /// @brief Method GetSubpacket, addr 0x382b46c, size 0x4c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* GetSubpacket(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type);

  /// @brief Method GetSubpackets, addr 0x382b4d0, size 0x138, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> GetSubpackets(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type);

  /// @brief Method HasSignatureCreationTime, addr 0x382b810, size 0x1c, virtual false, abstract: false, final false
  inline bool HasSignatureCreationTime();

  /// @brief Method HasSubpacket, addr 0x382b4b8, size 0x18, virtual false, abstract: false, final false
  inline bool HasSubpacket(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type);

  /// @brief Method IsPrimaryUserId, addr 0x382bd08, size 0x94, virtual false, abstract: false, final false
  inline bool IsPrimaryUserId();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> packets);

  /// @brief Method ToSubpacketArray, addr 0x382bf38, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> ToSubpacketArray();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> const& __cordl_internal_get_packets() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>& __cordl_internal_get_packets();

  constexpr void __cordl_internal_set_packets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> value);

  /// @brief Method .ctor, addr 0x382822c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> packets);

  /// @brief Method get_Count, addr 0x382bf20, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Size, addr 0x382bf08, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSignatureSubpacketVector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketVector", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSignatureSubpacketVector(PgpSignatureSubpacketVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketVector", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSignatureSubpacketVector(PgpSignatureSubpacketVector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1670 };

  /// @brief Field packets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> ___packets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, ___packets) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
