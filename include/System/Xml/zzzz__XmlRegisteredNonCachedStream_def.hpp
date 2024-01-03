#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlRegisteredNonCachedStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlDownloadManager;
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
namespace System::Xml {
class XmlRegisteredNonCachedStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlRegisteredNonCachedStream);
// Type: System.Xml::XmlRegisteredNonCachedStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11553))
// CS Name: ::System.Xml::XmlRegisteredNonCachedStream*
class CORDL_TYPE XmlRegisteredNonCachedStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field stream, offset 0x28, size 0x8
  __declspec(property(get = __get_stream, put = __set_stream))::System::IO::Stream* stream;

  /// @brief Field downloadManager, offset 0x30, size 0x8
  __declspec(property(get = __get_downloadManager, put = __set_downloadManager))::System::Xml::XmlDownloadManager* downloadManager;

  /// @brief Field host, offset 0x38, size 0x8
  __declspec(property(get = __get_host, put = __set_host))::StringW host;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::IO::Stream*& __get_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_stream() const;

  constexpr void __set_stream(::System::IO::Stream* value);

  constexpr ::System::Xml::XmlDownloadManager*& __get_downloadManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDownloadManager*> const& __get_downloadManager() const;

  constexpr void __set_downloadManager(::System::Xml::XmlDownloadManager* value);

  constexpr ::StringW& __get_host();

  constexpr ::StringW const& __get_host() const;

  constexpr void __set_host(::StringW value);

  static inline ::System::Xml::XmlRegisteredNonCachedStream* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlDownloadManager* downloadManager, ::StringW host);

  /// @brief Method .ctor, addr 0x28a424c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlDownloadManager* downloadManager, ::StringW host);

  /// @brief Method Finalize, addr 0x28a5094, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Dispose, addr 0x28a5138, size 0x138, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method BeginRead, addr 0x28a5270, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginWrite, addr 0x28a5294, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method EndRead, addr 0x28a52b8, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x28a52dc, size 0x24, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Flush, addr 0x28a5300, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method Read, addr 0x28a5324, size 0x24, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x28a5348, size 0x24, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Seek, addr 0x28a536c, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x28a5390, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x28a53b4, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x28a53d8, size 0x24, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  /// @brief Method get_CanRead, addr 0x28a53fc, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x28a541c, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x28a543c, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x28a545c, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x28a547c, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x28a54a0, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  // Ctor Parameters [CppParam { name: "", ty: "XmlRegisteredNonCachedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlRegisteredNonCachedStream(XmlRegisteredNonCachedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlRegisteredNonCachedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlRegisteredNonCachedStream(XmlRegisteredNonCachedStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlRegisteredNonCachedStream();

public:
  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field downloadManager, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlDownloadManager* ___downloadManager;

  /// @brief Field host, offset: 0x38, size: 0x8, def value: None
  ::StringW ___host;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlRegisteredNonCachedStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlRegisteredNonCachedStream, ___stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlRegisteredNonCachedStream, ___downloadManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlRegisteredNonCachedStream, ___host) == 0x38, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlRegisteredNonCachedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlRegisteredNonCachedStream*, "System.Xml", "XmlRegisteredNonCachedStream");
