#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JPakeRound3Payload)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound3Payload;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload);
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeRound3Payload
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(719))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.JPake::JPakeRound3Payload*
class CORDL_TYPE JPakeRound3Payload : public ::System::Object {
public:
  // Declarations
  /// @brief Field participantId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_participantId, put = __cordl_internal_set_participantId))::StringW participantId;

  /// @brief Field macTag, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_macTag, put = __cordl_internal_set_macTag))::Org::BouncyCastle::Math::BigInteger* macTag;

  __declspec(property(get = get_ParticipantId))::StringW ParticipantId;

  __declspec(property(get = get_MacTag))::Org::BouncyCastle::Math::BigInteger* MacTag;

  constexpr ::StringW& __cordl_internal_get_participantId();

  constexpr ::StringW const& __cordl_internal_get_participantId() const;

  constexpr void __cordl_internal_set_participantId(::StringW value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_macTag();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_macTag() const;

  constexpr void __cordl_internal_set_macTag(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload* New_ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* magTag);

  /// @brief Method .ctor, addr 0x121508c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW participantId, ::Org::BouncyCastle::Math::BigInteger* magTag);

  /// @brief Method get_ParticipantId, addr 0x1215c18, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ParticipantId();

  /// @brief Method get_MacTag, addr 0x1215c20, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_MacTag();

  // Ctor Parameters [CppParam { name: "", ty: "JPakeRound3Payload", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPakeRound3Payload(JPakeRound3Payload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPakeRound3Payload", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPakeRound3Payload(JPakeRound3Payload const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPakeRound3Payload();

public:
  /// @brief Field participantId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___participantId;

  /// @brief Field macTag, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___macTag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload, ___participantId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload, ___macTag) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeRound3Payload");
