#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JToken)
namespace Newtonsoft::Json::Linq {
template <typename T> class IJEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JArray;
}
namespace Newtonsoft::Json::Linq {
class JConstructor;
}
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
template <typename T> struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class JTokenEqualityComparer;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken_LineInfoAnnotation;
}
namespace Newtonsoft::Json::Linq {
class JToken__AfterSelf_d__49;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class JToken__Annotations_d__185_1;
}
namespace Newtonsoft::Json::Linq {
class JToken__Annotations_d__186;
}
namespace Newtonsoft::Json::Linq {
class JToken__BeforeSelf_d__50;
}
namespace Newtonsoft::Json::Linq {
class JToken__GetAncestors_d__48;
}
namespace Newtonsoft::Json::Linq {
struct JToken__ReadFromAsync_d__3;
}
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonSelectSettings;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Dynamic {
class IDynamicMetaObjectProvider;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Numerics {
struct BigInteger;
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
struct Guid;
}
namespace System {
class ICloneable;
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
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JToken_LineInfoAnnotation;
}
namespace Newtonsoft::Json::Linq {
class JToken__AfterSelf_d__49;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class JToken__Annotations_d__185_1;
}
namespace Newtonsoft::Json::Linq {
class JToken__Annotations_d__186;
}
namespace Newtonsoft::Json::Linq {
class JToken__BeforeSelf_d__50;
}
namespace Newtonsoft::Json::Linq {
class JToken__GetAncestors_d__48;
}
namespace Newtonsoft::Json::Linq {
struct JToken__ReadFromAsync_d__3;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JToken);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::JToken__Annotations_d__185_1);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JToken__Annotations_d__186);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48);
MARK_VAL_T(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3);
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
class CORDL_TYPE JToken_LineInfoAnnotation : public ::System::Object {
public:
  // Declarations
  /// @brief Field LineNumber, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_LineNumber, put = __cordl_internal_set_LineNumber)) int32_t LineNumber;

  /// @brief Field LinePosition, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_LinePosition, put = __cordl_internal_set_LinePosition)) int32_t LinePosition;

  static inline ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation* New_ctor(int32_t lineNumber, int32_t linePosition);

  constexpr int32_t const& __cordl_internal_get_LineNumber() const;

  constexpr int32_t& __cordl_internal_get_LineNumber();

  constexpr int32_t const& __cordl_internal_get_LinePosition() const;

  constexpr int32_t& __cordl_internal_get_LinePosition();

  constexpr void __cordl_internal_set_LineNumber(int32_t value);

  constexpr void __cordl_internal_set_LinePosition(int32_t value);

  /// @brief Method .ctor, addr 0x5b6ec18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t lineNumber, int32_t linePosition);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JToken_LineInfoAnnotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JToken_LineInfoAnnotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JToken_LineInfoAnnotation(JToken_LineInfoAnnotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JToken_LineInfoAnnotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JToken_LineInfoAnnotation(JToken_LineInfoAnnotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13575 };

  /// @brief Field LineNumber, offset: 0x10, size: 0x4, def value: None
  int32_t ___LineNumber;

  /// @brief Field LinePosition, offset: 0x14, size: 0x4, def value: None
  int32_t ___LinePosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation, ___LineNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation, ___LinePosition) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JToken/<AfterSelf>d__49
