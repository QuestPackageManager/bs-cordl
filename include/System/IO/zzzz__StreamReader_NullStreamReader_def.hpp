#pragma once
// IWYU pragma private; include "System/IO/StreamReader_NullStreamReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamReader_NullStreamReader)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace GlobalNamespace {
class StreamReader_NullStreamReader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StreamReader_NullStreamReader);
// Dependencies System.IO.StreamReader
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.IO.StreamReader/NullStreamReader
class CORDL_TYPE StreamReader_NullStreamReader : public ::System::IO::StreamReader {
public:
  // Declarations
  __declspec(property(get = get_BaseStream)) ::System::IO::Stream* BaseStream;

  __declspec(property(get = get_CurrentEncoding)) ::System::Text::Encoding* CurrentEncoding;

  /// @brief Method Dispose, addr 0x3d3e550, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::GlobalNamespace::StreamReader_NullStreamReader* New_ctor();

  /// @brief Method Peek, addr 0x3d3e554, size 0x8, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x3d3e55c, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x3d3e564, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadBuffer, addr 0x3d3e5bc, size 0x8, virtual true, abstract: false, final false
  inline int32_t ReadBuffer();

  /// @brief Method ReadLine, addr 0x3d3e56c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x3d3e574, size 0x48, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method .ctor, addr 0x3d3e45c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseStream, addr 0x3d3e4f0, size 0x58, virtual true, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method get_CurrentEncoding, addr 0x3d3e548, size 0x8, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_CurrentEncoding();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamReader_NullStreamReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamReader_NullStreamReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamReader_NullStreamReader(StreamReader_NullStreamReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamReader_NullStreamReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamReader_NullStreamReader(StreamReader_NullStreamReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3575 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StreamReader_NullStreamReader, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StreamReader_NullStreamReader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StreamReader_NullStreamReader*, "System.IO", "StreamReader/NullStreamReader");
