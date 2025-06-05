#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/JavaScriptUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JavaScriptUtils)
namespace Newtonsoft::Json::Utilities {
struct JavaScriptUtils__WriteCharAsync_d__14;
}
namespace Newtonsoft::Json::Utilities {
struct JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16;
}
namespace Newtonsoft::Json::Utilities {
struct JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13;
}
namespace Newtonsoft::Json {
template <typename T> class IArrayPool_1;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace System::IO {
class TextWriter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class JavaScriptUtils;
}
namespace Newtonsoft::Json::Utilities {
struct JavaScriptUtils__WriteCharAsync_d__14;
}
namespace Newtonsoft::Json::Utilities {
struct JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16;
}
namespace Newtonsoft::Json::Utilities {
struct JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::JavaScriptUtils);
MARK_VAL_T(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14);
MARK_VAL_T(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16);
MARK_VAL_T(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.JavaScriptUtils/<WriteCharAsync>d__14
struct CORDL_TYPE JavaScriptUtils__WriteCharAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3ecfee0, size 0x2b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3ed0194, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JavaScriptUtils__WriteCharAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None
  // }, CppParam { name: "writer", ty: "::System::IO::TextWriter*", modifiers: "", def_value: None }, CppParam { name: "c", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JavaScriptUtils__WriteCharAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task,
                                                  ::System::IO::TextWriter* writer, char16_t c, ::System::Threading::CancellationToken cancellationToken,
                                                  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10245 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field task, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* task;

  /// @brief Field writer, offset: 0x28, size: 0x8, def value: None
  ::System::IO::TextWriter* writer;

  /// @brief Field c, offset: 0x30, size: 0x2, def value: None
  char16_t c;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14, writer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14, c) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies Newtonsoft.Json.StringEscapeHandling, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.JavaScriptUtils/<WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16
struct CORDL_TYPE JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3ed01fc, size 0x9d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3ed0bd4, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "writeBuffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "lastWritePosition", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "client", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "",
  // def_value: None }, CppParam { name: "s", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "writer", ty: "::System::IO::TextWriter*", modifiers: "", def_value: None }, CppParam
  // { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "charEscapeFlags", ty: "::ArrayW<bool,::Array<bool>*>", modifiers:
  // "", def_value: None }, CppParam { name: "stringEscapeHandling", ty: "::Newtonsoft::Json::StringEscapeHandling", modifiers: "", def_value: None }, CppParam { name: "_isEscapedUnicodeText_5__2",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_escapedValue_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_i_5__4", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer, int32_t lastWritePosition,
      ::Newtonsoft::Json::JsonTextWriter* client, ::StringW s, ::System::IO::TextWriter* writer, ::System::Threading::CancellationToken cancellationToken,
      ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, bool _isEscapedUnicodeText_5__2, ::StringW _escapedValue_5__3,
      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1, int32_t _i_5__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10246 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field writeBuffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer;

  /// @brief Field lastWritePosition, offset: 0x28, size: 0x4, def value: None
  int32_t lastWritePosition;

  /// @brief Field client, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextWriter* client;

  /// @brief Field s, offset: 0x38, size: 0x8, def value: None
  ::StringW s;

  /// @brief Field writer, offset: 0x40, size: 0x8, def value: None
  ::System::IO::TextWriter* writer;

  /// @brief Field cancellationToken, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field charEscapeFlags, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> charEscapeFlags;

  /// @brief Field stringEscapeHandling, offset: 0x58, size: 0x4, def value: None
  ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling;

  /// @brief Field <isEscapedUnicodeText>5__2, offset: 0x5c, size: 0x1, def value: None
  bool _isEscapedUnicodeText_5__2;

  /// @brief Field <escapedValue>5__3, offset: 0x60, size: 0x8, def value: None
  ::StringW _escapedValue_5__3;

  /// @brief Field <>u__1, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  /// @brief Field <i>5__4, offset: 0x78, size: 0x4, def value: None
  int32_t _i_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, writeBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, lastWritePosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, client) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, s) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, writer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, cancellationToken) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, charEscapeFlags) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, stringEscapeHandling) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, _isEscapedUnicodeText_5__2) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, _escapedValue_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, _i_5__4) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, 0x80>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies Newtonsoft.Json.StringEscapeHandling, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.JavaScriptUtils/<WriteEscapedJavaScriptStringWithDelimitersAsync>d__13
