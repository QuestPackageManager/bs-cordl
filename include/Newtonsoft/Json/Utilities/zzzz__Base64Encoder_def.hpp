#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/Base64Encoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Base64Encoder)
namespace Newtonsoft::Json::Utilities {
struct __Base64Encoder___EncodeAsync_d__13;
}
namespace System::IO {
class TextWriter;
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
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class Base64Encoder;
}
namespace Newtonsoft::Json::Utilities {
struct __Base64Encoder___EncodeAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::Base64Encoder);
MARK_VAL_T(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13);
// Type: ::<EncodeAsync>d__13
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: ::Base64Encoder::<EncodeAsync>d__13
struct CORDL_TYPE __Base64Encoder___EncodeAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2a06040, size 0x384, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2a063c4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Base64Encoder___EncodeAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Utilities::Base64Encoder*", modifiers: "",
  // def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "_num4_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_length_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __Base64Encoder___EncodeAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::Utilities::Base64Encoder* __4__this,
                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, ::System::Threading::CancellationToken cancellationToken, int32_t _num4_5__2,
                                                int32_t _length_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::Base64Encoder* __4__this;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field index, offset: 0x30, size: 0x4, def value: None
  int32_t index;

  /// @brief Field count, offset: 0x34, size: 0x4, def value: None
  int32_t count;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <num4>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t _num4_5__2;

  /// @brief Field <length>5__3, offset: 0x44, size: 0x4, def value: None
  int32_t _length_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, 0x58>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, index) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, _num4_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, _length_5__3) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, __u__1) == 0x48, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::Base64Encoder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::Base64Encoder*
class CORDL_TYPE Base64Encoder : public ::System::Object {
public:
  // Declarations
  using _EncodeAsync_d__13 = ::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13;

  /// @brief Field _charsLine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__charsLine, put = __cordl_internal_set__charsLine))::ArrayW<char16_t, ::Array<char16_t>*> _charsLine;

  /// @brief Field _leftOverBytes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftOverBytes, put = __cordl_internal_set__leftOverBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> _leftOverBytes;

  /// @brief Field _leftOverBytesCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__leftOverBytesCount, put = __cordl_internal_set__leftOverBytesCount)) int32_t _leftOverBytesCount;

  /// @brief Field _writer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__writer, put = __cordl_internal_set__writer))::System::IO::TextWriter* _writer;

  /// @brief Method Encode, addr 0x2a05978, size 0x198, virtual false, abstract: false, final false
  inline void Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method EncodeAsync, addr 0x2a05db0, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* EncodeAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Flush, addr 0x2a05cf8, size 0xb8, virtual false, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushAsync, addr 0x2a05f34, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FulfillFromLeftover, addr 0x2a05b10, size 0xa0, virtual false, abstract: false, final false
  inline bool FulfillFromLeftover(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, ByRef<int32_t> count);

  static inline ::Newtonsoft::Json::Utilities::Base64Encoder* New_ctor(::System::IO::TextWriter* writer);

  /// @brief Method StoreLeftOverBytes, addr 0x2a05bd4, size 0x124, virtual false, abstract: false, final false
  inline void StoreLeftOverBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, ByRef<int32_t> count);

  /// @brief Method ValidateEncode, addr 0x2a058a8, size 0xd0, virtual false, abstract: false, final false
  inline void ValidateEncode(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteChars, addr 0x2a05bb0, size 0x24, virtual false, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method WriteCharsAsync, addr 0x2a05eac, size 0x88, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteCharsAsync(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__charsLine() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__charsLine();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__leftOverBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__leftOverBytes();

  constexpr int32_t const& __cordl_internal_get__leftOverBytesCount() const;

  constexpr int32_t& __cordl_internal_get__leftOverBytesCount();

  constexpr ::System::IO::TextWriter*& __cordl_internal_get__writer();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& __cordl_internal_get__writer() const;

  constexpr void __cordl_internal_set__charsLine(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__leftOverBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__leftOverBytesCount(int32_t value);

  constexpr void __cordl_internal_set__writer(::System::IO::TextWriter* value);

  /// @brief Method .ctor, addr 0x2a05818, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Base64Encoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Base64Encoder(Base64Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Base64Encoder(Base64Encoder const&) = delete;

  /// @brief Field _charsLine, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____charsLine;

  /// @brief Field _writer, offset: 0x18, size: 0x8, def value: None
  ::System::IO::TextWriter* ____writer;

  /// @brief Field _leftOverBytes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____leftOverBytes;

  /// @brief Field _leftOverBytesCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____leftOverBytesCount;

  /// @brief Field Base64LineSize offset 0xffffffff size 0x4
  static constexpr int32_t Base64LineSize{ static_cast<int32_t>(0x4c) };

  /// @brief Field LineSizeInBytes offset 0xffffffff size 0x4
  static constexpr int32_t LineSizeInBytes{ static_cast<int32_t>(0x39) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::Base64Encoder, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____charsLine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____writer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____leftOverBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____leftOverBytesCount) == 0x28, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::Base64Encoder*, "Newtonsoft.Json.Utilities", "Base64Encoder");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__Base64Encoder___EncodeAsync_d__13, "Newtonsoft.Json.Utilities", "Base64Encoder/<EncodeAsync>d__13");
