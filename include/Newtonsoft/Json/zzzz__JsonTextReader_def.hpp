#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextReader)
namespace Newtonsoft::Json {
template <typename T> class IArrayPool_1;
}
namespace Newtonsoft::Json {
class JsonNameTable;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsBooleanAsync_d__40;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsBytesAsync_d__42;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsDateTimeAsync_d__45;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsDecimalAsync_d__49;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsDoubleAsync_d__51;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsInt32Async_d__53;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsStringAsync_d__55;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsync_d__3;
}
namespace Newtonsoft::Json {
struct JsonTextReader__EatWhitespaceAsync_d__17;
}
namespace Newtonsoft::Json {
struct JsonTextReader__HandleNullAsync_d__35;
}
namespace Newtonsoft::Json {
struct JsonTextReader__MatchAndSetAsync_d__21;
}
namespace Newtonsoft::Json {
struct JsonTextReader__MatchValueAsync_d__19;
}
namespace Newtonsoft::Json {
struct JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseCommentAsync_d__16;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseConstructorAsync_d__25;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseNumberAsync_d__29;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseNumberNaNAsync_d__26;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseNumberNegativeInfinityAsync_d__28;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseNumberPositiveInfinityAsync_d__27;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseObjectAsync_d__15;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParsePostValueAsync_d__4;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParsePropertyAsync_d__31;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseStringAsync_d__18;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseUnicodeAsync_d__12;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseUnquotedPropertyAsync_d__33;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseValueAsync_d__8;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ProcessCarriageReturnAsync_d__11;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadCharsAsync_d__14;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadDataAsync_d__7;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadFinishedAsync_d__36;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadFromFinishedAsync_d__5;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadNullCharAsync_d__34;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadNumberIntoBufferAsync_d__32;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadNumberValueAsync_d__38;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadStringIntoBufferAsync_d__9;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadStringValueAsync_d__37;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
struct ReadType;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::IO {
class TextReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonTextReader;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsBooleanAsync_d__40;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsBytesAsync_d__42;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsDateTimeAsync_d__45;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsDecimalAsync_d__49;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsDoubleAsync_d__51;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsInt32Async_d__53;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsStringAsync_d__55;
}
namespace Newtonsoft::Json {
struct JsonTextReader__DoReadAsync_d__3;
}
namespace Newtonsoft::Json {
struct JsonTextReader__EatWhitespaceAsync_d__17;
}
namespace Newtonsoft::Json {
struct JsonTextReader__HandleNullAsync_d__35;
}
namespace Newtonsoft::Json {
struct JsonTextReader__MatchAndSetAsync_d__21;
}
namespace Newtonsoft::Json {
struct JsonTextReader__MatchValueAsync_d__19;
}
namespace Newtonsoft::Json {
struct JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseCommentAsync_d__16;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseConstructorAsync_d__25;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseNumberAsync_d__29;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseNumberNaNAsync_d__26;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseNumberNegativeInfinityAsync_d__28;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseNumberPositiveInfinityAsync_d__27;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseObjectAsync_d__15;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParsePostValueAsync_d__4;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParsePropertyAsync_d__31;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseStringAsync_d__18;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseUnicodeAsync_d__12;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseUnquotedPropertyAsync_d__33;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ParseValueAsync_d__8;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ProcessCarriageReturnAsync_d__11;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadCharsAsync_d__14;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadDataAsync_d__7;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadFinishedAsync_d__36;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadFromFinishedAsync_d__5;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadNullCharAsync_d__34;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadNumberIntoBufferAsync_d__32;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadNumberValueAsync_d__38;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadStringIntoBufferAsync_d__9;
}
namespace Newtonsoft::Json {
struct JsonTextReader__ReadStringValueAsync_d__37;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonTextReader);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9);
MARK_VAL_T(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37);
// Dependencies System.Nullable`1<T>, System.Numerics.BigInteger, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<DoReadAsBooleanAsync>d__40
struct CORDL_TYPE JsonTextReader__DoReadAsBooleanAsync_d__40 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8bbf4, size 0xdf8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8c9ec, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__DoReadAsBooleanAsync_d__40();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<bool>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty:
  // "::System::Numerics::BigInteger", modifiers: "", def_value: None }, CppParam { name: "_isTrue_5__3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__DoReadAsBooleanAsync_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<bool>> __t__builder,
                                                       ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1, ::System::Numerics::BigInteger _i_5__2,
                                                       bool _isTrue_5__3, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10090 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<bool>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <i>5__2, offset: 0x40, size: 0x10, def value: None
  ::System::Numerics::BigInteger _i_5__2;

  /// @brief Field <isTrue>5__3, offset: 0x50, size: 0x1, def value: None
  bool _isTrue_5__3;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, _i_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, _isTrue_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, __u__2) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, 0x68>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<DoReadAsBytesAsync>d__42
struct CORDL_TYPE JsonTextReader__DoReadAsBytesAsync_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8ca68, size 0xe10, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8d878, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__DoReadAsBytesAsync_d__42();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "_isWrapped_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "_data_5__3", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>",
  // modifiers: "", def_value: None }]
  constexpr JsonTextReader__DoReadAsBytesAsync_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder,
                                                     ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken, bool _isWrapped_5__2,
                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1, ::ArrayW<uint8_t, ::Array<uint8_t>*> _data_5__3,
                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10091 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <isWrapped>5__2, offset: 0x30, size: 0x1, def value: None
  bool _isWrapped_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <data>5__3, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _data_5__3;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, _isWrapped_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, _data_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, __u__3) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, 0x70>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.DateTime, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<DoReadAsDateTimeAsync>d__45
