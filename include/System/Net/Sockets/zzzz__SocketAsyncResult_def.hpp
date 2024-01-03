#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketAsyncResult)
namespace System::Collections::Generic {
template <typename T> class IList_1;
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
namespace System::Net::Sockets {
class __SocketAsyncResult____c;
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
class Object;
}
// Forward declare root types
namespace System::Net::Sockets {
class SocketAsyncResult;
}
namespace System::Net::Sockets {
class __SocketAsyncResult____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::SocketAsyncResult);
MARK_REF_PTR_T(::System::Net::Sockets::__SocketAsyncResult____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9358))
// CS Name: ::SocketAsyncResult::<>c*
class CORDL_TYPE __SocketAsyncResult____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::Sockets::__SocketAsyncResult____c* __9;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0))::System::Threading::WaitCallback* __9__27_0;

  static inline void setStaticF___9(::System::Net::Sockets::__SocketAsyncResult____c* value);

  static inline ::System::Net::Sockets::__SocketAsyncResult____c* getStaticF___9();

  static inline void setStaticF___9__27_0(::System::Threading::WaitCallback* value);

  static inline ::System::Threading::WaitCallback* getStaticF___9__27_0();

  static inline ::System::Net::Sockets::__SocketAsyncResult____c* New_ctor();

  /// @brief Method .ctor, addr 0x28ff010, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Complete>b__27_0, addr 0x28ff018, size 0x78, virtual false, abstract: false, final false
  inline void _Complete_b__27_0(::System::Object* state);

  // Ctor Parameters [CppParam { name: "", ty: "__SocketAsyncResult____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SocketAsyncResult____c(__SocketAsyncResult____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SocketAsyncResult____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SocketAsyncResult____c(__SocketAsyncResult____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SocketAsyncResult____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__SocketAsyncResult____c, 0x10>, "Size mismatch!");

} // namespace System::Net::Sockets
// Type: System.Net.Sockets::SocketAsyncResult
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2437), inst: 741 }), TypeDefinitionIndex(TypeDefinitionIndex(2437)),
// TypeDefinitionIndex(TypeDefinitionIndex(8895)), TypeDefinitionIndex(TypeDefinitionIndex(9360)), TypeDefinitionIndex(TypeDefinitionIndex(9348))} Self: TypeDefinitionIndex(TypeDefinitionIndex(9359))
// CS Name: ::System.Net.Sockets::SocketAsyncResult*
class CORDL_TYPE SocketAsyncResult : public ::System::IOAsyncResult {
public:
  // Declarations
  using __c = ::System::Net::Sockets::__SocketAsyncResult____c;

  /// @brief Field socket, offset 0x30, size 0x8
  __declspec(property(get = __get_socket, put = __set_socket))::System::Net::Sockets::Socket* socket;

  /// @brief Field operation, offset 0x38, size 0x4
  __declspec(property(get = __get_operation, put = __set_operation))::System::Net::Sockets::SocketOperation operation;

  /// @brief Field DelayedException, offset 0x40, size 0x8
  __declspec(property(get = __get_DelayedException, put = __set_DelayedException))::System::Exception* DelayedException;

  /// @brief Field EndPoint, offset 0x48, size 0x8
  __declspec(property(get = __get_EndPoint, put = __set_EndPoint))::System::Net::EndPoint* EndPoint;

  /// @brief Field Buffer, offset 0x50, size 0x10
  __declspec(property(get = __get_Buffer, put = __set_Buffer))::System::Memory_1<uint8_t> Buffer;

  /// @brief Field Offset, offset 0x60, size 0x4
  __declspec(property(get = __get_Offset, put = __set_Offset)) int32_t Offset;

  /// @brief Field Size, offset 0x64, size 0x4
  __declspec(property(get = __get_Size, put = __set_Size)) int32_t Size;

  /// @brief Field SockFlags, offset 0x68, size 0x4
  __declspec(property(get = __get_SockFlags, put = __set_SockFlags))::System::Net::Sockets::SocketFlags SockFlags;

