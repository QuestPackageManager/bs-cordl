#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonReader)
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
struct __JsonReader__State;
}
namespace Newtonsoft::Json {
struct __JsonReader___MoveToContentFromNonContentAsync_d__14;
}
namespace Newtonsoft::Json {
struct __JsonReader___ReadAndMoveToContentAsync_d__12;
}
namespace Newtonsoft::Json {
struct __JsonReader___ReadArrayIntoByteArrayAsync_d__5;
}
namespace Newtonsoft::Json {
struct __JsonReader___ReaderReadAndAssertAsync_d__2;
}
namespace Newtonsoft::Json {
struct __JsonReader___SkipAsync_d__1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Globalization {
class CultureInfo;
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
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
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
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
struct __JsonReader__State;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct __JsonReader___MoveToContentFromNonContentAsync_d__14;
}
namespace Newtonsoft::Json {
struct __JsonReader___ReadAndMoveToContentAsync_d__12;
}
namespace Newtonsoft::Json {
struct __JsonReader___ReadArrayIntoByteArrayAsync_d__5;
}
namespace Newtonsoft::Json {
struct __JsonReader___ReaderReadAndAssertAsync_d__2;
}
namespace Newtonsoft::Json {
struct __JsonReader___SkipAsync_d__1;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::__JsonReader__State);
MARK_REF_PTR_T(::Newtonsoft::Json::JsonReader);
MARK_VAL_T(::Newtonsoft::Json::__JsonReader___MoveToContentFromNonContentAsync_d__14);
MARK_VAL_T(::Newtonsoft::Json::__JsonReader___ReadAndMoveToContentAsync_d__12);
MARK_VAL_T(::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5);
MARK_VAL_T(::Newtonsoft::Json::__JsonReader___ReaderReadAndAssertAsync_d__2);
MARK_VAL_T(::Newtonsoft::Json::__JsonReader___SkipAsync_d__1);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonReader::State
struct CORDL_TYPE __JsonReader__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____JsonReader__State_Unwrapped
  enum struct ____JsonReader__State_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_Complete = static_cast<int32_t>(0x1),
    __E_Property = static_cast<int32_t>(0x2),
    __E_ObjectStart = static_cast<int32_t>(0x3),
    __E_Object = static_cast<int32_t>(0x4),
    __E_ArrayStart = static_cast<int32_t>(0x5),
    __E_Array = static_cast<int32_t>(0x6),
    __E_Closed = static_cast<int32_t>(0x7),
    __E_PostValue = static_cast<int32_t>(0x8),
    __E_ConstructorStart = static_cast<int32_t>(0x9),
    __E_Constructor = static_cast<int32_t>(0xa),
    __E_Error = static_cast<int32_t>(0xb),
    __E_Finished = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____JsonReader__State_Unwrapped() const noexcept {
    return static_cast<____JsonReader__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonReader__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JsonReader__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Array value: static_cast<int32_t>(0x6)
  static ::Newtonsoft::Json::__JsonReader__State const Array;

  /// @brief Field ArrayStart value: static_cast<int32_t>(0x5)
  static ::Newtonsoft::Json::__JsonReader__State const ArrayStart;

  /// @brief Field Closed value: static_cast<int32_t>(0x7)
  static ::Newtonsoft::Json::__JsonReader__State const Closed;

  /// @brief Field Complete value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::__JsonReader__State const Complete;

  /// @brief Field Constructor value: static_cast<int32_t>(0xa)
  static ::Newtonsoft::Json::__JsonReader__State const Constructor;

  /// @brief Field ConstructorStart value: static_cast<int32_t>(0x9)
  static ::Newtonsoft::Json::__JsonReader__State const ConstructorStart;

  /// @brief Field Error value: static_cast<int32_t>(0xb)
  static ::Newtonsoft::Json::__JsonReader__State const Error;

  /// @brief Field Finished value: static_cast<int32_t>(0xc)
  static ::Newtonsoft::Json::__JsonReader__State const Finished;

  /// @brief Field Object value: static_cast<int32_t>(0x4)
  static ::Newtonsoft::Json::__JsonReader__State const Object;

  /// @brief Field ObjectStart value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::__JsonReader__State const ObjectStart;

  /// @brief Field PostValue value: static_cast<int32_t>(0x8)
  static ::Newtonsoft::Json::__JsonReader__State const PostValue;

  /// @brief Field Property value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::__JsonReader__State const Property;

  /// @brief Field Start value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::__JsonReader__State const Start;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonReader__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader__State, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: ::<MoveToContentFromNonContentAsync>d__14
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonReader::<MoveToContentFromNonContentAsync>d__14
struct CORDL_TYPE __JsonReader___MoveToContentFromNonContentAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x28cde18, size 0x244, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x28ce05c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonReader___MoveToContentFromNonContentAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __JsonReader___MoveToContentFromNonContentAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                  ::Newtonsoft::Json::JsonReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonReader___MoveToContentFromNonContentAsync_d__14, 0x40>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___MoveToContentFromNonContentAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___MoveToContentFromNonContentAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___MoveToContentFromNonContentAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___MoveToContentFromNonContentAsync_d__14, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___MoveToContentFromNonContentAsync_d__14, __u__1) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: ::<ReadAndMoveToContentAsync>d__12
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonReader::<ReadAndMoveToContentAsync>d__12
struct CORDL_TYPE __JsonReader___ReadAndMoveToContentAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x28ce0b4, size 0x2d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x28ce384, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonReader___ReadAndMoveToContentAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __JsonReader___ReadAndMoveToContentAsync_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                           ::Newtonsoft::Json::JsonReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                           ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonReader___ReadAndMoveToContentAsync_d__12, 0x40>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadAndMoveToContentAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadAndMoveToContentAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadAndMoveToContentAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadAndMoveToContentAsync_d__12, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadAndMoveToContentAsync_d__12, __u__1) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: ::<ReadArrayIntoByteArrayAsync>d__5
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonReader::<ReadArrayIntoByteArrayAsync>d__5
struct CORDL_TYPE __JsonReader___ReadArrayIntoByteArrayAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x28ce3dc, size 0x340, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x28ce71c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonReader___ReadArrayIntoByteArrayAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam
  // { name: "_buffer_5__2", ty: "::System::Collections::Generic::List_1<uint8_t>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __JsonReader___ReadArrayIntoByteArrayAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder,
                                                            ::Newtonsoft::Json::JsonReader* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                            ::System::Collections::Generic::List_1<uint8_t>* _buffer_5__2,
                                                            ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <buffer>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint8_t>* _buffer_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5, _buffer_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5, __u__1) == 0x38, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: ::<ReaderReadAndAssertAsync>d__2
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonReader::<ReaderReadAndAssertAsync>d__2
struct CORDL_TYPE __JsonReader___ReaderReadAndAssertAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x28ce774, size 0x218, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x28ce98c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonReader___ReaderReadAndAssertAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __JsonReader___ReaderReadAndAssertAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonReader* __4__this,
                                                         ::System::Threading::CancellationToken cancellationToken,
                                                         ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonReader___ReaderReadAndAssertAsync_d__2, 0x40>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReaderReadAndAssertAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReaderReadAndAssertAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReaderReadAndAssertAsync_d__2, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReaderReadAndAssertAsync_d__2, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___ReaderReadAndAssertAsync_d__2, __u__1) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: ::<SkipAsync>d__1
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::JsonReader::<SkipAsync>d__1
struct CORDL_TYPE __JsonReader___SkipAsync_d__1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x28ce998, size 0x344, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x28cecdc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonReader___SkipAsync_d__1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "_depth_5__2", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr __JsonReader___SkipAsync_d__1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonReader* __4__this,
                                          ::System::Threading::CancellationToken cancellationToken,
                                          ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1, int32_t _depth_5__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <depth>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t _depth_5__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonReader___SkipAsync_d__1, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___SkipAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___SkipAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___SkipAsync_d__1, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___SkipAsync_d__1, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___SkipAsync_d__1, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonReader___SkipAsync_d__1, _depth_5__2) == 0x40, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: Newtonsoft.Json::JsonReader
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 114, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonReader*
class CORDL_TYPE JsonReader : public ::System::Object {
public:
  // Declarations
  using State = ::Newtonsoft::Json::__JsonReader__State;

