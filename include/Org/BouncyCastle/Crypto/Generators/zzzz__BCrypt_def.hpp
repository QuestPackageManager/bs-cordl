#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/BCrypt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BCrypt)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class BCrypt;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::BCrypt);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.BCrypt
class CORDL_TYPE BCrypt : public ::System::Object {
public:
  // Declarations
  /// @brief Field KP, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KP, put = setStaticF_KP)) ::ArrayW<uint32_t, ::Array<uint32_t>*> KP;

  /// @brief Field KS0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KS0, put = setStaticF_KS0)) ::ArrayW<uint32_t, ::Array<uint32_t>*> KS0;

  /// @brief Field KS1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KS1, put = setStaticF_KS1)) ::ArrayW<uint32_t, ::Array<uint32_t>*> KS1;

  /// @brief Field KS2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KS2, put = setStaticF_KS2)) ::ArrayW<uint32_t, ::Array<uint32_t>*> KS2;

  /// @brief Field KS3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KS3, put = setStaticF_KS3)) ::ArrayW<uint32_t, ::Array<uint32_t>*> KS3;

  /// @brief Field MAGIC_STRING, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MAGIC_STRING, put = setStaticF_MAGIC_STRING)) ::ArrayW<uint32_t, ::Array<uint32_t>*> MAGIC_STRING;

  /// @brief Field P, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_P, put = __cordl_internal_set_P)) ::ArrayW<uint32_t, ::Array<uint32_t>*> P;

  /// @brief Field S, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_S, put = __cordl_internal_set_S)) ::ArrayW<uint32_t, ::Array<uint32_t>*> S;

  /// @brief Method CyclicXorKey, addr 0x2380728, size 0x88, virtual false, abstract: false, final false
  inline void CyclicXorKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method DeriveRawKey, addr 0x2380cdc, size 0x318, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DeriveRawKey(int32_t cost, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::ArrayW<uint8_t, ::Array<uint8_t>*> psw);

  /// @brief Method EncryptMagicString, addr 0x23807b0, size 0x2d0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptMagicString();

  /// @brief Method F, addr 0x2380470, size 0x84, virtual false, abstract: false, final false
  inline uint32_t F(uint32_t x);

  /// @brief Method Generate, addr 0x2381064, size 0x1b4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t cost);

  /// @brief Method InitState, addr 0x2380628, size 0x100, virtual false, abstract: false, final false
  inline void InitState();

  static inline ::Org::BouncyCastle::Crypto::Generators::BCrypt* New_ctor();

  /// @brief Method PasswordToByteArray, addr 0x2380ff4, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PasswordToByteArray(::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method ProcessTable, addr 0x23804f4, size 0x134, virtual false, abstract: false, final false
  inline void ProcessTable(uint32_t xl, uint32_t xr, ::ArrayW<uint32_t, ::Array<uint32_t>*> table);

  /// @brief Method ProcessTableWithSalt, addr 0x2380a80, size 0x25c, virtual false, abstract: false, final false
  inline void ProcessTableWithSalt(::ArrayW<uint32_t, ::Array<uint32_t>*> table, ::ArrayW<uint32_t, ::Array<uint32_t>*> salt32Bit, uint32_t iv1, uint32_t iv2);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_P() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_P();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_S() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_S();

  constexpr void __cordl_internal_set_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_S(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x2380404, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KP();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KS0();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KS1();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KS2();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KS3();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_MAGIC_STRING();

  static inline void setStaticF_KP(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_KS0(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_KS1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_KS2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_KS3(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_MAGIC_STRING(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BCrypt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BCrypt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BCrypt(BCrypt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BCrypt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BCrypt(BCrypt const&) = delete;

  /// @brief Field MAGIC_STRING_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t MAGIC_STRING_LENGTH{ static_cast<int32_t>(0x6) };

  /// @brief Field MAX_COST offset 0xffffffff size 0x4
  static constexpr int32_t MAX_COST{ static_cast<int32_t>(0x1f) };

  /// @brief Field MAX_PASSWORD_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t MAX_PASSWORD_BYTES{ static_cast<int32_t>(0x48) };

  /// @brief Field MIN_COST offset 0xffffffff size 0x4
  static constexpr int32_t MIN_COST{ static_cast<int32_t>(0x4) };

  /// @brief Field P_SZ offset 0xffffffff size 0x4
  static constexpr int32_t P_SZ{ static_cast<int32_t>(0x12) };

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0x10) };

  /// @brief Field SALT_SIZE_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t SALT_SIZE_BYTES{ static_cast<int32_t>(0x10) };

  /// @brief Field SBOX_SK offset 0xffffffff size 0x4
  static constexpr int32_t SBOX_SK{ static_cast<int32_t>(0x100) };

  /// @brief Field SBOX_SK2 offset 0xffffffff size 0x4
  static constexpr int32_t SBOX_SK2{ static_cast<int32_t>(0x200) };

  /// @brief Field SBOX_SK3 offset 0xffffffff size 0x4
  static constexpr int32_t SBOX_SK3{ static_cast<int32_t>(0x300) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 887 };

  /// @brief Field S, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___S;

  /// @brief Field P, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___P;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::BCrypt, ___S) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::BCrypt, ___P) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::BCrypt, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::BCrypt);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::BCrypt*, "Org.BouncyCastle.Crypto.Generators", "BCrypt");
