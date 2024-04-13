#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace System::IO {
class __StreamReader__NullStreamReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__StreamReader__NullStreamReader);
// Type: ::NullStreamReader
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::StreamReader::NullStreamReader*
class CORDL_TYPE __StreamReader__NullStreamReader : public ::System::IO::StreamReader {
public:
  // Declarations
  __declspec(property(get = get_BaseStream))::System::IO::Stream* BaseStream;

  __declspec(property(get = get_CurrentEncoding))::System::Text::Encoding* CurrentEncoding;

  /// @brief Method Dispose, addr 0x2782df8, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::IO::__StreamReader__NullStreamReader* New_ctor();

  /// @brief Method Peek, addr 0x2782dfc, size 0x8, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x2782e04, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x2782e0c, size 0x8, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadBuffer, addr 0x2782e64, size 0x8, virtual true, abstract: false, final false
  inline int32_t ReadBuffer();

  /// @brief Method ReadLine, addr 0x2782e14, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x2782e1c, size 0x48, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method .ctor, addr 0x2782d04, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseStream, addr 0x2782d98, size 0x58, virtual true, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method get_CurrentEncoding, addr 0x2782df0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_CurrentEncoding();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StreamReader__NullStreamReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StreamReader__NullStreamReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StreamReader__NullStreamReader(__StreamReader__NullStreamReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StreamReader__NullStreamReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StreamReader__NullStreamReader(__StreamReader__NullStreamReader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__StreamReader__NullStreamReader, 0x60>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::__StreamReader__NullStreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__StreamReader__NullStreamReader*, "System.IO", "StreamReader/NullStreamReader");
