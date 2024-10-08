#pragma once
// IWYU pragma private; include "System/Net/FtpDataStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FtpDataStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net {
struct CloseExState;
}
namespace System::Net {
class FtpWebRequest;
}
namespace System::Net {
class ICloseEx;
}
namespace System::Net {
struct TriState;
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
class FtpDataStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FtpDataStream);
// Type: System.Net::FtpDataStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::FtpDataStream*
class CORDL_TYPE FtpDataStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Field _closing, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get__closing, put = __cordl_internal_set__closing)) bool _closing;

  /// @brief Field _isFullyRead, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__isFullyRead, put = __cordl_internal_set__isFullyRead)) bool _isFullyRead;

  /// @brief Field _networkStream, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__networkStream, put = __cordl_internal_set__networkStream)) ::System::Net::Sockets::NetworkStream* _networkStream;

  /// @brief Field _readable, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__readable, put = __cordl_internal_set__readable)) bool _readable;

  /// @brief Field _request, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request)) ::System::Net::FtpWebRequest* _request;

  /// @brief Field _writeable, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__writeable, put = __cordl_internal_set__writeable)) bool _writeable;

  /// @brief Convert operator to "::System::Net::ICloseEx"
  constexpr operator ::System::Net::ICloseEx*() noexcept;

  /// @brief Method AsyncReadCallback, addr 0x441f020, size 0x2b0, virtual false, abstract: false, final false
  inline void AsyncReadCallback(::System::IAsyncResult* ar);

  /// @brief Method BeginRead, addr 0x441f2d0, size 0x198, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginWrite, addr 0x441f608, size 0xf4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method CheckError, addr 0x441ec9c, size 0x44, virtual false, abstract: false, final false
  inline void CheckError();

  /// @brief Method Dispose, addr 0x441e730, size 0x188, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndRead, addr 0x441f468, size 0x1a0, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* ar);

  /// @brief Method EndWrite, addr 0x441f6fc, size 0xa0, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Flush, addr 0x441f79c, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::System::Net::FtpDataStream* New_ctor(::System::Net::Sockets::NetworkStream* networkStream, ::System::Net::FtpWebRequest* request, ::System::Net::TriState writeOnly);

  /// @brief Method Read, addr 0x441ee44, size 0x104, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method Seek, addr 0x441ed78, size 0xcc, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x441f7c0, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method SetSocketTimeoutOption, addr 0x441f894, size 0x50, virtual false, abstract: false, final false
  inline void SetSocketTimeoutOption(int32_t timeout);

  /// @brief Method System.Net.ICloseEx.CloseEx, addr 0x441e8b8, size 0x3e4, virtual true, abstract: false, final true
  inline void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState);

  /// @brief Method Write, addr 0x441ef48, size 0xd8, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  constexpr bool const& __cordl_internal_get__closing() const;

  constexpr bool& __cordl_internal_get__closing();

  constexpr bool const& __cordl_internal_get__isFullyRead() const;

  constexpr bool& __cordl_internal_get__isFullyRead();

  constexpr ::System::Net::Sockets::NetworkStream*& __cordl_internal_get__networkStream();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::NetworkStream*> const& __cordl_internal_get__networkStream() const;

  constexpr bool const& __cordl_internal_get__readable() const;

  constexpr bool& __cordl_internal_get__readable();

  constexpr ::System::Net::FtpWebRequest*& __cordl_internal_get__request();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::FtpWebRequest*> const& __cordl_internal_get__request() const;

  constexpr bool const& __cordl_internal_get__writeable() const;

  constexpr bool& __cordl_internal_get__writeable();

  constexpr void __cordl_internal_set__closing(bool value);

  constexpr void __cordl_internal_set__isFullyRead(bool value);

  constexpr void __cordl_internal_set__networkStream(::System::Net::Sockets::NetworkStream* value);

  constexpr void __cordl_internal_set__readable(bool value);

  constexpr void __cordl_internal_set__request(::System::Net::FtpWebRequest* value);

  constexpr void __cordl_internal_set__writeable(bool value);

  /// @brief Method .ctor, addr 0x441ac58, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::NetworkStream* networkStream, ::System::Net::FtpWebRequest* request, ::System::Net::TriState writeOnly);

  /// @brief Method get_CanRead, addr 0x441ece0, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x441ece8, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanTimeout, addr 0x441f7e4, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_CanWrite, addr 0x441ed08, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x441ed10, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x441ed30, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_ReadTimeout, addr 0x441f804, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method get_WriteTimeout, addr 0x441f84c, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  /// @brief Convert to "::System::Net::ICloseEx"
  constexpr ::System::Net::ICloseEx* i___System__Net__ICloseEx() noexcept;

  /// @brief Method set_Position, addr 0x441ed54, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method set_ReadTimeout, addr 0x441f828, size 0x24, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method set_WriteTimeout, addr 0x441f870, size 0x24, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpDataStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FtpDataStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FtpDataStream(FtpDataStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FtpDataStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FtpDataStream(FtpDataStream const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9529 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpDataStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::FtpDataStream, ____request) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpDataStream, ____networkStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpDataStream, ____writeable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpDataStream, ____readable) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpDataStream, ____isFullyRead) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::System::Net::FtpDataStream, ____closing) == 0x3b, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FtpDataStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpDataStream*, "System.Net", "FtpDataStream");
