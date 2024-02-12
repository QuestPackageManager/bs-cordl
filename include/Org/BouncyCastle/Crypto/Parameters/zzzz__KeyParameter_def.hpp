#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::KeyParameter);
// Type: Org.BouncyCastle.Crypto.Parameters::KeyParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1015))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::KeyParameter*
class CORDL_TYPE KeyParameter : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_key();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method .ctor, addr 0xf53190, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t keyOff, int32_t keyLen);

  /// @brief Method .ctor, addr 0xf5a534, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t keyOff, int32_t keyLen);

  /// @brief Method GetKey, addr 0xf49bf8, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKey();

  // Ctor Parameters [CppParam { name: "", ty: "KeyParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyParameter(KeyParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyParameter(KeyParameter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyParameter();

public:
  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::KeyParameter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KeyParameter, ___key) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::KeyParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, "Org.BouncyCastle.Crypto.Parameters", "KeyParameter");
