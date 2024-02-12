#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JToken)
namespace Newtonsoft::Json::Linq {
template <typename T> class IJEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
template <typename T> struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JTokenEqualityComparer;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
class __JToken__LineInfoAnnotation;
}
namespace Newtonsoft::Json::Linq {
class __JToken___AfterSelf_d__42;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __JToken___Annotations_d__171_1;
}
namespace Newtonsoft::Json::Linq {
class __JToken___Annotations_d__172;
}
namespace Newtonsoft::Json::Linq {
class __JToken___BeforeSelf_d__43;
}
namespace Newtonsoft::Json::Linq {
class __JToken___GetAncestors_d__41;
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
class __JToken__LineInfoAnnotation;
}
namespace Newtonsoft::Json::Linq {
class __JToken___AfterSelf_d__42;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class __JToken___Annotations_d__171_1;
}
namespace Newtonsoft::Json::Linq {
class __JToken___Annotations_d__172;
}
namespace Newtonsoft::Json::Linq {
class __JToken___BeforeSelf_d__43;
}
namespace Newtonsoft::Json::Linq {
class __JToken___GetAncestors_d__41;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JToken);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41);
// Type: ::LineInfoAnnotation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11894))
// CS Name: ::JToken::LineInfoAnnotation*
class CORDL_TYPE __JToken__LineInfoAnnotation : public ::System::Object {
public:
  // Declarations
  /// @brief Field LineNumber, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_LineNumber, put = __cordl_internal_set_LineNumber)) int32_t LineNumber;

  /// @brief Field LinePosition, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_LinePosition, put = __cordl_internal_set_LinePosition)) int32_t LinePosition;

  constexpr int32_t& __cordl_internal_get_LineNumber();

  constexpr int32_t const& __cordl_internal_get_LineNumber() const;

  constexpr void __cordl_internal_set_LineNumber(int32_t value);

  constexpr int32_t& __cordl_internal_get_LinePosition();

  constexpr int32_t const& __cordl_internal_get_LinePosition() const;

  constexpr void __cordl_internal_set_LinePosition(int32_t value);

  static inline ::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation* New_ctor(int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x26c7778, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t lineNumber, int32_t linePosition);

  // Ctor Parameters [CppParam { name: "", ty: "__JToken__LineInfoAnnotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JToken__LineInfoAnnotation(__JToken__LineInfoAnnotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JToken__LineInfoAnnotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JToken__LineInfoAnnotation(__JToken__LineInfoAnnotation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JToken__LineInfoAnnotation();

public:
  /// @brief Field LineNumber, offset: 0x10, size: 0x4, def value: None
  int32_t ___LineNumber;

