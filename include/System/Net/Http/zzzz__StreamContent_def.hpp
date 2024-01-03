#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamContent)
namespace System::IO {
class Stream;
}
namespace System::Net {
class TransportContext;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net::Http {
class StreamContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::StreamContent);
// Type: System.Net.Http::StreamContent
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(14649))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14656))
// CS Name: ::System.Net.Http::StreamContent*
class CORDL_TYPE StreamContent : public ::System::Net::Http::HttpContent {
public:
  // Declarations
  /// @brief Field content, offset 0x28, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::System::IO::Stream* content;

  /// @brief Field bufferSize, offset 0x30, size 0x4
  __declspec(property(get = __get_bufferSize, put = __set_bufferSize)) int32_t bufferSize;

  /// @brief Field cancellationToken, offset 0x38, size 0x8
  __declspec(property(get = __get_cancellationToken, put = __set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Field startPosition, offset 0x40, size 0x8
  __declspec(property(get = __get_startPosition, put = __set_startPosition)) int64_t startPosition;

  /// @brief Field contentCopied, offset 0x48, size 0x1
  __declspec(property(get = __get_contentCopied, put = __set_contentCopied)) bool contentCopied;

  constexpr ::System::IO::Stream*& __get_content();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_content() const;

  constexpr void __set_content(::System::IO::Stream* value);

  constexpr int32_t& __get_bufferSize();

  constexpr int32_t const& __get_bufferSize() const;

  constexpr void __set_bufferSize(int32_t value);

  constexpr ::System::Threading::CancellationToken& __get_cancellationToken();

  constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

  constexpr void __set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr int64_t& __get_startPosition();

  constexpr int64_t const& __get_startPosition() const;

  constexpr void __set_startPosition(int64_t value);

  constexpr bool& __get_contentCopied();

  constexpr bool const& __get_contentCopied() const;

  constexpr void __set_contentCopied(bool value);

  static inline ::System::Net::Http::StreamContent* New_ctor(::System::IO::Stream* content);

  /// @brief Method .ctor, addr 0x28343ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* content);

  static inline ::System::Net::Http::StreamContent* New_ctor(::System::IO::Stream* content, int32_t bufferSize);

  /// @brief Method .ctor, addr 0x28343f4, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* content, int32_t bufferSize);

  static inline ::System::Net::Http::StreamContent* New_ctor(::System::IO::Stream* content, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x2830af4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* content, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x28344e0, size 0x4c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method SerializeToStreamAsync, addr 0x283452c, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method TryComputeLength, addr 0x2834604, size 0x68, virtual true, abstract: false, final false
  inline bool TryComputeLength(ByRef<int64_t> length);

  // Ctor Parameters [CppParam { name: "", ty: "StreamContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamContent(StreamContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamContent(StreamContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamContent();

public:
  /// @brief Field content, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___content;

  /// @brief Field bufferSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___bufferSize;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field startPosition, offset: 0x40, size: 0x8, def value: None
  int64_t ___startPosition;

  /// @brief Field contentCopied, offset: 0x48, size: 0x1, def value: None
  bool ___contentCopied;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::StreamContent, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::StreamContent, ___content) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::StreamContent, ___bufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::StreamContent, ___cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::StreamContent, ___startPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::StreamContent, ___contentCopied) == 0x48, "Offset mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::StreamContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::StreamContent*, "System.Net.Http", "StreamContent");
