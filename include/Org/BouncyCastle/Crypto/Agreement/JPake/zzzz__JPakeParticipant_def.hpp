#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JPakeParticipant)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound2Payload;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroup;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound1Payload;
}
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeRound3Payload;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakeParticipant;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant);
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakeParticipant
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(714))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.JPake::JPakeParticipant*
class CORDL_TYPE JPakeParticipant : public ::System::Object {
public:
  // Declarations
  /// @brief Field participantId, offset 0x10, size 0x8
  __declspec(property(get = __get_participantId, put = __set_participantId))::StringW participantId;

  /// @brief Field password, offset 0x18, size 0x8
  __declspec(property(get = __get_password, put = __set_password))::ArrayW<char16_t, ::Array<char16_t>*> password;

  /// @brief Field digest, offset 0x20, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field p, offset 0x30, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Math::BigInteger* p;

  /// @brief Field q, offset 0x38, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field g, offset 0x40, size 0x8
  __declspec(property(get = __get_g, put = __set_g))::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field partnerParticipantId, offset 0x48, size 0x8
  __declspec(property(get = __get_partnerParticipantId, put = __set_partnerParticipantId))::StringW partnerParticipantId;

  /// @brief Field x1, offset 0x50, size 0x8
  __declspec(property(get = __get_x1, put = __set_x1))::Org::BouncyCastle::Math::BigInteger* x1;

  /// @brief Field x2, offset 0x58, size 0x8
  __declspec(property(get = __get_x2, put = __set_x2))::Org::BouncyCastle::Math::BigInteger* x2;

  /// @brief Field gx1, offset 0x60, size 0x8
  __declspec(property(get = __get_gx1, put = __set_gx1))::Org::BouncyCastle::Math::BigInteger* gx1;

  /// @brief Field gx2, offset 0x68, size 0x8
  __declspec(property(get = __get_gx2, put = __set_gx2))::Org::BouncyCastle::Math::BigInteger* gx2;

  /// @brief Field gx3, offset 0x70, size 0x8
  __declspec(property(get = __get_gx3, put = __set_gx3))::Org::BouncyCastle::Math::BigInteger* gx3;

  /// @brief Field gx4, offset 0x78, size 0x8
  __declspec(property(get = __get_gx4, put = __set_gx4))::Org::BouncyCastle::Math::BigInteger* gx4;

  /// @brief Field b, offset 0x80, size 0x8
  __declspec(property(get = __get_b, put = __set_b))::Org::BouncyCastle::Math::BigInteger* b;

  /// @brief Field state, offset 0x88, size 0x4
  __declspec(property(get = __get_state, put = __set_state)) int32_t state;

  /// @brief Field STATE_INITIALIZED, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_STATE_INITIALIZED, put = setStaticF_STATE_INITIALIZED)) int32_t STATE_INITIALIZED;

  /// @brief Field STATE_ROUND_1_CREATED, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_STATE_ROUND_1_CREATED, put = setStaticF_STATE_ROUND_1_CREATED)) int32_t STATE_ROUND_1_CREATED;

  /// @brief Field STATE_ROUND_1_VALIDATED, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_STATE_ROUND_1_VALIDATED, put = setStaticF_STATE_ROUND_1_VALIDATED)) int32_t STATE_ROUND_1_VALIDATED;

  /// @brief Field STATE_ROUND_2_CREATED, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_STATE_ROUND_2_CREATED, put = setStaticF_STATE_ROUND_2_CREATED)) int32_t STATE_ROUND_2_CREATED;

  /// @brief Field STATE_ROUND_2_VALIDATED, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_STATE_ROUND_2_VALIDATED, put = setStaticF_STATE_ROUND_2_VALIDATED)) int32_t STATE_ROUND_2_VALIDATED;

  /// @brief Field STATE_KEY_CALCULATED, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_STATE_KEY_CALCULATED, put = setStaticF_STATE_KEY_CALCULATED)) int32_t STATE_KEY_CALCULATED;

  /// @brief Field STATE_ROUND_3_CREATED, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_STATE_ROUND_3_CREATED, put = setStaticF_STATE_ROUND_3_CREATED)) int32_t STATE_ROUND_3_CREATED;

  /// @brief Field STATE_ROUND_3_VALIDATED, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_STATE_ROUND_3_VALIDATED, put = setStaticF_STATE_ROUND_3_VALIDATED)) int32_t STATE_ROUND_3_VALIDATED;

  __declspec(property(get = get_State)) int32_t State;

  constexpr ::StringW& __get_participantId();

  constexpr ::StringW const& __get_participantId() const;

