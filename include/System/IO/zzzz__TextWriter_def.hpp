#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriter)
namespace System {
class IDisposable;
}
namespace System::IO {
class __TextWriter__SyncTextWriter;
}
namespace System::IO {
class __TextWriter__NullTextWriter;
}
namespace System::Text {
class Encoding;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO {
class TextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::TextWriter);
// Type: System.IO::TextWriter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3575))
// CS Name: ::System.IO::TextWriter*
class CORDL_TYPE TextWriter : public ::System::MarshalByRefObject {
public:
  // Declarations
  using SyncTextWriter = ::System::IO::__TextWriter__SyncTextWriter;

  using NullTextWriter = ::System::IO::__TextWriter__NullTextWriter;

  /// @brief Field CoreNewLine, offset 0x18, size 0x8
  __declspec(property(get = __get_CoreNewLine, put = __set_CoreNewLine))::ArrayW<char16_t, ::Array<char16_t>*> CoreNewLine;

  /// @brief Field CoreNewLineStr, offset 0x20, size 0x8
  __declspec(property(get = __get_CoreNewLineStr, put = __set_CoreNewLineStr))::StringW CoreNewLineStr;

  /// @brief Field _internalFormatProvider, offset 0x28, size 0x8
  __declspec(property(get = __get__internalFormatProvider, put = __set__internalFormatProvider))::System::IFormatProvider* _internalFormatProvider;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::IO::TextWriter* Null;

  /// @brief Field s_coreNewLine, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_coreNewLine, put = setStaticF_s_coreNewLine))::ArrayW<char16_t, ::Array<char16_t>*> s_coreNewLine;

  __declspec(property(get = get_FormatProvider))::System::IFormatProvider* FormatProvider;

  __declspec(property(get = get_Encoding))::System::Text::Encoding* Encoding;

  __declspec(property(get = get_NewLine))::StringW NewLine;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_CoreNewLine();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_CoreNewLine() const;

  constexpr void __set_CoreNewLine(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::StringW& __get_CoreNewLineStr();

  constexpr ::StringW const& __get_CoreNewLineStr() const;

  constexpr void __set_CoreNewLineStr(::StringW value);

  constexpr ::System::IFormatProvider*& __get__internalFormatProvider();

  constexpr ::cordl_internals::to_const_pointer<::System::IFormatProvider*> const& __get__internalFormatProvider() const;

  constexpr void __set__internalFormatProvider(::System::IFormatProvider* value);

  static inline void setStaticF_Null(::System::IO::TextWriter* value);

  static inline ::System::IO::TextWriter* getStaticF_Null();

  static inline void setStaticF_s_coreNewLine(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_coreNewLine();

  static inline ::System::IO::TextWriter* New_ctor();

  /// @brief Method .ctor addr 0x23a962c size 0x7c virtual false final false
  inline void _ctor();

  static inline ::System::IO::TextWriter* New_ctor(::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor addr 0x23a8e90 size 0x88 virtual false final false
  inline void _ctor(::System::IFormatProvider* formatProvider);

  /// @brief Method get_FormatProvider addr 0x23ab168 size 0x68 virtual true final false
  inline ::System::IFormatProvider* get_FormatProvider();

  /// @brief Method Close addr 0x23ab1d0 size 0x6c virtual true final false
  inline void Close();

  /// @brief Method Dispose addr 0x23ab23c size 0x4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Dispose addr 0x23ab240 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Flush addr 0x23ab2ac size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method get_Encoding addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method get_NewLine addr 0x23ab2b0 size 0x8 virtual true final false
  inline ::StringW get_NewLine();

  /// @brief Method Write addr 0x23ab2b8 size 0x4 virtual true final false
  inline void Write(char16_t value);

  /// @brief Method Write addr 0x23ab2bc size 0x20 virtual true final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer);

  /// @brief Method Write addr 0x23ab2dc size 0x1b4 virtual true final false
  inline void Write(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method Write addr 0x23ab490 size 0x38 virtual true final false
  inline void Write(::StringW value);

  /// @brief Method Write addr 0x23ab4c8 size 0x6c virtual true final false
  inline void Write(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method WriteLine addr 0x23ab534 size 0x14 virtual true final false
  inline void WriteLine();

  /// @brief Method WriteLine addr 0x23ab548 size 0x30 virtual true final false
  inline void WriteLine(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteLine addr 0x23ab578 size 0x3c virtual true final false
  inline void WriteLine(::StringW value);

  /// @brief Method WriteLine addr 0x23ab5b4 size 0x6c virtual true final false
  inline void WriteLine(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method Synchronized addr 0x23ab620 size 0xc0 virtual false final false
  static inline ::System::IO::TextWriter* Synchronized(::System::IO::TextWriter* writer);

  // Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextWriter(TextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextWriter(TextWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextWriter();

public:
  /// @brief Field CoreNewLine, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___CoreNewLine;

  /// @brief Field CoreNewLineStr, offset: 0x20, size: 0x8, def value: None
  ::StringW ___CoreNewLineStr;

  /// @brief Field _internalFormatProvider, offset: 0x28, size: 0x8, def value: None
  ::System::IFormatProvider* ____internalFormatProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::TextWriter, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::IO::TextWriter, ___CoreNewLine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::TextWriter, ___CoreNewLineStr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::TextWriter, ____internalFormatProvider) == 0x28, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::TextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextWriter*, "System.IO", "TextWriter");
