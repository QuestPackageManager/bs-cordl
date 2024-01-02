#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IesParameters)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class IesParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::IesParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::IesParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1058))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::IesParameters*
class CORDL_TYPE IesParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field derivation, offset 0x10, size 0x8
  __declspec(property(get = __get_derivation, put = __set_derivation))::ArrayW<uint8_t, ::Array<uint8_t>*> derivation;

  /// @brief Field encoding, offset 0x18, size 0x8
  __declspec(property(get = __get_encoding, put = __set_encoding))::ArrayW<uint8_t, ::Array<uint8_t>*> encoding;

  /// @brief Field macKeySize, offset 0x20, size 0x4
  __declspec(property(get = __get_macKeySize, put = __set_macKeySize)) int32_t macKeySize;

  __declspec(property(get = get_MacKeySize)) int32_t MacKeySize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_derivation();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_derivation() const;

  constexpr void __set_derivation(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_encoding();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_encoding() const;

  constexpr void __set_encoding(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_macKeySize();

  constexpr int32_t const& __get_macKeySize() const;

  constexpr void __set_macKeySize(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::IesParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding, int32_t macKeySize);

  /// @brief Method .ctor, addr 0xf36c8c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> derivation, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding, int32_t macKeySize);

  /// @brief Method GetDerivationV, addr 0xf36cc8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDerivationV();

  /// @brief Method GetEncodingV, addr 0xf36cd0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodingV();

  /// @brief Method get_MacKeySize, addr 0xf36cd8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MacKeySize();

  // Ctor Parameters [CppParam { name: "", ty: "IesParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IesParameters(IesParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IesParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IesParameters(IesParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IesParameters();

public:
  /// @brief Field derivation, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___derivation;

  /// @brief Field encoding, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encoding;

  /// @brief Field macKeySize, offset: 0x20, size: 0x4, def value: None
  int32_t ___macKeySize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::IesParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::IesParameters, ___derivation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::IesParameters, ___encoding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::IesParameters, ___macKeySize) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::IesParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::IesParameters*, "Org.BouncyCastle.Crypto.Parameters", "IesParameters");