  constexpr void __set_participantId(::StringW value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_password();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_password() const;

  constexpr void __set_password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_g() const;

  constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::StringW& __get_partnerParticipantId();

  constexpr ::StringW const& __get_partnerParticipantId() const;

  constexpr void __set_partnerParticipantId(::StringW value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_x1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_x1() const;

  constexpr void __set_x1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_x2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_x2() const;

  constexpr void __set_x2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_gx1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_gx1() const;

  constexpr void __set_gx1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_gx2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_gx2() const;

  constexpr void __set_gx2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_gx3();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_gx3() const;

  constexpr void __set_gx3(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_gx4();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_gx4() const;

  constexpr void __set_gx4(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_b();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_b() const;

  constexpr void __set_b(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr int32_t& __get_state();

  constexpr int32_t const& __get_state() const;

  constexpr void __set_state(int32_t value);

  static inline void setStaticF_STATE_INITIALIZED(int32_t value);

  static inline int32_t getStaticF_STATE_INITIALIZED();

  static inline void setStaticF_STATE_ROUND_1_CREATED(int32_t value);

  static inline int32_t getStaticF_STATE_ROUND_1_CREATED();

  static inline void setStaticF_STATE_ROUND_1_VALIDATED(int32_t value);

  static inline int32_t getStaticF_STATE_ROUND_1_VALIDATED();

  static inline void setStaticF_STATE_ROUND_2_CREATED(int32_t value);

  static inline int32_t getStaticF_STATE_ROUND_2_CREATED();

  static inline void setStaticF_STATE_ROUND_2_VALIDATED(int32_t value);

  static inline int32_t getStaticF_STATE_ROUND_2_VALIDATED();

  static inline void setStaticF_STATE_KEY_CALCULATED(int32_t value);

  static inline int32_t getStaticF_STATE_KEY_CALCULATED();

  static inline void setStaticF_STATE_ROUND_3_CREATED(int32_t value);

  static inline int32_t getStaticF_STATE_ROUND_3_CREATED();

  static inline void setStaticF_STATE_ROUND_3_VALIDATED(int32_t value);

  static inline int32_t getStaticF_STATE_ROUND_3_VALIDATED();

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant* New_ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method .ctor addr 0x1213114 size 0x78 virtual false final false
  inline void _ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant* New_ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                          ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* group);

  /// @brief Method .ctor addr 0x121318c size 0xbc virtual false final false
  inline void _ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* group);

  static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant* New_ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                          ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* group,
                                                                                          ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor addr 0x1213248 size 0x23c virtual false final false
  inline void _ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* group,
                    ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method get_State addr 0x12134d8 size 0x8 virtual true final false
  inline int32_t get_State();

  /// @brief Method CreateRound1PayloadToSend addr 0x12134e0 size 0x228 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload* CreateRound1PayloadToSend();

  /// @brief Method ValidateRound1PayloadReceived addr 0x1213ba8 size 0x23c virtual true final false
  inline void ValidateRound1PayloadReceived(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload* round1PayloadReceived);

  /// @brief Method CreateRound2PayloadToSend addr 0x1214140 size 0x224 virtual true final false
  inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload* CreateRound2PayloadToSend();

  /// @brief Method ValidateRound2PayloadReceived addr 0x12145b8 size 0x230 virtual true final false
  inline void ValidateRound2PayloadReceived(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload* round2PayloadReceived);

  /// @brief Method CalculateKeyingMaterial addr 0x1214a44 size 0x19c virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateKeyingMaterial();

  /// @brief Method CreateRound3PayloadToSend addr 0x1214c7c size 0x1ec virtual true final false
  inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload* CreateRound3PayloadToSend(::Org::BouncyCastle::Math::BigInteger* keyingMaterial);

  /// @brief Method ValidateRound3PayloadReceived addr 0x12150b8 size 0x218 virtual true final false
  inline void ValidateRound3PayloadReceived(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload* round3PayloadReceived, ::Org::BouncyCastle::Math::BigInteger* keyingMaterial);

  // Ctor Parameters [CppParam { name: "", ty: "JPakeParticipant", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPakeParticipant(JPakeParticipant&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPakeParticipant", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPakeParticipant(JPakeParticipant const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPakeParticipant();

public:
  /// @brief Field participantId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___participantId;

  /// @brief Field password, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___password;

  /// @brief Field digest, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field p, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___p;

  /// @brief Field q, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___q;

  /// @brief Field g, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  /// @brief Field partnerParticipantId, offset: 0x48, size: 0x8, def value: None
  ::StringW ___partnerParticipantId;

  /// @brief Field x1, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___x1;

  /// @brief Field x2, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___x2;

  /// @brief Field gx1, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___gx1;

  /// @brief Field gx2, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___gx2;

  /// @brief Field gx3, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___gx3;

  /// @brief Field gx4, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___gx4;

  /// @brief Field b, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___b;

  /// @brief Field state, offset: 0x88, size: 0x4, def value: None
  int32_t ___state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakeParticipant");
