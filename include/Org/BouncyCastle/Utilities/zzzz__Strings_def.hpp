#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Strings)
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Strings;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Strings);
// Type: Org.BouncyCastle.Utilities::Strings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities::Strings*
class CORDL_TYPE Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromAsciiByteArray, addr 0x13d12b4, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW FromAsciiByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method FromByteArray, addr 0x13d0ff0, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW FromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method FromUtf8ByteArray, addr 0x13d1350, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW FromUtf8ByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method IsOneOf, addr 0x13d0f70, size 0x80, virtual false, abstract: false, final false
  static inline bool IsOneOf(::StringW s, ::ArrayW<::StringW, ::Array<::StringW>*> candidates);

  static inline ::Org::BouncyCastle::Utilities::Strings* New_ctor();

  /// @brief Method ToAsciiByteArray, addr 0x13d12f0, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToAsciiByteArray(::ArrayW<char16_t, ::Array<char16_t>*> cs);

  /// @brief Method ToAsciiByteArray, addr 0x13d1320, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToAsciiByteArray(::StringW s);

  /// @brief Method ToByteArray, addr 0x13d10e0, size 0xe8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray(::ArrayW<char16_t, ::Array<char16_t>*> cs);

  /// @brief Method ToByteArray, addr 0x13d11c8, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray(::StringW s);

  /// @brief Method ToUpperCase, addr 0x13d0ef4, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW ToUpperCase(::StringW original);

  /// @brief Method ToUtf8ByteArray, addr 0x13d138c, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToUtf8ByteArray(::ArrayW<char16_t, ::Array<char16_t>*> cs);

  /// @brief Method ToUtf8ByteArray, addr 0x13d13bc, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToUtf8ByteArray(::StringW s);

  /// @brief Method .ctor, addr 0x13d13ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Strings(Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Strings(Strings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Strings, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Strings);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Strings*, "Org.BouncyCastle.Utilities", "Strings");
