#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitConverterLE)
// Forward declare root types
namespace Mono::Security {
class BitConverterLE;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::BitConverterLE);
// Type: Mono.Security::BitConverterLE
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// CS Name: ::Mono.Security::BitConverterLE*
class CORDL_TYPE BitConverterLE : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBytes, addr 0x2666d14, size 0x18, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(int32_t value);

  /// @brief Method GetBytes, addr 0x2667ad0, size 0x18, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(int64_t value);

  /// @brief Method GetUIntBytes, addr 0x2667830, size 0x110, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetUIntBytes(::cordl_internals::Ptr<uint8_t> bytes);

  /// @brief Method GetULongBytes, addr 0x2667940, size 0x190, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetULongBytes(::cordl_internals::Ptr<uint8_t> bytes);

  /// @brief Method ToInt32, addr 0x2667d10, size 0x24, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToUInt16, addr 0x2667d34, size 0x24, virtual false, abstract: false, final false
  static inline uint16_t ToUInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method ToUInt32, addr 0x2667d58, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t ToUInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method UIntFromBytes, addr 0x2667bc4, size 0x14c, virtual false, abstract: false, final false
  static inline void UIntFromBytes(::cordl_internals::Ptr<uint8_t> dst, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t startIndex);

  /// @brief Method UShortFromBytes, addr 0x2667ae8, size 0xdc, virtual false, abstract: false, final false
  static inline void UShortFromBytes(::cordl_internals::Ptr<uint8_t> dst, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t startIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitConverterLE();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitConverterLE", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitConverterLE(BitConverterLE&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitConverterLE", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitConverterLE(BitConverterLE const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::BitConverterLE, 0x10>, "Size mismatch!");

} // namespace Mono::Security
NEED_NO_BOX(::Mono::Security::BitConverterLE);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::BitConverterLE*, "Mono.Security", "BitConverterLE");
