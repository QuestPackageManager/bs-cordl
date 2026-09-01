#pragma once
// IWYU pragma private; include "System\Security\Cryptography\Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Utils;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::Utils*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::Utils*, "System.Security.Cryptography", "Utils");
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Field _rng, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__rng, put = setStaticF__rng)) ::System::Security::Cryptography::RNGCryptoServiceProvider* _rng;

  /// @brief Method ConvertByteArrayToInt, addr 0x5b08870, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t ConvertByteArrayToInt(::ArrayW<uint8_t> input);

  /// @brief Method ConvertIntToByteArray, addr 0x5b088cc, size 0x128, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ConvertIntToByteArray(int32_t dwInput);

  /// @brief Method DWORDFromBigEndian, addr 0x5b04030, size 0x50, virtual false, abstract: false, final false
  static inline void DWORDFromBigEndian(uint32_t* x, int32_t digits, uint8_t* block);

  /// @brief Method DWORDFromLittleEndian, addr 0x5b089f4, size 0x4c, virtual false, abstract: false, final false
  static inline void DWORDFromLittleEndian(uint32_t* x, int32_t digits, uint8_t* block);

  /// @brief Method DWORDToBigEndian, addr 0x5b03f40, size 0xf0, virtual false, abstract: false, final false
  static inline void DWORDToBigEndian(::ArrayW<uint8_t> block, ::ArrayW<uint32_t> x, int32_t digits);

  /// @brief Method DWORDToLittleEndian, addr 0x5b08a40, size 0xf0, virtual false, abstract: false, final false
  static inline void DWORDToLittleEndian(::ArrayW<uint8_t> block, ::ArrayW<uint32_t> x, int32_t digits);

  /// @brief Method DiscardWhiteSpaces, addr 0x5b027f0, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW DiscardWhiteSpaces(::StringW inputBuffer);

  /// @brief Method DiscardWhiteSpaces, addr 0x5b086f0, size 0x180, virtual false, abstract: false, final false
  static inline ::StringW DiscardWhiteSpaces(::StringW inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method FixupKeyParity, addr 0x5b07f20, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FixupKeyParity(::ArrayW<uint8_t> key);

  /// @brief Method GenerateRandom, addr 0x5b0867c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GenerateRandom(int32_t keySize);

  /// @brief Method HasAlgorithm, addr 0x5b0827c, size 0x8, virtual false, abstract: false, final false
  static inline bool HasAlgorithm(int32_t dwCalg, int32_t dwKeySize);

  /// @brief Method QuadWordFromBigEndian, addr 0x5b05b6c, size 0x80, virtual false, abstract: false, final false
  static inline void QuadWordFromBigEndian(uint64_t* x, int32_t digits, uint8_t* block);

  /// @brief Method QuadWordToBigEndian, addr 0x5b059b4, size 0x1b8, virtual false, abstract: false, final false
  static inline void QuadWordToBigEndian(::ArrayW<uint8_t> block, ::ArrayW<uint64_t> x, int32_t digits);

  /// @brief Method _ProduceLegacyHmacValues, addr 0x5b08b30, size 0x8, virtual false, abstract: false, final false
  static inline bool _ProduceLegacyHmacValues();

  static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* getStaticF__rng();

  /// @brief Method get_StaticRandomNumberGenerator, addr 0x5b08570, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator();

  static inline void setStaticF__rng(::System::Security::Cryptography::RNGCryptoServiceProvider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2992 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::Utils) == 0x10, "Size mismatch!");

} // namespace System::Security::Cryptography
