#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriter_SyncTextWriter)
namespace System {
class IDisposable;
}
namespace System {
class IFormatProvider;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class __TextWriter__SyncTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__TextWriter__SyncTextWriter);
// Type: ::SyncTextWriter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3586))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3584))
// CS Name: ::TextWriter::SyncTextWriter*
class CORDL_TYPE __TextWriter__SyncTextWriter : public ::System::IO::TextWriter {
public:
  // Declarations
  /// @brief Field _out, offset 0x30, size 0x8
  __declspec(property(get = __get__out, put = __set__out))::System::IO::TextWriter* _out;

  __declspec(property(get = get_Encoding))::System::Text::Encoding* Encoding;

  __declspec(property(get = get_FormatProvider))::System::IFormatProvider* FormatProvider;

  __declspec(property(get = get_NewLine))::StringW NewLine;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::IO::TextWriter*& __get__out();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& __get__out() const;

  constexpr void __set__out(::System::IO::TextWriter* value);

  static inline ::System::IO::__TextWriter__SyncTextWriter* New_ctor(::System::IO::TextWriter* t);

  /// @brief Method .ctor, addr 0x25078bc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* t);

  /// @brief Method get_Encoding, addr 0x2507a74, size 0x24, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method get_FormatProvider, addr 0x2507a98, size 0x20, virtual true, abstract: false, final false
  inline ::System::IFormatProvider* get_FormatProvider();

  /// @brief Method get_NewLine, addr 0x2507ab8, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_NewLine();

  /// @brief Method Close, addr 0x2507adc, size 0x20, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x2507afc, size 0xb4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x2507bb0, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method Write, addr 0x2507bd0, size 0x24, virtual true, abstract: false, final false
  inline void Write(char16_t value);

  /// @brief Method Write, addr 0x2507bf4, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  /// @brief Method Write, addr 0x2507c18, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x2507c3c, size 0x24, virtual true, abstract: false, final false
  inline void Write(::StringW value);

  /// @brief Method Write, addr 0x2507c60, size 0x24, virtual true, abstract: false, final false
  inline void Write(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method WriteLine, addr 0x2507c84, size 0x24, virtual true, abstract: false, final false
  inline void WriteLine();

  /// @brief Method WriteLine, addr 0x2507ca8, size 0x24, virtual true, abstract: false, final false
  inline void WriteLine(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteLine, addr 0x2507ccc, size 0x24, virtual true, abstract: false, final false
  inline void WriteLine(::StringW value);

  /// @brief Method WriteLine, addr 0x2507cf0, size 0x24, virtual true, abstract: false, final false
  inline void WriteLine(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method FlushAsync, addr 0x2507d14, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync();

  // Ctor Parameters [CppParam { name: "", ty: "__TextWriter__SyncTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextWriter__SyncTextWriter(__TextWriter__SyncTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextWriter__SyncTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextWriter__SyncTextWriter(__TextWriter__SyncTextWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextWriter__SyncTextWriter();

public:
  /// @brief Field _out, offset: 0x30, size: 0x8, def value: None
  ::System::IO::TextWriter* ____out;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__TextWriter__SyncTextWriter, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::IO::__TextWriter__SyncTextWriter, ____out) == 0x30, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::__TextWriter__SyncTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__TextWriter__SyncTextWriter*, "System.IO", "TextWriter/SyncTextWriter");
