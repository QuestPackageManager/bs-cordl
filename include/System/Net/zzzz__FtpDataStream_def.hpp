#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FtpDataStream)
namespace System::Net {
class FtpWebRequest;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
struct CloseExState;
}
namespace System {
class Object;
}
namespace System::Net {
class ICloseEx;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
struct TriState;
}
// Forward declare root types
namespace System::Net {
class FtpDataStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FtpDataStream);
// Type: System.Net::FtpDataStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9043))
// CS Name: ::System.Net::FtpDataStream*
class CORDL_TYPE FtpDataStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field _request, offset 0x28, size 0x8
  __declspec(property(get = __get__request, put = __set__request))::System::Net::FtpWebRequest* _request;

  /// @brief Field _networkStream, offset 0x30, size 0x8
  __declspec(property(get = __get__networkStream, put = __set__networkStream))::System::Net::Sockets::NetworkStream* _networkStream;

  /// @brief Field _writeable, offset 0x38, size 0x1
  __declspec(property(get = __get__writeable, put = __set__writeable)) bool _writeable;

  /// @brief Field _readable, offset 0x39, size 0x1
  __declspec(property(get = __get__readable, put = __set__readable)) bool _readable;

  /// @brief Field _isFullyRead, offset 0x3a, size 0x1
  __declspec(property(get = __get__isFullyRead, put = __set__isFullyRead)) bool _isFullyRead;

  /// @brief Field _closing, offset 0x3b, size 0x1
  __declspec(property(get = __get__closing, put = __set__closing)) bool _closing;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Convert operator to "::System::Net::ICloseEx"
  constexpr operator ::System::Net::ICloseEx*() noexcept;

  constexpr ::System::Net::FtpWebRequest*& __get__request();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::FtpWebRequest*> const& __get__request() const;

  constexpr void __set__request(::System::Net::FtpWebRequest* value);

  constexpr ::System::Net::Sockets::NetworkStream*& __get__networkStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::NetworkStream*> const& __get__networkStream() const;

  constexpr void __set__networkStream(::System::Net::Sockets::NetworkStream* value);

  constexpr bool& __get__writeable();

  constexpr bool const& __get__writeable() const;

  constexpr void __set__writeable(bool value);

  constexpr bool& __get__readable();

  constexpr bool const& __get__readable() const;

  constexpr void __set__readable(bool value);

  constexpr bool& __get__isFullyRead();

  constexpr bool const& __get__isFullyRead() const;

  constexpr void __set__isFullyRead(bool value);

  constexpr bool& __get__closing();

  constexpr bool const& __get__closing() const;

  constexpr void __set__closing(bool value);

  static inline ::System::Net::FtpDataStream* New_ctor(::System::Net::Sockets::NetworkStream* networkStream, ::System::Net::FtpWebRequest* request, ::System::Net::TriState writeOnly);

  /// @brief Method .ctor addr 0x298f9ac size 0xfc virtual false final false
  inline void _ctor(::System::Net::Sockets::NetworkStream* networkStream, ::System::Net::FtpWebRequest* request, ::System::Net::TriState writeOnly);

  /// @brief Method Dispose addr 0x29935a0 size 0x188 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method System.Net.ICloseEx.CloseEx addr 0x2993728 size 0x3e4 virtual true final true
  inline void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState);

  /// @brief Method CheckError addr 0x2993b0c size 0x44 virtual false final false
  inline void CheckError();

  /// @brief Method get_CanRead addr 0x2993b50 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x2993b58 size 0x20 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x2993b78 size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_Length addr 0x2993b80 size 0x20 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x2993ba0 size 0x24 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x2993bc4 size 0x24 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method Seek addr 0x2993be8 size 0xcc virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method Read addr 0x2993cb4 size 0x104 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method Write addr 0x2993db8 size 0xd8 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method AsyncReadCallback addr 0x2993e90 size 0x2b0 virtual false final false
  inline void AsyncReadCallback(::System::IAsyncResult* ar);

  /// @brief Method BeginRead addr 0x2994140 size 0x1ac virtual true final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndRead addr 0x29942ec size 0x1a0 virtual true final false
  inline int32_t EndRead(::System::IAsyncResult* ar);

  /// @brief Method BeginWrite addr 0x299448c size 0xf4 virtual true final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndWrite addr 0x2994580 size 0xa0 virtual true final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Flush addr 0x2994620 size 0x24 virtual true final false
  inline void Flush();

  /// @brief Method SetLength addr 0x2994644 size 0x24 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method get_CanTimeout addr 0x2994668 size 0x20 virtual true final false
  inline bool get_CanTimeout();

  /// @brief Method get_ReadTimeout addr 0x2994688 size 0x24 virtual true final false
  inline int32_t get_ReadTimeout();

  /// @brief Method set_ReadTimeout addr 0x29946ac size 0x24 virtual true final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method get_WriteTimeout addr 0x29946d0 size 0x24 virtual true final false
  inline int32_t get_WriteTimeout();

  /// @brief Method set_WriteTimeout addr 0x29946f4 size 0x24 virtual true final false
  inline void set_WriteTimeout(int32_t value);

  /// @brief Method SetSocketTimeoutOption addr 0x2994718 size 0x50 virtual false final false
  inline void SetSocketTimeoutOption(int32_t timeout);

  // Ctor Parameters [CppParam { name: "", ty: "FtpDataStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpDataStream(FtpDataStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpDataStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpDataStream(FtpDataStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpDataStream();

public:
  /// @brief Field _request, offset: 0x28, size: 0x8, def value: None
  ::System::Net::FtpWebRequest* ____request;

  /// @brief Field _networkStream, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Sockets::NetworkStream* ____networkStream;

  /// @brief Field _writeable, offset: 0x38, size: 0x1, def value: None
  bool ____writeable;

  /// @brief Field _readable, offset: 0x39, size: 0x1, def value: None
  bool ____readable;

  /// @brief Field _isFullyRead, offset: 0x3a, size: 0x1, def value: None
  bool ____isFullyRead;

  /// @brief Field _closing, offset: 0x3b, size: 0x1, def value: None
  bool ____closing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpDataStream, 0x40>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FtpDataStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpDataStream*, "System.Net", "FtpDataStream");
