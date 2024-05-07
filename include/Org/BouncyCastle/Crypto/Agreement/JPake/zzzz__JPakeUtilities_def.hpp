#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/JPake/JPakeUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JPakeUtilities)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeUtilities);
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.JPake::JPakeUtilities*
class CORDL_TYPE JPakeUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field One, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_One, put = setStaticF_One))::Org::BouncyCastle::Math::BigInteger* One;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero))::Org::BouncyCastle::Math::BigInteger* Zero;

  /// @brief Method CalculateA, addr 0x1477c80, size 0x24, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateA(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* gA,
                                                                  ::Org::BouncyCastle::Math::BigInteger* x2s);

  /// @brief Method CalculateGA, addr 0x1477b70, size 0x50, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateGA(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* gx1, ::Org::BouncyCastle::Math::BigInteger* gx3,
                                                                   ::Org::BouncyCastle::Math::BigInteger* gx4);

  /// @brief Method CalculateGx, addr 0x1477030, size 0x24, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateGx(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method CalculateHashForZeroKnowledgeProof, addr 0x1479434, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateHashForZeroKnowledgeProof(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* gr,
                                                                                          ::Org::BouncyCastle::Math::BigInteger* gx, ::StringW participantId,
                                                                                          ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method CalculateKeyingMaterial, addr 0x14783ec, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateKeyingMaterial(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q,
                                                                               ::Org::BouncyCastle::Math::BigInteger* gx4, ::Org::BouncyCastle::Math::BigInteger* x2,
                                                                               ::Org::BouncyCastle::Math::BigInteger* s, ::Org::BouncyCastle::Math::BigInteger* B);

  /// @brief Method CalculateMacKey, addr 0x14796b8, size 0x12c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateMacKey(::Org::BouncyCastle::Math::BigInteger* keyingMaterial, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method CalculateMacTag, addr 0x1478674, size 0x224, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateMacTag(::StringW participantId, ::StringW partnerParticipantId, ::Org::BouncyCastle::Math::BigInteger* gx1,
                                                                       ::Org::BouncyCastle::Math::BigInteger* gx2, ::Org::BouncyCastle::Math::BigInteger* gx3,
                                                                       ::Org::BouncyCastle::Math::BigInteger* gx4, ::Org::BouncyCastle::Math::BigInteger* keyingMaterial,
                                                                       ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method CalculateS, addr 0x1477bc0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateS(::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method CalculateX2s, addr 0x1477c4c, size 0x34, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateX2s(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* x2, ::Org::BouncyCastle::Math::BigInteger* s);

  /// @brief Method CalculateZeroKnowledgeProof, addr 0x1477054, size 0x1c4, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
  CalculateZeroKnowledgeProof(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* gx,
                              ::Org::BouncyCastle::Math::BigInteger* x, ::StringW participantId, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GenerateX1, addr 0x1476f14, size 0x8c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* GenerateX1(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GenerateX2, addr 0x1476fa0, size 0x90, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* GenerateX2(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method IntToByteArray, addr 0x1479c68, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntToByteArray(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeUtilities* New_ctor();

  /// @brief Method UpdateDigest, addr 0x14798e4, size 0x78, virtual false, abstract: false, final false
  static inline void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* bigInteger);

  /// @brief Method UpdateDigest, addr 0x14799e4, size 0xf4, virtual false, abstract: false, final false
  static inline void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method UpdateDigest, addr 0x147995c, size 0x88, virtual false, abstract: false, final false
  static inline void UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* digest, ::StringW str);

  /// @brief Method UpdateDigestIncludingSize, addr 0x14795b8, size 0x78, virtual false, abstract: false, final false
  static inline void UpdateDigestIncludingSize(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* bigInteger);

  /// @brief Method UpdateDigestIncludingSize, addr 0x1479ad8, size 0x190, virtual false, abstract: false, final false
  static inline void UpdateDigestIncludingSize(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method UpdateDigestIncludingSize, addr 0x1479630, size 0x88, virtual false, abstract: false, final false
  static inline void UpdateDigestIncludingSize(::Org::BouncyCastle::Crypto::IDigest* digest, ::StringW str);

  /// @brief Method UpdateMac, addr 0x147986c, size 0x78, virtual false, abstract: false, final false
  static inline void UpdateMac(::Org::BouncyCastle::Crypto::IMac* mac, ::Org::BouncyCastle::Math::BigInteger* bigInteger);

  /// @brief Method UpdateMac, addr 0x1479c70, size 0xf4, virtual false, abstract: false, final false
  static inline void UpdateMac(::Org::BouncyCastle::Crypto::IMac* mac, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method UpdateMac, addr 0x14797e4, size 0x88, virtual false, abstract: false, final false
  static inline void UpdateMac(::Org::BouncyCastle::Crypto::IMac* mac, ::StringW str);

  /// @brief Method ValidateGa, addr 0x147818c, size 0xc4, virtual false, abstract: false, final false
  static inline void ValidateGa(::Org::BouncyCastle::Math::BigInteger* ga);

  /// @brief Method ValidateGx4, addr 0x1477690, size 0xc4, virtual false, abstract: false, final false
  static inline void ValidateGx4(::Org::BouncyCastle::Math::BigInteger* gx4);

  /// @brief Method ValidateMacTag, addr 0x1478adc, size 0x120, virtual false, abstract: false, final false
  static inline void ValidateMacTag(::StringW participantId, ::StringW partnerParticipantId, ::Org::BouncyCastle::Math::BigInteger* gx1, ::Org::BouncyCastle::Math::BigInteger* gx2,
                                    ::Org::BouncyCastle::Math::BigInteger* gx3, ::Org::BouncyCastle::Math::BigInteger* gx4, ::Org::BouncyCastle::Math::BigInteger* keyingMaterial,
                                    ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* partnerMacTag);

  /// @brief Method ValidateNotNull, addr 0x1476c90, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateNotNull(::System::Object* obj, ::StringW description);

  /// @brief Method ValidateParticipantIdsDiffer, addr 0x14775f0, size 0xa0, virtual false, abstract: false, final false
  static inline void ValidateParticipantIdsDiffer(::StringW participantId1, ::StringW participantId2);

  /// @brief Method ValidateParticipantIdsEqual, addr 0x1477ff4, size 0x198, virtual false, abstract: false, final false
  static inline void ValidateParticipantIdsEqual(::StringW expectedParticipantId, ::StringW actualParticipantId);

  /// @brief Method ValidateZeroKnowledgeProof, addr 0x1477754, size 0x1f8, virtual false, abstract: false, final false
  static inline void ValidateZeroKnowledgeProof(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g,
                                                ::Org::BouncyCastle::Math::BigInteger* gx,
                                                ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> zeroKnowledgeProof, ::StringW participantId,
                                                ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0x1479df4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_One();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Zero();

  static inline void setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Zero(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPakeUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JPakeUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPakeUtilities(JPakeUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPakeUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPakeUtilities(JPakeUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeUtilities*, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeUtilities");
