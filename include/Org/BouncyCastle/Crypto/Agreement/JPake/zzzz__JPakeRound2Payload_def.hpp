#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeRound2Payload
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(718))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.JPake::JPakeRound2Payload*
class CORDL_TYPE JPakeRound2Payload : public ::System::Object {
public:
  // Declarations
  /// @brief Field participantId, offset 0x10, size 0x8
  __declspec(property(get = __get_participantId, put = __set_participantId))::StringW participantId;

  /// @brief Field a, offset 0x18, size 0x8
  __declspec(property(get = __get_a, put = __set_a))::Org::BouncyCastle::Math::BigInteger* a;

  /// @brief Field knowledgeProofForX2s, offset 0x20, size 0x8
  __declspec(property(get = __get_knowledgeProofForX2s,
                      put = __set_knowledgeProofForX2s))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2s;

  __declspec(property(get = get_ParticipantId))::StringW ParticipantId;

  __declspec(property(get = get_A))::Org::BouncyCastle::Math::BigInteger* A;

  __declspec(property(get = get_KnowledgeProofForX2s))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> KnowledgeProofForX2s;

  constexpr ::StringW& __get_participantId();

  constexpr ::StringW const& __get_participantId() const;

  constexpr void __set_participantId(::StringW value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_a();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_a() const;

  constexpr void __set_a(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>& __get_knowledgeProofForX2s();

  constexpr ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> const& __get_knowledgeProofForX2s() const;

  constexpr void __set_knowledgeProofForX2s(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*
  New_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* a, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2s);

  /// @brief Method .ctor addr 0x1214498 size 0x120 virtual false final false
  inline void _ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* a,
                    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> knowledgeProofForX2s);

  /// @brief Method get_ParticipantId addr 0x1215b8c size 0x8 virtual true final false
  inline ::StringW get_ParticipantId();

  /// @brief Method get_A addr 0x1215b94 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_A();

  /// @brief Method get_KnowledgeProofForX2s addr 0x1215b9c size 0x7c virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> get_KnowledgeProofForX2s();

  // Ctor Parameters [CppParam { name: "", ty: "JPakeRound2Payload", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPakeRound2Payload(JPakeRound2Payload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPakeRound2Payload", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPakeRound2Payload(JPakeRound2Payload const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPakeRound2Payload();

public:
  /// @brief Field participantId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___participantId;

  /// @brief Field a, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___a;

  /// @brief Field knowledgeProofForX2s, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> ___knowledgeProofForX2s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeRound2Payload");
