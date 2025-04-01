#pragma once
// IWYU pragma private; include "System/Net/Http/StreamContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
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
// Dependencies System.Net.Http.HttpContent, System.Threading.CancellationToken
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.StreamContent
class CORDL_TYPE StreamContent : public ::System::Net::Http::HttpContent {
public:
  // Declarations
  /// @brief Field bufferSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_bufferSize, put = __cordl_internal_set_bufferSize)) int32_t bufferSize;

  /// @brief Field cancellationToken, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field content, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::System::IO::Stream* content;

  /// @brief Field contentCopied, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_contentCopied, put = __cordl_internal_set_contentCopied)) bool contentCopied;

  /// @brief Field startPosition, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_startPosition, put = __cordl_internal_set_startPosition)) int64_t startPosition;

  /// @brief Method Dispose, addr 0x4215df4, size 0x4c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::Net::Http::StreamContent* New_ctor(::System::IO::Stream* content);

  static inline ::System::Net::Http::StreamContent* New_ctor(::System::IO::Stream* content, int32_t bufferSize);

  static inline ::System::Net::Http::StreamContent* New_ctor(::System::IO::Stream* content, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SerializeToStreamAsync, addr 0x4215e40, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method TryComputeLength, addr 0x4215f14, size 0x68, virtual true, abstract: false, final false
  inline bool TryComputeLength(::ByRef<int64_t> length);

  constexpr int32_t const& __cordl_internal_get_bufferSize() const;

  constexpr int32_t& __cordl_internal_get_bufferSize();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_content() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_content();

  constexpr bool const& __cordl_internal_get_contentCopied() const;

  constexpr bool& __cordl_internal_get_contentCopied();

  constexpr int64_t const& __cordl_internal_get_startPosition() const;

  constexpr int64_t& __cordl_internal_get_startPosition();

  constexpr void __cordl_internal_set_bufferSize(int32_t value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_content(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_contentCopied(bool value);

  constexpr void __cordl_internal_set_startPosition(int64_t value);

  /// @brief Method .ctor, addr 0x4215d08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* content);

  /// @brief Method .ctor, addr 0x4215d10, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* content, int32_t bufferSize);

  /// @brief Method .ctor, addr 0x4212398, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* content, ::System::Threading::CancellationToken cancellationToken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamContent(StreamContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamContent(StreamContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16700 };

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
static_assert(offsetof(::System::Net::Http::StreamContent, ___content) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::StreamContent, ___bufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::StreamContent, ___cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::StreamContent, ___startPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::StreamContent, ___contentCopied) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::StreamContent, 0x50>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::StreamContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::StreamContent*, "System.Net.Http", "StreamContent");
