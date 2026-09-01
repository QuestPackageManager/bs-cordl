#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Encoders\Base64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class Base64;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Utilities::Encoders::Base64*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Utilities::Encoders::Base64*, "Org.BouncyCastle.Utilities.Encoders", "Base64");
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Encoders.Base64
class CORDL_TYPE Base64 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Decode, addr 0x362bb64, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Decode(::ArrayW<uint8_t> data);

  /// @brief Method Decode, addr 0x362bbd4, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Decode(::StringW data);

  /// @brief Method Decode, addr 0x362bc30, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Decode(::StringW data, ::System::IO::Stream* outStream);

  /// @brief Method Encode, addr 0x362ba30, size 0x18, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t> data);

  /// @brief Method Encode, addr 0x362ba48, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length);

  /// @brief Method Encode, addr 0x362bb14, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length, ::System::IO::Stream* outStream);

  /// @brief Method Encode, addr 0x362bac4, size 0x50, virtual false, abstract: false, final false
  static inline int32_t Encode(::ArrayW<uint8_t> data, ::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Utilities::Encoders::Base64* New_ctor();

  /// @brief Method ToBase64String, addr 0x362b950, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> data);

  /// @brief Method ToBase64String, addr 0x362b9bc, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW ToBase64String(::ArrayW<uint8_t> data, int32_t off, int32_t length);

  /// @brief Method .ctor, addr 0x362b94c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Base64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Base64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Base64(Base64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Base64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Base64(Base64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1793 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Utilities::Encoders::Base64) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
