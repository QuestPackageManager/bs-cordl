#pragma once
// IWYU pragma private; include "System/IO/CStreamReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CStreamReader)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System {
class TermInfoDriver;
}
// Forward declare root types
namespace System::IO {
class CStreamReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::CStreamReader);
// Dependencies System.IO.StreamReader
namespace System::IO {
// Is value type: false
// CS Name: System.IO.CStreamReader
class CORDL_TYPE CStreamReader : public ::System::IO::StreamReader {
public:
  // Declarations
  /// @brief Field driver, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_driver, put = __cordl_internal_set_driver)) ::System::TermInfoDriver* driver;

  static inline ::System::IO::CStreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method Peek, addr 0x3d91450, size 0x88, virtual true, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x3d914d8, size 0xd0, virtual true, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Read, addr 0x3d915a8, size 0x1a0, virtual true, abstract: false, final false
  inline int32_t Read(::ByRef<::ArrayW<char16_t, ::Array<char16_t>*>> dest, int32_t index, int32_t count);

  /// @brief Method ReadLine, addr 0x3d91748, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x3d917e0, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ReadToEnd();

  constexpr ::System::TermInfoDriver* const& __cordl_internal_get_driver() const;

  constexpr ::System::TermInfoDriver*& __cordl_internal_get_driver();

  constexpr void __cordl_internal_set_driver(::System::TermInfoDriver* value);

  /// @brief Method .ctor, addr 0x3d9133c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CStreamReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CStreamReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CStreamReader(CStreamReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CStreamReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CStreamReader(CStreamReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3643 };

  /// @brief Field driver, offset: 0x60, size: 0x8, def value: None
  ::System::TermInfoDriver* ___driver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::CStreamReader, ___driver) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::CStreamReader, 0x68>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::CStreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::CStreamReader*, "System.IO", "CStreamReader");
