#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaValidationParameters)
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaValidationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DsaValidationParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1032))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DsaValidationParameters*
class CORDL_TYPE DsaValidationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field seed, offset 0x10, size 0x8
  __declspec(property(get = __get_seed, put = __set_seed))::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Field counter, offset 0x18, size 0x4
  __declspec(property(get = __get_counter, put = __set_counter)) int32_t counter;

  /// @brief Field usageIndex, offset 0x1c, size 0x4
  __declspec(property(get = __get_usageIndex, put = __set_usageIndex)) int32_t usageIndex;

  __declspec(property(get = get_Counter)) int32_t Counter;

  __declspec(property(get = get_UsageIndex)) int32_t UsageIndex;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_seed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_seed() const;

  constexpr void __set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_counter();

  constexpr int32_t const& __get_counter() const;

  constexpr void __set_counter(int32_t value);

  constexpr int32_t& __get_usageIndex();

  constexpr int32_t const& __get_usageIndex() const;

  constexpr void __set_usageIndex(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter);

  /// @brief Method .ctor addr 0xebd0e4 size 0x8 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter, int32_t usageIndex);

  /// @brief Method .ctor addr 0xebd0ec size 0x108 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter, int32_t usageIndex);

  /// @brief Method GetSeed addr 0xebd1f4 size 0x78 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed();

  /// @brief Method get_Counter addr 0xebd26c size 0x8 virtual true final false
  inline int32_t get_Counter();

  /// @brief Method get_UsageIndex addr 0xebd274 size 0x8 virtual true final false
  inline int32_t get_UsageIndex();

  /// @brief Method Equals addr 0xebd27c size 0xa4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xebd320 size 0x90 virtual true final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* other);

  /// @brief Method GetHashCode addr 0xebd3b0 size 0x88 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DsaValidationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaValidationParameters(DsaValidationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaValidationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaValidationParameters(DsaValidationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaValidationParameters();

public:
  /// @brief Field seed, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  /// @brief Field counter, offset: 0x18, size: 0x4, def value: None
  int32_t ___counter;

  /// @brief Field usageIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___usageIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters, ___seed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters, ___counter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters, ___usageIndex) == 0x1c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaValidationParameters");
