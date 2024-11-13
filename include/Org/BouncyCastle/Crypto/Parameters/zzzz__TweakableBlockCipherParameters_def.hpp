#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/TweakableBlockCipherParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TweakableBlockCipherParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class TweakableBlockCipherParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::TweakableBlockCipherParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::TweakableBlockCipherParameters*
class CORDL_TYPE TweakableBlockCipherParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Key;

  __declspec(property(get = get_Tweak)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Tweak;

  /// @brief Field key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key;

  /// @brief Field tweak, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tweak, put = __cordl_internal_set_tweak)) ::ArrayW<uint8_t, ::Array<uint8_t>*> tweak;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> tweak);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __cordl_internal_get_key() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_tweak() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_tweak();

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr void __cordl_internal_set_tweak(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x238dde8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> tweak);

  /// @brief Method get_Key, addr 0x238de68, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* get_Key();

  /// @brief Method get_Tweak, addr 0x238de70, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Tweak();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweakableBlockCipherParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweakableBlockCipherParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweakableBlockCipherParameters(TweakableBlockCipherParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweakableBlockCipherParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweakableBlockCipherParameters(TweakableBlockCipherParameters const&) = delete;

  /// @brief Field tweak, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___tweak;

  /// @brief Field key, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___key;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1087 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters, ___tweak) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters, ___key) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*, "Org.BouncyCastle.Crypto.Parameters", "TweakableBlockCipherParameters");