  using _MoveToContentFromNonContentAsync_d__14 = ::Newtonsoft::Json::__JsonReader___MoveToContentFromNonContentAsync_d__14;

  using _ReadAndMoveToContentAsync_d__12 = ::Newtonsoft::Json::__JsonReader___ReadAndMoveToContentAsync_d__12;

  using _ReadArrayIntoByteArrayAsync_d__5 = ::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5;

  using _ReaderReadAndAssertAsync_d__2 = ::Newtonsoft::Json::__JsonReader___ReaderReadAndAssertAsync_d__2;

  using _SkipAsync_d__1 = ::Newtonsoft::Json::__JsonReader___SkipAsync_d__1;

  __declspec(property(get = get_CloseInput, put = set_CloseInput)) bool CloseInput;

  __declspec(property(get = get_Culture, put = set_Culture))::System::Globalization::CultureInfo* Culture;

  __declspec(property(get = get_CurrentState))::Newtonsoft::Json::__JsonReader__State CurrentState;

  __declspec(property(get = get_DateFormatString, put = set_DateFormatString))::StringW DateFormatString;

  __declspec(property(get = get_DateParseHandling, put = set_DateParseHandling))::Newtonsoft::Json::DateParseHandling DateParseHandling;

  __declspec(property(get = get_DateTimeZoneHandling, put = set_DateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling DateTimeZoneHandling;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_FloatParseHandling, put = set_FloatParseHandling))::Newtonsoft::Json::FloatParseHandling FloatParseHandling;

