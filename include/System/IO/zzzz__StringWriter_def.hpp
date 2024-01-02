#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringWriter)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IFormatProvider;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class StringWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StringWriter);
// Type: System.IO::StringWriter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3586))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3624))
// CS Name: ::System.IO::StringWriter*
class CORDL_TYPE StringWriter : public ::System::IO::TextWriter {
public:
  // Declarations
  /// @brief Field _sb, offset 0x30, size 0x8
  __declspec(property(get = __get__sb, put = __set__sb))::System::Text::StringBuilder* _sb;

  /// @brief Field _isOpen, offset 0x38, size 0x1
  __declspec(property(get = __get__isOpen, put = __set__isOpen)) bool _isOpen;

  /// @brief Field m_encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_encoding, put = setStaticF_m_encoding))::System::Text::UnicodeEncoding* m_encoding;

  __declspec(property(get = get_Encoding))::System::Text::Encoding* Encoding;

  constexpr ::System::Text::StringBuilder*& __get__sb();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get__sb() const;

  constexpr void __set__sb(::System::Text::StringBuilder* value);

  constexpr bool& __get__isOpen();

  constexpr bool const& __get__isOpen() const;

  constexpr void __set__isOpen(bool value);

  static inline void setStaticF_m_encoding(::System::Text::UnicodeEncoding* value);

  static inline ::System::Text::UnicodeEncoding* getStaticF_m_encoding();

  static inline ::System::IO::StringWriter* New_ctor();

  /// @brief Method .ctor, addr 0x253be60, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::StringWriter* New_ctor(::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x253bfdc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::IFormatProvider* formatProvider);

  static inline ::System::IO::StringWriter* New_ctor(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x253bef4, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider);

  /// @brief Method Close, addr 0x253c050, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x253c060, size 0x10, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method get_Encoding, addr 0x253c070, size 0xac, virtual true, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method Write, addr 0x253c11c, size 0x28, virtual true, abstract: false, final false
  inline void Write(char16_t value);

  /// @brief Method Write, addr 0x253c144, size 0x188, virtual true, abstract: false, final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write, addr 0x253c2cc, size 0x34, virtual true, abstract: false, final false
  inline void Write(::StringW value);

  /// @brief Method FlushAsync, addr 0x253c300, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync();

  /// @brief Method ToString, addr 0x253c388, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "StringWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringWriter(StringWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringWriter(StringWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringWriter();

public:
  /// @brief Field _sb, offset: 0x30, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____sb;

  /// @brief Field _isOpen, offset: 0x38, size: 0x1, def value: None
  bool ____isOpen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::StringWriter, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::IO::StringWriter, ____sb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StringWriter, ____isOpen) == 0x38, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::StringWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StringWriter*, "System.IO", "StringWriter");