  /// @brief Field AcceptSocket, offset 0x70, size 0x8
  __declspec(property(get = __get_AcceptSocket, put = __set_AcceptSocket))::System::Net::Sockets::Socket* AcceptSocket;

  /// @brief Field Addresses, offset 0x78, size 0x8
  __declspec(property(get = __get_Addresses, put = __set_Addresses))::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> Addresses;

  /// @brief Field Port, offset 0x80, size 0x4
  __declspec(property(get = __get_Port, put = __set_Port)) int32_t Port;

  /// @brief Field Buffers, offset 0x88, size 0x8
  __declspec(property(get = __get_Buffers, put = __set_Buffers))::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* Buffers;

  /// @brief Field ReuseSocket, offset 0x90, size 0x1
  __declspec(property(get = __get_ReuseSocket, put = __set_ReuseSocket)) bool ReuseSocket;

  /// @brief Field CurrentAddress, offset 0x94, size 0x4
  __declspec(property(get = __get_CurrentAddress, put = __set_CurrentAddress)) int32_t CurrentAddress;

  /// @brief Field AcceptedSocket, offset 0x98, size 0x8
  __declspec(property(get = __get_AcceptedSocket, put = __set_AcceptedSocket))::System::Net::Sockets::Socket* AcceptedSocket;

  /// @brief Field Total, offset 0xa0, size 0x4
  __declspec(property(get = __get_Total, put = __set_Total)) int32_t Total;

  /// @brief Field error, offset 0xa4, size 0x4
  __declspec(property(get = __get_error, put = __set_error)) int32_t error;

  /// @brief Field EndCalled, offset 0xa8, size 0x4
  __declspec(property(get = __get_EndCalled, put = __set_EndCalled)) int32_t EndCalled;

  __declspec(property(get = get_Handle)) void* Handle;

  __declspec(property(get = get_ErrorCode))::System::Net::Sockets::SocketError ErrorCode;

  constexpr ::System::Net::Sockets::Socket*& __get_socket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __get_socket() const;

  constexpr void __set_socket(::System::Net::Sockets::Socket* value);

  constexpr ::System::Net::Sockets::SocketOperation& __get_operation();

  constexpr ::System::Net::Sockets::SocketOperation const& __get_operation() const;

  constexpr void __set_operation(::System::Net::Sockets::SocketOperation value);

  constexpr ::System::Exception*& __get_DelayedException();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get_DelayedException() const;

  constexpr void __set_DelayedException(::System::Exception* value);

  constexpr ::System::Net::EndPoint*& __get_EndPoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPoint*> const& __get_EndPoint() const;

  constexpr void __set_EndPoint(::System::Net::EndPoint* value);

  constexpr ::System::Memory_1<uint8_t>& __get_Buffer();

  constexpr ::System::Memory_1<uint8_t> const& __get_Buffer() const;

  constexpr void __set_Buffer(::System::Memory_1<uint8_t> value);

  constexpr int32_t& __get_Offset();

  constexpr int32_t const& __get_Offset() const;

  constexpr void __set_Offset(int32_t value);

  constexpr int32_t& __get_Size();

  constexpr int32_t const& __get_Size() const;

  constexpr void __set_Size(int32_t value);

  constexpr ::System::Net::Sockets::SocketFlags& __get_SockFlags();

  constexpr ::System::Net::Sockets::SocketFlags const& __get_SockFlags() const;

  constexpr void __set_SockFlags(::System::Net::Sockets::SocketFlags value);

  constexpr ::System::Net::Sockets::Socket*& __get_AcceptSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __get_AcceptSocket() const;

  constexpr void __set_AcceptSocket(::System::Net::Sockets::Socket* value);

  constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>& __get_Addresses();

  constexpr ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> const& __get_Addresses() const;

  constexpr void __set_Addresses(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> value);

  constexpr int32_t& __get_Port();

  constexpr int32_t const& __get_Port() const;