struct CORDL_TYPE JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3ed0c3c, size 0x3b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3ed0ff4, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None
  // }, CppParam { name: "s", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "writer", ty: "::System::IO::TextWriter*", modifiers: "", def_value: None }, CppParam { name:
  // "charEscapeFlags", ty: "::ArrayW<bool,::Array<bool>*>", modifiers: "", def_value: None }, CppParam { name: "stringEscapeHandling", ty: "::Newtonsoft::Json::StringEscapeHandling", modifiers: "",
  // def_value: None }, CppParam { name: "client", ty: "::Newtonsoft::Json::JsonTextWriter*", modifiers: "", def_value: None }, CppParam { name: "writeBuffer", ty:
  // "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "delimiter", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                   ::System::Threading::Tasks::Task* task, ::StringW s, ::System::IO::TextWriter* writer,
                                                                                   ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                   ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer,
                                                                                   ::System::Threading::CancellationToken cancellationToken, char16_t delimiter,
                                                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10247 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field task, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* task;

  /// @brief Field s, offset: 0x28, size: 0x8, def value: None
  ::StringW s;

  /// @brief Field writer, offset: 0x30, size: 0x8, def value: None
  ::System::IO::TextWriter* writer;

  /// @brief Field charEscapeFlags, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> charEscapeFlags;

  /// @brief Field stringEscapeHandling, offset: 0x40, size: 0x4, def value: None
  ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling;

  /// @brief Field client, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextWriter* client;

  /// @brief Field writeBuffer, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer;

  /// @brief Field cancellationToken, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field delimiter, offset: 0x60, size: 0x2, def value: None
  char16_t delimiter;

  /// @brief Field <>u__1, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, s) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, writer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, charEscapeFlags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, stringEscapeHandling) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, client) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, writeBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, cancellationToken) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, delimiter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, __u__1) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, 0x78>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.JavaScriptUtils
class CORDL_TYPE JavaScriptUtils : public ::System::Object {
public:
  // Declarations
  using _WriteCharAsync_d__14 = ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14;

  using _WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16 = ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16;

  using _WriteEscapedJavaScriptStringWithDelimitersAsync_d__13 = ::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13;

  /// @brief Field DoubleQuoteCharEscapeFlags, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DoubleQuoteCharEscapeFlags, put = setStaticF_DoubleQuoteCharEscapeFlags)) ::ArrayW<bool, ::Array<bool>*> DoubleQuoteCharEscapeFlags;

  /// @brief Field HtmlCharEscapeFlags, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HtmlCharEscapeFlags, put = setStaticF_HtmlCharEscapeFlags)) ::ArrayW<bool, ::Array<bool>*> HtmlCharEscapeFlags;

  /// @brief Field SingleQuoteCharEscapeFlags, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SingleQuoteCharEscapeFlags, put = setStaticF_SingleQuoteCharEscapeFlags)) ::ArrayW<bool, ::Array<bool>*> SingleQuoteCharEscapeFlags;

  /// @brief Method FirstCharToEscape, addr 0x3ecede0, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t FirstCharToEscape(::StringW s, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling);

  /// @brief Method GetCharEscapeFlags, addr 0x3ece6cc, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, char16_t quoteChar);

  /// @brief Method ShouldEscapeJavaScriptString, addr 0x3ece764, size 0x88, virtual false, abstract: false, final false
  static inline bool ShouldEscapeJavaScriptString(::StringW s, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags);

  /// @brief Method ToEscapedJavaScriptString, addr 0x3ecee94, size 0x228, virtual false, abstract: false, final false
  static inline ::StringW ToEscapedJavaScriptString(::StringW value, char16_t delimiter, bool appendDelimiters, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling);

  /// @brief Method TryGetDateConstructorValue, addr 0x3ecfd24, size 0x1bc, virtual false, abstract: false, final false
  static inline bool TryGetDateConstructorValue(::Newtonsoft::Json::JsonReader* reader, ::ByRef<::System::Nullable_1<int64_t>> integer, ::ByRef<::StringW> errorMessage);

