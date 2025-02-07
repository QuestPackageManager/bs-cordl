#pragma once
// IWYU pragma private; include "System/Net/FileWebResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/Net/zzzz__ICloseEx_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileWebResponse)
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
struct CloseExState;
}
namespace System::Net {
class FileWebRequest;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FileWebResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FileWebResponse);
// Dependencies System.IO.FileAccess, System.Net.ICloseEx, System.Net.WebResponse, System.Runtime.Serialization.ISerializable
namespace System::Net {
// Is value type: false
// CS Name: System.Net.FileWebResponse
class CORDL_TYPE FileWebResponse : public ::System::Net::WebResponse {
public:
  // Declarations
  __declspec(property(get = get_Headers)) ::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_ResponseUri)) ::System::Uri* ResponseUri;

  /// @brief Field m_closed, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_closed, put = __cordl_internal_set_m_closed)) bool m_closed;

  /// @brief Field m_contentLength, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_contentLength, put = __cordl_internal_set_m_contentLength)) int64_t m_contentLength;

  /// @brief Field m_fileAccess, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_fileAccess, put = __cordl_internal_set_m_fileAccess)) ::System::IO::FileAccess m_fileAccess;

  /// @brief Field m_headers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_headers, put = __cordl_internal_set_m_headers)) ::System::Net::WebHeaderCollection* m_headers;

  /// @brief Field m_stream, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_stream, put = __cordl_internal_set_m_stream)) ::System::IO::Stream* m_stream;

  /// @brief Field m_uri, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_uri, put = __cordl_internal_set_m_uri)) ::System::Uri* m_uri;

  /// @brief Convert operator to "::System::Net::ICloseEx"
  constexpr operator ::System::Net::ICloseEx*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CheckDisposed, addr 0x44bcc94, size 0x7c, virtual false, abstract: false, final false
  inline void CheckDisposed();

  /// @brief Method Close, addr 0x44bcd28, size 0x98, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetObjectData, addr 0x44bcac4, size 0x1b8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetResponseStream, addr 0x44bcf2c, size 0x54, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetResponseStream();

  static inline ::System::Net::FileWebResponse* New_ctor(::System::Net::FileWebRequest* request, ::System::Uri* uri, ::System::IO::FileAccess access, bool asyncHint);

  static inline ::System::Net::FileWebResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Net.ICloseEx.CloseEx, addr 0x44bcdc0, size 0x16c, virtual true, abstract: false, final true
  inline void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x44bcab8, size 0xc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  constexpr bool const& __cordl_internal_get_m_closed() const;

  constexpr bool& __cordl_internal_get_m_closed();

  constexpr int64_t const& __cordl_internal_get_m_contentLength() const;

  constexpr int64_t& __cordl_internal_get_m_contentLength();

  constexpr ::System::IO::FileAccess const& __cordl_internal_get_m_fileAccess() const;

  constexpr ::System::IO::FileAccess& __cordl_internal_get_m_fileAccess();

  constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get_m_headers() const;

  constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get_m_headers();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_m_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_m_stream();

  constexpr ::System::Uri* const& __cordl_internal_get_m_uri() const;

  constexpr ::System::Uri*& __cordl_internal_get_m_uri();

  constexpr void __cordl_internal_set_m_closed(bool value);

  constexpr void __cordl_internal_set_m_contentLength(int64_t value);

  constexpr void __cordl_internal_set_m_fileAccess(::System::IO::FileAccess value);

  constexpr void __cordl_internal_set_m_headers(::System::Net::WebHeaderCollection* value);

  constexpr void __cordl_internal_set_m_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_m_uri(::System::Uri* value);

  /// @brief Method .ctor, addr 0x44bb944, size 0x2d0, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::FileWebRequest* request, ::System::Uri* uri, ::System::IO::FileAccess access, bool asyncHint);

  /// @brief Method .ctor, addr 0x44bc868, size 0x250, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Headers, addr 0x44bcc7c, size 0x18, virtual true, abstract: false, final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_ResponseUri, addr 0x44bcd10, size 0x18, virtual true, abstract: false, final false
  inline ::System::Uri* get_ResponseUri();

  /// @brief Convert to "::System::Net::ICloseEx"
  constexpr ::System::Net::ICloseEx* i___System__Net__ICloseEx() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileWebResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileWebResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileWebResponse(FileWebResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileWebResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileWebResponse(FileWebResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9657 };

  /// @brief Field m_closed, offset: 0x19, size: 0x1, def value: None
  bool ___m_closed;

  /// @brief Field m_contentLength, offset: 0x20, size: 0x8, def value: None
  int64_t ___m_contentLength;

  /// @brief Field m_fileAccess, offset: 0x28, size: 0x4, def value: None
  ::System::IO::FileAccess ___m_fileAccess;

  /// @brief Field m_headers, offset: 0x30, size: 0x8, def value: None
  ::System::Net::WebHeaderCollection* ___m_headers;

  /// @brief Field m_stream, offset: 0x38, size: 0x8, def value: None
  ::System::IO::Stream* ___m_stream;

  /// @brief Field m_uri, offset: 0x40, size: 0x8, def value: None
  ::System::Uri* ___m_uri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::FileWebResponse, ___m_closed) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebResponse, ___m_contentLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebResponse, ___m_fileAccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebResponse, ___m_headers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebResponse, ___m_stream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::FileWebResponse, ___m_uri) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::FileWebResponse, 0x48>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FileWebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebResponse*, "System.Net", "FileWebResponse");