  constexpr void __set_Port(int32_t value);

  constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*& __get_Buffers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*> const& __get_Buffers() const;

  constexpr void __set_Buffers(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* value);

  constexpr bool& __get_ReuseSocket();

  constexpr bool const& __get_ReuseSocket() const;

  constexpr void __set_ReuseSocket(bool value);

  constexpr int32_t& __get_CurrentAddress();

  constexpr int32_t const& __get_CurrentAddress() const;

  constexpr void __set_CurrentAddress(int32_t value);

  constexpr ::System::Net::Sockets::Socket*& __get_AcceptedSocket();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __get_AcceptedSocket() const;

  constexpr void __set_AcceptedSocket(::System::Net::Sockets::Socket* value);

  constexpr int32_t& __get_Total();

  constexpr int32_t const& __get_Total() const;

  constexpr void __set_Total(int32_t value);

  constexpr int32_t& __get_error();

  constexpr int32_t const& __get_error() const;

  constexpr void __set_error(int32_t value);

  constexpr int32_t& __get_EndCalled();

  constexpr int32_t const& __get_EndCalled() const;

  constexpr void __set_EndCalled(int32_t value);

  /// @brief Method get_Handle, addr 0x28fed14, size 0x64, virtual false, abstract: false, final false
  inline void* get_Handle();

  static inline ::System::Net::Sockets::SocketAsyncResult* New_ctor();

  /// @brief Method .ctor, addr 0x28fe9b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x28fed78, size 0xb4, virtual false, abstract: false, final false
  inline void Init(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Net::Sockets::SocketOperation operation);

  static inline ::System::Net::Sockets::SocketAsyncResult* New_ctor(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state,
                                                                    ::System::Net::Sockets::SocketOperation operation);

  /// @brief Method .ctor, addr 0x28fee2c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Net::Sockets::SocketOperation operation);

  /// @brief Method get_ErrorCode, addr 0x28fee64, size 0x80, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::SocketError get_ErrorCode();

  /// @brief Method CheckIfThrowDelayedException, addr 0x28feee4, size 0xa8, virtual false, abstract: false, final false
  inline void CheckIfThrowDelayedException();

  /// @brief Method CompleteDisposed, addr 0x28fef8c, size 0x4, virtual true, abstract: false, final false
  inline void CompleteDisposed();

  /// @brief Method Complete, addr 0x28fac2c, size 0x1f0, virtual false, abstract: false, final false
  inline void Complete();

  /// @brief Method Complete, addr 0x28fef90, size 0xc, virtual false, abstract: false, final false
  inline void Complete(bool synch);

  /// @brief Method Complete, addr 0x28fb6ec, size 0x8, virtual false, abstract: false, final false
  inline void Complete(int32_t total);

  /// @brief Method Complete, addr 0x28fef9c, size 0x10, virtual false, abstract: false, final false
  inline void Complete(::System::Exception* e, bool synch);

  /// @brief Method Complete, addr 0x28fa4a4, size 0x8, virtual false, abstract: false, final false
  inline void Complete(::System::Exception* e);

  /// @brief Method Complete, addr 0x28fa4ac, size 0x8, virtual false, abstract: false, final false
  inline void Complete(::System::Net::Sockets::Socket* s);

  /// @brief Method Complete, addr 0x28fa6f4, size 0xc, virtual false, abstract: false, final false
  inline void Complete(::System::Net::Sockets::Socket* s, int32_t total);

  // Ctor Parameters [CppParam { name: "", ty: "SocketAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SocketAsyncResult(SocketAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SocketAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SocketAsyncResult(SocketAsyncResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SocketAsyncResult();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketAsyncResult, 0xb0>, "Size mismatch!");

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

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::SocketAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketAsyncResult*, "System.Net.Sockets", "SocketAsyncResult");
NEED_NO_BOX(::System::Net::Sockets::__SocketAsyncResult____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__SocketAsyncResult____c*, "System.Net.Sockets", "SocketAsyncResult/<>c");
