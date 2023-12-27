#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnectionStream)
namespace System {
class Exception;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class WebOperation;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Net {
class WebConnection;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class ServicePoint;
}
// Forward declare root types
namespace System::Net {
class WebConnectionStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebConnectionStream);
// Type: System.Net::WebConnectionStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9220))
// CS Name: ::System.Net::WebConnectionStream*
class CORDL_TYPE WebConnectionStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field closed, offset 0x28, size 0x1
  __declspec(property(get = __get_closed, put = __set_closed)) bool closed;

  /// @brief Field disposed, offset 0x29, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field locker, offset 0x30, size 0x8
  __declspec(property(get = __get_locker, put = __set_locker))::System::Object* locker;

  /// @brief Field read_timeout, offset 0x38, size 0x4
  __declspec(property(get = __get_read_timeout, put = __set_read_timeout)) int32_t read_timeout;

  /// @brief Field write_timeout, offset 0x3c, size 0x4
  __declspec(property(get = __get_write_timeout, put = __set_write_timeout)) int32_t write_timeout;

  /// @brief Field <Request>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__Request_k__BackingField, put = __set__Request_k__BackingField))::System::Net::HttpWebRequest* _Request_k__BackingField;

  /// @brief Field <Connection>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__Connection_k__BackingField, put = __set__Connection_k__BackingField))::System::Net::WebConnection* _Connection_k__BackingField;

  /// @brief Field <Operation>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__Operation_k__BackingField, put = __set__Operation_k__BackingField))::System::Net::WebOperation* _Operation_k__BackingField;

  __declspec(property(get = get_Request))::System::Net::HttpWebRequest* Request;

  __declspec(property(get = get_Connection))::System::Net::WebConnection* Connection;

  __declspec(property(get = get_Operation))::System::Net::WebOperation* Operation;

  __declspec(property(get = get_ServicePoint))::System::Net::ServicePoint* ServicePoint;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr bool& __get_closed();

  constexpr bool const& __get_closed() const;

  constexpr void __set_closed(bool value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::Object*& __get_locker();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_locker() const;

  constexpr void __set_locker(::System::Object* value);

  constexpr int32_t& __get_read_timeout();

  constexpr int32_t const& __get_read_timeout() const;

  constexpr void __set_read_timeout(int32_t value);

  constexpr int32_t& __get_write_timeout();

  constexpr int32_t const& __get_write_timeout() const;

  constexpr void __set_write_timeout(int32_t value);

  constexpr ::System::Net::HttpWebRequest*& __get__Request_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> const& __get__Request_k__BackingField() const;

  constexpr void __set__Request_k__BackingField(::System::Net::HttpWebRequest* value);

  constexpr ::System::Net::WebConnection*& __get__Connection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebConnection*> const& __get__Connection_k__BackingField() const;

  constexpr void __set__Connection_k__BackingField(::System::Net::WebConnection* value);

  constexpr ::System::Net::WebOperation*& __get__Operation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebOperation*> const& __get__Operation_k__BackingField() const;

  constexpr void __set__Operation_k__BackingField(::System::Net::WebOperation* value);

  static inline ::System::Net::WebConnectionStream* New_ctor(::System::Net::WebConnection* cnc, ::System::Net::WebOperation* operation);

  /// @brief Method .ctor addr 0x29df6a8 size 0xbc virtual false final false
  inline void _ctor(::System::Net::WebConnection* cnc, ::System::Net::WebOperation* operation);

  /// @brief Method get_Request addr 0x29df764 size 0x8 virtual false final false
  inline ::System::Net::HttpWebRequest* get_Request();

  /// @brief Method get_Connection addr 0x29df76c size 0x8 virtual false final false
  inline ::System::Net::WebConnection* get_Connection();

  /// @brief Method get_Operation addr 0x29df774 size 0x8 virtual false final false
  inline ::System::Net::WebOperation* get_Operation();

  /// @brief Method get_ServicePoint addr 0x29df77c size 0x1c virtual false final false
  inline ::System::Net::ServicePoint* get_ServicePoint();

  /// @brief Method get_CanTimeout addr 0x29df798 size 0x8 virtual true final false
  inline bool get_CanTimeout();

  /// @brief Method get_ReadTimeout addr 0x29df7a0 size 0x8 virtual true final false
  inline int32_t get_ReadTimeout();

  /// @brief Method set_ReadTimeout addr 0x29df7a8 size 0x64 virtual true final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method get_WriteTimeout addr 0x29df80c size 0x8 virtual true final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_WriteTimeout addr 0x29df814 size 0x64 virtual true final false
  inline void set_WriteTimeout(int32_t value);

  /// @brief Method GetException addr 0x29df878 size 0x168 virtual false final false
  inline ::System::Exception* GetException(::System::Exception* e);

  /// @brief Method TryReadFromBufferedContent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryReadFromBufferedContent(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ByRef<int32_t> result);

  /// @brief Method Read addr 0x29df9e0 size 0x2a4 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method BeginRead addr 0x29dfce4 size 0x1d0 virtual true final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cb, ::System::Object* state);

  /// @brief Method EndRead addr 0x29dfeb4 size 0x124 virtual true final false
  inline int32_t EndRead(::System::IAsyncResult* r);

  /// @brief Method BeginWrite addr 0x29dffd8 size 0x1d0 virtual true final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* cb, ::System::Object* state);

  /// @brief Method EndWrite addr 0x29e01a8 size 0xf8 virtual true final false
  inline void EndWrite(::System::IAsyncResult* r);

  /// @brief Method Write addr 0x29e02a0 size 0x1f8 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Flush addr 0x29e0498 size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method FlushAsync addr 0x29e049c size 0xc0 virtual true final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method InternalClose addr 0x29e055c size 0xc virtual false final false
  inline void InternalClose();

  /// @brief Method Close_internal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Close_internal(ByRef<bool> disposed);

  /// @brief Method Close addr 0x29e0568 size 0x14 virtual true final false
  inline void Close();

  /// @brief Method Seek addr 0x29e057c size 0x50 virtual true final false
  inline int64_t Seek(int64_t a, ::System::IO::SeekOrigin b);

  /// @brief Method SetLength addr 0x29e05cc size 0x50 virtual true final false
  inline void SetLength(int64_t a);

  /// @brief Method get_CanSeek addr 0x29e061c size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_Length addr 0x29e0624 size 0x50 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x29e0674 size 0x50 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x29e06c4 size 0x50 virtual true final false
  inline void set_Position(int64_t value);

  // Ctor Parameters [CppParam { name: "", ty: "WebConnectionStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebConnectionStream(WebConnectionStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebConnectionStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebConnectionStream(WebConnectionStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebConnectionStream();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::WebConnectionStream, 0x58>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebConnectionStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionStream*, "System.Net", "WebConnectionStream");
