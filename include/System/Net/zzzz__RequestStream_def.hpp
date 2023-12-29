#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequestStream)
namespace System {
class IAsyncResult;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class RequestStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::RequestStream);
// Type: System.Net::RequestStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3607))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8035))
// CS Name: ::System.Net::RequestStream*
class CORDL_TYPE RequestStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field buffer, offset 0x28, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset 0x30, size 0x4
  __declspec(property(get = __get_offset, put = __set_offset)) int32_t offset;

  /// @brief Field length, offset 0x34, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) int32_t length;

  /// @brief Field remaining_body, offset 0x38, size 0x8
  __declspec(property(get = __get_remaining_body, put = __set_remaining_body)) int64_t remaining_body;

  /// @brief Field disposed, offset 0x40, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field stream, offset 0x48, size 0x8
  __declspec(property(get = __get_stream, put = __set_stream))::System::IO::Stream* stream;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_offset();

  constexpr int32_t const& __get_offset() const;

  constexpr void __set_offset(int32_t value);

  constexpr int32_t& __get_length();

  constexpr int32_t const& __get_length() const;

  constexpr void __set_length(int32_t value);

  constexpr int64_t& __get_remaining_body();

  constexpr int64_t const& __get_remaining_body() const;

  constexpr void __set_remaining_body(int64_t value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::IO::Stream*& __get_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_stream() const;

  constexpr void __set_stream(::System::IO::Stream* value);

  static inline ::System::Net::RequestStream* New_ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method .ctor addr 0x2858ea4 size 0x8 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  static inline ::System::Net::RequestStream* New_ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length, int64_t contentlength);

  /// @brief Method .ctor addr 0x2858eac size 0x98 virtual false final false
  inline void _ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length, int64_t contentlength);

  /// @brief Method get_CanRead addr 0x2858f44 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x2858f4c size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x2858f54 size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_Length addr 0x2858f5c size 0x40 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x2858f9c size 0x40 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x2858fdc size 0x40 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method Close addr 0x285901c size 0xc virtual true final false
  inline void Close();

  /// @brief Method Flush addr 0x2859028 size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method FillFromBuffer addr 0x285902c size 0x29c virtual false final false
  inline int32_t FillFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t off, int32_t count);

  /// @brief Method Read addr 0x28592c8 size 0x11c virtual true final false
  inline int32_t Read(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer, int32_t offset, int32_t count);

  /// @brief Method BeginRead addr 0x28593e4 size 0x20c virtual true final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method EndRead addr 0x28595f0 size 0x29c virtual true final false
  inline int32_t EndRead(::System::IAsyncResult* ares);

  /// @brief Method Seek addr 0x285988c size 0x40 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x28598cc size 0x40 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method Write addr 0x285990c size 0x40 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method BeginWrite addr 0x285994c size 0x40 virtual true final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method EndWrite addr 0x285998c size 0x40 virtual true final false
  inline void EndWrite(::System::IAsyncResult* async_result);

  // Ctor Parameters [CppParam { name: "", ty: "RequestStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestStream(RequestStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestStream(RequestStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestStream();

public:
  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field offset, offset: 0x30, size: 0x4, def value: None
  int32_t ___offset;

  /// @brief Field length, offset: 0x34, size: 0x4, def value: None
  int32_t ___length;

  /// @brief Field remaining_body, offset: 0x38, size: 0x8, def value: None
  int64_t ___remaining_body;

  /// @brief Field disposed, offset: 0x40, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field stream, offset: 0x48, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::RequestStream, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Net::RequestStream, ___buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::RequestStream, ___offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::RequestStream, ___length) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Net::RequestStream, ___remaining_body) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::RequestStream, ___disposed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::RequestStream, ___stream) == 0x48, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::RequestStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::RequestStream*, "System.Net", "RequestStream");
