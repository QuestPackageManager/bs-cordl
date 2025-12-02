#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultipartContent)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
struct MultipartContent__SerializeToStreamAsync_d__8;
}
namespace System::Net {
class TransportContext;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Net::Http {
class MultipartContent;
}
namespace System::Net::Http {
struct MultipartContent__SerializeToStreamAsync_d__8;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::MultipartContent);
MARK_VAL_T(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
namespace System::Net::Http {
// Is value type: true
// CS Name: System.Net.Http.MultipartContent/<SerializeToStreamAsync>d__8
struct CORDL_TYPE MultipartContent__SerializeToStreamAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5ec4518, size 0xd58, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5ec5270, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipartContent__SerializeToStreamAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::MultipartContent*", modifiers: "",
  // def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Net::TransportContext*", modifiers: "",
  // def_value: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "_c_5__4", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr MultipartContent__SerializeToStreamAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                          ::System::Net::Http::MultipartContent* __4__this, ::System::IO::Stream* stream, ::System::Net::TransportContext* context,
                                                          ::System::Text::StringBuilder* _sb_5__2, int32_t _i_5__3, ::System::Net::Http::HttpContent* _c_5__4,
                                                          ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20146 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::MultipartContent* __4__this;

  /// @brief Field stream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* stream;

  /// @brief Field context, offset: 0x30, size: 0x8, def value: None
  ::System::Net::TransportContext* context;

  /// @brief Field <sb>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Text::StringBuilder* _sb_5__2;

  /// @brief Field <i>5__3, offset: 0x40, size: 0x4, def value: None
  int32_t _i_5__3;

  /// @brief Field <c>5__4, offset: 0x48, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* _c_5__4;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, context) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, _sb_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, _i_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, _c_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, 0x60>, "Size mismatch!");

} // namespace System::Net::Http
// Dependencies System.Net.Http.HttpContent
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.MultipartContent
class CORDL_TYPE MultipartContent : public ::System::Net::Http::HttpContent {
public:
  // Declarations
  using _SerializeToStreamAsync_d__8 = ::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8;

  /// @brief Field boundary, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_boundary, put = __cordl_internal_set_boundary)) ::StringW boundary;

  /// @brief Field nested_content, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nested_content, put = __cordl_internal_set_nested_content)) ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>* nested_content;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x5ec3a78, size 0x150, virtual true, abstract: false, final false
  inline void Add(::System::Net::Http::HttpContent* content);

  /// @brief Method Dispose, addr 0x5ec3bc8, size 0x15c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetEnumerator, addr 0x5ec4408, size 0x88, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Net::Http::HttpContent*>* GetEnumerator();

  /// @brief Method IsValidRFC2049, addr 0x5ec391c, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsValidRFC2049(::StringW s);

  static inline ::System::Net::Http::MultipartContent* New_ctor(::StringW subtype);

  static inline ::System::Net::Http::MultipartContent* New_ctor(::StringW subtype, ::StringW boundary);

  /// @brief Method SerializeToStreamAsync, addr 0x5ec3d24, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5ec4490, size 0x88, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryComputeLength, addr 0x5ec3df0, size 0x618, virtual true, abstract: false, final false
  inline bool TryComputeLength(::ByRef<int64_t> length);

  constexpr ::StringW const& __cordl_internal_get_boundary() const;

  constexpr ::StringW& __cordl_internal_get_boundary();

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>* const& __cordl_internal_get_nested_content() const;

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>*& __cordl_internal_get_nested_content();

  constexpr void __cordl_internal_set_boundary(::StringW value);

  constexpr void __cordl_internal_set_nested_content(::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>* value);

  /// @brief Method .ctor, addr 0x5ec3554, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW subtype);

  /// @brief Method .ctor, addr 0x5ec360c, size 0x310, virtual false, abstract: false, final false
  inline void _ctor(::StringW subtype, ::StringW boundary);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Net::Http::HttpContent*>* i___System__Collections__Generic__IEnumerable_1___System__Net__Http__HttpContent__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipartContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultipartContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultipartContent(MultipartContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultipartContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultipartContent(MultipartContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20147 };

  /// @brief Field nested_content, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::HttpContent*>* ___nested_content;

  /// @brief Field boundary, offset: 0x38, size: 0x8, def value: None
  ::StringW ___boundary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::MultipartContent, ___nested_content) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::MultipartContent, ___boundary) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::MultipartContent, 0x40>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::MultipartContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::MultipartContent*, "System.Net.Http", "MultipartContent");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::MultipartContent__SerializeToStreamAsync_d__8, "System.Net.Http", "MultipartContent/<SerializeToStreamAsync>d__8");
