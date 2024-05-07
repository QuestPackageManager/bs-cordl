#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/JPake/JPakeRound1Payload.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JPakeRound1Payload)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound1Payload;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload);
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeRound1Payload
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.JPake::JPakeRound1Payload*
class CORDL_TYPE JPakeRound1Payload : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Gx1))::Org::BouncyCastle::Math::BigInteger* Gx1;

  __declspec(property(get = get_Gx2))::Org::BouncyCastle::Math::BigInteger* Gx2;

  __declspec(property(get = get_KnowledgeProofForX1))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> KnowledgeProofForX1;

  __declspec(property(get = get_KnowledgeProofForX2))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> KnowledgeProofForX2;

  __declspec(property(get = get_ParticipantId))::StringW ParticipantId;

  /// @brief Field gx1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gx1, put = __cordl_internal_set_gx1))::Org::BouncyCastle::Math::BigInteger* gx1;

  /// @brief Field gx2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gx2, put = __cordl_internal_set_gx2))::Org::BouncyCastle::Math::BigInteger* gx2;

  /// @brief Field knowledgeProofForX1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_knowledgeProofForX1,
                      put = __cordl_internal_set_knowledgeProofForX1))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX1;

  /// @brief Field knowledgeProofForX2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_knowledgeProofForX2,
                      put = __cordl_internal_set_knowledgeProofForX2))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2;

  /// @brief Field participantId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_participantId, put = __cordl_internal_set_participantId))::StringW participantId;

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload*
  New_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* gx1, ::Org::BouncyCastle::Math::BigInteger* gx2,
           ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX1,
           ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_gx1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_gx1() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_gx2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_gx2() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> const& __cordl_internal_get_knowledgeProofForX1() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>& __cordl_internal_get_knowledgeProofForX1();

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> const& __cordl_internal_get_knowledgeProofForX2() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>& __cordl_internal_get_knowledgeProofForX2();

  constexpr ::StringW const& __cordl_internal_get_participantId() const;

  constexpr ::StringW& __cordl_internal_get_participantId();

  constexpr void __cordl_internal_set_gx1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_gx2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_knowledgeProofForX1(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> value);

  constexpr void __cordl_internal_set_knowledgeProofForX2(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> value);

  constexpr void __cordl_internal_set_participantId(::StringW value);

  /// @brief Method .ctor, addr 0x1477218, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* gx1, ::Org::BouncyCastle::Math::BigInteger* gx2,
                    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX1,
                    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2);

  /// @brief Method get_Gx1, addr 0x1479290, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Gx1();

  /// @brief Method get_Gx2, addr 0x1479298, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Gx2();

  /// @brief Method get_KnowledgeProofForX1, addr 0x14792a0, size 0x7c, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> get_KnowledgeProofForX1();

  /// @brief Method get_KnowledgeProofForX2, addr 0x147931c, size 0x7c, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> get_KnowledgeProofForX2();

  /// @brief Method get_ParticipantId, addr 0x1479288, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ParticipantId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPakeRound1Payload();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JPakeRound1Payload", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPakeRound1Payload(JPakeRound1Payload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPakeRound1Payload", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPakeRound1Payload(JPakeRound1Payload const&) = delete;

  /// @brief Field participantId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___participantId;

  /// @brief Field gx1, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___gx1;

  /// @brief Field gx2, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___gx2;

  /// @brief Field knowledgeProofForX1, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ___knowledgeProofForX1;

  /// @brief Field knowledgeProofForX2, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ___knowledgeProofForX2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload, ___participantId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload, ___gx1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload, ___gx2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload, ___knowledgeProofForX1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload, ___knowledgeProofForX2) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload*, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeRound1Payload");
