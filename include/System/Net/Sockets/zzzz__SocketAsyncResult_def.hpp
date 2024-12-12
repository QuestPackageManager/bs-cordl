#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketAsyncResult)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Net::Sockets {
class SocketAsyncResult___c;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net::Sockets {
struct SocketOperation;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net {
class IPAddress;
}
namespace System::Threading {
class WaitCallback;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Sockets {
class SocketAsyncResult;
}
namespace System::Net::Sockets {
class SocketAsyncResult___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::SocketAsyncResult);
MARK_REF_PTR_T(::System::Net::Sockets::SocketAsyncResult___c);
// Dependencies System.Object
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.SocketAsyncResult/<>c
class CORDL_TYPE SocketAsyncResult___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Net::Sockets::SocketAsyncResult___c* __9;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::System::Threading::WaitCallback* __9__27_0;

  static inline ::System::Net::Sockets::SocketAsyncResult___c* New_ctor();

  /// @brief Method <Complete>b__27_0, addr 0x4401544, size 0x78, virtual false, abstract: false, final false
  inline void _Complete_b__27_0(::System::Object* state);

  /// @brief Method .ctor, addr 0x440153c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Sockets::SocketAsyncResult___c* getStaticF___9();

  static inline ::System::Threading::WaitCallback* getStaticF___9__27_0();

  static inline void setStaticF___9(::System::Net::Sockets::SocketAsyncResult___c* value);

