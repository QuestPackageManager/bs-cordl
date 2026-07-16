#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Strings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Strings)
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Strings;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Utilities::Strings*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Utilities::Strings*, "Org.BouncyCastle.Utilities", "Strings");
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Strings
class CORDL_TYPE Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromAsciiByteArray, addr 0x363c920, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW FromAsciiByteArray(::ArrayW<uint8_t> bytes);

  /// @brief Method FromByteArray, addr 0x363c650, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW FromByteArray(::ArrayW<uint8_t> bs);

  /// @brief Method FromUtf8ByteArray, addr 0x363c9bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW FromUtf8ByteArray(::ArrayW<uint8_t> bytes);

  /// @brief Method IsOneOf, addr 0x363c5d4, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsOneOf(::StringW s, ::ArrayW<::StringW> candidates);

  static inline ::Org::BouncyCastle::Utilities::Strings* New_ctor();

  /// @brief Method ToAsciiByteArray, addr 0x363c95c, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ToAsciiByteArray(::ArrayW<char16_t> cs);

  /// @brief Method ToAsciiByteArray, addr 0x363c98c, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ToAsciiByteArray(::StringW s);

  /// @brief Method ToByteArray, addr 0x363c738, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ToByteArray(::ArrayW<char16_t> cs);

  /// @brief Method ToByteArray, addr 0x363c828, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ToByteArray(::StringW s);

  /// @brief Method ToUpperCase, addr 0x363c540, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW ToUpperCase(::StringW original);

  /// @brief Method ToUtf8ByteArray, addr 0x363c9f8, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ToUtf8ByteArray(::ArrayW<char16_t> cs);

  /// @brief Method ToUtf8ByteArray, addr 0x363ca28, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> ToUtf8ByteArray(::StringW s);

  /// @brief Method .ctor, addr 0x363ca58, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Utilities::Strings) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