struct CORDL_TYPE JsonTextReader__DoReadAsDateTimeAsync_d__45 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8d8f4, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8db98, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__DoReadAsDateTimeAsync_d__45();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTime>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__DoReadAsDateTimeAsync_d__45(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTime>> __t__builder,
                                                        ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                        ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10092 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTime>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.DateTimeOffset, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<DoReadAsDateTimeOffsetAsync>d__47
struct CORDL_TYPE JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8dc14, size 0x2dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8def0, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTimeOffset>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47(int32_t __1__state,
                                                              ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTimeOffset>> __t__builder,
                                                              ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                              ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10093 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTimeOffset>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Decimal, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<DoReadAsDecimalAsync>d__49
struct CORDL_TYPE JsonTextReader__DoReadAsDecimalAsync_d__49 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8df6c, size 0x2dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8e248, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__DoReadAsDecimalAsync_d__49();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::Decimal>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__DoReadAsDecimalAsync_d__49(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::Decimal>> __t__builder,
                                                       ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10094 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::Decimal>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<DoReadAsDoubleAsync>d__51
struct CORDL_TYPE JsonTextReader__DoReadAsDoubleAsync_d__51 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8e2c4, size 0x2cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8e590, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__DoReadAsDoubleAsync_d__51();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<double_t>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__DoReadAsDoubleAsync_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<double_t>> __t__builder,
                                                      ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10095 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<double_t>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<DoReadAsInt32Async>d__53
struct CORDL_TYPE JsonTextReader__DoReadAsInt32Async_d__53 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8e60c, size 0x2a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8e8ac, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__DoReadAsInt32Async_d__53();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__DoReadAsInt32Async_d__53(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> __t__builder,
                                                     ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10096 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<DoReadAsStringAsync>d__55
struct CORDL_TYPE JsonTextReader__DoReadAsStringAsync_d__55 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8e928, size 0x280, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8eba8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__DoReadAsStringAsync_d__55();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers:
  // "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__DoReadAsStringAsync_d__55(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                      ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10097 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<DoReadAsync>d__3
struct CORDL_TYPE JsonTextReader__DoReadAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8ec24, size 0x328, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8ef4c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__DoReadAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__DoReadAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Threading::Tasks::Task_1<bool>* task,
                                             ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                             ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10098 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field task, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<bool>* task;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3, 0x48>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<EatWhitespaceAsync>d__17
struct CORDL_TYPE JsonTextReader__EatWhitespaceAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8efc8, size 0x3e0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8f3a8, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__EatWhitespaceAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__EatWhitespaceAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                     ::System::Threading::CancellationToken cancellationToken,
                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10099 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<HandleNullAsync>d__35
struct CORDL_TYPE JsonTextReader__HandleNullAsync_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8f410, size 0x3bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8f7cc, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__HandleNullAsync_d__35();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__HandleNullAsync_d__35(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                  ::System::Threading::CancellationToken cancellationToken,
                                                  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                                  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10100 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.JsonToken, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<MatchAndSetAsync>d__21
struct CORDL_TYPE JsonTextReader__MatchAndSetAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8f834, size 0x300, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8fb34, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__MatchAndSetAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "newToken", ty: "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: None }, CppParam { name: "tokenValue", ty: "::System::Object*", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__MatchAndSetAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                   ::StringW value, ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::JsonToken newToken, ::System::Object* tokenValue,
                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10101 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field value, offset: 0x28, size: 0x8, def value: None
  ::StringW value;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field newToken, offset: 0x38, size: 0x4, def value: None
  ::Newtonsoft::Json::JsonToken newToken;

  /// @brief Field tokenValue, offset: 0x40, size: 0x8, def value: None
  ::System::Object* tokenValue;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, newToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, tokenValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, 0x58>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<MatchValueAsync>d__19
struct CORDL_TYPE JsonTextReader__MatchValueAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8fb9c, size 0x290, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e8fe2c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__MatchValueAsync_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__MatchValueAsync_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                  ::StringW value, ::System::Threading::CancellationToken cancellationToken,
                                                  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10102 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field value, offset: 0x28, size: 0x8, def value: None
  ::StringW value;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19, value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19, 0x48>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<MatchValueWithTrailingSeparatorAsync>d__20
struct CORDL_TYPE JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e8fea8, size 0x3d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e90280, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                       ::Newtonsoft::Json::JsonTextReader* __4__this, ::StringW value, ::System::Threading::CancellationToken cancellationToken,
                                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10103 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field value, offset: 0x28, size: 0x8, def value: None
  ::StringW value;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20, value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20, 0x48>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseCommentAsync>d__16
struct CORDL_TYPE JsonTextReader__ParseCommentAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e902fc, size 0x854, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e90b50, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseCommentAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "setToken", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "_singlelineComment_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_initialPosition_5__3", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseCommentAsync_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                    ::System::Threading::CancellationToken cancellationToken, bool setToken, bool _singlelineComment_5__2, int32_t _initialPosition_5__3,
                                                    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                                    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__2,
                                                    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10104 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field setToken, offset: 0x30, size: 0x1, def value: None
  bool setToken;

  /// @brief Field <singlelineComment>5__2, offset: 0x31, size: 0x1, def value: None
  bool _singlelineComment_5__2;

  /// @brief Field <initialPosition>5__3, offset: 0x34, size: 0x4, def value: None
  int32_t _initialPosition_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__2;

  /// @brief Field <>u__3, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, setToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, _singlelineComment_5__2) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, _initialPosition_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, __u__3) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, 0x68>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseConstructorAsync>d__25
struct CORDL_TYPE JsonTextReader__ParseConstructorAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e90bb8, size 0x9a8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e91560, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseConstructorAsync_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "_initialPosition_5__2", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "_endPosition_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_constructorName_5__4", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseConstructorAsync_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                        ::System::Threading::CancellationToken cancellationToken,
                                                        ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1, int32_t _initialPosition_5__2,
                                                        int32_t _endPosition_5__3, ::StringW _constructorName_5__4,
                                                        ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
                                                        ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10105 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <initialPosition>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t _initialPosition_5__2;

  /// @brief Field <endPosition>5__3, offset: 0x44, size: 0x4, def value: None
  int32_t _endPosition_5__3;

  /// @brief Field <constructorName>5__4, offset: 0x48, size: 0x8, def value: None
  ::StringW _constructorName_5__4;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, _initialPosition_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, _endPosition_5__3) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, _constructorName_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, __u__3) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, 0x70>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.ReadType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseNumberAsync>d__29
struct CORDL_TYPE JsonTextReader__ParseNumberAsync_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e915c8, size 0x248, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e91810, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseNumberAsync_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType",
  // modifiers: "", def_value: None }, CppParam { name: "_firstChar_5__2", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "_initialPosition_5__3", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseNumberAsync_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                   ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType readType, char16_t _firstChar_5__2,
                                                   int32_t _initialPosition_5__3, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10106 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field readType, offset: 0x30, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType readType;

  /// @brief Field <firstChar>5__2, offset: 0x34, size: 0x2, def value: None
  char16_t _firstChar_5__2;

  /// @brief Field <initialPosition>5__3, offset: 0x38, size: 0x4, def value: None
  int32_t _initialPosition_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, readType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, _firstChar_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, _initialPosition_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.ReadType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseNumberNaNAsync>d__26
struct CORDL_TYPE JsonTextReader__ParseNumberNaNAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e91878, size 0x2b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e91b30, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseNumberNaNAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseNumberNaNAsync_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder,
                                                      ::Newtonsoft::Json::ReadType readType, ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                      ::Newtonsoft::Json::ReadType __7__wrap1,
                                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10107 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder;

  /// @brief Field readType, offset: 0x20, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType readType;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26, readType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.ReadType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseNumberNegativeInfinityAsync>d__28
struct CORDL_TYPE JsonTextReader__ParseNumberNegativeInfinityAsync_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e91bac, size 0x2b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e91e64, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseNumberNegativeInfinityAsync_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseNumberNegativeInfinityAsync_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder,
                                                                   ::Newtonsoft::Json::ReadType readType, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                                   ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType __7__wrap1,
                                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10108 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder;

  /// @brief Field readType, offset: 0x20, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType readType;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28, readType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.ReadType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseNumberPositiveInfinityAsync>d__27
struct CORDL_TYPE JsonTextReader__ParseNumberPositiveInfinityAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e91ee0, size 0x2b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e92198, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseNumberPositiveInfinityAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseNumberPositiveInfinityAsync_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder,
                                                                   ::Newtonsoft::Json::ReadType readType, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                                   ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType __7__wrap1,
                                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10109 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder;

  /// @brief Field readType, offset: 0x20, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType readType;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType __7__wrap1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27, readType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseObjectAsync>d__15
struct CORDL_TYPE JsonTextReader__ParseObjectAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e92214, size 0x62c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e92840, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseObjectAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseObjectAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                   ::System::Threading::CancellationToken cancellationToken,
                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
                                                   ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10110 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15, __u__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15, __u__3) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15, 0x60>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParsePostValueAsync>d__4
struct CORDL_TYPE JsonTextReader__ParsePostValueAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e928bc, size 0x688, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e92f44, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParsePostValueAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "ignoreComments", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParsePostValueAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                     ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken, bool ignoreComments,
                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
                                                     ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10111 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field ignoreComments, offset: 0x30, size: 0x1, def value: None
  bool ignoreComments;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4, ignoreComments) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4, 0x58>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParsePropertyAsync>d__31
struct CORDL_TYPE JsonTextReader__ParsePropertyAsync_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e92fc0, size 0x678, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e93638, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParsePropertyAsync_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_quoteChar_5__2", ty: "char16_t",
  // modifiers: "", def_value: None }, CppParam { name: "_propertyName_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParsePropertyAsync_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                     ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken, char16_t _quoteChar_5__2,
                                                     ::StringW _propertyName_5__3, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10112 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <quoteChar>5__2, offset: 0x30, size: 0x2, def value: None
  char16_t _quoteChar_5__2;

  /// @brief Field <propertyName>5__3, offset: 0x38, size: 0x8, def value: None
  ::StringW _propertyName_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31, _quoteChar_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31, _propertyName_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.ReadType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseStringAsync>d__18
struct CORDL_TYPE JsonTextReader__ParseStringAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e936b4, size 0x250, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e93904, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseStringAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "quote", ty: "char16_t", modifiers: "", def_value:
  // None }, CppParam { name: "readType", ty: "::Newtonsoft::Json::ReadType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseStringAsync_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                   ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::JsonTextReader* __4__this, char16_t quote,
                                                   ::Newtonsoft::Json::ReadType readType, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10113 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field quote, offset: 0x30, size: 0x2, def value: None
  char16_t quote;

  /// @brief Field readType, offset: 0x34, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType readType;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18, quote) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18, readType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18, 0x48>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseUnicodeAsync>d__12
struct CORDL_TYPE JsonTextReader__ParseUnicodeAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e9396c, size 0x278, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e93be4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseUnicodeAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers:
  // "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseUnicodeAsync_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<char16_t> __t__builder,
                                                    ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10114 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<char16_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseUnquotedPropertyAsync>d__33
struct CORDL_TYPE JsonTextReader__ParseUnquotedPropertyAsync_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e93c60, size 0x314, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e93f74, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseUnquotedPropertyAsync_d__33();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_initialPosition_5__2", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseUnquotedPropertyAsync_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken, int32_t _initialPosition_5__2,
                                                             ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10115 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <initialPosition>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t _initialPosition_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33, _initialPosition_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33, 0x48>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ParseValueAsync>d__8
struct CORDL_TYPE JsonTextReader__ParseValueAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e93fdc, size 0x11c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e9519c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ParseValueAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ParseValueAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                 ::System::Threading::CancellationToken cancellationToken,
                                                 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
                                                 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
                                                 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__3,
                                                 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10116 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__3;

  /// @brief Field <>u__4, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, __u__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, __u__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, __u__4) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, 0x70>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ProcessCarriageReturnAsync>d__11
struct CORDL_TYPE JsonTextReader__ProcessCarriageReturnAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e95218, size 0x22c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e95444, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ProcessCarriageReturnAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ProcessCarriageReturnAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::System::Threading::Tasks::Task_1<bool>* task, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                             ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10117 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field task, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<bool>* task;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadCharsAsync>d__14
struct CORDL_TYPE JsonTextReader__ReadCharsAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e954ac, size 0x2a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e9574c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadCharsAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "relativePosition", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "append", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_charsRequired_5__2", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadCharsAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                 int32_t relativePosition, bool append, ::System::Threading::CancellationToken cancellationToken, int32_t _charsRequired_5__2,
                                                 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10118 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field relativePosition, offset: 0x28, size: 0x4, def value: None
  int32_t relativePosition;

  /// @brief Field append, offset: 0x2c, size: 0x1, def value: None
  bool append;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <charsRequired>5__2, offset: 0x38, size: 0x4, def value: None
  int32_t _charsRequired_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, relativePosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, append) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, _charsRequired_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadDataAsync>d__7