  /// @brief Method TryGetDateFromConstructorJson, addr 0x3ecf8d0, size 0x454, virtual false, abstract: false, final false
  static inline bool TryGetDateFromConstructorJson(::Newtonsoft::Json::JsonReader* reader, ::ByRef<::System::DateTime> dateTime, ::ByRef<::StringW> errorMessage);

  /// @brief Method WriteCharAsync, addr 0x3ecf6cc, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WriteCharAsync(::System::Threading::Tasks::Task* task, ::System::IO::TextWriter* writer, char16_t c,
                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync, addr 0x3ecf7b8, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task*
  WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync(::System::IO::TextWriter* writer, ::StringW s, int32_t lastWritePosition, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags,
                                                               ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::JsonTextWriter* client,
                                                               ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteEscapedJavaScriptString, addr 0x3ece7ec, size 0x5f4, virtual false, abstract: false, final false
  static inline void WriteEscapedJavaScriptString(::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter, bool appendDelimiters, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags,
                                                  ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool,
                                                  ::ByRef<::ArrayW<char16_t, ::Array<char16_t>*>> writeBuffer);

  /// @brief Method WriteEscapedJavaScriptStringAsync, addr 0x3ecf0bc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WriteEscapedJavaScriptStringAsync(::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter, bool appendDelimiters,
                                                                                    ::ArrayW<bool, ::Array<bool>*> charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                    ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer,
                                                                                    ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteEscapedJavaScriptStringWithDelimitersAsync, addr 0x3ecf5a8, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WriteEscapedJavaScriptStringWithDelimitersAsync(::System::Threading::Tasks::Task* task, ::System::IO::TextWriter* writer, ::StringW s,
                                                                                                  char16_t delimiter, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags,
                                                                                                  ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                                  ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteEscapedJavaScriptStringWithDelimitersAsync, addr 0x3ecf27c, size 0x208, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WriteEscapedJavaScriptStringWithDelimitersAsync(::System::IO::TextWriter* writer, ::StringW s, char16_t delimiter,
                                                                                                  ::ArrayW<bool, ::Array<bool>*> charEscapeFlags,
                                                                                                  ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                                  ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteEscapedJavaScriptStringWithoutDelimitersAsync, addr 0x3ecf484, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* WriteEscapedJavaScriptStringWithoutDelimitersAsync(::System::IO::TextWriter* writer, ::StringW s, ::ArrayW<bool, ::Array<bool>*> charEscapeFlags,
                                                                                                     ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling,
                                                                                                     ::Newtonsoft::Json::JsonTextWriter* client, ::ArrayW<char16_t, ::Array<char16_t>*> writeBuffer,
                                                                                                     ::System::Threading::CancellationToken cancellationToken);

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_DoubleQuoteCharEscapeFlags();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_HtmlCharEscapeFlags();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_SingleQuoteCharEscapeFlags();

  static inline void setStaticF_DoubleQuoteCharEscapeFlags(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_HtmlCharEscapeFlags(::ArrayW<bool, ::Array<bool>*> value);

  static inline void setStaticF_SingleQuoteCharEscapeFlags(::ArrayW<bool, ::Array<bool>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JavaScriptUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JavaScriptUtils(JavaScriptUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JavaScriptUtils(JavaScriptUtils const&) = delete;

  /// @brief Field EscapedUnicodeText offset 0xffffffff size 0x8
  static constexpr ::ConstString EscapedUnicodeText{ u"!" };

  /// @brief Field UnicodeTextLength offset 0xffffffff size 0x4
  static constexpr int32_t UnicodeTextLength{ static_cast<int32_t>(0x6) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10248 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::JavaScriptUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::JavaScriptUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JavaScriptUtils*, "Newtonsoft.Json.Utilities", "JavaScriptUtils");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteCharAsync_d__14, "Newtonsoft.Json.Utilities", "JavaScriptUtils/<WriteCharAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync_d__16, "Newtonsoft.Json.Utilities",
                       "JavaScriptUtils/<WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JavaScriptUtils__WriteEscapedJavaScriptStringWithDelimitersAsync_d__13, "Newtonsoft.Json.Utilities",
                       "JavaScriptUtils/<WriteEscapedJavaScriptStringWithDelimitersAsync>d__13");
