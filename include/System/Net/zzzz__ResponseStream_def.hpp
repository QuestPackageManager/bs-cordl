#pragma once
// IWYU pragma private; include "System/Net/ResponseStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResponseStream)
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class HttpListenerResponse;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class ResponseStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ResponseStream);
// Dependencies System.IO.Stream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ResponseStream
class CORDL_TYPE ResponseStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field crlf, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_crlf, put = setStaticF_crlf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> crlf;

  /// @brief Field disposed, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field ignore_errors, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_ignore_errors, put = __cordl_internal_set_ignore_errors)) bool ignore_errors;

  /// @brief Field response, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_response, put = __cordl_internal_set_response)) ::System::Net::HttpListenerResponse* response;

  /// @brief Field stream, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Field trailer_sent, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_trailer_sent, put = __cordl_internal_set_trailer_sent)) bool trailer_sent;

  /// @brief Method BeginRead, addr 0x43d6ab0, size 0x38, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method BeginWrite, addr 0x43d6610, size 0x23c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method Close, addr 0x43d5d94, size 0x274, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EndRead, addr 0x43d6ae8, size 0x38, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* ares);

  /// @brief Method EndWrite, addr 0x43d684c, size 0x22c, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* ares);

  /// @brief Method Flush, addr 0x43d62fc, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetChunkSizeBytes, addr 0x43d6150, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetChunkSizeBytes(int32_t size, bool final);

  /// @brief Method GetHeaders, addr 0x43d6008, size 0x148, virtual false, abstract: false, final false
  inline ::System::IO::MemoryStream* GetHeaders(bool closing);

  /// @brief Method InternalWrite, addr 0x43d6240, size 0xbc, virtual false, abstract: false, final false
  inline void InternalWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  static inline ::System::Net::ResponseStream* New_ctor(::System::IO::Stream* stream, ::System::Net::HttpListenerResponse* response, bool ignore_errors);

  /// @brief Method Read, addr 0x43d6a78, size 0x38, virtual true, abstract: false, final false
  inline int32_t Read(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x43d6b20, size 0x38, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x43d6b58, size 0x38, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x43d6300, size 0x310, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr bool const& __cordl_internal_get_ignore_errors() const;

  constexpr bool& __cordl_internal_get_ignore_errors();

  constexpr ::System::Net::HttpListenerResponse* const& __cordl_internal_get_response() const;

  constexpr ::System::Net::HttpListenerResponse*& __cordl_internal_get_response();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr bool const& __cordl_internal_get_trailer_sent() const;

  constexpr bool& __cordl_internal_get_trailer_sent();

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_ignore_errors(bool value);

  constexpr void __cordl_internal_set_response(::System::Net::HttpListenerResponse* value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_trailer_sent(bool value);

  /// @brief Method .ctor, addr 0x43d5c4c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Net::HttpListenerResponse* response, bool ignore_errors);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_crlf();

  /// @brief Method get_CanRead, addr 0x43d5cd4, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x43d5cdc, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x43d5ce4, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x43d5cec, size 0x38, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x43d5d24, size 0x38, virtual true, abstract: false, final false
  inline int64_t get_Position();

  static inline void setStaticF_crlf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Position, addr 0x43d5d5c, size 0x38, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseStream(ResponseStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseStream(ResponseStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9718 };

  /// @brief Field response, offset: 0x28, size: 0x8, def value: None
  ::System::Net::HttpListenerResponse* ___response;

  /// @brief Field ignore_errors, offset: 0x30, size: 0x1, def value: None
  bool ___ignore_errors;

  /// @brief Field disposed, offset: 0x31, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field trailer_sent, offset: 0x32, size: 0x1, def value: None
  bool ___trailer_sent;

  /// @brief Field stream, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ResponseStream, ___response) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseStream, ___ignore_errors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseStream, ___disposed) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseStream, ___trailer_sent) == 0x32, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseStream, ___stream) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ResponseStream, 0x40>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ResponseStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ResponseStream*, "System.Net", "ResponseStream");