  __declspec(property(get = get_MaxDepth, put = set_MaxDepth))::System::Nullable_1<int32_t> MaxDepth;

  __declspec(property(get = get_Path))::StringW Path;

  __declspec(property(get = get_QuoteChar, put = set_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_SupportMultipleContent, put = set_SupportMultipleContent)) bool SupportMultipleContent;

  __declspec(property(get = get_TokenType))::Newtonsoft::Json::JsonToken TokenType;

  __declspec(property(get = get_Value))::System::Object* Value;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  /// @brief Field <CloseInput>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__CloseInput_k__BackingField, put = __cordl_internal_set__CloseInput_k__BackingField)) bool _CloseInput_k__BackingField;

  /// @brief Field <SupportMultipleContent>k__BackingField, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get__SupportMultipleContent_k__BackingField,
                      put = __cordl_internal_set__SupportMultipleContent_k__BackingField)) bool _SupportMultipleContent_k__BackingField;

  /// @brief Field _culture, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture))::System::Globalization::CultureInfo* _culture;

  /// @brief Field _currentPosition, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__currentPosition, put = __cordl_internal_set__currentPosition))::Newtonsoft::Json::JsonPosition _currentPosition;

  /// @brief Field _currentState, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__currentState, put = __cordl_internal_set__currentState))::Newtonsoft::Json::__JsonReader__State _currentState;

  /// @brief Field _dateFormatString, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__dateFormatString, put = __cordl_internal_set__dateFormatString))::StringW _dateFormatString;

  /// @brief Field _dateParseHandling, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__dateParseHandling, put = __cordl_internal_set__dateParseHandling))::Newtonsoft::Json::DateParseHandling _dateParseHandling;

  /// @brief Field _dateTimeZoneHandling, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__dateTimeZoneHandling, put = __cordl_internal_set__dateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling _dateTimeZoneHandling;

  /// @brief Field _floatParseHandling, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__floatParseHandling, put = __cordl_internal_set__floatParseHandling))::Newtonsoft::Json::FloatParseHandling _floatParseHandling;

  /// @brief Field _hasExceededMaxDepth, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__hasExceededMaxDepth, put = __cordl_internal_set__hasExceededMaxDepth)) bool _hasExceededMaxDepth;

  /// @brief Field _maxDepth, offset 0x4c, size 0x8
  __declspec(property(get = __cordl_internal_get__maxDepth, put = __cordl_internal_set__maxDepth))::System::Nullable_1<int32_t> _maxDepth;

  /// @brief Field _quoteChar, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__quoteChar, put = __cordl_internal_set__quoteChar)) char16_t _quoteChar;

  /// @brief Field _stack, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack))::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* _stack;

  /// @brief Field _tokenType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__tokenType, put = __cordl_internal_set__tokenType))::Newtonsoft::Json::JsonToken _tokenType;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::System::Object* _value;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x28cda14, size 0x14, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CreateUnexpectedEndException, addr 0x28cd588, size 0x4c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonReaderException* CreateUnexpectedEndException();

  /// @brief Method Dispose, addr 0x28cd9f0, size 0x24, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetContentToken, addr 0x28caa90, size 0x7c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonToken GetContentToken();

  /// @brief Method GetPosition, addr 0x28ca1d0, size 0xa4, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonPosition GetPosition(int32_t depth);

  /// @brief Method GetTypeForCloseToken, addr 0x28cd7ec, size 0xa8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType GetTypeForCloseToken(::Newtonsoft::Json::JsonToken token);

  /// @brief Method MoveToContent, addr 0x28cddb4, size 0x64, virtual false, abstract: false, final false
  inline bool MoveToContent();

  /// @brief Method MoveToContentAsync, addr 0x28c9bac, size 0x94, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* MoveToContentAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MoveToContentFromNonContentAsync, addr 0x28c9c40, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* MoveToContentFromNonContentAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Newtonsoft::Json::JsonReader* New_ctor();

  /// @brief Method Peek, addr 0x28ca6d0, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType Peek();

  /// @brief Method Pop, addr 0x28ca5b0, size 0x120, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonContainerType Pop();

  /// @brief Method Push, addr 0x28ca304, size 0x28c, virtual false, abstract: false, final false
  inline void Push(::Newtonsoft::Json::JsonContainerType value);

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Read();

  /// @brief Method ReadAndAssert, addr 0x28cda28, size 0x58, virtual false, abstract: false, final false
  inline void ReadAndAssert();

  /// @brief Method ReadAndMoveToContent, addr 0x28cdd80, size 0x34, virtual false, abstract: false, final false
  inline bool ReadAndMoveToContent();

  /// @brief Method ReadAndMoveToContentAsync, addr 0x28c9aac, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReadAndMoveToContentAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadArrayElementIntoByteArrayReportDone, addr 0x28cb8c0, size 0x218, virtual false, abstract: false, final false
  inline bool ReadArrayElementIntoByteArrayReportDone(::System::Collections::Generic::List_1<uint8_t>* buffer);

  /// @brief Method ReadArrayIntoByteArray, addr 0x28cb770, size 0x144, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadArrayIntoByteArray();

  /// @brief Method ReadArrayIntoByteArrayAsync, addr 0x28c9434, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ReadArrayIntoByteArrayAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsBoolean, addr 0x28cbfac, size 0x334, virtual true, abstract: false, final false
  inline ::System::Nullable_1<bool> ReadAsBoolean();

  /// @brief Method ReadAsBooleanAsync, addr 0x28c925c, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>* ReadAsBooleanAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsBytes, addr 0x28cb170, size 0x3d8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsBytes();

  /// @brief Method ReadAsBytesAsync, addr 0x28c9348, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ReadAsBytesAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsDateTime, addr 0x28ccb60, size 0x2a0, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime();

  /// @brief Method ReadAsDateTimeAsync, addr 0x28c9530, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTime>>* ReadAsDateTimeAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsDateTimeOffset, addr 0x28cd080, size 0x2a8, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset();

  /// @brief Method ReadAsDateTimeOffsetAsync, addr 0x28c9620, size 0x104, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::DateTimeOffset>>* ReadAsDateTimeOffsetAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsDecimal, addr 0x28cc4c0, size 0x40c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal();

  /// @brief Method ReadAsDecimalAsync, addr 0x28c9724, size 0x124, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::System::Decimal>>* ReadAsDecimalAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsDouble, addr 0x28cbad8, size 0x2fc, virtual true, abstract: false, final false
  inline ::System::Nullable_1<double_t> ReadAsDouble();

  /// @brief Method ReadAsDoubleAsync, addr 0x28c9848, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>>* ReadAsDoubleAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsInt32, addr 0x28ca6d8, size 0x3b8, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int32_t> ReadAsInt32();

  /// @brief Method ReadAsInt32Async, addr 0x28c98d4, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* ReadAsInt32Async(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsString, addr 0x28caec8, size 0x2a8, virtual true, abstract: false, final false
  inline ::StringW ReadAsString();

  /// @brief Method ReadAsStringAsync, addr 0x28c99c0, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAsStringAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAsync, addr 0x28c8fe4, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReadAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadBooleanString, addr 0x28cc2e0, size 0x1e0, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> ReadBooleanString(::StringW s);

  /// @brief Method ReadDateTimeOffsetString, addr 0x28cd328, size 0x260, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadDateTimeOffsetString(::StringW s);

  /// @brief Method ReadDateTimeString, addr 0x28cce00, size 0x280, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> ReadDateTimeString(::StringW s);

  /// @brief Method ReadDecimalString, addr 0x28cc8cc, size 0x294, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::Decimal> ReadDecimalString(::StringW s);

  /// @brief Method ReadDoubleString, addr 0x28cbdd4, size 0x1d8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> ReadDoubleString(::StringW s);

  /// @brief Method ReadForType, addr 0x28cdad0, size 0x2b0, virtual false, abstract: false, final false
  inline bool ReadForType(::Newtonsoft::Json::Serialization::JsonContract* contract, bool hasConverter);

  /// @brief Method ReadForTypeAndAssert, addr 0x28cda80, size 0x50, virtual false, abstract: false, final false
  inline void ReadForTypeAndAssert(::Newtonsoft::Json::Serialization::JsonContract* contract, bool hasConverter);

  /// @brief Method ReadInt32String, addr 0x28cace8, size 0x1e0, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> ReadInt32String(::StringW s);

  /// @brief Method ReadIntoWrappedTypeObject, addr 0x28cb548, size 0x1e0, virtual false, abstract: false, final false
  inline void ReadIntoWrappedTypeObject();

  /// @brief Method ReaderReadAndAssert, addr 0x28cb728, size 0x48, virtual false, abstract: false, final false
  inline void ReaderReadAndAssert();

  /// @brief Method ReaderReadAndAssertAsync, addr 0x28c9184, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ReaderReadAndAssertAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SetFinished, addr 0x28cd7c4, size 0x28, virtual false, abstract: false, final false
  inline void SetFinished();

  /// @brief Method SetPostValueState, addr 0x28cd788, size 0x3c, virtual false, abstract: false, final false
  inline void SetPostValueState(bool updateIndex);

  /// @brief Method SetStateBasedOnCurrent, addr 0x28cd894, size 0xec, virtual false, abstract: false, final false
  inline void SetStateBasedOnCurrent();

  /// @brief Method SetToken, addr 0x28cb8b4, size 0xc, virtual false, abstract: false, final false
  inline void SetToken(::Newtonsoft::Json::JsonToken newToken);

  /// @brief Method SetToken, addr 0x28cd684, size 0x8, virtual false, abstract: false, final false
  inline void SetToken(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value);

  /// @brief Method SetToken, addr 0x28cab94, size 0x154, virtual false, abstract: false, final false
  inline void SetToken(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value, bool updateIndex);

  /// @brief Method Skip, addr 0x28cd5d4, size 0xb0, virtual false, abstract: false, final false
  inline void Skip();

  /// @brief Method SkipAsync, addr 0x28c90a8, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SkipAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method System.IDisposable.Dispose, addr 0x28cd980, size 0x70, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method UpdateScopeWithFinishedValue, addr 0x28ca590, size 0x18, virtual false, abstract: false, final false
  inline void UpdateScopeWithFinishedValue();

  /// @brief Method ValidateEnd, addr 0x28cd68c, size 0xfc, virtual false, abstract: false, final false
  inline void ValidateEnd(::Newtonsoft::Json::JsonToken endToken);

  constexpr bool const& __cordl_internal_get__CloseInput_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CloseInput_k__BackingField();

  constexpr bool const& __cordl_internal_get__SupportMultipleContent_k__BackingField() const;

  constexpr bool& __cordl_internal_get__SupportMultipleContent_k__BackingField();

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get__culture() const;

  constexpr ::Newtonsoft::Json::JsonPosition const& __cordl_internal_get__currentPosition() const;

  constexpr ::Newtonsoft::Json::JsonPosition& __cordl_internal_get__currentPosition();

  constexpr ::Newtonsoft::Json::__JsonReader__State const& __cordl_internal_get__currentState() const;

  constexpr ::Newtonsoft::Json::__JsonReader__State& __cordl_internal_get__currentState();

  constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

  constexpr ::StringW& __cordl_internal_get__dateFormatString();

  constexpr ::Newtonsoft::Json::DateParseHandling const& __cordl_internal_get__dateParseHandling() const;

  constexpr ::Newtonsoft::Json::DateParseHandling& __cordl_internal_get__dateParseHandling();

  constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& __cordl_internal_get__dateTimeZoneHandling() const;

  constexpr ::Newtonsoft::Json::DateTimeZoneHandling& __cordl_internal_get__dateTimeZoneHandling();

  constexpr ::Newtonsoft::Json::FloatParseHandling const& __cordl_internal_get__floatParseHandling() const;

  constexpr ::Newtonsoft::Json::FloatParseHandling& __cordl_internal_get__floatParseHandling();

  constexpr bool const& __cordl_internal_get__hasExceededMaxDepth() const;

  constexpr bool& __cordl_internal_get__hasExceededMaxDepth();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxDepth() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxDepth();

  constexpr char16_t const& __cordl_internal_get__quoteChar() const;

  constexpr char16_t& __cordl_internal_get__quoteChar();

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& __cordl_internal_get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*> const& __cordl_internal_get__stack() const;

  constexpr ::Newtonsoft::Json::JsonToken const& __cordl_internal_get__tokenType() const;

  constexpr ::Newtonsoft::Json::JsonToken& __cordl_internal_get__tokenType();

  constexpr ::System::Object*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__CloseInput_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SupportMultipleContent_k__BackingField(bool value);

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition value);

  constexpr void __cordl_internal_set__currentState(::Newtonsoft::Json::__JsonReader__State value);

  constexpr void __cordl_internal_set__dateFormatString(::StringW value);

  constexpr void __cordl_internal_set__dateParseHandling(::Newtonsoft::Json::DateParseHandling value);

  constexpr void __cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  constexpr void __cordl_internal_set__floatParseHandling(::Newtonsoft::Json::FloatParseHandling value);

  constexpr void __cordl_internal_set__hasExceededMaxDepth(bool value);

  constexpr void __cordl_internal_set__maxDepth(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__quoteChar(char16_t value);

  constexpr void __cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* value);

  constexpr void __cordl_internal_set__tokenType(::Newtonsoft::Json::JsonToken value);

  constexpr void __cordl_internal_set__value(::System::Object* value);

  /// @brief Method .ctor, addr 0x28ca274, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CloseInput, addr 0x28c9d48, size 0x8, virtual false, abstract: false, final false
  inline bool get_CloseInput();

  /// @brief Method get_Culture, addr 0x28ca160, size 0x68, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method get_CurrentState, addr 0x28c9d40, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::__JsonReader__State get_CurrentState();

  /// @brief Method get_DateFormatString, addr 0x28c9ec4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DateFormatString();

  /// @brief Method get_DateParseHandling, addr 0x28c9dec, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateParseHandling get_DateParseHandling();

  /// @brief Method get_DateTimeZoneHandling, addr 0x28c9d80, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling();

  /// @brief Method get_Depth, addr 0x28c9fc0, size 0x80, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_FloatParseHandling, addr 0x28c9e58, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling();

  /// @brief Method get_MaxDepth, addr 0x28c9ed4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaxDepth();

  /// @brief Method get_Path, addr 0x28ca040, size 0x120, virtual true, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method get_QuoteChar, addr 0x28c9d70, size 0x8, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_SupportMultipleContent, addr 0x28c9d5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_SupportMultipleContent();

  /// @brief Method get_TokenType, addr 0x28c9f9c, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::JsonToken get_TokenType();

  /// @brief Method get_Value, addr 0x28c9fa4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method get_ValueType, addr 0x28c9fac, size 0x14, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_CloseInput, addr 0x28c9d50, size 0xc, virtual false, abstract: false, final false
  inline void set_CloseInput(bool value);

  /// @brief Method set_Culture, addr 0x28ca1c8, size 0x8, virtual false, abstract: false, final false
  inline void set_Culture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_DateFormatString, addr 0x28c9ecc, size 0x8, virtual false, abstract: false, final false
  inline void set_DateFormatString(::StringW value);

  /// @brief Method set_DateParseHandling, addr 0x28c9df4, size 0x64, virtual false, abstract: false, final false
  inline void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value);

  /// @brief Method set_DateTimeZoneHandling, addr 0x28c9d88, size 0x64, virtual false, abstract: false, final false
  inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  /// @brief Method set_FloatParseHandling, addr 0x28c9e60, size 0x64, virtual false, abstract: false, final false
  inline void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value);

  /// @brief Method set_MaxDepth, addr 0x28c9edc, size 0xc0, virtual false, abstract: false, final false
  inline void set_MaxDepth(::System::Nullable_1<int32_t> value);

  /// @brief Method set_QuoteChar, addr 0x28c9d78, size 0x8, virtual true, abstract: false, final false
  inline void set_QuoteChar(char16_t value);

  /// @brief Method set_SupportMultipleContent, addr 0x28c9d64, size 0xc, virtual false, abstract: false, final false
  inline void set_SupportMultipleContent(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonReader(JsonReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonReader(JsonReader const&) = delete;

  /// @brief Field _tokenType, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::JsonToken ____tokenType;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____value;

  /// @brief Field _quoteChar, offset: 0x20, size: 0x2, def value: None
  char16_t ____quoteChar;

  /// @brief Field _currentState, offset: 0x24, size: 0x4, def value: None
  ::Newtonsoft::Json::__JsonReader__State ____currentState;

  /// @brief Field _currentPosition, offset: 0x28, size: 0x18, def value: None
  ::Newtonsoft::Json::JsonPosition ____currentPosition;

  /// @brief Field _culture, offset: 0x40, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  /// @brief Field _dateTimeZoneHandling, offset: 0x48, size: 0x4, def value: None
  ::Newtonsoft::Json::DateTimeZoneHandling ____dateTimeZoneHandling;

  /// @brief Field _maxDepth, offset: 0x4c, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxDepth;

  /// @brief Field _hasExceededMaxDepth, offset: 0x54, size: 0x1, def value: None
  bool ____hasExceededMaxDepth;

  /// @brief Field _dateParseHandling, offset: 0x58, size: 0x4, def value: None
  ::Newtonsoft::Json::DateParseHandling ____dateParseHandling;

  /// @brief Field _floatParseHandling, offset: 0x5c, size: 0x4, def value: None
  ::Newtonsoft::Json::FloatParseHandling ____floatParseHandling;

  /// @brief Field _dateFormatString, offset: 0x60, size: 0x8, def value: None
  ::StringW ____dateFormatString;

  /// @brief Field _stack, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* ____stack;

  /// @brief Field <CloseInput>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____CloseInput_k__BackingField;

  /// @brief Field <SupportMultipleContent>k__BackingField, offset: 0x71, size: 0x1, def value: None
  bool ____SupportMultipleContent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonReader, 0x78>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____tokenType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____quoteChar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____currentState) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____currentPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____culture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateTimeZoneHandling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____maxDepth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____hasExceededMaxDepth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateParseHandling) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____floatParseHandling) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateFormatString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____stack) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____CloseInput_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____SupportMultipleContent_k__BackingField) == 0x71, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonReader__State, "Newtonsoft.Json", "JsonReader/State");
NEED_NO_BOX(::Newtonsoft::Json::JsonReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonReader*, "Newtonsoft.Json", "JsonReader");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonReader___MoveToContentFromNonContentAsync_d__14, "Newtonsoft.Json", "JsonReader/<MoveToContentFromNonContentAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonReader___ReadAndMoveToContentAsync_d__12, "Newtonsoft.Json", "JsonReader/<ReadAndMoveToContentAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonReader___ReadArrayIntoByteArrayAsync_d__5, "Newtonsoft.Json", "JsonReader/<ReadArrayIntoByteArrayAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonReader___ReaderReadAndAssertAsync_d__2, "Newtonsoft.Json", "JsonReader/<ReaderReadAndAssertAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonReader___SkipAsync_d__1, "Newtonsoft.Json", "JsonReader/<SkipAsync>d__1");