class CORDL_TYPE JToken__AfterSelf_d__49 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)) ::Newtonsoft::Json::Linq::JToken*
      System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <o>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__o_5__2, put = __cordl_internal_set__o_5__2)) ::Newtonsoft::Json::Linq::JToken* _o_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5b6fbc4, size 0x74, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x5b6fc80, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x5b6fc38, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5b6fd18, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b6fc40, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b6fc78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5b6fbc0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___2__current() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__o_5__2() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__o_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__o_5__2(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method .ctor, addr 0x5b6692c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JToken__AfterSelf_d__49();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JToken__AfterSelf_d__49", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JToken__AfterSelf_d__49(JToken__AfterSelf_d__49&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JToken__AfterSelf_d__49", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JToken__AfterSelf_d__49(JToken__AfterSelf_d__49 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13576 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____4__this;

  /// @brief Field <o>5__2, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____o_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49, ____o_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JToken/<Annotations>d__185`1<T>
class CORDL_TYPE JToken__Annotations_d__185_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <annotations>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__annotations_5__2, put = __cordl_internal_set__annotations_5__2)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _annotations_5__2;

  /// @brief Field <i>5__3, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JToken__Annotations_d__185_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__annotations_5__2() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__annotations_5__2();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__annotations_5__2(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JToken__Annotations_d__185_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JToken__Annotations_d__185_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JToken__Annotations_d__185_1(JToken__Annotations_d__185_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JToken__Annotations_d__185_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JToken__Annotations_d__185_1(JToken__Annotations_d__185_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13577 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____4__this;

  /// @brief Field <annotations>5__2, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____annotations_5__2;

  /// @brief Field <i>5__3, offset: 0x38, size: 0x4, def value: None
  int32_t ____i_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JToken/<Annotations>d__186
class CORDL_TYPE JToken__Annotations_d__186 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>3__type, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__type, put = __cordl_internal_set___3__type)) ::System::Type* __3__type;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <annotations>5__2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__annotations_5__2, put = __cordl_internal_set__annotations_5__2)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _annotations_5__2;

  /// @brief Field <i>5__3, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Field type, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5b6fd20, size 0x1c8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JToken__Annotations_d__186* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator, addr 0x5b6ff30, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b6fee8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5b6ffd0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b6fef0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b6ff28, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5b6fd1c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::System::Type* const& __cordl_internal_get___3__type() const;

  constexpr ::System::Type*& __cordl_internal_get___3__type();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__annotations_5__2() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__annotations_5__2();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___3__type(::System::Type* value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__annotations_5__2(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x5b6f720, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JToken__Annotations_d__186();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JToken__Annotations_d__186", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JToken__Annotations_d__186(JToken__Annotations_d__186&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JToken__Annotations_d__186", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JToken__Annotations_d__186(JToken__Annotations_d__186 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13578 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field type, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field <>3__type, offset: 0x30, size: 0x8, def value: None
  ::System::Type* _____3__type;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____4__this;

  /// @brief Field <annotations>5__2, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____annotations_5__2;

  /// @brief Field <i>5__3, offset: 0x48, size: 0x4, def value: None
  int32_t ____i_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__Annotations_d__186, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__Annotations_d__186, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__Annotations_d__186, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__Annotations_d__186, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__Annotations_d__186, _____3__type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__Annotations_d__186, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__Annotations_d__186, ____annotations_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__Annotations_d__186, ____i_5__3) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken__Annotations_d__186, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JToken/<BeforeSelf>d__50
class CORDL_TYPE JToken__BeforeSelf_d__50 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)) ::Newtonsoft::Json::Linq::JToken*
      System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <o>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__o_5__2, put = __cordl_internal_set__o_5__2)) ::Newtonsoft::Json::Linq::JToken* _o_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5b6ffd8, size 0x9c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x5b700bc, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x5b70074, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5b70154, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b7007c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b700b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5b6ffd4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___2__current() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__o_5__2() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__o_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__o_5__2(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method .ctor, addr 0x5b669bc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JToken__BeforeSelf_d__50();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JToken__BeforeSelf_d__50", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JToken__BeforeSelf_d__50(JToken__BeforeSelf_d__50&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JToken__BeforeSelf_d__50", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JToken__BeforeSelf_d__50(JToken__BeforeSelf_d__50 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13579 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____4__this;

  /// @brief Field <o>5__2, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____o_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50, ____o_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JToken/<GetAncestors>d__48
class CORDL_TYPE JToken__GetAncestors_d__48 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)) ::Newtonsoft::Json::Linq::JToken*
      System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>3__self, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get___3__self, put = __cordl_internal_set___3__self)) bool __3__self;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <current>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__current_5__2, put = __cordl_internal_set__current_5__2)) ::Newtonsoft::Json::Linq::JToken* _current_5__2;

  /// @brief Field self, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) bool self;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5b7015c, size 0x74, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x5b70218, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x5b701d0, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5b702b8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b701d8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b70210, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5b70158, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___2__current() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr bool const& __cordl_internal_get___3__self() const;

  constexpr bool& __cordl_internal_get___3__self();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__current_5__2() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__current_5__2();

  constexpr bool const& __cordl_internal_get_self() const;

  constexpr bool& __cordl_internal_get_self();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___3__self(bool value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__current_5__2(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set_self(bool value);

  /// @brief Method .ctor, addr 0x5b6689c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JToken__GetAncestors_d__48();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JToken__GetAncestors_d__48", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JToken__GetAncestors_d__48(JToken__GetAncestors_d__48&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JToken__GetAncestors_d__48", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JToken__GetAncestors_d__48(JToken__GetAncestors_d__48 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13580 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field self, offset: 0x24, size: 0x1, def value: None
  bool ___self;

  /// @brief Field <>3__self, offset: 0x25, size: 0x1, def value: None
  bool _____3__self;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____4__this;

  /// @brief Field <current>5__2, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____current_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48, ___self) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48, _____3__self) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48, ____current_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Threading.CancellationToken
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JToken/<ReadFromAsync>d__3
struct CORDL_TYPE JToken__ReadFromAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5b702bc, size 0xb60, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5b70e1c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JToken__ReadFromAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JToken*>", modifiers: "", def_value: None }, CppParam { name: "reader", ty:
  // "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None }, CppParam {
  // name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JObject*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JArray*>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JConstructor*>", modifiers: "", def_value: None }, CppParam { name: "__u__5", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JProperty*>", modifiers: "", def_value: None }]
  constexpr JToken__ReadFromAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JToken*> __t__builder,
                                       ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings, ::System::Threading::CancellationToken cancellationToken,
                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JObject*> __u__2,
                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JArray*> __u__3,
                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JConstructor*> __u__4,
                                       ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JProperty*> __u__5) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13581 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JToken*> __t__builder;

  /// @brief Field reader, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* reader;

  /// @brief Field settings, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonLoadSettings* settings;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JObject*> __u__2;

  /// @brief Field <>u__3, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JArray*> __u__3;

  /// @brief Field <>u__4, offset: 0x68, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JConstructor*> __u__4;

  /// @brief Field <>u__5, offset: 0x78, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JProperty*> __u__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, __u__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, __u__4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, __u__5) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, 0x88>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JToken
class CORDL_TYPE JToken : public ::System::Object {
public:
  // Declarations
  using LineInfoAnnotation = ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation;

  using _AfterSelf_d__49 = ::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49;

  template <typename T> using _Annotations_d__185_1 = ::Newtonsoft::Json::Linq::JToken__Annotations_d__185_1<T>;

  using _Annotations_d__186 = ::Newtonsoft::Json::Linq::JToken__Annotations_d__186;

  using _BeforeSelf_d__50 = ::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50;

  using _GetAncestors_d__48 = ::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48;

  using _ReadFromAsync_d__3 = ::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3;

  /// @brief Field BigIntegerTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BigIntegerTypes, put = setStaticF_BigIntegerTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*>
      BigIntegerTypes;

  /// @brief Field BooleanTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BooleanTypes, put = setStaticF_BooleanTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> BooleanTypes;

  /// @brief Field BytesTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BytesTypes, put = setStaticF_BytesTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> BytesTypes;

  /// @brief Field CharTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CharTypes, put = setStaticF_CharTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> CharTypes;

  /// @brief Field DateTimeTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DateTimeTypes, put = setStaticF_DateTimeTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> DateTimeTypes;

  __declspec(property(get = get_First)) ::Newtonsoft::Json::Linq::JToken* First;

  /// @brief Field GuidTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GuidTypes, put = setStaticF_GuidTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> GuidTypes;

  __declspec(property(get = get_HasValues)) bool HasValues;

  __declspec(property(get = get_Item, put = set_Item)) ::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_Last)) ::Newtonsoft::Json::Linq::JToken* Last;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LineNumber)) int32_t Newtonsoft_Json_IJsonLineInfo_LineNumber;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LinePosition)) int32_t Newtonsoft_Json_IJsonLineInfo_LinePosition;

  __declspec(property(get = Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item)) ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
      Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__Item[];

  __declspec(property(get = get_Next, put = set_Next)) ::Newtonsoft::Json::Linq::JToken* Next;

  /// @brief Field NumberTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NumberTypes, put = setStaticF_NumberTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> NumberTypes;

  __declspec(property(get = get_Parent, put = set_Parent)) ::Newtonsoft::Json::Linq::JContainer* Parent;

  __declspec(property(get = get_Path)) ::StringW Path;

  __declspec(property(get = get_Previous, put = set_Previous)) ::Newtonsoft::Json::Linq::JToken* Previous;

  __declspec(property(get = get_Root)) ::Newtonsoft::Json::Linq::JToken* Root;

  /// @brief Field StringTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StringTypes, put = setStaticF_StringTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> StringTypes;

  /// @brief Field TimeSpanTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TimeSpanTypes, put = setStaticF_TimeSpanTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> TimeSpanTypes;

  __declspec(property(get = get_Type)) ::Newtonsoft::Json::Linq::JTokenType Type;

  /// @brief Field UriTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriTypes, put = setStaticF_UriTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> UriTypes;

  /// @brief Field _annotations, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__annotations, put = __cordl_internal_set__annotations)) ::System::Object* _annotations;

  /// @brief Field _equalityComparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__equalityComparer, put = setStaticF__equalityComparer)) ::Newtonsoft::Json::Linq::JTokenEqualityComparer* _equalityComparer;

  /// @brief Field _next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next)) ::Newtonsoft::Json::Linq::JToken* _next;

  /// @brief Field _parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent)) ::Newtonsoft::Json::Linq::JContainer* _parent;

  /// @brief Field _previous, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__previous, put = __cordl_internal_set__previous)) ::Newtonsoft::Json::Linq::JToken* _previous;

  /// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Dynamic::IDynamicMetaObjectProvider"
  constexpr operator ::System::Dynamic::IDynamicMetaObjectProvider*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method AddAfterSelf, addr 0x5b666cc, size 0xa0, virtual false, abstract: false, final false
  inline void AddAfterSelf(::System::Object* content);

  /// @brief Method AddAnnotation, addr 0x5b6ec20, size 0x224, virtual false, abstract: false, final false
  inline void AddAnnotation(::System::Object* annotation);

  /// @brief Method AddBeforeSelf, addr 0x5b6676c, size 0xa0, virtual false, abstract: false, final false
  inline void AddBeforeSelf(::System::Object* content);

  /// @brief Method AfterSelf, addr 0x5b668bc, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AfterSelf();

  /// @brief Method Ancestors, addr 0x5b6680c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Ancestors();

  /// @brief Method AncestorsAndSelf, addr 0x5b66894, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AncestorsAndSelf();

  /// @brief Method Annotation, addr 0x5b6f558, size 0x150, virtual false, abstract: false, final false
  inline ::System::Object* Annotation(::System::Type* type);

  /// @brief Method Annotation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Annotation();

  /// @brief Method Annotations, addr 0x5b6f6a8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Annotations(::System::Type* type);

  /// @brief Method Annotations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Annotations();

  /// @brief Method BeforeSelf, addr 0x5b6694c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* BeforeSelf();

  /// @brief Method Children, addr 0x5b66c1c, size 0x5c, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children();

  /// @brief Method Children, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Newtonsoft::Json::Linq::JEnumerable_1<T> Children();

  /// @brief Method CloneToken, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method CopyAnnotations, addr 0x5b589b8, size 0x9c, virtual false, abstract: false, final false
  inline void CopyAnnotations(::Newtonsoft::Json::Linq::JToken* target, ::Newtonsoft::Json::Linq::JToken* source);

  /// @brief Method CreateReader, addr 0x5b6d570, size 0x60, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonReader* CreateReader();

  /// @brief Method DeepClone, addr 0x5b6f534, size 0x14, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* DeepClone();

  /// @brief Method DeepClone, addr 0x5b6f548, size 0x10, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* DeepClone(::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method DeepEquals, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method DeepEquals, addr 0x5b66324, size 0x30, virtual false, abstract: false, final false
  static inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* t1, ::Newtonsoft::Json::Linq::JToken* t2);

  /// @brief Method EnsureValue, addr 0x5b66f38, size 0x11c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JValue* EnsureValue(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method FromObject, addr 0x5b6d5d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* FromObject(::System::Object* o);

  /// @brief Method FromObject, addr 0x5b6d63c, size 0x68, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* FromObject(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method FromObjectInternal, addr 0x5b601b0, size 0x1e8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* FromObjectInternal(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method GetAncestors, addr 0x5b66814, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* GetAncestors(bool self);

  /// @brief Method GetDeepHashCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetDeepHashCode();

  /// @brief Method GetMetaObject, addr 0x5b6f448, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression* parameter);

  /// @brief Method GetType, addr 0x5b67054, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetType(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method Load, addr 0x5b6eb54, size 0x5c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load, addr 0x5b6eaec, size 0x68, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method LoadAsync, addr 0x5b66238, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* LoadAsync(::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x5b662a4, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* LoadAsync(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  static inline ::Newtonsoft::Json::Linq::JToken* New_ctor();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo, addr 0x5b6ee44, size 0x58, virtual true, abstract: false, final true
  inline bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber, addr 0x5b6ee9c, size 0x58, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition, addr 0x5b6eef4, size 0x58, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition();

  /// @brief Method Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.get_Item, addr 0x5b6d560, size 0x10, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item(::System::Object* key);

  /// @brief Method Parse, addr 0x5b6e8ac, size 0x5c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* Parse(::StringW json);

  /// @brief Method Parse, addr 0x5b6e908, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* Parse(::StringW json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method ReadFrom, addr 0x5b6e4ec, size 0x5c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadFrom, addr 0x5b6e548, size 0x364, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method ReadFromAsync, addr 0x5b660d8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* ReadFromAsync(::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadFromAsync, addr 0x5b66144, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* ReadFromAsync(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Remove, addr 0x5b607a0, size 0x68, virtual false, abstract: false, final false
  inline void Remove();

  /// @brief Method RemoveAnnotations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RemoveAnnotations();

  /// @brief Method RemoveAnnotations, addr 0x5b6f740, size 0x1b8, virtual false, abstract: false, final false
  inline void RemoveAnnotations(::System::Type* type);

  /// @brief Method Replace, addr 0x5b5be6c, size 0x70, virtual false, abstract: false, final false
  inline void Replace(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method SelectToken, addr 0x5b6ef4c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* SelectToken(::StringW path);

  /// @brief Method SelectToken, addr 0x5b6f2b0, size 0x84, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* SelectToken(::StringW path, bool errorWhenNoMatch);

  /// @brief Method SelectToken, addr 0x5b6ef54, size 0x35c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* SelectToken(::StringW path, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  /// @brief Method SelectTokens, addr 0x5b6f334, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* SelectTokens(::StringW path);

  /// @brief Method SelectTokens, addr 0x5b6f3c4, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* SelectTokens(::StringW path, bool errorWhenNoMatch);

  /// @brief Method SelectTokens, addr 0x5b6f33c, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* SelectTokens(::StringW path, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  /// @brief Method SetLineInfo, addr 0x5b57624, size 0x1a4, virtual false, abstract: false, final false
  inline void SetLineInfo(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method SetLineInfo, addr 0x5b6ebb0, size 0x68, virtual false, abstract: false, final false
  inline void SetLineInfo(int32_t lineNumber, int32_t linePosition);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x5b6d4c4, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5b6d42c, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject, addr 0x5b6f510, size 0x10, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject(::System::Linq::Expressions::Expression* parameter);

  /// @brief Method System.ICloneable.Clone, addr 0x5b6f520, size 0x14, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToBigInteger, addr 0x5b6be88, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger ToBigInteger(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method ToBigIntegerNullable, addr 0x5b6bfdc, size 0x198, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::Numerics::BigInteger> ToBigIntegerNullable(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method ToObject, addr 0x5b6d6a4, size 0xc18, virtual false, abstract: false, final false
  inline ::System::Object* ToObject(::System::Type* objectType);

  /// @brief Method ToObject, addr 0x5b6e2bc, size 0x230, virtual false, abstract: false, final false
  inline ::System::Object* ToObject(::System::Type* objectType, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ToObject();

  /// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ToObject(::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method ToString, addr 0x5b66c78, size 0xa4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x5b66d1c, size 0x21c, virtual false, abstract: false, final false
  inline ::StringW ToString(::Newtonsoft::Json::Formatting formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method ValidateToken, addr 0x5b67154, size 0xd0, virtual false, abstract: false, final false
  static inline bool ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> validTypes, bool nullable);

  /// @brief Method Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline T Value(::System::Object* key);

  /// @brief Method Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Values();

  /// @brief Method WriteTo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method WriteToAsync, addr 0x5b6608c, size 0x38, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                        ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method WriteToAsync, addr 0x5b660c4, size 0x14, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  constexpr ::System::Object* const& __cordl_internal_get__annotations() const;

  constexpr ::System::Object*& __cordl_internal_get__annotations();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__next() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__next();

  constexpr ::Newtonsoft::Json::Linq::JContainer* const& __cordl_internal_get__parent() const;

  constexpr ::Newtonsoft::Json::Linq::JContainer*& __cordl_internal_get__parent();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__previous() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__previous();

  constexpr void __cordl_internal_set__annotations(::System::Object* value);

  constexpr void __cordl_internal_set__next(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer* value);

  constexpr void __cordl_internal_set__previous(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method .ctor, addr 0x5b589b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_BigIntegerTypes();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_BooleanTypes();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_BytesTypes();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_CharTypes();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_DateTimeTypes();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_GuidTypes();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_NumberTypes();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_StringTypes();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_TimeSpanTypes();

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_UriTypes();

  static inline ::Newtonsoft::Json::Linq::JTokenEqualityComparer* getStaticF__equalityComparer();

  /// @brief Method get_EqualityComparer, addr 0x5b5c6bc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JTokenEqualityComparer* get_EqualityComparer();

  /// @brief Method get_First, addr 0x5b66afc, size 0x90, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_First();

  /// @brief Method get_HasValues, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_HasValues();

  /// @brief Method get_Item, addr 0x5b669dc, size 0x90, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key);

  /// @brief Method get_Last, addr 0x5b66b8c, size 0x90, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Last();

  /// @brief Method get_Next, addr 0x5b66354, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Next();

  /// @brief Method get_Parent, addr 0x5b66314, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JContainer* get_Parent();

  /// @brief Method get_Path, addr 0x5b66374, size 0x358, virtual false, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method get_Previous, addr 0x5b66364, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Previous();

  /// @brief Method get_Root, addr 0x5b59678, size 0x18, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Root();

  /// @brief Method get_Type, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  /// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

  /// @brief Convert to "::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___Newtonsoft__Json__Linq__IJEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Dynamic::IDynamicMetaObjectProvider"
  constexpr ::System::Dynamic::IDynamicMetaObjectProvider* i___System__Dynamic__IDynamicMetaObjectProvider() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method op_Explicit, addr 0x5b6b168, size 0x240, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> op_Explicit___ArrayW_uint8_t___Array_uint8_t___(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6ab18, size 0x288, virtual false, abstract: false, final false
  static inline ::StringW op_Explicit___StringW(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b69b28, size 0x1f4, virtual false, abstract: false, final false
  static inline ::System::DateTime op_Explicit___System__DateTime(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b67430, size 0x248, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset op_Explicit___System__DateTimeOffset(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6a14c, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Explicit___System__Decimal(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6b3a8, size 0x22c, virtual false, abstract: false, final false
  static inline ::System::Guid op_Explicit___System__Guid(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b67cb0, size 0x280, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::DateTimeOffset> op_Explicit___System__Nullable_1___System__DateTimeOffset_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b67a98, size 0x218, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::DateTime> op_Explicit___System__Nullable_1___System__DateTime_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b67f30, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::Decimal> op_Explicit___System__Nullable_1___System__Decimal_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6b5d4, size 0x278, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::Guid> op_Explicit___System__Nullable_1___System__Guid_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6ba54, size 0x230, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::TimeSpan> op_Explicit___System__Nullable_1___System__TimeSpan_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b67678, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<bool> op_Explicit___System__Nullable_1_bool_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b68370, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<char16_t> op_Explicit___System__Nullable_1_char16_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b68154, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<double_t> op_Explicit___System__Nullable_1_double_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b69f2c, size 0x220, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<float_t> op_Explicit___System__Nullable_1_float_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b692e8, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int16_t> op_Explicit___System__Nullable_1_int16_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b690d8, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int32_t> op_Explicit___System__Nullable_1_int32_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b69d1c, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int64_t> op_Explicit___System__Nullable_1_int64_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b69918, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int8_t> op_Explicit___System__Nullable_1_int8_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b694f8, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<uint16_t> op_Explicit___System__Nullable_1_uint16_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6a330, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<uint32_t> op_Explicit___System__Nullable_1_uint32_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6a540, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<uint64_t> op_Explicit___System__Nullable_1_uint64_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b69708, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<uint8_t> op_Explicit___System__Nullable_1_uint8_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6b84c, size 0x208, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Explicit___System__TimeSpan(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6bc84, size 0x204, virtual false, abstract: false, final false
  static inline ::System::Uri* op_Explicit___System__Uri_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b67224, size 0x20c, virtual false, abstract: false, final false
  static inline bool op_Explicit_bool(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b68b2c, size 0x1e4, virtual false, abstract: false, final false
  static inline char16_t op_Explicit_char16_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6a750, size 0x1e4, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6a934, size 0x1e4, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b68764, size 0x1e4, virtual false, abstract: false, final false
  static inline int16_t op_Explicit_int16_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b68580, size 0x1e4, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b678b4, size 0x1e4, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b68ef4, size 0x1e4, virtual false, abstract: false, final false
  static inline int8_t op_Explicit_int8_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b68948, size 0x1e4, virtual false, abstract: false, final false
  static inline uint16_t op_Explicit_uint16_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6ada0, size 0x1e4, virtual false, abstract: false, final false
  static inline uint32_t op_Explicit_uint32_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b6af84, size 0x1e4, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x5b68d10, size 0x1e4, virtual false, abstract: false, final false
  static inline uint8_t op_Explicit_uint8_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Implicit, addr 0x5b6d124, size 0x70, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method op_Implicit, addr 0x5b6cfe4, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::StringW value);

  /// @brief Method op_Implicit, addr 0x5b6ca1c, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::DateTime value);

  /// @brief Method op_Implicit, addr 0x5b6c1d4, size 0x70, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::DateTimeOffset value);

  /// @brief Method op_Implicit, addr 0x5b6cbd8, size 0x70, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Decimal value);

  /// @brief Method op_Implicit, addr 0x5b6d308, size 0x70, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Guid value);

  /// @brief Method op_Implicit, addr 0x5b6c55c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method op_Implicit, addr 0x5b6c610, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method op_Implicit, addr 0x5b6c6c4, size 0xdc, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::Decimal> value);

  /// @brief Method op_Implicit, addr 0x5b6d378, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::Guid> value);

  /// @brief Method op_Implicit, addr 0x5b6d254, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method op_Implicit, addr 0x5b6c454, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<bool> value);

  /// @brief Method op_Implicit, addr 0x5b6c7a0, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<double_t> value);

  /// @brief Method op_Implicit, addr 0x5b6cb30, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<float_t> value);

  /// @brief Method op_Implicit, addr 0x5b6cc48, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int16_t> value);

  /// @brief Method op_Implicit, addr 0x5b6c974, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int32_t> value);

  /// @brief Method op_Implicit, addr 0x5b6ca7c, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int64_t> value);

  /// @brief Method op_Implicit, addr 0x5b6c3ac, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int8_t> value);

  /// @brief Method op_Implicit, addr 0x5b6ccf0, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint16_t> value);

  /// @brief Method op_Implicit, addr 0x5b6cd98, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint32_t> value);

  /// @brief Method op_Implicit, addr 0x5b6ce40, size 0xb4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint64_t> value);

  /// @brief Method op_Implicit, addr 0x5b6c2a4, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint8_t> value);

  /// @brief Method op_Implicit, addr 0x5b6d1f4, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::TimeSpan value);

  /// @brief Method op_Implicit, addr 0x5b6d194, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Uri* value);

  /// @brief Method op_Implicit, addr 0x5b6c174, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(bool value);

  /// @brief Method op_Implicit, addr 0x5b6cef4, size 0x68, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(double_t value);

  /// @brief Method op_Implicit, addr 0x5b6cf5c, size 0x88, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(float_t value);

  /// @brief Method op_Implicit, addr 0x5b6c854, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(int16_t value);

  /// @brief Method op_Implicit, addr 0x5b6c914, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(int32_t value);

  /// @brief Method op_Implicit, addr 0x5b6c4fc, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(int64_t value);

  /// @brief Method op_Implicit, addr 0x5b6c34c, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(int8_t value);

  /// @brief Method op_Implicit, addr 0x5b6c8b4, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(uint16_t value);

  /// @brief Method op_Implicit, addr 0x5b6d044, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(uint32_t value);

  /// @brief Method op_Implicit, addr 0x5b6d0a4, size 0x80, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(uint64_t value);

  /// @brief Method op_Implicit, addr 0x5b6c244, size 0x60, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(uint8_t value);

  static inline void setStaticF_BigIntegerTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF_BooleanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF_BytesTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF_CharTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF_DateTimeTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF_GuidTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF_NumberTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF_StringTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF_TimeSpanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF_UriTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline void setStaticF__equalityComparer(::Newtonsoft::Json::Linq::JTokenEqualityComparer* value);

  /// @brief Method set_Item, addr 0x5b66a6c, size 0x90, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method set_Next, addr 0x5b6635c, size 0x8, virtual false, abstract: false, final false
  inline void set_Next(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method set_Parent, addr 0x5b6631c, size 0x8, virtual false, abstract: false, final false
  inline void set_Parent(::Newtonsoft::Json::Linq::JContainer* value);

  /// @brief Method set_Previous, addr 0x5b6636c, size 0x8, virtual false, abstract: false, final false
  inline void set_Previous(::Newtonsoft::Json::Linq::JToken* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JToken();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JToken", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JToken(JToken&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JToken", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JToken(JToken const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13582 };

  /// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JContainer* ____parent;

  /// @brief Field _previous, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____previous;

  /// @brief Field _next, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____next;

  /// @brief Field _annotations, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____annotations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____previous) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____annotations) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken, 0x30>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JToken);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken*, "Newtonsoft.Json.Linq", "JToken");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation*, "Newtonsoft.Json.Linq", "JToken/LineInfoAnnotation");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken__AfterSelf_d__49*, "Newtonsoft.Json.Linq", "JToken/<AfterSelf>d__49");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::JToken__Annotations_d__185_1, "Newtonsoft.Json.Linq", "JToken/<Annotations>d__185`1");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JToken__Annotations_d__186);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken__Annotations_d__186*, "Newtonsoft.Json.Linq", "JToken/<Annotations>d__186");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken__BeforeSelf_d__50*, "Newtonsoft.Json.Linq", "JToken/<BeforeSelf>d__50");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken__GetAncestors_d__48*, "Newtonsoft.Json.Linq", "JToken/<GetAncestors>d__48");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken__ReadFromAsync_d__3, "Newtonsoft.Json.Linq", "JToken/<ReadFromAsync>d__3");
