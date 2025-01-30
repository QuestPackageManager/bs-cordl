#pragma once
// IWYU pragma private; include "System/Net/Http/HttpContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContent)
namespace System::IO {
class Stream;
}
namespace System::Net::Http::Headers {
class HttpContentHeaders;
}
namespace System::Net::Http {
class HttpContent_FixedMemoryStream;
}
namespace System::Net::Http {
struct HttpContent__LoadIntoBufferAsync_d__17;
}
namespace System::Net::Http {
struct HttpContent__ReadAsStringAsync_d__20;
}
namespace System::Net {
class TransportContext;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class HttpContent_FixedMemoryStream;
}
namespace System::Net::Http {
struct HttpContent__LoadIntoBufferAsync_d__17;
}
namespace System::Net::Http {
struct HttpContent__ReadAsStringAsync_d__20;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpContent);
MARK_REF_PTR_T(::System::Net::Http::HttpContent_FixedMemoryStream);
MARK_VAL_T(::System::Net::Http::HttpContent__LoadIntoBufferAsync_d__17);
MARK_VAL_T(::System::Net::Http::HttpContent__ReadAsStringAsync_d__20);
// Dependencies System.IO.MemoryStream
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.HttpContent/FixedMemoryStream
class CORDL_TYPE HttpContent_FixedMemoryStream : public ::System::IO::MemoryStream {
public:
  // Declarations
  /// @brief Field maxSize, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_maxSize, put = __cordl_internal_set_maxSize)) int64_t maxSize;

  /// @brief Method CheckOverflow, addr 0x421ab6c, size 0xa8, virtual false, abstract: false, final false
  inline void CheckOverflow(int32_t count);

  static inline ::System::Net::Http::HttpContent_FixedMemoryStream* New_ctor(int64_t maxSize);

  /// @brief Method Write, addr 0x421acac, size 0x48, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x421ac7c, size 0x30, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  constexpr int64_t const& __cordl_internal_get_maxSize() const;

  constexpr int64_t& __cordl_internal_get_maxSize();

  constexpr void __cordl_internal_set_maxSize(int64_t value);

  /// @brief Method .ctor, addr 0x421a914, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int64_t maxSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpContent_FixedMemoryStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpContent_FixedMemoryStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpContent_FixedMemoryStream(HttpContent_FixedMemoryStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpContent_FixedMemoryStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpContent_FixedMemoryStream(HttpContent_FixedMemoryStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16684 };

  /// @brief Field maxSize, offset: 0x50, size: 0x8, def value: None
  int64_t ___maxSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpContent_FixedMemoryStream, ___maxSize) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpContent_FixedMemoryStream, 0x58>, "Size mismatch!");

} // namespace System::Net::Http
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::Net::Http {
// Is value type: true
// CS Name: System.Net.Http.HttpContent/<LoadIntoBufferAsync>d__17
struct CORDL_TYPE HttpContent__LoadIntoBufferAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x421acf4, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x421af98, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpContent__LoadIntoBufferAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value:
  // None }, CppParam { name: "maxBufferSize", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr HttpContent__LoadIntoBufferAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::Http::HttpContent* __4__this,
                                                   int64_t maxBufferSize, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16685 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* __4__this;

  /// @brief Field maxBufferSize, offset: 0x28, size: 0x8, def value: None
  int64_t maxBufferSize;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpContent__LoadIntoBufferAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent__LoadIntoBufferAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent__LoadIntoBufferAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent__LoadIntoBufferAsync_d__17, maxBufferSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent__LoadIntoBufferAsync_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpContent__LoadIntoBufferAsync_d__17, 0x40>, "Size mismatch!");

} // namespace System::Net::Http
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::Net::Http {
// Is value type: true
// CS Name: System.Net.Http.HttpContent/<ReadAsStringAsync>d__20
struct CORDL_TYPE HttpContent__ReadAsStringAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x421b000, size 0x3bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x421b530, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpContent__ReadAsStringAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr HttpContent__ReadAsStringAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::System::Net::Http::HttpContent* __4__this,
                                                 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16686 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpContent__ReadAsStringAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent__ReadAsStringAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent__ReadAsStringAsync_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent__ReadAsStringAsync_d__20, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpContent__ReadAsStringAsync_d__20, 0x38>, "Size mismatch!");

} // namespace System::Net::Http
// Dependencies System.IDisposable, System.Object
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.HttpContent
class CORDL_TYPE HttpContent : public ::System::Object {
public:
  // Declarations
  using FixedMemoryStream = ::System::Net::Http::HttpContent_FixedMemoryStream;

