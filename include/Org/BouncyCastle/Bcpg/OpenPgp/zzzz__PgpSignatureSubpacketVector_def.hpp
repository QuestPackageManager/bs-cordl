#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSignatureSubpacketVector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSignatureSubpacketVector
class CORDL_TYPE PgpSignatureSubpacketVector : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field packets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_packets,
                      put = __cordl_internal_set_packets)) ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>
      packets;

  /// @brief Method GetCriticalTags, addr 0x2550d64, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>*> GetCriticalTags();

  /// @brief Method GetFeatures, addr 0x2550e5c, size 0x94, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::Sig::Features* GetFeatures();

  /// @brief Method GetIssuerKeyId, addr 0x255076c, size 0x90, virtual false, abstract: false, final false
  inline int64_t GetIssuerKeyId();

  /// @brief Method GetKeyExpirationTime, addr 0x2550974, size 0x90, virtual false, abstract: false, final false
  inline int64_t GetKeyExpirationTime();

  /// @brief Method GetKeyFlags, addr 0x2550bb4, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetKeyFlags();

  /// @brief Method GetNotationDataOccurences, addr 0x2550768, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*, ::Array<::Org::BouncyCastle::Bcpg::Sig::NotationData*>*> GetNotationDataOccurences();

  /// @brief Method GetNotationDataOccurrences, addr 0x2550604, size 0x164, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*, ::Array<::Org::BouncyCastle::Bcpg::Sig::NotationData*>*> GetNotationDataOccurrences();

  /// @brief Method GetPreferredCompressionAlgorithms, addr 0x2550b24, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetPreferredCompressionAlgorithms();

  /// @brief Method GetPreferredHashAlgorithms, addr 0x2550a04, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetPreferredHashAlgorithms();

  /// @brief Method GetPreferredSymmetricAlgorithms, addr 0x2550a94, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetPreferredSymmetricAlgorithms();

  /// @brief Method GetSignatureCreationTime, addr 0x2550818, size 0xcc, virtual false, abstract: false, final false
  inline ::System::DateTime GetSignatureCreationTime();

  /// @brief Method GetSignatureExpirationTime, addr 0x25508e4, size 0x90, virtual false, abstract: false, final false
  inline int64_t GetSignatureExpirationTime();

  /// @brief Method GetSignerUserId, addr 0x2550c44, size 0x90, virtual false, abstract: false, final false
  inline ::StringW GetSignerUserId();

  /// @brief Method GetSubpacket, addr 0x2550454, size 0x58, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* GetSubpacket(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type);

  /// @brief Method GetSubpackets, addr 0x25504c4, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> GetSubpackets(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type);

  /// @brief Method HasSignatureCreationTime, addr 0x25507fc, size 0x1c, virtual false, abstract: false, final false
  inline bool HasSignatureCreationTime();

  /// @brief Method HasSubpacket, addr 0x25504ac, size 0x18, virtual false, abstract: false, final false
  inline bool HasSubpacket(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type);

  /// @brief Method IsPrimaryUserId, addr 0x2550cd4, size 0x90, virtual false, abstract: false, final false
  inline bool IsPrimaryUserId();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*
  New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> packets);

  /// @brief Method ToSubpacketArray, addr 0x2550f28, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> ToSubpacketArray();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> const& __cordl_internal_get_packets() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>& __cordl_internal_get_packets();

  constexpr void __cordl_internal_set_packets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> value);

  /// @brief Method .ctor, addr 0x254d3f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> packets);

  /// @brief Method get_Count, addr 0x2550f0c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Size, addr 0x2550ef0, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSignatureSubpacketVector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketVector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSignatureSubpacketVector(PgpSignatureSubpacketVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketVector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSignatureSubpacketVector(PgpSignatureSubpacketVector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1670 };

  /// @brief Field packets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> ___packets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, ___packets) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignatureSubpacketVector");
