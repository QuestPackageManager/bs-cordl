#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CStreamWriter)
namespace System::Text {
class Encoding;
}
namespace System::IO {
class Stream;
}
namespace System {
class TermInfoDriver;
}
// Forward declare root types
namespace System::IO {
class CStreamWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::CStreamWriter);
// Type: System.IO::CStreamWriter
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3578))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3638))
// CS Name: ::System.IO::CStreamWriter*
class CORDL_TYPE CStreamWriter : public ::System::IO::StreamWriter {
public:
  // Declarations
  /// @brief Field driver, offset 0x70, size 0x8
  __declspec(property(get = __get_driver, put = __set_driver))::System::TermInfoDriver* driver;

  constexpr ::System::TermInfoDriver*& __get_driver();

  constexpr ::cordl_internals::to_const_pointer<::System::TermInfoDriver*> const& __get_driver() const;

  constexpr void __set_driver(::System::TermInfoDriver* value);

  static inline ::System::IO::CStreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool leaveOpen);

  /// @brief Method .ctor addr 0x2545810 size 0x128 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool leaveOpen);

  /// @brief Method Write addr 0x2545938 size 0x348 virtual true final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write addr 0x2545c80 size 0x18c virtual true final false
  inline void Write(char16_t val);

  /// @brief Method InternalWriteString addr 0x2545e90 size 0x84 virtual false final false
  inline void InternalWriteString(::StringW val);

  /// @brief Method InternalWriteChar addr 0x2545e0c size 0x84 virtual false final false
  inline void InternalWriteChar(char16_t val);

  /// @brief Method InternalWriteChars addr 0x2545f14 size 0x8c virtual false final false
  inline void InternalWriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t n);

  /// @brief Method Write addr 0x2545fa0 size 0x28 virtual true final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> val);

  /// @brief Method Write addr 0x2545fc8 size 0xcc virtual true final false
  inline void Write(::StringW val);

  /// @brief Method WriteLine addr 0x2546094 size 0x48 virtual true final false
  inline void WriteLine(::StringW val);

  // Ctor Parameters [CppParam { name: "", ty: "CStreamWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CStreamWriter(CStreamWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CStreamWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CStreamWriter(CStreamWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CStreamWriter();

public:
  /// @brief Field driver, offset: 0x70, size: 0x8, def value: None
  ::System::TermInfoDriver* ___driver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::CStreamWriter, 0x78>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::CStreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::CStreamWriter*, "System.IO", "CStreamWriter");
