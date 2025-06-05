#pragma once
// IWYU pragma private; include "System/Net/WebConnectionStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnectionStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class WebConnectionStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebConnectionStream);
// Dependencies System.IO.Stream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebConnectionStream
class CORDL_TYPE WebConnectionStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_Connection)) ::System::Net::WebConnection* Connection;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Operation)) ::System::Net::WebOperation* Operation;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_Request)) ::System::Net::HttpWebRequest* Request;

  __declspec(property(get = get_ServicePoint)) ::System::Net::ServicePoint* ServicePoint;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Field <Connection>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Connection_k__BackingField, put = __cordl_internal_set__Connection_k__BackingField)) ::System::Net::WebConnection* _Connection_k__BackingField;

  /// @brief Field <Operation>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Operation_k__BackingField, put = __cordl_internal_set__Operation_k__BackingField)) ::System::Net::WebOperation* _Operation_k__BackingField;

  /// @brief Field <Request>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Request_k__BackingField, put = __cordl_internal_set__Request_k__BackingField)) ::System::Net::HttpWebRequest* _Request_k__BackingField;

  /// @brief Field closed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_closed, put = __cordl_internal_set_closed)) bool closed;

  /// @brief Field disposed, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field locker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_locker, put = __cordl_internal_set_locker)) ::System::Object* locker;

  /// @brief Field read_timeout, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_read_timeout, put = __cordl_internal_set_read_timeout)) int32_t read_timeout;

  /// @brief Field write_timeout, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_write_timeout, put = __cordl_internal_set_write_timeout)) int32_t write_timeout;

  /// @brief Method BeginRead, addr 0x43dd310, size 0x1c0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cb, ::System::Object* state);

  /// @brief Method BeginWrite, addr 0x43dd5f0, size 0x1c0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cb, ::System::Object* state);

  /// @brief Method Close, addr 0x43ddb80, size 0x14, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Close_internal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Close_internal(::ByRef<bool> disposed);

  /// @brief Method EndRead, addr 0x43dd4d0, size 0x120, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* r);

  /// @brief Method EndWrite, addr 0x43dd7b0, size 0xf4, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* r);

  /// @brief Method Flush, addr 0x43dda8c, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x43dda90, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetException, addr 0x43dce64, size 0x168, virtual false, abstract: false, final false
  inline ::System::Exception* GetException(::System::Exception* e);

  /// @brief Method InternalClose, addr 0x43ddb74, size 0xc, virtual false, abstract: false, final false
  inline void InternalClose();

  static inline ::System::Net::WebConnectionStream* New_ctor(::System::Net::WebConnection* cnc, ::System::Net::WebOperation* operation);

  /// @brief Method Read, addr 0x43dd01c, size 0x294, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x43ddb94, size 0x4c, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t a, ::System::IO::SeekOrigin b);

  /// @brief Method SetLength, addr 0x43ddbe0, size 0x4c, virtual true, abstract: false, final false
  inline void SetLength(int64_t a);

  /// @brief Method TryReadFromBufferedContent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryReadFromBufferedContent(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::ByRef<int32_t> result);

  /// @brief Method Write, addr 0x43dd8a4, size 0x1e8, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr ::System::Net::WebConnection* const& __cordl_internal_get__Connection_k__BackingField() const;

  constexpr ::System::Net::WebConnection*& __cordl_internal_get__Connection_k__BackingField();

  constexpr ::System::Net::WebOperation* const& __cordl_internal_get__Operation_k__BackingField() const;

  constexpr ::System::Net::WebOperation*& __cordl_internal_get__Operation_k__BackingField();

  constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get__Request_k__BackingField() const;

  constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get__Request_k__BackingField();

  constexpr bool const& __cordl_internal_get_closed() const;

  constexpr bool& __cordl_internal_get_closed();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::System::Object* const& __cordl_internal_get_locker() const;

  constexpr ::System::Object*& __cordl_internal_get_locker();

  constexpr int32_t const& __cordl_internal_get_read_timeout() const;

  constexpr int32_t& __cordl_internal_get_read_timeout();

  constexpr int32_t const& __cordl_internal_get_write_timeout() const;

  constexpr int32_t& __cordl_internal_get_write_timeout();

  constexpr void __cordl_internal_set__Connection_k__BackingField(::System::Net::WebConnection* value);

  constexpr void __cordl_internal_set__Operation_k__BackingField(::System::Net::WebOperation* value);

  constexpr void __cordl_internal_set__Request_k__BackingField(::System::Net::HttpWebRequest* value);

  constexpr void __cordl_internal_set_closed(bool value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_locker(::System::Object* value);

  constexpr void __cordl_internal_set_read_timeout(int32_t value);

  constexpr void __cordl_internal_set_write_timeout(int32_t value);

  /// @brief Method .ctor, addr 0x43dcc98, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebConnection* cnc, ::System::Net::WebOperation* operation);

  /// @brief Method get_CanSeek, addr 0x43ddc2c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanTimeout, addr 0x43dcd8c, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_Connection, addr 0x43dcd60, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebConnection* get_Connection();

  /// @brief Method get_Length, addr 0x43ddc34, size 0x4c, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Operation, addr 0x43dcd68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::WebOperation* get_Operation();

  /// @brief Method get_Position, addr 0x43ddc80, size 0x4c, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_ReadTimeout, addr 0x43dcd94, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method get_Request, addr 0x43dcd58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::HttpWebRequest* get_Request();

  /// @brief Method get_ServicePoint, addr 0x43dcd70, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Net::ServicePoint* get_ServicePoint();

  /// @brief Method get_WriteTimeout, addr 0x43dcdfc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_Position, addr 0x43ddccc, size 0x4c, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method set_ReadTimeout, addr 0x43dcd9c, size 0x60, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method set_WriteTimeout, addr 0x43dce04, size 0x60, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnectionStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebConnectionStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebConnectionStream(WebConnectionStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebConnectionStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebConnectionStream(WebConnectionStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9741 };

  /// @brief Field closed, offset: 0x28, size: 0x1, def value: None
  bool ___closed;

  /// @brief Field disposed, offset: 0x29, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field locker, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___locker;

  /// @brief Field read_timeout, offset: 0x38, size: 0x4, def value: None
  int32_t ___read_timeout;

  /// @brief Field write_timeout, offset: 0x3c, size: 0x4, def value: None
  int32_t ___write_timeout;

  /// @brief Field <Request>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Net::HttpWebRequest* ____Request_k__BackingField;

  /// @brief Field <Connection>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Net::WebConnection* ____Connection_k__BackingField;

  /// @brief Field <Operation>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Net::WebOperation* ____Operation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnectionStream, ___closed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionStream, ___disposed) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionStream, ___locker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionStream, ___read_timeout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionStream, ___write_timeout) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionStream, ____Request_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionStream, ____Connection_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionStream, ____Operation_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebConnectionStream, 0x58>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebConnectionStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionStream*, "System.Net", "WebConnectionStream");
