#pragma once
// IWYU pragma private; include "Mono/Security/BitConverterLE.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BitConverterLE)
// Forward declare root types
namespace Mono::Security {
class BitConverterLE;
}
// Write type traits
MARK_REF_T(::Mono::Security::BitConverterLE*);
DEFINE_IL2CPP_CLASS(::Mono::Security::BitConverterLE*, "Mono.Security", "BitConverterLE");
// Dependencies System.Object
namespace Mono::Security {
// Is value type: false
// CS Name: Mono.Security.BitConverterLE
class CORDL_TYPE BitConverterLE : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBytes, addr 0x5ab9e88, size 0x18, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GetBytes(double_t value);

  /// @brief Method GetBytes, addr 0x5ab9e70, size 0x18, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GetBytes(float_t value);

  /// @brief Method GetUIntBytes, addr 0x5ab9cf8, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GetUIntBytes(uint8_t* bytes);

  /// @brief Method GetULongBytes, addr 0x5ab9d94, size 0xdc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> GetULongBytes(uint8_t* bytes);

  /// @brief Method ToDouble, addr 0x5ab9f9c, size 0x20, virtual false, abstract: false, final false
  static inline double_t ToDouble(::ArrayW<uint8_t> value, int32_t startIndex);

  /// @brief Method ToSingle, addr 0x5ab9f78, size 0x24, virtual false, abstract: false, final false
  static inline float_t ToSingle(::ArrayW<uint8_t> value, int32_t startIndex);

  /// @brief Method UIntFromBytes, addr 0x5ab9ea0, size 0x84, virtual false, abstract: false, final false
  static inline void UIntFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int32_t startIndex);

  /// @brief Method ULongFromBytes, addr 0x5ab9f24, size 0x54, virtual false, abstract: false, final false
  static inline void ULongFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int32_t startIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitConverterLE();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitConverterLE", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitConverterLE(BitConverterLE&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitConverterLE", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitConverterLE(BitConverterLEconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2274 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::BitConverterLE) == 0x10, "Size mismatch!");

} // namespace Mono::Security
