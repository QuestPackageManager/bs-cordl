#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdfParameters)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class KdfParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::KdfParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::KdfParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1064))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::KdfParameters*
class CORDL_TYPE KdfParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field iv, offset 0x10, size 0x8
  __declspec(property(get = __get_iv, put = __set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field shared, offset 0x18, size 0x8
  __declspec(property(get = __get_shared, put = __set_shared))::ArrayW<uint8_t, ::Array<uint8_t>*> shared;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_iv();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_iv() const;

  constexpr void __set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_shared();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_shared() const;

  constexpr void __set_shared(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> shared, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method .ctor, addr 0xf387f8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> shared, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method GetSharedSecret, addr 0xf38824, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSharedSecret();

  /// @brief Method GetIV, addr 0xf3882c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetIV();

  // Ctor Parameters [CppParam { name: "", ty: "KdfParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdfParameters(KdfParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdfParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdfParameters(KdfParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdfParameters();

public:
  /// @brief Field iv, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  /// @brief Field shared, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___shared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::KdfParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfParameters, ___iv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfParameters, ___shared) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::KdfParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::KdfParameters*, "Org.BouncyCastle.Crypto.Parameters", "KdfParameters");
