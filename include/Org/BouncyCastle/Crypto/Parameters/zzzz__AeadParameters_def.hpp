#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/AeadParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AeadParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class AeadParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::AeadParameters);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.AeadParameters
class CORDL_TYPE AeadParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Key;

  __declspec(property(get = get_MacSize)) int32_t MacSize;

  /// @brief Field associatedText, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_associatedText, put = __cordl_internal_set_associatedText)) ::ArrayW<uint8_t, ::Array<uint8_t>*> associatedText;

  /// @brief Field key, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key;

  /// @brief Field macSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Field nonce, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nonce, put = __cordl_internal_set_nonce)) ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Method GetAssociatedText, addr 0x3310f24, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAssociatedText();

  /// @brief Method GetNonce, addr 0x3310f2c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetNonce();

  static inline ::Org::BouncyCastle::Crypto::Parameters::AeadParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  static inline ::Org::BouncyCastle::Crypto::Parameters::AeadParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> associatedText);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_associatedText() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_associatedText();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_key();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_nonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_nonce();

  constexpr void __cordl_internal_set_associatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr void __cordl_internal_set_macSize(int32_t value);

  constexpr void __cordl_internal_set_nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3310ef4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method .ctor, addr 0x3310f04, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> associatedText);

  /// @brief Method get_Key, addr 0x3310f14, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* get_Key();

  /// @brief Method get_MacSize, addr 0x3310f1c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MacSize();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AeadParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AeadParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AeadParameters(AeadParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AeadParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AeadParameters(AeadParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1013 };

  /// @brief Field associatedText, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___associatedText;

  /// @brief Field nonce, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___nonce;

  /// @brief Field key, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___key;

  /// @brief Field macSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___macSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::AeadParameters, ___associatedText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::AeadParameters, ___nonce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::AeadParameters, ___key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::AeadParameters, ___macSize) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::AeadParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::AeadParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::AeadParameters*, "Org.BouncyCastle.Crypto.Parameters", "AeadParameters");
