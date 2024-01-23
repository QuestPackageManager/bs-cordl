#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Parameters::AeadParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1013))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::AeadParameters*
class CORDL_TYPE AeadParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field associatedText, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_associatedText, put = __cordl_internal_set_associatedText))::ArrayW<uint8_t, ::Array<uint8_t>*> associatedText;

  /// @brief Field nonce, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nonce, put = __cordl_internal_set_nonce))::ArrayW<uint8_t, ::Array<uint8_t>*> nonce;

  /// @brief Field key, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key;

  /// @brief Field macSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  __declspec(property(get = get_Key))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Key;

  __declspec(property(get = get_MacSize)) int32_t MacSize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_associatedText();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_associatedText() const;

  constexpr void __cordl_internal_set_associatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_nonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_nonce() const;

  constexpr void __cordl_internal_set_nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr void __cordl_internal_set_macSize(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::AeadParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method .ctor, addr 0xf2f5bc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  static inline ::Org::BouncyCastle::Crypto::Parameters::AeadParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> associatedText);

  /// @brief Method .ctor, addr 0xf2f5fc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> associatedText);

  /// @brief Method get_Key, addr 0xf2f640, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* get_Key();

  /// @brief Method get_MacSize, addr 0xf2f648, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MacSize();

  /// @brief Method GetAssociatedText, addr 0xf2f650, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAssociatedText();

  /// @brief Method GetNonce, addr 0xf2f658, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetNonce();

  // Ctor Parameters [CppParam { name: "", ty: "AeadParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AeadParameters(AeadParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AeadParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AeadParameters(AeadParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AeadParameters();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::AeadParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::AeadParameters, ___associatedText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::AeadParameters, ___nonce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::AeadParameters, ___key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::AeadParameters, ___macSize) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::AeadParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::AeadParameters*, "Org.BouncyCastle.Crypto.Parameters", "AeadParameters");
