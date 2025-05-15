#pragma once
// IWYU pragma private; include "System/IO/StringWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringWriter)
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System::IO {
class StringWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StringWriter);
// Dependencies System.IO.TextWriter
namespace System::IO {
// Is value type: false
// CS Name: System.IO.StringWriter
class CORDL_TYPE StringWriter : public ::System::IO::TextWriter {
public:
  // Declarations
  __declspec(property(get = get_Encoding)) ::System::Text::Encoding* Encoding;

  /// @brief Field _isOpen, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__isOpen, put = __cordl_internal_set__isOpen)) bool _isOpen;

  /// @brief Field _sb, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sb, put = __cordl_internal_set__sb)) ::System::Text::StringBuilder* _sb;

  /// @brief Field m_encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_encoding, put = setStaticF_m_encoding)) ::System::Text::UnicodeEncoding* m_encoding;

  /// @brief Method Close, addr 0x3d7a750, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x3d7a760, size 0x10, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FlushAsync, addr 0x3d7ac0c, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync();

  static inline ::System::IO::StringWriter* New_ctor();

  static inline ::System::IO::StringWriter* New_ctor(::System::IFormatProvider* formatProvider);

  static inline ::System::IO::StringWriter* New_ctor(::System::Text::StringBuilder* sb);

  static inline ::System::IO::StringWriter* New_ctor(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider);

  /// @brief Method ToString, addr 0x3d7ac94, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Write, addr 0x3d7a83c, size 0x174, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x3d7a9b0, size 0x34, virtual true, abstract: false, final false
  inline void Write(::StringW value);

  /// @brief Method Write, addr 0x3d7a814, size 0x28, virtual true, abstract: false, final false
  inline void Write(char16_t value);

  /// @brief Method WriteAsync, addr 0x3d7ab44, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteAsync, addr 0x3d7aa94, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(::StringW value);

  /// @brief Method WriteAsync, addr 0x3d7a9e4, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteAsync(char16_t value);

  constexpr bool const& __cordl_internal_get__isOpen() const;

  constexpr bool& __cordl_internal_get__isOpen();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__sb() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__sb();

  constexpr void __cordl_internal_set__isOpen(bool value);

  constexpr void __cordl_internal_set__sb(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x3d7a4fc, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d7a674, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x3d7a6e0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::StringBuilder* sb);

  /// @brief Method .ctor, addr 0x3d7a590, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider);

  static inline ::System::Text::UnicodeEncoding* getStaticF_m_encoding();

  /// @brief Method get_Encoding, addr 0x3d7a770, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

  static inline void setStaticF_m_encoding(::System::Text::UnicodeEncoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringWriter(StringWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringWriter(StringWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3630 };

  /// @brief Field _sb, offset: 0x30, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____sb;

  /// @brief Field _isOpen, offset: 0x38, size: 0x1, def value: None
  bool ____isOpen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::StringWriter, ____sb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StringWriter, ____isOpen) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::StringWriter, 0x40>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::StringWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StringWriter*, "System.IO", "StringWriter");
