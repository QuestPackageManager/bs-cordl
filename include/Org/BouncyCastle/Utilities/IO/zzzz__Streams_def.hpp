#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Streams)
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class Streams;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Streams);
// Type: Org.BouncyCastle.Utilities.IO::Streams
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO::Streams*
class CORDL_TYPE Streams : public ::System::Object {
public:
  // Declarations
  /// @brief Method Drain, addr 0x11cfb30, size 0x84, virtual false, abstract: false, final false
  static inline void Drain(::System::IO::Stream* inStr);

  static inline ::Org::BouncyCastle::Utilities::IO::Streams* New_ctor();

  /// @brief Method PipeAll, addr 0x11cfc2c, size 0xe0, virtual false, abstract: false, final false
  static inline void PipeAll(::System::IO::Stream* inStr, ::System::IO::Stream* outStr);

  /// @brief Method PipeAllLimited, addr 0x11cfd94, size 0x148, virtual false, abstract: false, final false
  static inline int64_t PipeAllLimited(::System::IO::Stream* inStr, int64_t limit, ::System::IO::Stream* outStr);

  /// @brief Method ReadAll, addr 0x11cfbb4, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAll(::System::IO::Stream* inStr);

  /// @brief Method ReadAllLimited, addr 0x11cfd0c, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllLimited(::System::IO::Stream* inStr, int32_t limit);

  /// @brief Method ReadFully, addr 0x11cfedc, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t ReadFully(::System::IO::Stream* inStr, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method ReadFully, addr 0x11cfef8, size 0x80, virtual false, abstract: false, final false
  static inline int32_t ReadFully(::System::IO::Stream* inStr, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method WriteBufTo, addr 0x11cff98, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t WriteBufTo(::System::IO::MemoryStream* buf, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t offset);

  /// @brief Method WriteBufTo, addr 0x11cff78, size 0x20, virtual false, abstract: false, final false
  static inline void WriteBufTo(::System::IO::MemoryStream* buf, ::System::IO::Stream* output);

  /// @brief Method WriteZeroes, addr 0x11d004c, size 0xb0, virtual false, abstract: false, final false
  static inline void WriteZeroes(::System::IO::Stream* outStr, int64_t count);

  /// @brief Method .ctor, addr 0x11cfb28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Streams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Streams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Streams(Streams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Streams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Streams(Streams const&) = delete;

  /// @brief Field BufferSize offset 0xffffffff size 0x4
  static constexpr int32_t BufferSize{ static_cast<int32_t>(0x200) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::Streams, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Streams);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Streams*, "Org.BouncyCastle.Utilities.IO", "Streams");
