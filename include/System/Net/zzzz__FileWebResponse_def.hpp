#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileWebResponse)
namespace System::Net {
class WebHeaderCollection;
}
namespace System::IO {
struct FileAccess;
}
namespace System {
class Uri;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
class ICloseEx;
}
namespace System::Net {
class FileWebRequest;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Net {
struct CloseExState;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Net {
class FileWebResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FileWebResponse);
// Type: System.Net::FileWebResponse
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3559)), TypeDefinitionIndex(TypeDefinitionIndex(9097))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9137))
// CS Name: ::System.Net::FileWebResponse*
class CORDL_TYPE FileWebResponse : public ::System::Net::WebResponse {
public:
  // Declarations
  /// @brief Field m_closed, offset 0x19, size 0x1
  __declspec(property(get = __get_m_closed, put = __set_m_closed)) bool m_closed;

  /// @brief Field m_contentLength, offset 0x20, size 0x8
  __declspec(property(get = __get_m_contentLength, put = __set_m_contentLength)) int64_t m_contentLength;

  /// @brief Field m_fileAccess, offset 0x28, size 0x4
  __declspec(property(get = __get_m_fileAccess, put = __set_m_fileAccess))::System::IO::FileAccess m_fileAccess;

  /// @brief Field m_headers, offset 0x30, size 0x8
  __declspec(property(get = __get_m_headers, put = __set_m_headers))::System::Net::WebHeaderCollection* m_headers;

  /// @brief Field m_stream, offset 0x38, size 0x8
  __declspec(property(get = __get_m_stream, put = __set_m_stream))::System::IO::Stream* m_stream;

  /// @brief Field m_uri, offset 0x40, size 0x8
  __declspec(property(get = __get_m_uri, put = __set_m_uri))::System::Uri* m_uri;

  __declspec(property(get = get_Headers))::System::Net::WebHeaderCollection* Headers;

  __declspec(property(get = get_ResponseUri))::System::Uri* ResponseUri;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Net::ICloseEx"
  constexpr operator ::System::Net::ICloseEx*() noexcept;

  constexpr bool& __get_m_closed();

  constexpr bool const& __get_m_closed() const;

  constexpr void __set_m_closed(bool value);

  constexpr int64_t& __get_m_contentLength();

  constexpr int64_t const& __get_m_contentLength() const;

  constexpr void __set_m_contentLength(int64_t value);

  constexpr ::System::IO::FileAccess& __get_m_fileAccess();

  constexpr ::System::IO::FileAccess const& __get_m_fileAccess() const;

  constexpr void __set_m_fileAccess(::System::IO::FileAccess value);

  constexpr ::System::Net::WebHeaderCollection*& __get_m_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& __get_m_headers() const;

  constexpr void __set_m_headers(::System::Net::WebHeaderCollection* value);

  constexpr ::System::IO::Stream*& __get_m_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_m_stream() const;

  constexpr void __set_m_stream(::System::IO::Stream* value);

  constexpr ::System::Uri*& __get_m_uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_m_uri() const;

  constexpr void __set_m_uri(::System::Uri* value);

  static inline ::System::Net::FileWebResponse* New_ctor(::System::Net::FileWebRequest* request, ::System::Uri* uri, ::System::IO::FileAccess access, bool asyncHint);

  /// @brief Method .ctor addr 0x29b559c size 0x2cc virtual false final false
  inline void _ctor(::System::Net::FileWebRequest* request, ::System::Uri* uri, ::System::IO::FileAccess access, bool asyncHint);

  static inline ::System::Net::FileWebResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor addr 0x29b64fc size 0x234 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x29b6730 size 0xc virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetObjectData addr 0x29b673c size 0x190 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method get_Headers addr 0x29b68cc size 0x18 virtual true final false
  inline ::System::Net::WebHeaderCollection* get_Headers();

  /// @brief Method get_ResponseUri addr 0x29b6968 size 0x18 virtual true final false
  inline ::System::Uri* get_ResponseUri();

  /// @brief Method CheckDisposed addr 0x29b68e4 size 0x84 virtual false final false
  inline void CheckDisposed();

  /// @brief Method Close addr 0x29b6980 size 0x98 virtual true final false
  inline void Close();

  /// @brief Method System.Net.ICloseEx.CloseEx addr 0x29b6a18 size 0x16c virtual true final true
  inline void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState);

  /// @brief Method GetResponseStream addr 0x29b6b84 size 0x54 virtual true final false
  inline ::System::IO::Stream* GetResponseStream();

  // Ctor Parameters [CppParam { name: "", ty: "FileWebResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileWebResponse(FileWebResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileWebResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileWebResponse(FileWebResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileWebResponse();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Net::FileWebResponse, 0x48>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::FileWebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebResponse*, "System.Net", "FileWebResponse");
