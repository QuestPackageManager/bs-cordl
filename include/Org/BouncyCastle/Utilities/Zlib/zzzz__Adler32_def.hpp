#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/Adler32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Adler32)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class Adler32;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::Adler32);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Zlib.Adler32
class CORDL_TYPE Adler32 : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Utilities::Zlib::Adler32* New_ctor();

  /// @brief Method .ctor, addr 0x3535348, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method adler32, addr 0x353504c, size 0x2fc, virtual false, abstract: false, final false
  inline int64_t adler32(int64_t adler, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t index, int32_t len);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Adler32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Adler32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Adler32(Adler32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Adler32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Adler32(Adler32 const&) = delete;

  /// @brief Field BASE offset 0xffffffff size 0x4
  static constexpr int32_t BASE{ static_cast<int32_t>(0xfff1) };

  /// @brief Field NMAX offset 0xffffffff size 0x4
  static constexpr int32_t NMAX{ static_cast<int32_t>(0x15b0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1817 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::Adler32, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::Adler32);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::Adler32*, "Org.BouncyCastle.Utilities.Zlib", "Adler32");
