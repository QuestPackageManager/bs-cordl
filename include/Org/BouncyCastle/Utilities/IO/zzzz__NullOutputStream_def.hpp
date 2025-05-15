#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/NullOutputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullOutputStream)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class NullOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::NullOutputStream);
// Dependencies Org.BouncyCastle.Utilities.IO.BaseOutputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.IO.NullOutputStream
class CORDL_TYPE NullOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Utilities::IO::NullOutputStream* New_ctor();

  /// @brief Method Write, addr 0x25da070, size 0x4, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x25da06c, size 0x4, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  /// @brief Method .ctor, addr 0x25da074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullOutputStream(NullOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullOutputStream(NullOutputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1810 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::NullOutputStream, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::NullOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::NullOutputStream*, "Org.BouncyCastle.Utilities.IO", "NullOutputStream");
