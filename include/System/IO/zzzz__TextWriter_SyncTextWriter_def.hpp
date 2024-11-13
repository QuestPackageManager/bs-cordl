#pragma once
// IWYU pragma private; include "System/IO/TextWriter_SyncTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriter_SyncTextWriter)
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO {
class __TextWriter__SyncTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__TextWriter__SyncTextWriter);
// Type: ::SyncTextWriter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::TextWriter::SyncTextWriter*
class CORDL_TYPE __TextWriter__SyncTextWriter : public ::System::IO::TextWriter {
public:
  // Declarations
  __declspec(property(get = get_Encoding)) ::System::Text::Encoding* Encoding;

  __declspec(property(get = get_FormatProvider)) ::System::IFormatProvider* FormatProvider;

  __declspec(property(get = get_NewLine, put = set_NewLine)) ::StringW NewLine;

  /// @brief Field _out, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__out, put = __cordl_internal_set__out)) ::System::IO::TextWriter* _out;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x3ce3d10, size 0x20, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x3ce3d30, size 0xb4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush, addr 0x3ce3de4, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x3ce4170, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync();

  static inline ::System::IO::__TextWriter__SyncTextWriter* New_ctor(::System::IO::TextWriter* t);

  /// @brief Method Write, addr 0x3ce3e28, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  /// @brief Method Write, addr 0x3ce3e4c, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x3ce3e94, size 0x24, virtual true, abstract: false, final false
  inline void Write(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method Write, addr 0x3ce3e70, size 0x24, virtual true, abstract: false, final false
  inline void Write(::StringW value);

  /// @brief Method Write, addr 0x3ce3e04, size 0x24, virtual true, abstract: false, final false
  inline void Write(char16_t value);

  /// @brief Method WriteAsync, addr 0x3ce40a8, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteAsync, addr 0x3ce3ff8, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::StringW value);

  /// @brief Method WriteAsync, addr 0x3ce3f48, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(char16_t value);

  /// @brief Method WriteLine, addr 0x3ce3eb8, size 0x24, virtual true, abstract: false, final false
  inline void WriteLine();

  /// @brief Method WriteLine, addr 0x3ce3edc, size 0x24, virtual true, abstract: false, final false
  inline void WriteLine(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteLine, addr 0x3ce3f24, size 0x24, virtual true, abstract: false, final false
  inline void WriteLine(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method WriteLine, addr 0x3ce3f00, size 0x24, virtual true, abstract: false, final false
  inline void WriteLine(::StringW value);

  constexpr ::System::IO::TextWriter*& __cordl_internal_get__out();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& __cordl_internal_get__out() const;

  constexpr void __cordl_internal_set__out(::System::IO::TextWriter* value);

  /// @brief Method .ctor, addr 0x3ce3ad0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* t);

  /// @brief Method get_Encoding, addr 0x3ce3c84, size 0x24, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method get_FormatProvider, addr 0x3ce3ca8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IFormatProvider* get_FormatProvider();

  /// @brief Method get_NewLine, addr 0x3ce3cc8, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_NewLine();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_NewLine, addr 0x3ce3cec, size 0x24, virtual true, abstract: false, final false
  inline void set_NewLine(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextWriter__SyncTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TextWriter__SyncTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextWriter__SyncTextWriter(__TextWriter__SyncTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextWriter__SyncTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextWriter__SyncTextWriter(__TextWriter__SyncTextWriter const&) = delete;

  /// @brief Field _out, offset: 0x30, size: 0x8, def value: None
  ::System::IO::TextWriter* ____out;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3590 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__TextWriter__SyncTextWriter, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::IO::__TextWriter__SyncTextWriter, ____out) == 0x30, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::__TextWriter__SyncTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__TextWriter__SyncTextWriter*, "System.IO", "TextWriter/SyncTextWriter");
