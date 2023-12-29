#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResponseStream)
namespace System {
class AsyncCallback;
}
namespace System::Net {
class HttpListenerResponse;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class MemoryStream;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace System::Net {
class ResponseStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ResponseStream);
// Type: System.Net::ResponseStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3607))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8036))
// CS Name: ::System.Net::ResponseStream*
class CORDL_TYPE ResponseStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field response, offset 0x28, size 0x8
  __declspec(property(get = __get_response, put = __set_response))::System::Net::HttpListenerResponse* response;

  /// @brief Field ignore_errors, offset 0x30, size 0x1
  __declspec(property(get = __get_ignore_errors, put = __set_ignore_errors)) bool ignore_errors;

  /// @brief Field disposed, offset 0x31, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field trailer_sent, offset 0x32, size 0x1
  __declspec(property(get = __get_trailer_sent, put = __set_trailer_sent)) bool trailer_sent;

  /// @brief Field stream, offset 0x38, size 0x8
  __declspec(property(get = __get_stream, put = __set_stream))::System::IO::Stream* stream;

  /// @brief Field crlf, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_crlf, put = setStaticF_crlf))::ArrayW<uint8_t, ::Array<uint8_t>*> crlf;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::Net::HttpListenerResponse*& __get_response();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerResponse*> const& __get_response() const;

  constexpr void __set_response(::System::Net::HttpListenerResponse* value);

  constexpr bool& __get_ignore_errors();

  constexpr bool const& __get_ignore_errors() const;

  constexpr void __set_ignore_errors(bool value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr bool& __get_trailer_sent();

  constexpr bool const& __get_trailer_sent() const;

  constexpr void __set_trailer_sent(bool value);

  constexpr ::System::IO::Stream*& __get_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_stream() const;

  constexpr void __set_stream(::System::IO::Stream* value);

  static inline void setStaticF_crlf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_crlf();

  static inline ::System::Net::ResponseStream* New_ctor(::System::IO::Stream* stream, ::System::Net::HttpListenerResponse* response, bool ignore_errors);

  /// @brief Method .ctor addr 0x28599cc size 0x84 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Net::HttpListenerResponse* response, bool ignore_errors);

  /// @brief Method get_CanRead addr 0x2859a50 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x2859a58 size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x2859a60 size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_Length addr 0x2859a68 size 0x40 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x2859aa8 size 0x40 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x2859ae8 size 0x40 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method Close addr 0x2859b28 size 0x260 virtual true final false
  inline void Close();

  /// @brief Method GetHeaders addr 0x2859d88 size 0x15c virtual false final false
  inline ::System::IO::MemoryStream* GetHeaders(bool closing);

  /// @brief Method Flush addr 0x285a090 size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method GetChunkSizeBytes addr 0x2859ee4 size 0xf0 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetChunkSizeBytes(int32_t size, bool final);

  /// @brief Method InternalWrite addr 0x2859fd4 size 0xbc virtual false final false
  inline void InternalWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write addr 0x285a094 size 0x300 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method BeginWrite addr 0x285a394 size 0x23c virtual true final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method EndWrite addr 0x285a5d0 size 0x22c virtual true final false
  inline void EndWrite(::System::IAsyncResult* ares);

  /// @brief Method Read addr 0x285a7fc size 0x40 virtual true final false
  inline int32_t Read(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer, int32_t offset, int32_t count);

  /// @brief Method BeginRead addr 0x285a83c size 0x40 virtual true final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method EndRead addr 0x285a87c size 0x40 virtual true final false
  inline int32_t EndRead(::System::IAsyncResult* ares);

  /// @brief Method Seek addr 0x285a8bc size 0x40 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x285a8fc size 0x40 virtual true final false
  inline void SetLength(int64_t value);

  // Ctor Parameters [CppParam { name: "", ty: "ResponseStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseStream(ResponseStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseStream(ResponseStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseStream();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::ResponseStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::ResponseStream, ___response) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseStream, ___ignore_errors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseStream, ___disposed) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseStream, ___trailer_sent) == 0x32, "Offset mismatch!");

static_assert(offsetof(::System::Net::ResponseStream, ___stream) == 0x38, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ResponseStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ResponseStream*, "System.Net", "ResponseStream");
