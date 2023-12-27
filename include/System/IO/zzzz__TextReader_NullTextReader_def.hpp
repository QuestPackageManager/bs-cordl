#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextReader_NullTextReader)
// Forward declare root types
namespace System::IO {
class __TextReader__NullTextReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__TextReader__NullTextReader);
// Type: ::NullTextReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3579))
// CS Name: ::TextReader::NullTextReader*
class CORDL_TYPE __TextReader__NullTextReader : public ::System::IO::TextReader {
public:
  // Declarations
  static inline ::System::IO::__TextReader__NullTextReader* New_ctor();

  /// @brief Method .ctor addr 0x2506fc0 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method Read addr 0x2507018 size 0x8 virtual true final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method ReadLine addr 0x2507020 size 0x8 virtual true final false
  inline ::StringW ReadLine();

  // Ctor Parameters [CppParam { name: "", ty: "__TextReader__NullTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextReader__NullTextReader(__TextReader__NullTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextReader__NullTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextReader__NullTextReader(__TextReader__NullTextReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextReader__NullTextReader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__TextReader__NullTextReader, 0x18>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::__TextReader__NullTextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__TextReader__NullTextReader*, "System.IO", "TextReader/NullTextReader");
