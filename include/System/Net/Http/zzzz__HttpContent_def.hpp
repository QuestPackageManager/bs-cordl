#pragma once
// IWYU pragma private; include "System/Net/Http/HttpContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __HttpContent__FixedMemoryStream;
}
namespace System::Net::Http {
struct __HttpContent___LoadIntoBufferAsync_d__17;
}
namespace System::Net::Http {
struct __HttpContent___ReadAsStringAsync_d__20;
}
namespace System::Net {
class TransportContext;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
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
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class __HttpContent__FixedMemoryStream;
}
namespace System::Net::Http {
struct __HttpContent___LoadIntoBufferAsync_d__17;
}
namespace System::Net::Http {
struct __HttpContent___ReadAsStringAsync_d__20;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpContent);
MARK_REF_PTR_T(::System::Net::Http::__HttpContent__FixedMemoryStream);
MARK_VAL_T(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17);
MARK_VAL_T(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20);
// Type: ::FixedMemoryStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::HttpContent::FixedMemoryStream*
class CORDL_TYPE __HttpContent__FixedMemoryStream : public ::System::IO::MemoryStream {
public:
  // Declarations
  /// @brief Field maxSize, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_maxSize, put = __cordl_internal_set_maxSize)) int64_t maxSize;

  /// @brief Method CheckOverflow, addr 0x41b65f4, size 0xa8, virtual false, abstract: false, final false
  inline void CheckOverflow(int32_t count);

  static inline ::System::Net::Http::__HttpContent__FixedMemoryStream* New_ctor(int64_t maxSize);

  /// @brief Method Write, addr 0x41b6734, size 0x48, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x41b6704, size 0x30, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t value);

  constexpr int64_t const& __cordl_internal_get_maxSize() const;

  constexpr int64_t& __cordl_internal_get_maxSize();

  constexpr void __cordl_internal_set_maxSize(int64_t value);

  /// @brief Method .ctor, addr 0x41b639c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int64_t maxSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpContent__FixedMemoryStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HttpContent__FixedMemoryStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HttpContent__FixedMemoryStream(__HttpContent__FixedMemoryStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HttpContent__FixedMemoryStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HttpContent__FixedMemoryStream(__HttpContent__FixedMemoryStream const&) = delete;

  /// @brief Field maxSize, offset: 0x50, size: 0x8, def value: None
  int64_t ___maxSize;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16643 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpContent__FixedMemoryStream, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent__FixedMemoryStream, ___maxSize) == 0x50, "Offset mismatch!");

} // namespace System::Net::Http
// Type: ::<LoadIntoBufferAsync>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: true
// CS Name: ::HttpContent::<LoadIntoBufferAsync>d__17
struct CORDL_TYPE __HttpContent___LoadIntoBufferAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x41b677c, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x41b6a20, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpContent___LoadIntoBufferAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value:
  // None }, CppParam { name: "maxBufferSize", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __HttpContent___LoadIntoBufferAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::Http::HttpContent* __4__this,
                                                      int64_t maxBufferSize, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* __4__this;

  /// @brief Field maxBufferSize, offset: 0x28, size: 0x8, def value: None
  int64_t maxBufferSize;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16644 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, maxBufferSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, __u__1) == 0x30, "Offset mismatch!");

} // namespace System::Net::Http
// Type: ::<ReadAsStringAsync>d__20
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: true
// CS Name: ::HttpContent::<ReadAsStringAsync>d__20
struct CORDL_TYPE __HttpContent___ReadAsStringAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x41b6a88, size 0x3bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x41b6fb8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpContent___ReadAsStringAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __HttpContent___ReadAsStringAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                    ::System::Net::Http::HttpContent* __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16645 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, __u__1) == 0x28, "Offset mismatch!");

} // namespace System::Net::Http
// Type: System.Net.Http::HttpContent
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::System.Net.Http::HttpContent*
class CORDL_TYPE HttpContent : public ::System::Object {
public:
  // Declarations
  using FixedMemoryStream = ::System::Net::Http::__HttpContent__FixedMemoryStream;

  using _LoadIntoBufferAsync_d__17 = ::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17;

  using _ReadAsStringAsync_d__20 = ::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20;

  __declspec(property(get = get_Headers)) ::System::Net::Http::Headers::HttpContentHeaders* Headers;

  __declspec(property(get = get_LoadedBufferLength)) ::System::Nullable_1<int64_t> LoadedBufferLength;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::System::Net::Http::__HttpContent__FixedMemoryStream* buffer;

  /// @brief Field disposed, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field headers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers)) ::System::Net::Http::Headers::HttpContentHeaders* headers;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CopyToAsync, addr 0x41b3f74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* stream);

  /// @brief Method CopyToAsync, addr 0x41b62c8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method CreateFixedMemoryStream, addr 0x41b6340, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Net::Http::__HttpContent__FixedMemoryStream* CreateFixedMemoryStream(int64_t maxBufferSize);

  /// @brief Method Dispose, addr 0x41b63c4, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x41b63d4, size 0x2c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetEncodingFromBuffer, addr 0x41b6408, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncodingFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t length, ByRef<int32_t> preambleLength);

  /// @brief Method LoadIntoBufferAsync, addr 0x41b6400, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync();

  /// @brief Method LoadIntoBufferAsync, addr 0x41b3ea4, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync(int64_t maxBufferSize);

  static inline ::System::Net::Http::HttpContent* New_ctor();

  /// @brief Method ReadAsStringAsync, addr 0x41b6080, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAsStringAsync();

  /// @brief Method SerializeToStreamAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method StartsWith, addr 0x41b6580, size 0x74, virtual false, abstract: false, final false
  static inline int32_t StartsWith(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method TryComputeLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryComputeLength(ByRef<int64_t> length);

  constexpr ::System::Net::Http::__HttpContent__FixedMemoryStream*& __cordl_internal_get_buffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::__HttpContent__FixedMemoryStream*> const& __cordl_internal_get_buffer() const;

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::System::Net::Http::Headers::HttpContentHeaders*& __cordl_internal_get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpContentHeaders*> const& __cordl_internal_get_headers() const;

  constexpr void __cordl_internal_set_buffer(::System::Net::Http::__HttpContent__FixedMemoryStream* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_headers(::System::Net::Http::Headers::HttpContentHeaders* value);

  /// @brief Method .ctor, addr 0x41b467c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Headers, addr 0x41b1d70, size 0x64, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::HttpContentHeaders* get_Headers();

  /// @brief Method get_LoadedBufferLength, addr 0x41b624c, size 0x7c, virtual false, abstract: false, final false
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

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::__HttpContent__FixedMemoryStream* ___buffer;

  /// @brief Field disposed, offset: 0x18, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field headers, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpContentHeaders* ___headers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpContent, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent, ___disposed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent, ___headers) == 0x20, "Offset mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpContent*, "System.Net.Http", "HttpContent");
NEED_NO_BOX(::System::Net::Http::__HttpContent__FixedMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpContent__FixedMemoryStream*, "System.Net.Http", "HttpContent/FixedMemoryStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, "System.Net.Http", "HttpContent/<LoadIntoBufferAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, "System.Net.Http", "HttpContent/<ReadAsStringAsync>d__20");
