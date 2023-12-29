#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CStreamReader)
namespace System::Text {
class Encoding;
}
namespace System {
class TermInfoDriver;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO {
class CStreamReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::CStreamReader);
// Type: System.IO::CStreamReader
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3568))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3625))
// CS Name: ::System.IO::CStreamReader*
class CORDL_TYPE CStreamReader : public ::System::IO::StreamReader {
public:
  // Declarations
  /// @brief Field driver, offset 0x60, size 0x8
  __declspec(property(get = __get_driver, put = __set_driver))::System::TermInfoDriver* driver;

  constexpr ::System::TermInfoDriver*& __get_driver();

  constexpr ::cordl_internals::to_const_pointer<::System::TermInfoDriver*> const& __get_driver() const;

  constexpr void __set_driver(::System::TermInfoDriver* value);

  static inline ::System::IO::CStreamReader* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor addr 0x23e9028 size 0x114 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method Peek addr 0x23e913c size 0x88 virtual true final false
  inline int32_t Peek();

  /// @brief Method Read addr 0x23e91c4 size 0xd0 virtual true final false
  inline int32_t Read();

  /// @brief Method Read addr 0x23e9294 size 0x1b0 virtual true final false
  inline int32_t Read(ByRef<::ArrayW<char16_t, ::Array<char16_t>*>> dest, int32_t index, int32_t count);

  /// @brief Method ReadLine addr 0x23e9444 size 0x98 virtual true final false
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd addr 0x23e94dc size 0x98 virtual true final false
  inline ::StringW ReadToEnd();

  // Ctor Parameters [CppParam { name: "", ty: "CStreamReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CStreamReader(CStreamReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CStreamReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CStreamReader(CStreamReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CStreamReader();

public:
  /// @brief Field driver, offset: 0x60, size: 0x8, def value: None
  ::System::TermInfoDriver* ___driver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::CStreamReader, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::IO::CStreamReader, ___driver) == 0x60, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::CStreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::CStreamReader*, "System.IO", "CStreamReader");
