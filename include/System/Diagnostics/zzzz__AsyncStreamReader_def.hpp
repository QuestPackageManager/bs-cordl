#pragma once
// IWYU pragma private; include "System/Diagnostics/AsyncStreamReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncStreamReader)
namespace System::IO {
class Stream;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics {
class AsyncStreamReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::AsyncStreamReader);
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.AsyncStreamReader
class CORDL_TYPE AsyncStreamReader : public ::System::Object {
public:
  // Declarations
  /// @brief Field asyncReadResult, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncReadResult, put = __cordl_internal_set_asyncReadResult)) ::System::IAsyncResult* asyncReadResult;

  /// @brief Field byteBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_byteBuffer, put = __cordl_internal_set_byteBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer;

  /// @brief Field cancelOperation, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_cancelOperation, put = __cordl_internal_set_cancelOperation)) bool cancelOperation;

  /// @brief Field charBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_charBuffer, put = __cordl_internal_set_charBuffer)) ::ArrayW<char16_t, ::Array<char16_t>*> charBuffer;

  /// @brief Field decoder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_decoder, put = __cordl_internal_set_decoder)) ::System::Text::Decoder* decoder;

  /// @brief Field encoding, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) ::System::Text::Encoding* encoding;

  /// @brief Field eofEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_eofEvent, put = __cordl_internal_set_eofEvent)) ::System::Threading::ManualResetEvent* eofEvent;

  /// @brief Field stream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Field syncObject, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_syncObject, put = __cordl_internal_set_syncObject)) ::System::Object* syncObject;

  /// @brief Method CancelOperation, addr 0x442f9bc, size 0xc, virtual false, abstract: false, final false
  inline void CancelOperation();

  /// @brief Method Close, addr 0x442f63c, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x442f64c, size 0x370, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  constexpr ::System::IAsyncResult* const& __cordl_internal_get_asyncReadResult() const;

  constexpr ::System::IAsyncResult*& __cordl_internal_get_asyncReadResult();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_byteBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_byteBuffer();

  constexpr bool const& __cordl_internal_get_cancelOperation() const;

  constexpr bool& __cordl_internal_get_cancelOperation();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_charBuffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_charBuffer();

  constexpr ::System::Text::Decoder* const& __cordl_internal_get_decoder() const;

  constexpr ::System::Text::Decoder*& __cordl_internal_get_decoder();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding();

  constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_eofEvent() const;

  constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_eofEvent();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr ::System::Object* const& __cordl_internal_get_syncObject() const;

  constexpr ::System::Object*& __cordl_internal_get_syncObject();

  constexpr void __cordl_internal_set_asyncReadResult(::System::IAsyncResult* value);

  constexpr void __cordl_internal_set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_cancelOperation(bool value);

  constexpr void __cordl_internal_set_charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_decoder(::System::Text::Decoder* value);

  constexpr void __cordl_internal_set_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_eofEvent(::System::Threading::ManualResetEvent* value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_syncObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncStreamReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncStreamReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncStreamReader(AsyncStreamReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncStreamReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncStreamReader(AsyncStreamReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9266 };

  /// @brief Field stream, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field encoding, offset: 0x18, size: 0x8, def value: None
  ::System::Text::Encoding* ___encoding;

  /// @brief Field decoder, offset: 0x20, size: 0x8, def value: None
  ::System::Text::Decoder* ___decoder;

  /// @brief Field byteBuffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___byteBuffer;

  /// @brief Field charBuffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___charBuffer;

  /// @brief Field cancelOperation, offset: 0x38, size: 0x1, def value: None
  bool ___cancelOperation;

  /// @brief Field eofEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ___eofEvent;

  /// @brief Field syncObject, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ___syncObject;

  /// @brief Field asyncReadResult, offset: 0x50, size: 0x8, def value: None
  ::System::IAsyncResult* ___asyncReadResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::AsyncStreamReader, ___stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::AsyncStreamReader, ___encoding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::AsyncStreamReader, ___decoder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::AsyncStreamReader, ___byteBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::AsyncStreamReader, ___charBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::AsyncStreamReader, ___cancelOperation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::AsyncStreamReader, ___eofEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::AsyncStreamReader, ___syncObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::AsyncStreamReader, ___asyncReadResult) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::AsyncStreamReader, 0x58>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::AsyncStreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::AsyncStreamReader*, "System.Diagnostics", "AsyncStreamReader");