  static inline void setStaticF___9__27_0(::System::Threading::WaitCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketAsyncResult___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketAsyncResult___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketAsyncResult___c(SocketAsyncResult___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketAsyncResult___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketAsyncResult___c(SocketAsyncResult___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketAsyncResult___c, 0x10>, "Size mismatch!");

} // namespace System::Net::Sockets
// Dependencies System.IOAsyncResult, System.Memory`1<T>, System.Net.Sockets.SocketFlags, System.Net.Sockets.SocketOperation
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.SocketAsyncResult
class CORDL_TYPE SocketAsyncResult : public ::System::IOAsyncResult {
public:
  // Declarations
  using __c = ::System::Net::Sockets::SocketAsyncResult___c;

  /// @brief Field AcceptSocket, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_AcceptSocket, put = __cordl_internal_set_AcceptSocket)) ::System::Net::Sockets::Socket* AcceptSocket;

  /// @brief Field AcceptedSocket, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_AcceptedSocket, put = __cordl_internal_set_AcceptedSocket)) ::System::Net::Sockets::Socket* AcceptedSocket;

  /// @brief Field Addresses, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_Addresses, put = __cordl_internal_set_Addresses)) ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> Addresses;

  /// @brief Field Buffer, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer)) ::System::Memory_1<uint8_t> Buffer;

  /// @brief Field Buffers, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffers, put = __cordl_internal_set_Buffers)) ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* Buffers;

  /// @brief Field CurrentAddress, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_CurrentAddress, put = __cordl_internal_set_CurrentAddress)) int32_t CurrentAddress;

  /// @brief Field DelayedException, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_DelayedException, put = __cordl_internal_set_DelayedException)) ::System::Exception* DelayedException;

  /// @brief Field EndCalled, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_EndCalled, put = __cordl_internal_set_EndCalled)) int32_t EndCalled;

  /// @brief Field EndPoint, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_EndPoint, put = __cordl_internal_set_EndPoint)) ::System::Net::EndPoint* EndPoint;

  __declspec(property(get = get_ErrorCode)) ::System::Net::Sockets::SocketError ErrorCode;

  __declspec(property(get = get_Handle)) ::System::IntPtr Handle;

  /// @brief Field Offset, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset)) int32_t Offset;

  /// @brief Field Port, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_Port, put = __cordl_internal_set_Port)) int32_t Port;

  /// @brief Field ReuseSocket, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_ReuseSocket, put = __cordl_internal_set_ReuseSocket)) bool ReuseSocket;

  /// @brief Field Size, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) int32_t Size;

  /// @brief Field SockFlags, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_SockFlags, put = __cordl_internal_set_SockFlags)) ::System::Net::Sockets::SocketFlags SockFlags;

  /// @brief Field Total, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_Total, put = __cordl_internal_set_Total)) int32_t Total;

  /// @brief Field error, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_error, put = __cordl_internal_set_error)) int32_t error;

  /// @brief Field operation, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_operation, put = __cordl_internal_set_operation)) ::System::Net::Sockets::SocketOperation operation;

  /// @brief Field socket, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_socket, put = __cordl_internal_set_socket)) ::System::Net::Sockets::Socket* socket;

  /// @brief Method CheckIfThrowDelayedException, addr 0x4401420, size 0xa0, virtual false, abstract: false, final false
  inline void CheckIfThrowDelayedException();

  /// @brief Method Complete, addr 0x43fd324, size 0x1e8, virtual false, abstract: false, final false
  inline void Complete();

  /// @brief Method Complete, addr 0x43fcbbc, size 0x8, virtual false, abstract: false, final false
  inline void Complete(::System::Exception* e);

  /// @brief Method Complete, addr 0x44014d0, size 0x10, virtual false, abstract: false, final false
  inline void Complete(::System::Exception* e, bool synch);

  /// @brief Method Complete, addr 0x43fcbc4, size 0x8, virtual false, abstract: false, final false
  inline void Complete(::System::Net::Sockets::Socket* s);

  /// @brief Method Complete, addr 0x43fcdfc, size 0xc, virtual false, abstract: false, final false
  inline void Complete(::System::Net::Sockets::Socket* s, int32_t total);

  /// @brief Method Complete, addr 0x44014c4, size 0xc, virtual false, abstract: false, final false
  inline void Complete(bool synch);

  /// @brief Method Complete, addr 0x43fdddc, size 0x8, virtual false, abstract: false, final false
  inline void Complete(int32_t total);

  /// @brief Method CompleteDisposed, addr 0x44014c0, size 0x4, virtual true, abstract: false, final false
  inline void CompleteDisposed();

  /// @brief Method Init, addr 0x44012b4, size 0xb4, virtual false, abstract: false, final false
  inline void Init(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Net::Sockets::SocketOperation operation);

  static inline ::System::Net::Sockets::SocketAsyncResult* New_ctor();

  static inline ::System::Net::Sockets::SocketAsyncResult* New_ctor(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state,
                                                                    ::System::Net::Sockets::SocketOperation operation);

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_AcceptSocket() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_AcceptSocket();

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_AcceptedSocket() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_AcceptedSocket();

  constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> const& __cordl_internal_get_Addresses() const;

  constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>& __cordl_internal_get_Addresses();

  constexpr ::System::Memory_1<uint8_t> const& __cordl_internal_get_Buffer() const;

  constexpr ::System::Memory_1<uint8_t>& __cordl_internal_get_Buffer();

  constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* const& __cordl_internal_get_Buffers() const;

  constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*& __cordl_internal_get_Buffers();

  constexpr int32_t const& __cordl_internal_get_CurrentAddress() const;

  constexpr int32_t& __cordl_internal_get_CurrentAddress();

  constexpr ::System::Exception* const& __cordl_internal_get_DelayedException() const;

  constexpr ::System::Exception*& __cordl_internal_get_DelayedException();

  constexpr int32_t const& __cordl_internal_get_EndCalled() const;

  constexpr int32_t& __cordl_internal_get_EndCalled();

  constexpr ::System::Net::EndPoint* const& __cordl_internal_get_EndPoint() const;

  constexpr ::System::Net::EndPoint*& __cordl_internal_get_EndPoint();

  constexpr int32_t const& __cordl_internal_get_Offset() const;

  constexpr int32_t& __cordl_internal_get_Offset();

  constexpr int32_t const& __cordl_internal_get_Port() const;

  constexpr int32_t& __cordl_internal_get_Port();

  constexpr bool const& __cordl_internal_get_ReuseSocket() const;

  constexpr bool& __cordl_internal_get_ReuseSocket();

  constexpr int32_t const& __cordl_internal_get_Size() const;

  constexpr int32_t& __cordl_internal_get_Size();

  constexpr ::System::Net::Sockets::SocketFlags const& __cordl_internal_get_SockFlags() const;

  constexpr ::System::Net::Sockets::SocketFlags& __cordl_internal_get_SockFlags();

  constexpr int32_t const& __cordl_internal_get_Total() const;

  constexpr int32_t& __cordl_internal_get_Total();

  constexpr int32_t const& __cordl_internal_get_error() const;

  constexpr int32_t& __cordl_internal_get_error();

  constexpr ::System::Net::Sockets::SocketOperation const& __cordl_internal_get_operation() const;

  constexpr ::System::Net::Sockets::SocketOperation& __cordl_internal_get_operation();

  constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_socket() const;

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_socket();

  constexpr void __cordl_internal_set_AcceptSocket(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_AcceptedSocket(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_Addresses(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> value);

  constexpr void __cordl_internal_set_Buffer(::System::Memory_1<uint8_t> value);

  constexpr void __cordl_internal_set_Buffers(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* value);

  constexpr void __cordl_internal_set_CurrentAddress(int32_t value);

  constexpr void __cordl_internal_set_DelayedException(::System::Exception* value);

  constexpr void __cordl_internal_set_EndCalled(int32_t value);

  constexpr void __cordl_internal_set_EndPoint(::System::Net::EndPoint* value);

  constexpr void __cordl_internal_set_Offset(int32_t value);

  constexpr void __cordl_internal_set_Port(int32_t value);

  constexpr void __cordl_internal_set_ReuseSocket(bool value);

  constexpr void __cordl_internal_set_Size(int32_t value);

  constexpr void __cordl_internal_set_SockFlags(::System::Net::Sockets::SocketFlags value);

  constexpr void __cordl_internal_set_Total(int32_t value);

  constexpr void __cordl_internal_set_error(int32_t value);

  constexpr void __cordl_internal_set_operation(::System::Net::Sockets::SocketOperation value);

  constexpr void __cordl_internal_set_socket(::System::Net::Sockets::Socket* value);

  /// @brief Method .ctor, addr 0x4400fe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4401368, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Net::Sockets::SocketOperation operation);

  /// @brief Method get_ErrorCode, addr 0x44013a0, size 0x80, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::SocketError get_ErrorCode();

  /// @brief Method get_Handle, addr 0x44012a0, size 0x14, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Handle();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketAsyncResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SocketAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketAsyncResult(SocketAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketAsyncResult(SocketAsyncResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9875 };

  /// @brief Field socket, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___socket;

  /// @brief Field operation, offset: 0x38, size: 0x4, def value: None
  ::System::Net::Sockets::SocketOperation ___operation;

  /// @brief Field DelayedException, offset: 0x40, size: 0x8, def value: None
  ::System::Exception* ___DelayedException;

  /// @brief Field EndPoint, offset: 0x48, size: 0x8, def value: None
  ::System::Net::EndPoint* ___EndPoint;

  /// @brief Field Buffer, offset: 0x50, size: 0x10, def value: None
  ::System::Memory_1<uint8_t> ___Buffer;

  /// @brief Field Offset, offset: 0x60, size: 0x4, def value: None
  int32_t ___Offset;

  /// @brief Field Size, offset: 0x64, size: 0x4, def value: None
  int32_t ___Size;

  /// @brief Field SockFlags, offset: 0x68, size: 0x4, def value: None
  ::System::Net::Sockets::SocketFlags ___SockFlags;

  /// @brief Field AcceptSocket, offset: 0x70, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___AcceptSocket;

  /// @brief Field Addresses, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> ___Addresses;

  /// @brief Field Port, offset: 0x80, size: 0x4, def value: None
  int32_t ___Port;

  /// @brief Field Buffers, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* ___Buffers;

  /// @brief Field ReuseSocket, offset: 0x90, size: 0x1, def value: None
  bool ___ReuseSocket;

  /// @brief Field CurrentAddress, offset: 0x94, size: 0x4, def value: None
  int32_t ___CurrentAddress;

  /// @brief Field AcceptedSocket, offset: 0x98, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* ___AcceptedSocket;

  /// @brief Field Total, offset: 0xa0, size: 0x4, def value: None
  int32_t ___Total;

  /// @brief Field error, offset: 0xa4, size: 0x4, def value: None
  int32_t ___error;

  /// @brief Field EndCalled, offset: 0xa8, size: 0x4, def value: None
  int32_t ___EndCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___socket) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___operation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___DelayedException) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___EndPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___Buffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___Offset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___Size) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___SockFlags) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___AcceptSocket) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___Addresses) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___Port) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___Buffers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___ReuseSocket) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___CurrentAddress) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___AcceptedSocket) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___Total) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___error) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SocketAsyncResult, ___EndCalled) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketAsyncResult, 0xb0>, "Size mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::SocketAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketAsyncResult*, "System.Net.Sockets", "SocketAsyncResult");
NEED_NO_BOX(::System::Net::Sockets::SocketAsyncResult___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketAsyncResult___c*, "System.Net.Sockets", "SocketAsyncResult/<>c");
