#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/MemoryInputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryInputStream)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class MemoryInputStream;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Utilities::IO::MemoryInputStream*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Utilities::IO::MemoryInputStream*, "Org.BouncyCastle.Utilities.IO", "MemoryInputStream");
// Dependencies System.IO.MemoryStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.IO.MemoryInputStream
class CORDL_TYPE MemoryInputStream : public ::System::IO::MemoryStream {
public:
  // Declarations
  __declspec(property(get = get_CanWrite)) bool CanWrite;

  static inline ::Org::BouncyCastle::Utilities::IO::MemoryInputStream* New_ctor(::ArrayW<uint8_t> buffer);

  /// @brief Method .ctor, addr 0x362d7d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> buffer);

  /// @brief Method get_CanWrite, addr 0x362d7dc, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanWrite();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryInputStream(MemoryInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryInputStream(MemoryInputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1808 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Utilities::IO::MemoryInputStream) == 0x50, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
