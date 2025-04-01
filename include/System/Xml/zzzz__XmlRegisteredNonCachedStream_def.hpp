#pragma once
// IWYU pragma private; include "System/Xml/XmlRegisteredNonCachedStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
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
// Dependencies System.IO.Stream
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlRegisteredNonCachedStream
class CORDL_TYPE XmlRegisteredNonCachedStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field downloadManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_downloadManager, put = __cordl_internal_set_downloadManager)) ::System::Xml::XmlDownloadManager* downloadManager;

  /// @brief Field host, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_host, put = __cordl_internal_set_host)) ::StringW host;

  /// @brief Field stream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Method BeginRead, addr 0x435a508, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginWrite, addr 0x435a52c, size 0x24, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method Dispose, addr 0x435a3d0, size 0x138, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndRead, addr 0x435a550, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndRead(::System::IAsyncResult* asyncResult);

  /// @brief Method EndWrite, addr 0x435a574, size 0x24, virtual true, abstract: false, final false
  inline void EndWrite(::System::IAsyncResult* asyncResult);

  /// @brief Method Finalize, addr 0x435a32c, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Flush, addr 0x435a598, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::System::Xml::XmlRegisteredNonCachedStream* New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlDownloadManager* downloadManager, ::StringW host);

  /// @brief Method Read, addr 0x435a5bc, size 0x24, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte, addr 0x435a5e0, size 0x24, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Seek, addr 0x435a604, size 0x24, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x435a628, size 0x24, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x435a64c, size 0x24, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x435a670, size 0x24, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  constexpr ::System::Xml::XmlDownloadManager* const& __cordl_internal_get_downloadManager() const;

  constexpr ::System::Xml::XmlDownloadManager*& __cordl_internal_get_downloadManager();

  constexpr ::StringW const& __cordl_internal_get_host() const;

  constexpr ::StringW& __cordl_internal_get_host();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr void __cordl_internal_set_downloadManager(::System::Xml::XmlDownloadManager* value);

  constexpr void __cordl_internal_set_host(::StringW value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x43594c4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Xml::XmlDownloadManager* downloadManager, ::StringW host);

  /// @brief Method get_CanRead, addr 0x435a694, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x435a6b4, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x435a6d4, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x435a6f4, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x435a714, size 0x24, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x435a738, size 0x24, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlRegisteredNonCachedStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlRegisteredNonCachedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlRegisteredNonCachedStream(XmlRegisteredNonCachedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlRegisteredNonCachedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlRegisteredNonCachedStream(XmlRegisteredNonCachedStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7350 };

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field downloadManager, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlDownloadManager* ___downloadManager;

  /// @brief Field host, offset: 0x38, size: 0x8, def value: None
  ::StringW ___host;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlRegisteredNonCachedStream, ___stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlRegisteredNonCachedStream, ___downloadManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlRegisteredNonCachedStream, ___host) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlRegisteredNonCachedStream, 0x40>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlRegisteredNonCachedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlRegisteredNonCachedStream*, "System.Xml", "XmlRegisteredNonCachedStream");
