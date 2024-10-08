#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketAsyncEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__IPPacketInformation_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/Net/Sockets/zzzz__TransmitFileOptions_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketAsyncEventArgs)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Sockets {
class SendPacketsElement;
}
namespace System::Net::Sockets {
struct SocketAsyncOperation;
}
namespace System::Net::Sockets {
class SocketAsyncResult;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net::Sockets {
struct SocketFlags;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class EndPoint;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Sockets {
class SocketAsyncEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::SocketAsyncEventArgs);
// Type: System.Net.Sockets::SocketAsyncEventArgs
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::System.Net.Sockets::SocketAsyncEventArgs*
class CORDL_TYPE SocketAsyncEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_AcceptSocket, put = set_AcceptSocket)) ::System::Net::Sockets::Socket* AcceptSocket;

  __declspec(property(get = get_BufferList)) ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* BufferList;

  __declspec(property(get = get_BytesTransferred, put = set_BytesTransferred)) int32_t BytesTransferred;

  /// @brief Field Completed, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_Completed, put = __cordl_internal_set_Completed)) ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* Completed;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_CurrentSocket)) ::System::Net::Sockets::Socket* CurrentSocket;

  __declspec(property(put = set_LastOperation)) ::System::Net::Sockets::SocketAsyncOperation LastOperation;

  __declspec(property(get = get_MemoryBuffer)) ::System::Memory_1<uint8_t> MemoryBuffer;

  __declspec(property(get = get_Offset)) int32_t Offset;

  __declspec(property(put = set_RemoteEndPoint)) ::System::Net::EndPoint* RemoteEndPoint;

  __declspec(property(put = set_SendPacketsSendSize)) int32_t SendPacketsSendSize;

  __declspec(property(get = get_SocketError, put = set_SocketError)) ::System::Net::Sockets::SocketError SocketError;

  __declspec(property(put = set_SocketFlags)) ::System::Net::Sockets::SocketFlags SocketFlags;

  __declspec(property(get = get_UserToken, put = set_UserToken)) ::System::Object* UserToken;

  /// @brief Field <AcceptSocket>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__AcceptSocket_k__BackingField,
                      put = __cordl_internal_set__AcceptSocket_k__BackingField)) ::System::Net::Sockets::Socket* _AcceptSocket_k__BackingField;

  /// @brief Field <BytesTransferred>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__BytesTransferred_k__BackingField, put = __cordl_internal_set__BytesTransferred_k__BackingField)) int32_t _BytesTransferred_k__BackingField;

  /// @brief Field <ConnectByNameError>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ConnectByNameError_k__BackingField,
                      put = __cordl_internal_set__ConnectByNameError_k__BackingField)) ::System::Exception* _ConnectByNameError_k__BackingField;

  /// @brief Field <DisconnectReuseSocket>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__DisconnectReuseSocket_k__BackingField,
                      put = __cordl_internal_set__DisconnectReuseSocket_k__BackingField)) bool _DisconnectReuseSocket_k__BackingField;

  /// @brief Field <LastOperation>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__LastOperation_k__BackingField,
                      put = __cordl_internal_set__LastOperation_k__BackingField)) ::System::Net::Sockets::SocketAsyncOperation _LastOperation_k__BackingField;

  /// @brief Field <ReceiveMessageFromPacketInfo>k__BackingField, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__ReceiveMessageFromPacketInfo_k__BackingField,
                      put = __cordl_internal_set__ReceiveMessageFromPacketInfo_k__BackingField)) ::System::Net::Sockets::IPPacketInformation _ReceiveMessageFromPacketInfo_k__BackingField;

  /// @brief Field <SendPacketsElements>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__SendPacketsElements_k__BackingField,
                      put = __cordl_internal_set__SendPacketsElements_k__BackingField)) ::ArrayW<::System::Net::Sockets::SendPacketsElement*, ::Array<::System::Net::Sockets::SendPacketsElement*>*>
      _SendPacketsElements_k__BackingField;

  /// @brief Field <SendPacketsFlags>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__SendPacketsFlags_k__BackingField,
                      put = __cordl_internal_set__SendPacketsFlags_k__BackingField)) ::System::Net::Sockets::TransmitFileOptions _SendPacketsFlags_k__BackingField;

  /// @brief Field <SendPacketsSendSize>k__BackingField, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__SendPacketsSendSize_k__BackingField, put = __cordl_internal_set__SendPacketsSendSize_k__BackingField)) int32_t _SendPacketsSendSize_k__BackingField;

  /// @brief Field <SocketError>k__BackingField, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__SocketError_k__BackingField,
                      put = __cordl_internal_set__SocketError_k__BackingField)) ::System::Net::Sockets::SocketError _SocketError_k__BackingField;

  /// @brief Field <SocketFlags>k__BackingField, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__SocketFlags_k__BackingField,
                      put = __cordl_internal_set__SocketFlags_k__BackingField)) ::System::Net::Sockets::SocketFlags _SocketFlags_k__BackingField;

  /// @brief Field <UserToken>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__UserToken_k__BackingField, put = __cordl_internal_set__UserToken_k__BackingField)) ::System::Object* _UserToken_k__BackingField;

  /// @brief Field _buffer, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer)) ::System::Memory_1<uint8_t> _buffer;

  /// @brief Field _bufferIsExplicitArray, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__bufferIsExplicitArray, put = __cordl_internal_set__bufferIsExplicitArray)) bool _bufferIsExplicitArray;

  /// @brief Field _bufferList, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__bufferList, put = __cordl_internal_set__bufferList)) ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* _bufferList;

  /// @brief Field _bufferListInternal, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__bufferListInternal,
                      put = __cordl_internal_set__bufferListInternal)) ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* _bufferListInternal;

  /// @brief Field _count, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _offset, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__offset, put = __cordl_internal_set__offset)) int32_t _offset;

  /// @brief Field current_socket, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_current_socket, put = __cordl_internal_set_current_socket)) ::System::Net::Sockets::Socket* current_socket;

  /// @brief Field disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field in_progress, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_in_progress, put = __cordl_internal_set_in_progress)) int32_t in_progress;

  /// @brief Field remote_ep, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_remote_ep, put = __cordl_internal_set_remote_ep)) ::System::Net::EndPoint* remote_ep;

  /// @brief Field socket_async_result, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_socket_async_result, put = __cordl_internal_set_socket_async_result)) ::System::Net::Sockets::SocketAsyncResult* socket_async_result;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Complete_internal, addr 0x438b714, size 0x28, virtual false, abstract: false, final false
  inline void Complete_internal();

  /// @brief Method Dispose, addr 0x438b5e0, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x438b5cc, size 0x14, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x438b5bc, size 0x10, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::Net::Sockets::SocketAsyncEventArgs* New_ctor();

  static inline ::System::Net::Sockets::SocketAsyncEventArgs* New_ctor(bool flowExecutionContext);

  /// @brief Method OnCompleted, addr 0x438b73c, size 0x28, virtual true, abstract: false, final false
  inline void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* e);

  /// @brief Method SetBuffer, addr 0x438b788, size 0xec, virtual false, abstract: false, final false
  inline void SetBuffer(::System::Memory_1<uint8_t> buffer);

  /// @brief Method SetBytesTransferred, addr 0x4388104, size 0x8, virtual false, abstract: false, final false
  inline void SetBytesTransferred(int32_t value);

  /// @brief Method SetCurrentSocket, addr 0x438b64c, size 0x8, virtual false, abstract: false, final false
  inline void SetCurrentSocket(::System::Net::Sockets::Socket* socket);

  /// @brief Method SetLastOperation, addr 0x438b654, size 0xc0, virtual false, abstract: false, final false
  inline void SetLastOperation(::System::Net::Sockets::SocketAsyncOperation op);

  constexpr ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*& __cordl_internal_get_Completed();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*> const& __cordl_internal_get_Completed() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get__AcceptSocket_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get__AcceptSocket_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__BytesTransferred_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__BytesTransferred_k__BackingField();

  constexpr ::System::Exception*& __cordl_internal_get__ConnectByNameError_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__ConnectByNameError_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__DisconnectReuseSocket_k__BackingField() const;

  constexpr bool& __cordl_internal_get__DisconnectReuseSocket_k__BackingField();

  constexpr ::System::Net::Sockets::SocketAsyncOperation const& __cordl_internal_get__LastOperation_k__BackingField() const;

  constexpr ::System::Net::Sockets::SocketAsyncOperation& __cordl_internal_get__LastOperation_k__BackingField();

  constexpr ::System::Net::Sockets::IPPacketInformation const& __cordl_internal_get__ReceiveMessageFromPacketInfo_k__BackingField() const;

  constexpr ::System::Net::Sockets::IPPacketInformation& __cordl_internal_get__ReceiveMessageFromPacketInfo_k__BackingField();

  constexpr ::ArrayW<::System::Net::Sockets::SendPacketsElement*, ::Array<::System::Net::Sockets::SendPacketsElement*>*> const& __cordl_internal_get__SendPacketsElements_k__BackingField() const;

  constexpr ::ArrayW<::System::Net::Sockets::SendPacketsElement*, ::Array<::System::Net::Sockets::SendPacketsElement*>*>& __cordl_internal_get__SendPacketsElements_k__BackingField();

  constexpr ::System::Net::Sockets::TransmitFileOptions const& __cordl_internal_get__SendPacketsFlags_k__BackingField() const;

  constexpr ::System::Net::Sockets::TransmitFileOptions& __cordl_internal_get__SendPacketsFlags_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__SendPacketsSendSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__SendPacketsSendSize_k__BackingField();

  constexpr ::System::Net::Sockets::SocketError const& __cordl_internal_get__SocketError_k__BackingField() const;

  constexpr ::System::Net::Sockets::SocketError& __cordl_internal_get__SocketError_k__BackingField();

  constexpr ::System::Net::Sockets::SocketFlags const& __cordl_internal_get__SocketFlags_k__BackingField() const;

  constexpr ::System::Net::Sockets::SocketFlags& __cordl_internal_get__SocketFlags_k__BackingField();

  constexpr ::System::Object*& __cordl_internal_get__UserToken_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__UserToken_k__BackingField() const;

  constexpr ::System::Memory_1<uint8_t> const& __cordl_internal_get__buffer() const;

  constexpr ::System::Memory_1<uint8_t>& __cordl_internal_get__buffer();

  constexpr bool const& __cordl_internal_get__bufferIsExplicitArray() const;

  constexpr bool& __cordl_internal_get__bufferIsExplicitArray();

  constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get__bufferList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*> const& __cordl_internal_get__bufferList() const;

  constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get__bufferListInternal();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*> const& __cordl_internal_get__bufferListInternal() const;

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr int32_t const& __cordl_internal_get__offset() const;

  constexpr int32_t& __cordl_internal_get__offset();

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_current_socket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get_current_socket() const;

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr int32_t const& __cordl_internal_get_in_progress() const;

  constexpr int32_t& __cordl_internal_get_in_progress();

  constexpr ::System::Net::EndPoint*& __cordl_internal_get_remote_ep();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPoint*> const& __cordl_internal_get_remote_ep() const;

  constexpr ::System::Net::Sockets::SocketAsyncResult*& __cordl_internal_get_socket_async_result();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::SocketAsyncResult*> const& __cordl_internal_get_socket_async_result() const;

  constexpr void __cordl_internal_set_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value);

  constexpr void __cordl_internal_set__AcceptSocket_k__BackingField(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set__BytesTransferred_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__ConnectByNameError_k__BackingField(::System::Exception* value);

  constexpr void __cordl_internal_set__DisconnectReuseSocket_k__BackingField(bool value);

  constexpr void __cordl_internal_set__LastOperation_k__BackingField(::System::Net::Sockets::SocketAsyncOperation value);

  constexpr void __cordl_internal_set__ReceiveMessageFromPacketInfo_k__BackingField(::System::Net::Sockets::IPPacketInformation value);

  constexpr void __cordl_internal_set__SendPacketsElements_k__BackingField(::ArrayW<::System::Net::Sockets::SendPacketsElement*, ::Array<::System::Net::Sockets::SendPacketsElement*>*> value);

  constexpr void __cordl_internal_set__SendPacketsFlags_k__BackingField(::System::Net::Sockets::TransmitFileOptions value);

  constexpr void __cordl_internal_set__SendPacketsSendSize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__SocketError_k__BackingField(::System::Net::Sockets::SocketError value);

  constexpr void __cordl_internal_set__SocketFlags_k__BackingField(::System::Net::Sockets::SocketFlags value);

  constexpr void __cordl_internal_set__UserToken_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__buffer(::System::Memory_1<uint8_t> value);

  constexpr void __cordl_internal_set__bufferIsExplicitArray(bool value);

  constexpr void __cordl_internal_set__bufferList(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* value);

  constexpr void __cordl_internal_set__bufferListInternal(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__offset(int32_t value);

  constexpr void __cordl_internal_set_current_socket(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_in_progress(int32_t value);

  constexpr void __cordl_internal_set_remote_ep(::System::Net::EndPoint* value);

  constexpr void __cordl_internal_set_socket_async_result(::System::Net::Sockets::SocketAsyncResult* value);

  /// @brief Method .ctor, addr 0x438b51c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4384be8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(bool flowExecutionContext);

  /// @brief Method add_Completed, addr 0x438b3bc, size 0xb0, virtual false, abstract: false, final false
  inline void add_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value);

  /// @brief Method get_AcceptSocket, addr 0x438b35c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* get_AcceptSocket();

  /// @brief Method get_BufferList, addr 0x438b780, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* get_BufferList();

  /// @brief Method get_BytesTransferred, addr 0x438b36c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_BytesTransferred();

  /// @brief Method get_Count, addr 0x438b778, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_CurrentSocket, addr 0x438b644, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* get_CurrentSocket();

  /// @brief Method get_MemoryBuffer, addr 0x438b764, size 0xc, virtual false, abstract: false, final false
  inline ::System::Memory_1<uint8_t> get_MemoryBuffer();

  /// @brief Method get_Offset, addr 0x438b770, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Offset();

  /// @brief Method get_SocketError, addr 0x438b394, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::SocketError get_SocketError();

  /// @brief Method get_UserToken, addr 0x438b3ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_UserToken();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_Completed, addr 0x438b46c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value);

  /// @brief Method set_AcceptSocket, addr 0x438b364, size 0x8, virtual false, abstract: false, final false
  inline void set_AcceptSocket(::System::Net::Sockets::Socket* value);

  /// @brief Method set_BytesTransferred, addr 0x438b374, size 0x8, virtual false, abstract: false, final false
  inline void set_BytesTransferred(int32_t value);

  /// @brief Method set_LastOperation, addr 0x438b37c, size 0x8, virtual false, abstract: false, final false
  inline void set_LastOperation(::System::Net::Sockets::SocketAsyncOperation value);

  /// @brief Method set_RemoteEndPoint, addr 0x438b384, size 0x8, virtual false, abstract: false, final false
  inline void set_RemoteEndPoint(::System::Net::EndPoint* value);

  /// @brief Method set_SendPacketsSendSize, addr 0x438b38c, size 0x8, virtual false, abstract: false, final false
  inline void set_SendPacketsSendSize(int32_t value);

  /// @brief Method set_SocketError, addr 0x438b39c, size 0x8, virtual false, abstract: false, final false
  inline void set_SocketError(::System::Net::Sockets::SocketError value);

  /// @brief Method set_SocketFlags, addr 0x438b3a4, size 0x8, virtual false, abstract: false, final false
  inline void set_SocketFlags(::System::Net::Sockets::SocketFlags value);

  /// @brief Method set_UserToken, addr 0x438b3b4, size 0x8, virtual false, abstract: false, final false
  inline void set_UserToken(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketAsyncEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketAsyncEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketAsyncEventArgs(SocketAsyncEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketAsyncEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketAsyncEventArgs(SocketAsyncEventArgs const&) = delete;

  /// @brief Field disposed, offset: 0x10, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field in_progress, offset: 0x14, size: 0x4, def value: None
  int32_t ___in_progress;

  /// @brief Field remote_ep, offset: 0x18, size: 0x8, def value: None
  ::System::Net::EndPoint* ___remote_ep;

  /// @brief Field current_socket, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___current_socket;

  /// @brief Field socket_async_result, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Sockets::SocketAsyncResult* ___socket_async_result;

  /// @brief Field <ConnectByNameError>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* ____ConnectByNameError_k__BackingField;

  /// @brief Field <AcceptSocket>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ____AcceptSocket_k__BackingField;

  /// @brief Field <BytesTransferred>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____BytesTransferred_k__BackingField;

  /// @brief Field <DisconnectReuseSocket>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____DisconnectReuseSocket_k__BackingField;

  /// @brief Field <LastOperation>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::System::Net::Sockets::SocketAsyncOperation ____LastOperation_k__BackingField;

  /// @brief Field <ReceiveMessageFromPacketInfo>k__BackingField, offset: 0x50, size: 0x10, def value: None
  ::System::Net::Sockets::IPPacketInformation ____ReceiveMessageFromPacketInfo_k__BackingField;

  /// @brief Field <SendPacketsElements>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Net::Sockets::SendPacketsElement*, ::Array<::System::Net::Sockets::SendPacketsElement*>*> ____SendPacketsElements_k__BackingField;

  /// @brief Field <SendPacketsFlags>k__BackingField, offset: 0x68, size: 0x4, def value: None
  ::System::Net::Sockets::TransmitFileOptions ____SendPacketsFlags_k__BackingField;

  /// @brief Field <SendPacketsSendSize>k__BackingField, offset: 0x6c, size: 0x4, def value: None
  int32_t ____SendPacketsSendSize_k__BackingField;

  /// @brief Field <SocketError>k__BackingField, offset: 0x70, size: 0x4, def value: None
  ::System::Net::Sockets::SocketError ____SocketError_k__BackingField;

  /// @brief Field <SocketFlags>k__BackingField, offset: 0x74, size: 0x4, def value: None
  ::System::Net::Sockets::SocketFlags ____SocketFlags_k__BackingField;

  /// @brief Field <UserToken>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::System::Object* ____UserToken_k__BackingField;

  /// @brief Field Completed, offset: 0x80, size: 0x8, def value: None
  ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* ___Completed;

  /// @brief Field _buffer, offset: 0x88, size: 0x10, def value: None
  ::System::Memory_1<uint8_t> ____buffer;

  /// @brief Field _offset, offset: 0x98, size: 0x4, def value: None
  int32_t ____offset;

  /// @brief Field _count, offset: 0x9c, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _bufferIsExplicitArray, offset: 0xa0, size: 0x1, def value: None
  bool ____bufferIsExplicitArray;

  /// @brief Field _bufferList, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* ____bufferList;

  /// @brief Field _bufferListInternal, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* ____bufferListInternal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9843 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketAsyncEventArgs, 0xb8>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ___disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ___in_progress) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ___remote_ep) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ___current_socket) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ___socket_async_result) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____ConnectByNameError_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____AcceptSocket_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____BytesTransferred_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____DisconnectReuseSocket_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____LastOperation_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____ReceiveMessageFromPacketInfo_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____SendPacketsElements_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____SendPacketsFlags_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____SendPacketsSendSize_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____SocketError_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____SocketFlags_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____UserToken_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ___Completed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____buffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____offset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____count) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____bufferIsExplicitArray) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____bufferList) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncEventArgs, ____bufferListInternal) == 0xb0, "Offset mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::SocketAsyncEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketAsyncEventArgs*, "System.Net.Sockets", "SocketAsyncEventArgs");
