#pragma once
// IWYU pragma private; include "System/IO/UnexceptionalStreamReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnexceptionalStreamReader)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class UnexceptionalStreamReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::UnexceptionalStreamReader);
// Type: System.IO::UnexceptionalStreamReader
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::UnexceptionalStreamReader*
class CORDL_TYPE UnexceptionalStreamReader : public ::System::IO::StreamReader {
public:
  // Declarations
  /// @brief Field newline, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_newline, put = setStaticF_newline)) ::ArrayW<bool, ::Array<bool>*> newline;

  /// @brief Field newlineChar, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_newlineChar, put = setStaticF_newlineChar)) char16_t newlineChar;

  /// @brief Method CheckEOL, addr 0x3d0d7c4, size 0x198, virtual false, abstract: false, final false
  inline bool CheckEOL(char16_t current);

  static inline ::System::IO::UnexceptionalStreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method Peek, addr 0x3d0d42c, size 0x88, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x3d0d4b4, size 0x88, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x3d0d53c, size 0x288, virtual true, abstract: false, final false
  inline int32_t Read(ByRef<::ArrayW<char16_t, ::Array<char16_t>*>> dest_buffer, int32_t index, int32_t count);

  /// @brief Method ReadLine, addr 0x3d0d95c, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x3d0d9e4, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method .ctor, addr 0x3d0d3bc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_newline();

  static inline char16_t getStaticF_newlineChar();

  static inline void setStaticF_newline(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_newlineChar(char16_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnexceptionalStreamReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnexceptionalStreamReader(UnexceptionalStreamReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnexceptionalStreamReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnexceptionalStreamReader(UnexceptionalStreamReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::UnexceptionalStreamReader, 0x60>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::UnexceptionalStreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::UnexceptionalStreamReader*, "System.IO", "UnexceptionalStreamReader");