struct CORDL_TYPE JsonTextReader__ReadDataAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e957c8, size 0x330, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e95af8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadDataAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "append", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "charsRequired", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadDataAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                               bool append, int32_t charsRequired, ::System::Threading::CancellationToken cancellationToken,
                                               ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10119 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field append, offset: 0x28, size: 0x1, def value: None
  bool append;

  /// @brief Field charsRequired, offset: 0x2c, size: 0x4, def value: None
  int32_t charsRequired;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7, append) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7, charsRequired) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7, 0x48>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadFinishedAsync>d__36
struct CORDL_TYPE JsonTextReader__ReadFinishedAsync_d__36 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e95b74, size 0x518, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e9608c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadFinishedAsync_d__36();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadFinishedAsync_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                    ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                                    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10120 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadFromFinishedAsync>d__5
struct CORDL_TYPE JsonTextReader__ReadFromFinishedAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e960f4, size 0x54c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e96640, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadFromFinishedAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadFromFinishedAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                       ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10121 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadIntoWrappedTypeObjectAsync>d__43
struct CORDL_TYPE JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e966bc, size 0x578, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e96c34, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                 ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10122 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadNullCharAsync>d__34
struct CORDL_TYPE JsonTextReader__ReadNullCharAsync_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e96c9c, size 0x294, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e96f30, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadNullCharAsync_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadNullCharAsync_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                    ::System::Threading::CancellationToken cancellationToken,
                                                    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10123 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadNumberIntoBufferAsync>d__32
struct CORDL_TYPE JsonTextReader__ReadNumberIntoBufferAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e96fac, size 0x2c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e9726c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadNumberIntoBufferAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_charPos_5__2", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadNumberIntoBufferAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                            ::System::Threading::CancellationToken cancellationToken, int32_t _charPos_5__2,
                                                            ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10124 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <charPos>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t _charPos_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32, _charPos_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32, 0x48>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.ReadType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadNumberValueAsync>d__38
struct CORDL_TYPE JsonTextReader__ReadNumberValueAsync_d__38 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e972d4, size 0xf44, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e98218, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadNumberValueAsync_d__38();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "readType", ty:
  // "::Newtonsoft::Json::ReadType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam {
  // name: "__u__3", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadNumberValueAsync_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder,
                                                       ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType readType,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10125 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field readType, offset: 0x30, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType readType;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, readType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, __u__3) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, 0x68>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadStringIntoBufferAsync>d__9
