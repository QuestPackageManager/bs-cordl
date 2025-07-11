#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/JPake/JPakeRound2Payload.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JPakeRound2Payload)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound2Payload;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.JPake.JPakeRound2Payload
class CORDL_TYPE JPakeRound2Payload : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_A)) ::Org::BouncyCastle::Math::BigInteger* A;

  __declspec(property(get = get_KnowledgeProofForX2s)) ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> KnowledgeProofForX2s;

  __declspec(property(get = get_ParticipantId)) ::StringW ParticipantId;

  /// @brief Field a, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) ::Org::BouncyCastle::Math::BigInteger* a;

  /// @brief Field knowledgeProofForX2s, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_knowledgeProofForX2s,
                      put = __cordl_internal_set_knowledgeProofForX2s)) ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
      knowledgeProofForX2s;

  /// @brief Field participantId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_participantId, put = __cordl_internal_set_participantId)) ::StringW participantId;

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*
  New_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* a, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2s);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_a() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_a();

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> const& __cordl_internal_get_knowledgeProofForX2s() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>& __cordl_internal_get_knowledgeProofForX2s();

  constexpr ::StringW const& __cordl_internal_get_participantId() const;

  constexpr ::StringW& __cordl_internal_get_participantId();

  constexpr void __cordl_internal_set_a(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_knowledgeProofForX2s(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> value);

  constexpr void __cordl_internal_set_participantId(::StringW value);

  /// @brief Method .ctor, addr 0x2688880, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* a,
                    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2s);

  /// @brief Method get_A, addr 0x2689ea4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_A();

  /// @brief Method get_KnowledgeProofForX2s, addr 0x2689eac, size 0x7c, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> get_KnowledgeProofForX2s();

  /// @brief Method get_ParticipantId, addr 0x2689e9c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ParticipantId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPakeRound2Payload();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JPakeRound2Payload", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPakeRound2Payload(JPakeRound2Payload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPakeRound2Payload", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPakeRound2Payload(JPakeRound2Payload const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 718 };

  /// @brief Field participantId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___participantId;

  /// @brief Field a, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___a;

  /// @brief Field knowledgeProofForX2s, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ___knowledgeProofForX2s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload, ___participantId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload, ___a) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload, ___knowledgeProofForX2s) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeRound2Payload");