  /// @brief Field LinePosition, offset: 0x14, size: 0x4, def value: None
  int32_t ___LinePosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation, ___LineNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation, ___LinePosition) == 0x14, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<GetAncestors>d__41
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11895))
// CS Name: ::JToken::<GetAncestors>d__41*
class CORDL_TYPE __JToken___GetAncestors_d__41 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field self, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) bool self;

  /// @brief Field <>3__self, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get___3__self, put = __cordl_internal_set___3__self)) bool __3__self;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <current>5__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__current_5__1, put = __cordl_internal_set__current_5__1))::Newtonsoft::Json::Linq::JToken* _current_5__1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr bool& __cordl_internal_get_self();

  constexpr bool const& __cordl_internal_get_self() const;

  constexpr void __cordl_internal_set_self(bool value);

  constexpr bool& __cordl_internal_get___3__self();

  constexpr bool const& __cordl_internal_get___3__self() const;

  constexpr void __cordl_internal_set___3__self(bool value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__current_5__1();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__current_5__1() const;

  constexpr void __cordl_internal_set__current_5__1(::Newtonsoft::Json::Linq::JToken* value);

  static inline ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x26c014c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x26c86a4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x26c86a8, size 0x84, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x26c872c, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26c8734, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26c8774, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x26c877c, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26c8824, size 0x1004, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___GetAncestors_d__41", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JToken___GetAncestors_d__41(__JToken___GetAncestors_d__41&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___GetAncestors_d__41", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JToken___GetAncestors_d__41(__JToken___GetAncestors_d__41 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JToken___GetAncestors_d__41();

public:
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

  /// @brief Field <current>5__1, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____current_5__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41, ___self) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41, _____3__self) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41, ____current_5__1) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<AfterSelf>d__42
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11896))
// CS Name: ::JToken::<AfterSelf>d__42*
class CORDL_TYPE __JToken___AfterSelf_d__42 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <o>5__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__o_5__1, put = __cordl_internal_set__o_5__1))::Newtonsoft::Json::Linq::JToken* _o_5__1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__o_5__1();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__o_5__1() const;

  constexpr void __cordl_internal_set__o_5__1(::Newtonsoft::Json::Linq::JToken* value);

  static inline ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x26c9828, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x26c986c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x26c9870, size 0x80, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x26c98f0, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26c98f8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26c9938, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x26c9940, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26c99e0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___AfterSelf_d__42", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JToken___AfterSelf_d__42(__JToken___AfterSelf_d__42&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___AfterSelf_d__42", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JToken___AfterSelf_d__42(__JToken___AfterSelf_d__42 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JToken___AfterSelf_d__42();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____4__this;

  /// @brief Field <o>5__1, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____o_5__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42, ____o_5__1) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<BeforeSelf>d__43
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11897))
// CS Name: ::JToken::<BeforeSelf>d__43*
class CORDL_TYPE __JToken___BeforeSelf_d__43 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <o>5__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__o_5__1, put = __cordl_internal_set__o_5__1))::Newtonsoft::Json::Linq::JToken* _o_5__1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__o_5__1();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__o_5__1() const;

  constexpr void __cordl_internal_set__o_5__1(::Newtonsoft::Json::Linq::JToken* value);

  static inline ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x26c99e4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x26c9a28, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x26c9a2c, size 0x94, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x26c9ac0, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26c9ac8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26c9b08, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x26c9b10, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26c9bb0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___BeforeSelf_d__43", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JToken___BeforeSelf_d__43(__JToken___BeforeSelf_d__43&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___BeforeSelf_d__43", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JToken___BeforeSelf_d__43(__JToken___BeforeSelf_d__43 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JToken___BeforeSelf_d__43();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____4__this;

  /// @brief Field <o>5__1, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____o_5__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43, ____o_5__1) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<Annotations>d__171`1
// SizeInfo { instance_size: 64, native_size: 60, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11898))
// CS Name: ::JToken::<Annotations>d__171`1<T>*
class CORDL_TYPE __JToken___Annotations_d__171_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <annotations>5__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__annotations_5__1, put = __cordl_internal_set__annotations_5__1))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _annotations_5__1;

  /// @brief Field <i>5__2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr T& __cordl_internal_get___2__current();

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__annotations_5__1();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__annotations_5__1() const;

  constexpr void __cordl_internal_set__annotations_5__1(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  static inline ::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___Annotations_d__171_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JToken___Annotations_d__171_1(__JToken___Annotations_d__171_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___Annotations_d__171_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JToken___Annotations_d__171_1(__JToken___Annotations_d__171_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JToken___Annotations_d__171_1();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____4__this;

  /// @brief Field <annotations>5__1, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____annotations_5__1;

  /// @brief Field <i>5__2, offset: 0x38, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Type: ::<Annotations>d__172
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11899))
// CS Name: ::JToken::<Annotations>d__172*
class CORDL_TYPE __JToken___Annotations_d__172 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field type, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Field <>3__type, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__type, put = __cordl_internal_set___3__type))::System::Type* __3__type;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JToken* __4__this;

  /// @brief Field <annotations>5__1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__annotations_5__1, put = __cordl_internal_set__annotations_5__1))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _annotations_5__1;

  /// @brief Field <i>5__2, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_type(::System::Type* value);

  constexpr ::System::Type*& __cordl_internal_get___3__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___3__type() const;

  constexpr void __cordl_internal_set___3__type(::System::Type* value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__annotations_5__1();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__annotations_5__1() const;

  constexpr void __cordl_internal_set__annotations_5__1(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  static inline ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x26c9bb4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x26c9bf8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x26c9bfc, size 0x1cc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x26c9dc8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26c9dd0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26c9e10, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator, addr 0x26c9e18, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26c9ec0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___Annotations_d__172", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JToken___Annotations_d__172(__JToken___Annotations_d__172&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JToken___Annotations_d__172", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JToken___Annotations_d__172(__JToken___Annotations_d__172 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JToken___Annotations_d__172();

public:
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

  /// @brief Field <annotations>5__1, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____annotations_5__1;

  /// @brief Field <i>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JToken___Annotations_d__172, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172, _____3__type) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172, ____annotations_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172, ____i_5__2) == 0x48, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JToken
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11900))
// CS Name: ::Newtonsoft.Json.Linq::JToken*
class CORDL_TYPE JToken : public ::System::Object {
public:
  // Declarations
  using _Annotations_d__172 = ::Newtonsoft::Json::Linq::__JToken___Annotations_d__172;

  template <typename T> using _Annotations_d__171_1 = ::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1<T>;

  using _BeforeSelf_d__43 = ::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43;

  using _AfterSelf_d__42 = ::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42;

  using _GetAncestors_d__41 = ::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41;

  using LineInfoAnnotation = ::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation;

  /// @brief Field _parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent))::Newtonsoft::Json::Linq::JContainer* _parent;

  /// @brief Field _previous, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__previous, put = __cordl_internal_set__previous))::Newtonsoft::Json::Linq::JToken* _previous;

  /// @brief Field _next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next))::Newtonsoft::Json::Linq::JToken* _next;

  /// @brief Field _annotations, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__annotations, put = __cordl_internal_set__annotations))::System::Object* _annotations;

  /// @brief Field _equalityComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__equalityComparer, put = setStaticF__equalityComparer))::Newtonsoft::Json::Linq::JTokenEqualityComparer* _equalityComparer;

  /// @brief Field BooleanTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BooleanTypes, put = setStaticF_BooleanTypes))::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> BooleanTypes;

  /// @brief Field NumberTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NumberTypes, put = setStaticF_NumberTypes))::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> NumberTypes;

  /// @brief Field StringTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StringTypes, put = setStaticF_StringTypes))::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> StringTypes;

  /// @brief Field GuidTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GuidTypes, put = setStaticF_GuidTypes))::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> GuidTypes;

  /// @brief Field TimeSpanTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TimeSpanTypes,
                             put = setStaticF_TimeSpanTypes))::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> TimeSpanTypes;

  /// @brief Field UriTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriTypes, put = setStaticF_UriTypes))::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> UriTypes;

  /// @brief Field CharTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CharTypes, put = setStaticF_CharTypes))::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> CharTypes;

  /// @brief Field DateTimeTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DateTimeTypes,
                             put = setStaticF_DateTimeTypes))::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> DateTimeTypes;

  /// @brief Field BytesTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BytesTypes, put = setStaticF_BytesTypes))::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> BytesTypes;

  __declspec(property(get = get_Parent, put = set_Parent))::Newtonsoft::Json::Linq::JContainer* Parent;

  __declspec(property(get = get_Root))::Newtonsoft::Json::Linq::JToken* Root;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Linq::JTokenType Type;

  __declspec(property(get = get_HasValues)) bool HasValues;

  __declspec(property(get = get_Next, put = set_Next))::Newtonsoft::Json::Linq::JToken* Next;

  __declspec(property(get = get_Previous, put = set_Previous))::Newtonsoft::Json::Linq::JToken* Previous;

  __declspec(property(get = get_Path))::StringW Path;

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_First))::Newtonsoft::Json::Linq::JToken* First;

  __declspec(property(get = get_Last))::Newtonsoft::Json::Linq::JToken* Last;

  __declspec(property(get = Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item))::Newtonsoft::Json::Linq::IJEnumerable_1<
      ::Newtonsoft::Json::Linq::JToken*>* Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__Item[];

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LineNumber)) int32_t Newtonsoft_Json_IJsonLineInfo_LineNumber;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LinePosition)) int32_t Newtonsoft_Json_IJsonLineInfo_LinePosition;

  /// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___Newtonsoft__Json__Linq__IJEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

  /// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::Newtonsoft::Json::Linq::JContainer*& __cordl_internal_get__parent();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JContainer*> const& __cordl_internal_get__parent() const;

  constexpr void __cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer* value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__previous();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__previous() const;

  constexpr void __cordl_internal_set__previous(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__next();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__next() const;

  constexpr void __cordl_internal_set__next(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::System::Object*& __cordl_internal_get__annotations();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__annotations() const;

  constexpr void __cordl_internal_set__annotations(::System::Object* value);

  static inline void setStaticF__equalityComparer(::Newtonsoft::Json::Linq::JTokenEqualityComparer* value);

  static inline ::Newtonsoft::Json::Linq::JTokenEqualityComparer* getStaticF__equalityComparer();

  static inline void setStaticF_BooleanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_BooleanTypes();

  static inline void setStaticF_NumberTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_NumberTypes();

  static inline void setStaticF_StringTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_StringTypes();

  static inline void setStaticF_GuidTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_GuidTypes();

  static inline void setStaticF_TimeSpanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_TimeSpanTypes();

  static inline void setStaticF_UriTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_UriTypes();

  static inline void setStaticF_CharTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_CharTypes();

  static inline void setStaticF_DateTimeTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_DateTimeTypes();

  static inline void setStaticF_BytesTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> value);

  static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_BytesTypes();

  /// @brief Method get_EqualityComparer, addr 0x26b97b8, size 0xc4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JTokenEqualityComparer* get_EqualityComparer();

  /// @brief Method get_Parent, addr 0x26bff54, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JContainer* get_Parent();

  /// @brief Method set_Parent, addr 0x26bff5c, size 0x8, virtual false, abstract: false, final false
  inline void set_Parent(::Newtonsoft::Json::Linq::JContainer* value);

  /// @brief Method get_Root, addr 0x26b6d38, size 0x18, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Root();

  /// @brief Method CloneToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken();

  /// @brief Method DeepEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method get_Type, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  /// @brief Method get_HasValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_HasValues();

  /// @brief Method DeepEquals, addr 0x26b3660, size 0x2c, virtual false, abstract: false, final false
  static inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* t1, ::Newtonsoft::Json::Linq::JToken* t2);

  /// @brief Method get_Next, addr 0x26bff64, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Next();

  /// @brief Method set_Next, addr 0x26bff6c, size 0x8, virtual false, abstract: false, final false
  inline void set_Next(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method get_Previous, addr 0x26bff74, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Previous();

  /// @brief Method set_Previous, addr 0x26bff7c, size 0x8, virtual false, abstract: false, final false
  inline void set_Previous(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method get_Path, addr 0x26bea7c, size 0x348, virtual false, abstract: false, final false
  inline ::StringW get_Path();

  static inline ::Newtonsoft::Json::Linq::JToken* New_ctor();

  /// @brief Method .ctor, addr 0x26b61cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method AddAfterSelf, addr 0x26bff84, size 0xa0, virtual false, abstract: false, final false
  inline void AddAfterSelf(::System::Object* content);

  /// @brief Method AddBeforeSelf, addr 0x26c0024, size 0xa0, virtual false, abstract: false, final false
  inline void AddBeforeSelf(::System::Object* content);

  /// @brief Method Ancestors, addr 0x26c00c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Ancestors();

  /// @brief Method AncestorsAndSelf, addr 0x26c0144, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AncestorsAndSelf();

  /// @brief Method GetAncestors, addr 0x26c00cc, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* GetAncestors(bool self);

  /// @brief Method AfterSelf, addr 0x26c0190, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AfterSelf();

  /// @brief Method BeforeSelf, addr 0x26c01f8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* BeforeSelf();

  /// @brief Method get_Item, addr 0x26c0260, size 0x98, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key);

  /// @brief Method set_Item, addr 0x26c02f8, size 0x98, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline T Value(::System::Object* key);

  /// @brief Method get_First, addr 0x26c0390, size 0x98, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_First();

  /// @brief Method get_Last, addr 0x26c0428, size 0x98, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Last();

  /// @brief Method Children, addr 0x26c04c0, size 0x58, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children();

  /// @brief Method Children, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Newtonsoft::Json::Linq::JEnumerable_1<T> Children();

  /// @brief Method Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Values();

  /// @brief Method Remove, addr 0x26bbd84, size 0x70, virtual false, abstract: false, final false
  inline void Remove();

  /// @brief Method Replace, addr 0x26b8fec, size 0x78, virtual false, abstract: false, final false
  inline void Replace(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method WriteTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method ToString, addr 0x26c0518, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x26c0570, size 0x250, virtual false, abstract: false, final false
  inline ::StringW ToString(::Newtonsoft::Json::Formatting formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method EnsureValue, addr 0x26c07c0, size 0x118, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JValue* EnsureValue(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method GetType, addr 0x26c08d8, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW GetType(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method ValidateToken, addr 0x26c09d0, size 0xcc, virtual false, abstract: false, final false
  static inline bool ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::ArrayW<::Newtonsoft::Json::Linq::JTokenType, ::Array<::Newtonsoft::Json::Linq::JTokenType>*> validTypes, bool nullable);

  /// @brief Method op_Explicit, addr 0x26c0a9c, size 0x18c, virtual false, abstract: false, final false
  static inline bool op_Explicit_bool(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c0c28, size 0x268, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset op_Explicit___System__DateTimeOffset(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c0e90, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<bool> op_Explicit___System__Nullable_1_bool_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c1068, size 0x18c, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c11f4, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::DateTime> op_Explicit___System__Nullable_1___System__DateTime_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c1410, size 0x314, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::DateTimeOffset> op_Explicit___System__Nullable_1___System__DateTimeOffset_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c1724, size 0x1f0, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::Decimal> op_Explicit___System__Nullable_1___System__Decimal_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c1914, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<double_t> op_Explicit___System__Nullable_1_double_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c1ae4, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<char16_t> op_Explicit___System__Nullable_1_char16_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c1cbc, size 0x18c, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c1e48, size 0x18c, virtual false, abstract: false, final false
  static inline int16_t op_Explicit_int16_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c1fd4, size 0x18c, virtual false, abstract: false, final false
  static inline uint16_t op_Explicit_uint16_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c2160, size 0x18c, virtual false, abstract: false, final false
  static inline char16_t op_Explicit_char16_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c22ec, size 0x18c, virtual false, abstract: false, final false
  static inline uint8_t op_Explicit_uint8_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c2478, size 0x18c, virtual false, abstract: false, final false
  static inline int8_t op_Explicit_int8_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c2604, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int32_t> op_Explicit___System__Nullable_1_int32_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c27dc, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int16_t> op_Explicit___System__Nullable_1_int16_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c29b4, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<uint16_t> op_Explicit___System__Nullable_1_uint16_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c2b8c, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<uint8_t> op_Explicit___System__Nullable_1_uint8_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c2d64, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int8_t> op_Explicit___System__Nullable_1_int8_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c2f3c, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::DateTime op_Explicit___System__DateTime(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c3120, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int64_t> op_Explicit___System__Nullable_1_int64_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c32f4, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<float_t> op_Explicit___System__Nullable_1_float_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c34c8, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Decimal op_Explicit___System__Decimal(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c3654, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<uint32_t> op_Explicit___System__Nullable_1_uint32_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c382c, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<uint64_t> op_Explicit___System__Nullable_1_uint64_t_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c3a00, size 0x18c, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c3b8c, size 0x18c, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c3d18, size 0x224, virtual false, abstract: false, final false
  static inline ::StringW op_Explicit___StringW(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c3f3c, size 0x18c, virtual false, abstract: false, final false
  static inline uint32_t op_Explicit_uint32_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c40c8, size 0x18c, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c4254, size 0x228, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> op_Explicit___ArrayW_uint8_t___Array_uint8_t___(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c447c, size 0x250, virtual false, abstract: false, final false
  static inline ::System::Guid op_Explicit___System__Guid(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c46cc, size 0x294, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::Guid> op_Explicit___System__Nullable_1___System__Guid_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c4960, size 0x204, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Explicit___System__TimeSpan(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c4b64, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::TimeSpan> op_Explicit___System__Nullable_1___System__TimeSpan_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Explicit, addr 0x26c4dac, size 0x204, virtual false, abstract: false, final false
  static inline ::System::Uri* op_Explicit___System__Uri_(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method op_Implicit, addr 0x26c4fb0, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(bool value);

  /// @brief Method op_Implicit, addr 0x26c5014, size 0x74, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::DateTimeOffset value);

  /// @brief Method op_Implicit, addr 0x26c5088, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(uint8_t value);

  /// @brief Method op_Implicit, addr 0x26c50ec, size 0x98, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint8_t> value);

  /// @brief Method op_Implicit, addr 0x26c5184, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(int8_t value);

  /// @brief Method op_Implicit, addr 0x26c51e8, size 0x98, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int8_t> value);

  /// @brief Method op_Implicit, addr 0x26c5280, size 0x98, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<bool> value);

  /// @brief Method op_Implicit, addr 0x26c5318, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(int64_t value);

  /// @brief Method op_Implicit, addr 0x26c537c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method op_Implicit, addr 0x26c5420, size 0xac, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method op_Implicit, addr 0x26c54cc, size 0xcc, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::Decimal> value);

  /// @brief Method op_Implicit, addr 0x26c5598, size 0xa4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<double_t> value);

  /// @brief Method op_Implicit, addr 0x26c563c, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(int16_t value);

  /// @brief Method op_Implicit, addr 0x26c56a0, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(uint16_t value);

  /// @brief Method op_Implicit, addr 0x26c5704, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(int32_t value);

  /// @brief Method op_Implicit, addr 0x26c5768, size 0x98, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int32_t> value);

  /// @brief Method op_Implicit, addr 0x26c5800, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::DateTime value);

  /// @brief Method op_Implicit, addr 0x26c5864, size 0xa4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int64_t> value);

  /// @brief Method op_Implicit, addr 0x26c5908, size 0x98, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<float_t> value);

  /// @brief Method op_Implicit, addr 0x26c59a0, size 0x74, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Decimal value);

  /// @brief Method op_Implicit, addr 0x26c5a14, size 0x98, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<int16_t> value);

  /// @brief Method op_Implicit, addr 0x26c5aac, size 0x98, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint16_t> value);

  /// @brief Method op_Implicit, addr 0x26c5b44, size 0x98, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint32_t> value);

  /// @brief Method op_Implicit, addr 0x26c5bdc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<uint64_t> value);

  /// @brief Method op_Implicit, addr 0x26c5c80, size 0x6c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(double_t value);

  /// @brief Method op_Implicit, addr 0x26c5cec, size 0x6c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(float_t value);

  /// @brief Method op_Implicit, addr 0x26c5d58, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::StringW value);

  /// @brief Method op_Implicit, addr 0x26c5dbc, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(uint32_t value);

  /// @brief Method op_Implicit, addr 0x26c5e20, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(uint64_t value);

  /// @brief Method op_Implicit, addr 0x26c5e84, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method op_Implicit, addr 0x26c5ee8, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Uri* value);

  /// @brief Method op_Implicit, addr 0x26c5f4c, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::TimeSpan value);

  /// @brief Method op_Implicit, addr 0x26c5fb0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method op_Implicit, addr 0x26c6054, size 0x74, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Guid value);

  /// @brief Method op_Implicit, addr 0x26c60c8, size 0xac, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::System::Nullable_1<::System::Guid> value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26c6174, size 0x94, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x26c6208, size 0x70, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method GetDeepHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetDeepHashCode();

  /// @brief Method Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.get_Item, addr 0x26c6278, size 0x10, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft_Json_Linq_IJEnumerable_Newtonsoft_Json_Linq_JToken__get_Item(::System::Object* key);

  /// @brief Method CreateReader, addr 0x26c6288, size 0x60, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonReader* CreateReader();

  /// @brief Method FromObjectInternal, addr 0x26bb69c, size 0x208, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* FromObjectInternal(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method FromObject, addr 0x26c62e8, size 0x68, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* FromObject(::System::Object* o);

  /// @brief Method FromObject, addr 0x26c6350, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* FromObject(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ToObject();

  /// @brief Method ToObject, addr 0x26c63b4, size 0xae4, virtual false, abstract: false, final false
  inline ::System::Object* ToObject(::System::Type* objectType);

  /// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ToObject(::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method ToObject, addr 0x26c6e98, size 0x1dc, virtual false, abstract: false, final false
  inline ::System::Object* ToObject(::System::Type* objectType, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method ReadFrom, addr 0x26c7074, size 0x58, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadFrom, addr 0x26c70cc, size 0x2bc, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method Parse, addr 0x26c7388, size 0x58, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* Parse(::StringW json);

  /// @brief Method Parse, addr 0x26c73e0, size 0x264, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* Parse(::StringW json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method Load, addr 0x26c7644, size 0x64, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method Load, addr 0x26c76a8, size 0x58, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method SetLineInfo, addr 0x26b5cd0, size 0x1a0, virtual false, abstract: false, final false
  inline void SetLineInfo(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method SetLineInfo, addr 0x26c7700, size 0x78, virtual false, abstract: false, final false
  inline void SetLineInfo(int32_t lineNumber, int32_t linePosition);

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo, addr 0x26c79c0, size 0x54, virtual true, abstract: false, final true
  inline bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber, addr 0x26c7a14, size 0x54, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition, addr 0x26c7a68, size 0x54, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition();

  /// @brief Method SelectToken, addr 0x26c7abc, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* SelectToken(::StringW path);

  /// @brief Method SelectToken, addr 0x26c7ac4, size 0x378, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* SelectToken(::StringW path, bool errorWhenNoMatch);

  /// @brief Method SelectTokens, addr 0x26c7e3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* SelectTokens(::StringW path);

  /// @brief Method SelectTokens, addr 0x26c7e44, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* SelectTokens(::StringW path, bool errorWhenNoMatch);

  /// @brief Method System.ICloneable.Clone, addr 0x26c7ec4, size 0xc, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method DeepClone, addr 0x26c7ed0, size 0xc, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* DeepClone();

  /// @brief Method AddAnnotation, addr 0x26c77a4, size 0x21c, virtual false, abstract: false, final false
  inline void AddAnnotation(::System::Object* annotation);

  /// @brief Method Annotation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Annotation();

  /// @brief Method Annotation, addr 0x26c7edc, size 0x138, virtual false, abstract: false, final false
  inline ::System::Object* Annotation(::System::Type* type);

  /// @brief Method Annotations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Annotations();

  /// @brief Method Annotations, addr 0x26c8014, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Annotations(::System::Type* type);

  /// @brief Method RemoveAnnotations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RemoveAnnotations();

  /// @brief Method RemoveAnnotations, addr 0x26c8088, size 0x1a8, virtual false, abstract: false, final false
  inline void RemoveAnnotations(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "JToken", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JToken(JToken&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JToken", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JToken(JToken const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JToken();

public:
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
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____previous) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____annotations) == 0x28, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JToken);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken*, "Newtonsoft.Json.Linq", "JToken");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JToken__LineInfoAnnotation*, "Newtonsoft.Json.Linq", "JToken/LineInfoAnnotation");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JToken___AfterSelf_d__42*, "Newtonsoft.Json.Linq", "JToken/<AfterSelf>d__42");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::__JToken___Annotations_d__171_1, "Newtonsoft.Json.Linq", "JToken/<Annotations>d__171`1");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JToken___Annotations_d__172*, "Newtonsoft.Json.Linq", "JToken/<Annotations>d__172");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JToken___BeforeSelf_d__43*, "Newtonsoft.Json.Linq", "JToken/<BeforeSelf>d__43");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JToken___GetAncestors_d__41*, "Newtonsoft.Json.Linq", "JToken/<GetAncestors>d__41");