struct CORDL_TYPE JsonTextReader__ReadStringIntoBufferAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e98294, size 0xc9c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e98f30, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadStringIntoBufferAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "quote", ty: "char16_t", modifiers: "", def_value:
  // None }, CppParam { name: "_charPos_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_initialPosition_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_lastWritePosition_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_escapeStartPos_5__5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_writeChar_5__6", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_anotherHighSurrogate_5__7", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "_highSurrogate_5__8", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadStringIntoBufferAsync_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonTextReader* __4__this,
                                                           ::System::Threading::CancellationToken cancellationToken, char16_t quote, int32_t _charPos_5__2, int32_t _initialPosition_5__3,
                                                           int32_t _lastWritePosition_5__4, int32_t _escapeStartPos_5__5, char16_t _writeChar_5__6,
                                                           ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1,
                                                           ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__2,
                                                           ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t> __u__3, bool _anotherHighSurrogate_5__7,
                                                           char16_t _highSurrogate_5__8, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10126 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field quote, offset: 0x30, size: 0x2, def value: None
  char16_t quote;

  /// @brief Field <charPos>5__2, offset: 0x34, size: 0x4, def value: None
  int32_t _charPos_5__2;

  /// @brief Field <initialPosition>5__3, offset: 0x38, size: 0x4, def value: None
  int32_t _initialPosition_5__3;

  /// @brief Field <lastWritePosition>5__4, offset: 0x3c, size: 0x4, def value: None
  int32_t _lastWritePosition_5__4;

  /// @brief Field <escapeStartPos>5__5, offset: 0x40, size: 0x4, def value: None
  int32_t _escapeStartPos_5__5;

  /// @brief Field <writeChar>5__6, offset: 0x44, size: 0x2, def value: None
  char16_t _writeChar_5__6;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__2;

  /// @brief Field <>u__3, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t> __u__3;

  /// @brief Field <anotherHighSurrogate>5__7, offset: 0x78, size: 0x1, def value: None
  bool _anotherHighSurrogate_5__7;

  /// @brief Field <highSurrogate>5__8, offset: 0x7a, size: 0x2, def value: None
  char16_t _highSurrogate_5__8;

  /// @brief Field <>u__4, offset: 0x80, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, quote) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, _charPos_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, _initialPosition_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, _lastWritePosition_5__4) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, _escapeStartPos_5__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, _writeChar_5__6) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, __u__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, __u__3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, _anotherHighSurrogate_5__7) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, _highSurrogate_5__8) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, __u__4) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, 0x90>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.ReadType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadStringValueAsync>d__37
struct CORDL_TYPE JsonTextReader__ReadStringValueAsync_d__37 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e98f98, size 0x10f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e9a090, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader__ReadStringValueAsync_d__37();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "readType", ty:
  // "::Newtonsoft::Json::ReadType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
  // modifiers: "", def_value: None }, CppParam { name: "_expected_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>", modifiers: "", def_value: None }]
  constexpr JsonTextReader__ReadStringValueAsync_d__37(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder,
                                                       ::Newtonsoft::Json::JsonTextReader* __4__this, ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::ReadType readType,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1, ::StringW _expected_5__2,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
                                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10127 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field readType, offset: 0x30, size: 0x4, def value: None
  ::Newtonsoft::Json::ReadType readType;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <expected>5__2, offset: 0x48, size: 0x8, def value: None
  ::StringW _expected_5__2;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, readType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, _expected_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, __u__3) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, 0x70>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.IJsonLineInfo, Newtonsoft.Json.JsonReader, Newtonsoft.Json.Utilities.StringBuffer, Newtonsoft.Json.Utilities.StringReference
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonTextReader
class CORDL_TYPE JsonTextReader : public ::Newtonsoft::Json::JsonReader {
public:
  // Declarations
  using _DoReadAsBooleanAsync_d__40 = ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40;

  using _DoReadAsBytesAsync_d__42 = ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42;

  using _DoReadAsDateTimeAsync_d__45 = ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45;

  using _DoReadAsDateTimeOffsetAsync_d__47 = ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47;

  using _DoReadAsDecimalAsync_d__49 = ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49;

  using _DoReadAsDoubleAsync_d__51 = ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51;

  using _DoReadAsInt32Async_d__53 = ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53;

  using _DoReadAsStringAsync_d__55 = ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55;

  using _DoReadAsync_d__3 = ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3;

  using _EatWhitespaceAsync_d__17 = ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17;

  using _HandleNullAsync_d__35 = ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35;

  using _MatchAndSetAsync_d__21 = ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21;

  using _MatchValueAsync_d__19 = ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19;

  using _MatchValueWithTrailingSeparatorAsync_d__20 = ::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20;

  using _ParseCommentAsync_d__16 = ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16;

  using _ParseConstructorAsync_d__25 = ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25;

  using _ParseNumberAsync_d__29 = ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29;

  using _ParseNumberNaNAsync_d__26 = ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26;

  using _ParseNumberNegativeInfinityAsync_d__28 = ::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28;

  using _ParseNumberPositiveInfinityAsync_d__27 = ::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27;

  using _ParseObjectAsync_d__15 = ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15;

  using _ParsePostValueAsync_d__4 = ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4;

  using _ParsePropertyAsync_d__31 = ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31;

  using _ParseStringAsync_d__18 = ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18;

  using _ParseUnicodeAsync_d__12 = ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12;

  using _ParseUnquotedPropertyAsync_d__33 = ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33;

  using _ParseValueAsync_d__8 = ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8;

  using _ProcessCarriageReturnAsync_d__11 = ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11;

  using _ReadCharsAsync_d__14 = ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14;

  using _ReadDataAsync_d__7 = ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7;

  using _ReadFinishedAsync_d__36 = ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36;

  using _ReadFromFinishedAsync_d__5 = ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5;

  using _ReadIntoWrappedTypeObjectAsync_d__43 = ::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43;

  using _ReadNullCharAsync_d__34 = ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34;

  using _ReadNumberIntoBufferAsync_d__32 = ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32;

  using _ReadNumberValueAsync_d__38 = ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38;

  using _ReadStringIntoBufferAsync_d__9 = ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9;

  using _ReadStringValueAsync_d__37 = ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37;

