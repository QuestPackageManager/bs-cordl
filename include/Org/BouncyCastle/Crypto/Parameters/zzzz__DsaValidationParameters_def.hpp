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
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DsaValidationParameters*
class CORDL_TYPE DsaValidationParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Counter)) int32_t Counter;

  __declspec(property(get = get_UsageIndex)) int32_t UsageIndex;

  /// @brief Field counter, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_counter, put = __cordl_internal_set_counter)) int32_t counter;

  /// @brief Field seed, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed))::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Field usageIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_usageIndex, put = __cordl_internal_set_usageIndex)) int32_t usageIndex;

  /// @brief Method Equals, addr 0xfa22c8, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0xfa236c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* other);

  /// @brief Method GetHashCode, addr 0xfa23fc, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSeed, addr 0xfa2240, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed();

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter, int32_t usageIndex);

  constexpr int32_t const& __cordl_internal_get_counter() const;

  constexpr int32_t& __cordl_internal_get_counter();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_seed() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_seed();

  constexpr int32_t const& __cordl_internal_get_usageIndex() const;

  constexpr int32_t& __cordl_internal_get_usageIndex();

  constexpr void __cordl_internal_set_counter(int32_t value);

  constexpr void __cordl_internal_set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_usageIndex(int32_t value);

  /// @brief Method .ctor, addr 0xfa2130, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter);

  /// @brief Method .ctor, addr 0xfa2138, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t counter, int32_t usageIndex);

  /// @brief Method get_Counter, addr 0xfa22b8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Counter();

  /// @brief Method get_UsageIndex, addr 0xfa22c0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_UsageIndex();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaValidationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DsaValidationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaValidationParameters(DsaValidationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaValidationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaValidationParameters(DsaValidationParameters const&) = delete;

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