  using _LoadIntoBufferAsync_d__17 = ::System::Net::Http::HttpContent__LoadIntoBufferAsync_d__17;

  using _ReadAsStringAsync_d__20 = ::System::Net::Http::HttpContent__ReadAsStringAsync_d__20;

  __declspec(property(get = get_Headers)) ::System::Net::Http::Headers::HttpContentHeaders* Headers;

  __declspec(property(get = get_LoadedBufferLength)) ::System::Nullable_1<int64_t> LoadedBufferLength;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::System::Net::Http::HttpContent_FixedMemoryStream* buffer;

  /// @brief Field disposed, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field headers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers)) ::System::Net::Http::Headers::HttpContentHeaders* headers;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CopyToAsync, addr 0x42184ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* stream);

  /// @brief Method CopyToAsync, addr 0x421a840, size 0x78, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method CreateFixedMemoryStream, addr 0x421a8b8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Net::Http::HttpContent_FixedMemoryStream* CreateFixedMemoryStream(int64_t maxBufferSize);

  /// @brief Method Dispose, addr 0x421a93c, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x421a94c, size 0x2c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetEncodingFromBuffer, addr 0x421a980, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncodingFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t length, ::ByRef<int32_t> preambleLength);

  /// @brief Method LoadIntoBufferAsync, addr 0x421a978, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync();

  /// @brief Method LoadIntoBufferAsync, addr 0x421841c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync(int64_t maxBufferSize);

  static inline ::System::Net::Http::HttpContent* New_ctor();

  /// @brief Method ReadAsStringAsync, addr 0x421a5f8, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAsStringAsync();

  /// @brief Method SerializeToStreamAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method StartsWith, addr 0x421aaf8, size 0x74, virtual false, abstract: false, final false
  static inline int32_t StartsWith(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method TryComputeLength, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryComputeLength(::ByRef<int64_t> length);

  constexpr ::System::Net::Http::HttpContent_FixedMemoryStream* const& __cordl_internal_get_buffer() const;

  constexpr ::System::Net::Http::HttpContent_FixedMemoryStream*& __cordl_internal_get_buffer();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::System::Net::Http::Headers::HttpContentHeaders* const& __cordl_internal_get_headers() const;

  constexpr ::System::Net::Http::Headers::HttpContentHeaders*& __cordl_internal_get_headers();

  constexpr void __cordl_internal_set_buffer(::System::Net::Http::HttpContent_FixedMemoryStream* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_headers(::System::Net::Http::Headers::HttpContentHeaders* value);

  /// @brief Method .ctor, addr 0x4218bf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Headers, addr 0x42162e8, size 0x64, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::HttpContentHeaders* get_Headers();

  /// @brief Method get_LoadedBufferLength, addr 0x421a7c4, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int64_t> get_LoadedBufferLength();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpContent(HttpContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpContent(HttpContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16687 };

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::HttpContent_FixedMemoryStream* ___buffer;

  /// @brief Field disposed, offset: 0x18, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field headers, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpContentHeaders* ___headers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpContent, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent, ___disposed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent, ___headers) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpContent, 0x28>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpContent*, "System.Net.Http", "HttpContent");
NEED_NO_BOX(::System::Net::Http::HttpContent_FixedMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpContent_FixedMemoryStream*, "System.Net.Http", "HttpContent/FixedMemoryStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpContent__LoadIntoBufferAsync_d__17, "System.Net.Http", "HttpContent/<LoadIntoBufferAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpContent__ReadAsStringAsync_d__20, "System.Net.Http", "HttpContent/<ReadAsStringAsync>d__20");