  __declspec(property(get = get_ArrayPool, put = set_ArrayPool)) ::Newtonsoft::Json::IArrayPool_1<char16_t>* ArrayPool;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_PropertyNameTable, put = set_PropertyNameTable)) ::Newtonsoft::Json::JsonNameTable* PropertyNameTable;

  /// @brief Field <PropertyNameTable>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyNameTable_k__BackingField,
                      put = __cordl_internal_set__PropertyNameTable_k__BackingField)) ::Newtonsoft::Json::JsonNameTable* _PropertyNameTable_k__BackingField;

  /// @brief Field _arrayPool, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__arrayPool, put = __cordl_internal_set__arrayPool)) ::Newtonsoft::Json::IArrayPool_1<char16_t>* _arrayPool;

  /// @brief Field _charPos, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__charPos, put = __cordl_internal_set__charPos)) int32_t _charPos;

  /// @brief Field _chars, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__chars, put = __cordl_internal_set__chars)) ::ArrayW<char16_t, ::Array<char16_t>*> _chars;

  /// @brief Field _charsUsed, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__charsUsed, put = __cordl_internal_set__charsUsed)) int32_t _charsUsed;

  /// @brief Field _isEndOfFile, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__isEndOfFile, put = __cordl_internal_set__isEndOfFile)) bool _isEndOfFile;

  /// @brief Field _lineNumber, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__lineNumber, put = __cordl_internal_set__lineNumber)) int32_t _lineNumber;

  /// @brief Field _lineStartPos, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__lineStartPos, put = __cordl_internal_set__lineStartPos)) int32_t _lineStartPos;

  /// @brief Field _reader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader)) ::System::IO::TextReader* _reader;

  /// @brief Field _safeAsync, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get__safeAsync, put = __cordl_internal_set__safeAsync)) bool _safeAsync;

  /// @brief Field _stringBuffer, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get__stringBuffer, put = __cordl_internal_set__stringBuffer)) ::Newtonsoft::Json::Utilities::StringBuffer _stringBuffer;

  /// @brief Field _stringReference, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get__stringReference, put = __cordl_internal_set__stringReference)) ::Newtonsoft::Json::Utilities::StringReference _stringReference;

  /// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

  /// @brief Method BigIntegerParse, addr 0x3e8b3bc, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Object* BigIntegerParse(::StringW number, ::System::Globalization::CultureInfo* culture);

  /// @brief Method BlockCopyChars, addr 0x3e861f4, size 0x14, virtual false, abstract: false, final false
  static inline void BlockCopyChars(::ArrayW<char16_t, ::Array<char16_t>*> src, int32_t srcOffset, ::ArrayW<char16_t, ::Array<char16_t>*> dst, int32_t dstOffset, int32_t count);

  /// @brief Method ClearRecentString, addr 0x3e89908, size 0xc, virtual false, abstract: false, final false
  inline void ClearRecentString();

  /// @brief Method Close, addr 0x3e8bb34, size 0x60, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method ConvertUnicode, addr 0x3e895b4, size 0x154, virtual false, abstract: false, final false
  inline char16_t ConvertUnicode(bool enoughChars);

  /// @brief Method CreateUnexpectedCharacterException, addr 0x3e88334, size 0xd0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonReaderException* CreateUnexpectedCharacterException(char16_t c);

  /// @brief Method DoReadAsBooleanAsync, addr 0x3e84ecc, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>* DoReadAsBooleanAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoReadAsBytesAsync, addr 0x3e84fdc, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* DoReadAsBytesAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoReadAsDateTimeAsync, addr 0x3e851ac, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* DoReadAsDateTimeAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoReadAsDateTimeOffsetAsync, addr 0x3e852b4, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>* DoReadAsDateTimeOffsetAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoReadAsDecimalAsync, addr 0x3e853bc, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>* DoReadAsDecimalAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoReadAsDoubleAsync, addr 0x3e854c4, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>* DoReadAsDoubleAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoReadAsInt32Async, addr 0x3e855cc, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* DoReadAsInt32Async(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoReadAsStringAsync, addr 0x3e856d4, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* DoReadAsStringAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoReadAsync, addr 0x3e82c28, size 0x208, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* DoReadAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DoReadAsync, addr 0x3e83184, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* DoReadAsync(::System::Threading::Tasks::Task_1<bool>* task, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method EatWhitespace, addr 0x3e86f54, size 0x114, virtual false, abstract: false, final false
  inline void EatWhitespace();

  /// @brief Method EatWhitespaceAsync, addr 0x3e83b80, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* EatWhitespaceAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method EndComment, addr 0x3e8b444, size 0x60, virtual false, abstract: false, final false
  inline void EndComment(bool setToken, int32_t initialPosition, int32_t endPosition);

  /// @brief Method EnsureBuffer, addr 0x3e82e30, size 0x44, virtual false, abstract: false, final false
  inline void EnsureBuffer();

  /// @brief Method EnsureBufferNotEmpty, addr 0x3e85830, size 0x54, virtual false, abstract: false, final false
  inline void EnsureBufferNotEmpty();

  /// @brief Method EnsureChars, addr 0x3e8643c, size 0x20, virtual false, abstract: false, final false
  inline bool EnsureChars(int32_t relativePosition, bool append);

  /// @brief Method EnsureCharsAsync, addr 0x3e83694, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* EnsureCharsAsync(int32_t relativePosition, bool append, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FinishReadQuotedNumber, addr 0x3e8900c, size 0x188, virtual false, abstract: false, final false
  inline ::System::Object* FinishReadQuotedNumber(::Newtonsoft::Json::ReadType readType);

  /// @brief Method FinishReadQuotedStringValue, addr 0x3e885b4, size 0x260, virtual false, abstract: false, final false
  inline ::System::Object* FinishReadQuotedStringValue(::Newtonsoft::Json::ReadType readType);

  /// @brief Method FinishReadStringIntoBuffer, addr 0x3e8951c, size 0x98, virtual false, abstract: false, final false
  inline void FinishReadStringIntoBuffer(int32_t charPos, int32_t initialPosition, int32_t lastWritePosition);

  /// @brief Method HandleNull, addr 0x3e881f8, size 0xd0, virtual false, abstract: false, final false
  inline void HandleNull();

  /// @brief Method HandleNullAsync, addr 0x3e84af4, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* HandleNullAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HasLineInfo, addr 0x3e8bb94, size 0x8, virtual true, abstract: false, final true
  inline bool HasLineInfo();

  /// @brief Method IsSeparator, addr 0x3e8b5e0, size 0x158, virtual false, abstract: false, final false
  inline bool IsSeparator(char16_t c);

  /// @brief Method MatchAndSetAsync, addr 0x3e83f50, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* MatchAndSetAsync(::StringW value, ::Newtonsoft::Json::JsonToken newToken, ::System::Object* tokenValue,
                                                            ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MatchValue, addr 0x3e8b500, size 0xe0, virtual false, abstract: false, final false
  inline bool MatchValue(bool enoughChars, ::StringW value);

  /// @brief Method MatchValue, addr 0x3e8b4a4, size 0x5c, virtual false, abstract: false, final false
  inline bool MatchValue(::StringW value);

  /// @brief Method MatchValueAsync, addr 0x3e83d40, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* MatchValueAsync(::StringW value, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MatchValueWithTrailingSeparator, addr 0x3e888f8, size 0xa4, virtual false, abstract: false, final false
  inline bool MatchValueWithTrailingSeparator(::StringW value);

  /// @brief Method MatchValueWithTrailingSeparatorAsync, addr 0x3e83e48, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* MatchValueWithTrailingSeparatorAsync(::StringW value, ::System::Threading::CancellationToken cancellationToken);

  static inline ::Newtonsoft::Json::JsonTextReader* New_ctor(::System::IO::TextReader* reader);

  /// @brief Method OnNewLine, addr 0x3e85884, size 0x10, virtual false, abstract: false, final false
  inline void OnNewLine(int32_t pos);

  /// @brief Method ParseComment, addr 0x3e87068, size 0x28c, virtual false, abstract: false, final false
  inline void ParseComment(bool setToken);

  /// @brief Method ParseCommentAsync, addr 0x3e83a9c, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ParseCommentAsync(bool setToken, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseConstructor, addr 0x3e89fa8, size 0x320, virtual false, abstract: false, final false
  inline void ParseConstructor();

  /// @brief Method ParseConstructorAsync, addr 0x3e84208, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ParseConstructorAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseFalse, addr 0x3e89ed0, size 0xd8, virtual false, abstract: false, final false
  inline void ParseFalse();

  /// @brief Method ParseFalseAsync, addr 0x3e840ec, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ParseFalseAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseNull, addr 0x3e893e0, size 0xac, virtual false, abstract: false, final false
  inline void ParseNull();

  /// @brief Method ParseNullAsync, addr 0x3e84190, size 0x78, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ParseNullAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseNumber, addr 0x3e88890, size 0x68, virtual false, abstract: false, final false
  inline void ParseNumber(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseNumberAsync, addr 0x3e84604, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ParseNumberAsync(::Newtonsoft::Json::ReadType readType, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseNumberNaN, addr 0x3e88a18, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseNumberNaN, addr 0x3e8b9e0, size 0x154, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType readType, bool matched);

  /// @brief Method ParseNumberNaNAsync, addr 0x3e842e0, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* ParseNumberNaNAsync(::Newtonsoft::Json::ReadType readType, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseNumberNegativeInfinity, addr 0x3e88814, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseNumberNegativeInfinity, addr 0x3e8b738, size 0x154, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType readType, bool matched);

  /// @brief Method ParseNumberNegativeInfinityAsync, addr 0x3e844f8, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* ParseNumberNegativeInfinityAsync(::Newtonsoft::Json::ReadType readType, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseNumberPositiveInfinity, addr 0x3e8899c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseNumberPositiveInfinity, addr 0x3e8b88c, size 0x154, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType readType, bool matched);

  /// @brief Method ParseNumberPositiveInfinityAsync, addr 0x3e843ec, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* ParseNumberPositiveInfinityAsync(::Newtonsoft::Json::ReadType readType, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseObject, addr 0x3e86b18, size 0x190, virtual false, abstract: false, final false
  inline bool ParseObject();

  /// @brief Method ParseObjectAsync, addr 0x3e82f74, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ParseObjectAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParsePostValue, addr 0x3e86ca8, size 0x2ac, virtual false, abstract: false, final false
  inline bool ParsePostValue(bool ignoreComments);

  /// @brief Method ParsePostValueAsync, addr 0x3e83070, size 0x114, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ParsePostValueAsync(bool ignoreComments, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseProperty, addr 0x3e89914, size 0x224, virtual false, abstract: false, final false
  inline bool ParseProperty();

  /// @brief Method ParsePropertyAsync, addr 0x3e84758, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ParsePropertyAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseReadNumber, addr 0x3e8a374, size 0xfcc, virtual false, abstract: false, final false
  inline void ParseReadNumber(::Newtonsoft::Json::ReadType readType, char16_t firstChar, int32_t initialPosition);

  /// @brief Method ParseReadString, addr 0x3e85dfc, size 0x3f8, virtual false, abstract: false, final false
  inline void ParseReadString(char16_t quote, ::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseString, addr 0x3e85894, size 0x48, virtual false, abstract: false, final false
  inline void ParseString(char16_t quote, ::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseStringAsync, addr 0x3e83c54, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ParseStringAsync(char16_t quote, ::Newtonsoft::Json::ReadType readType, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseTrue, addr 0x3e89df8, size 0xd8, virtual false, abstract: false, final false
  inline void ParseTrue();

  /// @brief Method ParseTrueAsync, addr 0x3e84044, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ParseTrueAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseUndefined, addr 0x3e8a2c8, size 0xac, virtual false, abstract: false, final false
  inline void ParseUndefined();

  /// @brief Method ParseUndefinedAsync, addr 0x3e846e0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ParseUndefinedAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseUnicode, addr 0x3e8948c, size 0x40, virtual false, abstract: false, final false
  inline char16_t ParseUnicode();

  /// @brief Method ParseUnicodeAsync, addr 0x3e8388c, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<char16_t>* ParseUnicodeAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseUnquotedProperty, addr 0x3e89bb4, size 0xf4, virtual false, abstract: false, final false
  inline void ParseUnquotedProperty();

  /// @brief Method ParseUnquotedPropertyAsync, addr 0x3e84928, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ParseUnquotedPropertyAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ParseValue, addr 0x3e866f8, size 0x420, virtual false, abstract: false, final false
  inline bool ParseValue();

  /// @brief Method ParseValueAsync, addr 0x3e82e74, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ParseValueAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method PrepareBufferForReadData, addr 0x3e862a4, size 0x198, virtual false, abstract: false, final false
  inline void PrepareBufferForReadData(bool append, int32_t charsRequired);

  /// @brief Method ProcessCarriageReturn, addr 0x3e88404, size 0x48, virtual false, abstract: false, final false
  inline void ProcessCarriageReturn(bool append);

  /// @brief Method ProcessCarriageReturnAsync, addr 0x3e83594, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ProcessCarriageReturnAsync(bool append, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ProcessCarriageReturnAsync, addr 0x3e837bc, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ProcessCarriageReturnAsync(::System::Threading::Tasks::Task_1<bool>* task);

  /// @brief Method ProcessLineFeed, addr 0x3e8844c, size 0x1c, virtual false, abstract: false, final false
  inline void ProcessLineFeed();

  /// @brief Method ProcessValueComma, addr 0x3e882c8, size 0x6c, virtual false, abstract: false, final false
  inline void ProcessValueComma();

  /// @brief Method Read, addr 0x3e864cc, size 0x22c, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAsBoolean, addr 0x3e88a94, size 0x578, virtual true, abstract: false, final false
  inline ::System::Nullable_1<bool> ReadAsBoolean();

  /// @brief Method ReadAsBooleanAsync, addr 0x3e84ebc, size 0x10, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>* ReadAsBooleanAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsBytes, addr 0x3e87d04, size 0x4a4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsBytes();

  /// @brief Method ReadAsBytesAsync, addr 0x3e84fcc, size 0x10, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ReadAsBytesAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsDateTime, addr 0x3e87754, size 0x90, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime();

  /// @brief Method ReadAsDateTimeAsync, addr 0x3e8519c, size 0x10, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* ReadAsDateTimeAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsDateTimeOffset, addr 0x3e89194, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset();

  /// @brief Method ReadAsDateTimeOffsetAsync, addr 0x3e852a4, size 0x10, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>* ReadAsDateTimeOffsetAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsDecimal, addr 0x3e89260, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal();

  /// @brief Method ReadAsDecimalAsync, addr 0x3e853ac, size 0x10, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>* ReadAsDecimalAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsDouble, addr 0x3e8932c, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Nullable_1<double_t> ReadAsDouble();

  /// @brief Method ReadAsDoubleAsync, addr 0x3e854b4, size 0x10, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>* ReadAsDoubleAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsInt32, addr 0x3e872f4, size 0x90, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int32_t> ReadAsInt32();

  /// @brief Method ReadAsInt32Async, addr 0x3e855bc, size 0x10, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* ReadAsInt32Async(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsString, addr 0x3e87ca0, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ReadAsString();

  /// @brief Method ReadAsStringAsync, addr 0x3e856c4, size 0x10, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAsStringAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x3e82c18, size 0x10, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReadAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadChars, addr 0x3e8645c, size 0x70, virtual false, abstract: false, final false
  inline bool ReadChars(int32_t relativePosition, bool append);

  /// @brief Method ReadCharsAsync, addr 0x3e83984, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReadCharsAsync(int32_t relativePosition, bool append, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadData, addr 0x3e86208, size 0xc, virtual false, abstract: false, final false
  inline int32_t ReadData(bool append);

  /// @brief Method ReadData, addr 0x3e86214, size 0x90, virtual false, abstract: false, final false
  inline int32_t ReadData(bool append, int32_t charsRequired);

  /// @brief Method ReadDataAsync, addr 0x3e83388, size 0x10, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadDataAsync(bool append, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadDataAsync, addr 0x3e83398, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadDataAsync(bool append, int32_t charsRequired, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadFinished, addr 0x3e88468, size 0x14c, virtual false, abstract: false, final false
  inline void ReadFinished();

  /// @brief Method ReadFinishedAsync, addr 0x3e84bc8, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ReadFinishedAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadFromFinishedAsync, addr 0x3e8328c, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReadFromFinishedAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadIntoWrappedTypeObjectAsync, addr 0x3e850cc, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ReadIntoWrappedTypeObjectAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadNullChar, addr 0x3e881a8, size 0x50, virtual false, abstract: false, final false
  inline bool ReadNullChar();

  /// @brief Method ReadNullCharAsync, addr 0x3e849fc, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReadNullCharAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadNumberCharIntoBuffer, addr 0x3e8978c, size 0x17c, virtual false, abstract: false, final false
  inline bool ReadNumberCharIntoBuffer(char16_t currentChar, int32_t charPos);

  /// @brief Method ReadNumberIntoBuffer, addr 0x3e89708, size 0x84, virtual false, abstract: false, final false
  inline void ReadNumberIntoBuffer();

  /// @brief Method ReadNumberIntoBufferAsync, addr 0x3e84854, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ReadNumberIntoBufferAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadNumberValue, addr 0x3e87384, size 0x3d0, virtual false, abstract: false, final false
  inline ::System::Object* ReadNumberValue(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ReadNumberValueAsync, addr 0x3e84dac, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* ReadNumberValueAsync(::Newtonsoft::Json::ReadType readType, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadStringIntoBuffer, addr 0x3e85990, size 0x46c, virtual false, abstract: false, final false
  inline void ReadStringIntoBuffer(char16_t quote);

  /// @brief Method ReadStringIntoBufferAsync, addr 0x3e834b0, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ReadStringIntoBufferAsync(char16_t quote, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadStringValue, addr 0x3e877e4, size 0x4bc, virtual false, abstract: false, final false
  inline ::System::Object* ReadStringValue(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ReadStringValueAsync, addr 0x3e84c9c, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* ReadStringValueAsync(::Newtonsoft::Json::ReadType readType, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadUnquotedPropertyReportIfDone, addr 0x3e89ca8, size 0x150, virtual false, abstract: false, final false
  inline bool ReadUnquotedPropertyReportIfDone(char16_t currentChar, int32_t initialPosition);

  /// @brief Method SetNewLine, addr 0x3e8375c, size 0x60, virtual false, abstract: false, final false
  inline void SetNewLine(bool hasNextChar);

  /// @brief Method ShiftBufferIfNeeded, addr 0x3e858dc, size 0xb4, virtual false, abstract: false, final false
  inline void ShiftBufferIfNeeded();

  /// @brief Method ThrowReaderError, addr 0x3e8b340, size 0x7c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonReaderException* ThrowReaderError(::StringW message, ::System::Exception* ex);

  /// @brief Method ValidIdentifierChar, addr 0x3e89b38, size 0x7c, virtual false, abstract: false, final false
  inline bool ValidIdentifierChar(char16_t value);

  /// @brief Method WriteCharToBuffer, addr 0x3e894cc, size 0x50, virtual false, abstract: false, final false
  inline void WriteCharToBuffer(char16_t writeChar, int32_t lastWritePosition, int32_t writeToPosition);

  constexpr ::Newtonsoft::Json::JsonNameTable* const& __cordl_internal_get__PropertyNameTable_k__BackingField() const;

  constexpr ::Newtonsoft::Json::JsonNameTable*& __cordl_internal_get__PropertyNameTable_k__BackingField();

  constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* const& __cordl_internal_get__arrayPool() const;

  constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& __cordl_internal_get__arrayPool();

  constexpr int32_t const& __cordl_internal_get__charPos() const;

  constexpr int32_t& __cordl_internal_get__charPos();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__chars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__chars();

  constexpr int32_t const& __cordl_internal_get__charsUsed() const;

  constexpr int32_t& __cordl_internal_get__charsUsed();

  constexpr bool const& __cordl_internal_get__isEndOfFile() const;

  constexpr bool& __cordl_internal_get__isEndOfFile();

  constexpr int32_t const& __cordl_internal_get__lineNumber() const;

  constexpr int32_t& __cordl_internal_get__lineNumber();

  constexpr int32_t const& __cordl_internal_get__lineStartPos() const;

  constexpr int32_t& __cordl_internal_get__lineStartPos();

  constexpr ::System::IO::TextReader* const& __cordl_internal_get__reader() const;

  constexpr ::System::IO::TextReader*& __cordl_internal_get__reader();

  constexpr bool const& __cordl_internal_get__safeAsync() const;

  constexpr bool& __cordl_internal_get__safeAsync();

  constexpr ::Newtonsoft::Json::Utilities::StringBuffer const& __cordl_internal_get__stringBuffer() const;

  constexpr ::Newtonsoft::Json::Utilities::StringBuffer& __cordl_internal_get__stringBuffer();

  constexpr ::Newtonsoft::Json::Utilities::StringReference const& __cordl_internal_get__stringReference() const;

  constexpr ::Newtonsoft::Json::Utilities::StringReference& __cordl_internal_get__stringReference();

  constexpr void __cordl_internal_set__PropertyNameTable_k__BackingField(::Newtonsoft::Json::JsonNameTable* value);

  constexpr void __cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value);

  constexpr void __cordl_internal_set__charPos(int32_t value);

  constexpr void __cordl_internal_set__chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__charsUsed(int32_t value);

  constexpr void __cordl_internal_set__isEndOfFile(bool value);

  constexpr void __cordl_internal_set__lineNumber(int32_t value);

  constexpr void __cordl_internal_set__lineStartPos(int32_t value);

  constexpr void __cordl_internal_set__reader(::System::IO::TextReader* value);

  constexpr void __cordl_internal_set__safeAsync(bool value);

  constexpr void __cordl_internal_set__stringBuffer(::Newtonsoft::Json::Utilities::StringBuffer value);

  constexpr void __cordl_internal_set__stringReference(::Newtonsoft::Json::Utilities::StringReference value);

  /// @brief Method .ctor, addr 0x3e75d28, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader);

  /// @brief Method get_ArrayPool, addr 0x3e857cc, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::IArrayPool_1<char16_t>* get_ArrayPool();

  /// @brief Method get_LineNumber, addr 0x3e8bb9c, size 0x4c, virtual true, abstract: false, final true
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x3e8bbe8, size 0xc, virtual true, abstract: false, final true
  inline int32_t get_LinePosition();

  /// @brief Method get_PropertyNameTable, addr 0x3e857bc, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonNameTable* get_PropertyNameTable();

  /// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

  /// @brief Method set_ArrayPool, addr 0x3e857d4, size 0x5c, virtual false, abstract: false, final false
  inline void set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value);

  /// @brief Method set_PropertyNameTable, addr 0x3e857c4, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyNameTable(::Newtonsoft::Json::JsonNameTable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonTextReader(JsonTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonTextReader(JsonTextReader const&) = delete;

  /// @brief Field LargeBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t LargeBufferLength{ static_cast<int32_t>(0x3fffffff) };

  /// @brief Field MaximumJavascriptIntegerCharacterLength offset 0xffffffff size 0x4
  static constexpr int32_t MaximumJavascriptIntegerCharacterLength{ static_cast<int32_t>(0x17c) };

  /// @brief Field UnicodeReplacementChar offset 0xffffffff size 0x2
  static constexpr char16_t UnicodeReplacementChar{ u'\u{fffd}' };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10128 };

  /// @brief Field _safeAsync, offset: 0x72, size: 0x1, def value: None
  bool ____safeAsync;

  /// @brief Field _reader, offset: 0x78, size: 0x8, def value: None
  ::System::IO::TextReader* ____reader;

  /// @brief Field _chars, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____chars;

  /// @brief Field _charsUsed, offset: 0x88, size: 0x4, def value: None
  int32_t ____charsUsed;

  /// @brief Field _charPos, offset: 0x8c, size: 0x4, def value: None
  int32_t ____charPos;

  /// @brief Field _lineStartPos, offset: 0x90, size: 0x4, def value: None
  int32_t ____lineStartPos;

  /// @brief Field _lineNumber, offset: 0x94, size: 0x4, def value: None
  int32_t ____lineNumber;

  /// @brief Field _isEndOfFile, offset: 0x98, size: 0x1, def value: None
  bool ____isEndOfFile;

  /// @brief Field _stringBuffer, offset: 0xa0, size: 0x10, def value: None
  ::Newtonsoft::Json::Utilities::StringBuffer ____stringBuffer;

  /// @brief Field _stringReference, offset: 0xb0, size: 0x10, def value: None
  ::Newtonsoft::Json::Utilities::StringReference ____stringReference;

  /// @brief Field _arrayPool, offset: 0xc0, size: 0x8, def value: None
  ::Newtonsoft::Json::IArrayPool_1<char16_t>* ____arrayPool;

  /// @brief Field <PropertyNameTable>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonNameTable* ____PropertyNameTable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____safeAsync) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____reader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____chars) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____charsUsed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____charPos) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____lineStartPos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____lineNumber) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____isEndOfFile) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____stringBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____stringReference) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____arrayPool) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____PropertyNameTable_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader, 0xd0>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonTextReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader*, "Newtonsoft.Json", "JsonTextReader");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40, "Newtonsoft.Json", "JsonTextReader/<DoReadAsBooleanAsync>d__40");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42, "Newtonsoft.Json", "JsonTextReader/<DoReadAsBytesAsync>d__42");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45, "Newtonsoft.Json", "JsonTextReader/<DoReadAsDateTimeAsync>d__45");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47, "Newtonsoft.Json", "JsonTextReader/<DoReadAsDateTimeOffsetAsync>d__47");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49, "Newtonsoft.Json", "JsonTextReader/<DoReadAsDecimalAsync>d__49");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51, "Newtonsoft.Json", "JsonTextReader/<DoReadAsDoubleAsync>d__51");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53, "Newtonsoft.Json", "JsonTextReader/<DoReadAsInt32Async>d__53");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55, "Newtonsoft.Json", "JsonTextReader/<DoReadAsStringAsync>d__55");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3, "Newtonsoft.Json", "JsonTextReader/<DoReadAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17, "Newtonsoft.Json", "JsonTextReader/<EatWhitespaceAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35, "Newtonsoft.Json", "JsonTextReader/<HandleNullAsync>d__35");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21, "Newtonsoft.Json", "JsonTextReader/<MatchAndSetAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19, "Newtonsoft.Json", "JsonTextReader/<MatchValueAsync>d__19");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20, "Newtonsoft.Json", "JsonTextReader/<MatchValueWithTrailingSeparatorAsync>d__20");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16, "Newtonsoft.Json", "JsonTextReader/<ParseCommentAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25, "Newtonsoft.Json", "JsonTextReader/<ParseConstructorAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29, "Newtonsoft.Json", "JsonTextReader/<ParseNumberAsync>d__29");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26, "Newtonsoft.Json", "JsonTextReader/<ParseNumberNaNAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28, "Newtonsoft.Json", "JsonTextReader/<ParseNumberNegativeInfinityAsync>d__28");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27, "Newtonsoft.Json", "JsonTextReader/<ParseNumberPositiveInfinityAsync>d__27");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15, "Newtonsoft.Json", "JsonTextReader/<ParseObjectAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4, "Newtonsoft.Json", "JsonTextReader/<ParsePostValueAsync>d__4");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31, "Newtonsoft.Json", "JsonTextReader/<ParsePropertyAsync>d__31");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18, "Newtonsoft.Json", "JsonTextReader/<ParseStringAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12, "Newtonsoft.Json", "JsonTextReader/<ParseUnicodeAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33, "Newtonsoft.Json", "JsonTextReader/<ParseUnquotedPropertyAsync>d__33");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8, "Newtonsoft.Json", "JsonTextReader/<ParseValueAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11, "Newtonsoft.Json", "JsonTextReader/<ProcessCarriageReturnAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14, "Newtonsoft.Json", "JsonTextReader/<ReadCharsAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7, "Newtonsoft.Json", "JsonTextReader/<ReadDataAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36, "Newtonsoft.Json", "JsonTextReader/<ReadFinishedAsync>d__36");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5, "Newtonsoft.Json", "JsonTextReader/<ReadFromFinishedAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43, "Newtonsoft.Json", "JsonTextReader/<ReadIntoWrappedTypeObjectAsync>d__43");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34, "Newtonsoft.Json", "JsonTextReader/<ReadNullCharAsync>d__34");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32, "Newtonsoft.Json", "JsonTextReader/<ReadNumberIntoBufferAsync>d__32");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38, "Newtonsoft.Json", "JsonTextReader/<ReadNumberValueAsync>d__38");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9, "Newtonsoft.Json", "JsonTextReader/<ReadStringIntoBufferAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37, "Newtonsoft.Json", "JsonTextReader/<ReadStringValueAsync>d__37");
