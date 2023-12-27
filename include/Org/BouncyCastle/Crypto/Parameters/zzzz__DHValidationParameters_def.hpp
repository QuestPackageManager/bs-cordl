#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHValidationParameters)
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHValidationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DHValidationParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1025))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DHValidationParameters*
class CORDL_TYPE DHValidationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field seed, offset 0x10, size 0x8
  __declspec(property(get = __get_seed, put = __set_seed))::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Field counter, offset 0x18, size 0x4
  __declspec(property(get = __get_counter, put = __set_counter)) int32_t counter;

  __declspec(property(get = get_Counter)) int32_t Counter;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_seed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_seed() const;

  constexpr void __set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_counter();

  constexpr int32_t const& __get_counter() const;

  constexpr void __set_counter(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter);

  /// @brief Method .ctor addr 0xf31584 size 0xfc virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter);

  /// @brief Method GetSeed addr 0xf31680 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed();

  /// @brief Method get_Counter addr 0xf316f8 size 0x8 virtual false final false
  inline int32_t get_Counter();

  /// @brief Method Equals addr 0xf31700 size 0x9c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xf3179c size 0x90 virtual false final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* other);

  /// @brief Method GetHashCode addr 0xf3182c size 0x88 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DHValidationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHValidationParameters(DHValidationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHValidationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHValidationParameters(DHValidationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHValidationParameters();

public:
  /// @brief Field seed, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  /// @brief Field counter, offset: 0x18, size: 0x4, def value: None
  int32_t ___counter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHValidationParameters");
