#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequestStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
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
class RequestStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::RequestStream);
// Type: System.Net::RequestStream
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::RequestStream*
class CORDL_TYPE RequestStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field disposed, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field length, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) int32_t length;

  /// @brief Field offset, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) int32_t offset;

  /// @brief Field remaining_body, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_remaining_body, put = __cordl_internal_set_remaining_body)) int64_t remaining_body;

  /// @brief Field stream, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream))::System::IO::Stream* stream;

  /// @brief Method BeginRead, addr 0x300bdb4, size 0x20c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method BeginWrite, addr 0x300c31c, size 0x40, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cback, ::System::Object* state);

  /// @brief Method Close, addr 0x300b9ec, size 0xc, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EndRead, addr 0x300bfc0, size 0x29c, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* ares);

  /// @brief Method EndWrite, addr 0x300c35c, size 0x40, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* async_result);

  /// @brief Method FillFromBuffer, addr 0x300b9fc, size 0x29c, virtual false, abstract: false, final false
  inline int32_t FillFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t off, int32_t count);

  /// @brief Method Flush, addr 0x300b9f8, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::System::Net::RequestStream* New_ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  static inline ::System::Net::RequestStream* New_ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length, int64_t contentlength);

  /// @brief Method Read, addr 0x300bc98, size 0x11c, virtual true, abstract: false, final false
  inline int32_t Read(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x300c25c, size 0x40, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x300c29c, size 0x40, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x300c2dc, size 0x40, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr int32_t const& __cordl_internal_get_length() const;

  constexpr int32_t& __cordl_internal_get_length();

  constexpr int32_t const& __cordl_internal_get_offset() const;

  constexpr int32_t& __cordl_internal_get_offset();

  constexpr int64_t const& __cordl_internal_get_remaining_body() const;

  constexpr int64_t& __cordl_internal_get_remaining_body();

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_stream() const;

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_length(int32_t value);

  constexpr void __cordl_internal_set_offset(int32_t value);

  constexpr void __cordl_internal_set_remaining_body(int64_t value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x300b874, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length);

  /// @brief Method .ctor, addr 0x300b87c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length, int64_t contentlength);

  /// @brief Method get_CanRead, addr 0x300b914, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x300b91c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x300b924, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x300b92c, size 0x40, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x300b96c, size 0x40, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x300b9ac, size 0x40, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestStream(RequestStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestStream(RequestStream const&) = delete;

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
