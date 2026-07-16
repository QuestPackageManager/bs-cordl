#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/KeyParameter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyParameter)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, "Org.BouncyCastle.Crypto.Parameters", "KeyParameter");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.KeyParameter
class CORDL_TYPE KeyParameter : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::ArrayW<uint8_t> key;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Method GetKey, addr 0x33f9cf4, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> GetKey();

  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* New_ctor(::ArrayW<uint8_t> key);

  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* New_ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen);

  constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_key() const;

  constexpr ::ArrayW<uint8_t>& __cordl_internal_get_key();

  constexpr void __cordl_internal_set_key(::ArrayW<uint8_t> value);

  /// @brief Method .ctor, addr 0x3403528, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> key);

  /// @brief Method .ctor, addr 0x340a72c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyParameter(KeyParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyParameter(KeyParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1015 };

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t> ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KeyParameter, ___key) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::KeyParameter) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
