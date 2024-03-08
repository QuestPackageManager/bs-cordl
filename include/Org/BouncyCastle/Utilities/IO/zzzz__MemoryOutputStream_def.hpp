#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
CORDL_MODULE_EXPORT(MemoryOutputStream)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class MemoryOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::MemoryOutputStream);
// Type: Org.BouncyCastle.Utilities.IO::MemoryOutputStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO::MemoryOutputStream*
class CORDL_TYPE MemoryOutputStream : public ::System::IO::MemoryStream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  static inline ::Org::BouncyCastle::Utilities::IO::MemoryOutputStream* New_ctor();

  /// @brief Method .ctor, addr 0x11f60fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanRead, addr 0x11f60f4, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanRead();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryOutputStream(MemoryOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryOutputStream(MemoryOutputStream const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::MemoryOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*, "Org.BouncyCastle.Utilities.IO", "MemoryOutputStream");
