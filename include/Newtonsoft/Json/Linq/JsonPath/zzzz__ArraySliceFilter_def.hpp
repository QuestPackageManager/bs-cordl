#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySliceFilter)
namespace Newtonsoft::Json::Linq::JsonPath {
class __ArraySliceFilter___ExecuteFilter_d__12;
}
namespace Newtonsoft::Json::Linq {
class JArray;
}
namespace Newtonsoft::Json::Linq {
class JToken;
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
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class ArraySliceFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class __ArraySliceFilter___ExecuteFilter_d__12;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12);
// Type: ::<ExecuteFilter>d__12
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12012))
// CS Name: ::ArraySliceFilter::<ExecuteFilter>d__12*
class CORDL_TYPE __ArraySliceFilter___ExecuteFilter_d__12 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* __4__this;

  /// @brief Field current, offset 0x30, size 0x8
  __declspec(property(get = __get_current, put = __set_current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current;

  /// @brief Field <>3__current, offset 0x38, size 0x8
  __declspec(property(get = __get___3__current, put = __set___3__current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current;

  /// @brief Field <a>5__1, offset 0x40, size 0x8
  __declspec(property(get = __get__a_5__1, put = __set__a_5__1))::Newtonsoft::Json::Linq::JArray* _a_5__1;

  /// @brief Field <i>5__2, offset 0x48, size 0x4
  __declspec(property(get = __get__i_5__2, put = __set__i_5__2)) int32_t _i_5__2;

  /// @brief Field <stepCount>5__3, offset 0x4c, size 0x4
  __declspec(property(get = __get__stepCount_5__3, put = __set__stepCount_5__3)) int32_t _stepCount_5__3;

  /// @brief Field <stopIndex>5__4, offset 0x50, size 0x4
  __declspec(property(get = __get__stopIndex_5__4, put = __set__stopIndex_5__4)) int32_t _stopIndex_5__4;

  /// @brief Field <positiveStep>5__5, offset 0x54, size 0x1
  __declspec(property(get = __get__positiveStep_5__5, put = __set__positiveStep_5__5)) bool _positiveStep_5__5;

  /// @brief Field errorWhenNoMatch, offset 0x55, size 0x1
  __declspec(property(get = __get_errorWhenNoMatch, put = __set_errorWhenNoMatch)) bool errorWhenNoMatch;

  /// @brief Field <>3__errorWhenNoMatch, offset 0x56, size 0x1
  __declspec(property(get = __get___3__errorWhenNoMatch, put = __set___3__errorWhenNoMatch)) bool __3__errorWhenNoMatch;

  /// @brief Field <t>5__6, offset 0x58, size 0x8
  __declspec(property(get = __get__t_5__6, put = __set__t_5__6))::Newtonsoft::Json::Linq::JToken* _t_5__6;

  /// @brief Field <>7__wrap1, offset 0x60, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

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

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get___2__current() const;

  constexpr void __set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter*> const& __get___4__this() const;

  constexpr void __set___4__this(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get_current() const;

  constexpr void __set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __get___3__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get___3__current() const;

  constexpr void __set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr ::Newtonsoft::Json::Linq::JArray*& __get__a_5__1();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JArray*> const& __get__a_5__1() const;

  constexpr void __set__a_5__1(::Newtonsoft::Json::Linq::JArray* value);

  constexpr int32_t& __get__i_5__2();

  constexpr int32_t const& __get__i_5__2() const;

  constexpr void __set__i_5__2(int32_t value);

  constexpr int32_t& __get__stepCount_5__3();

  constexpr int32_t const& __get__stepCount_5__3() const;

  constexpr void __set__stepCount_5__3(int32_t value);

  constexpr int32_t& __get__stopIndex_5__4();

  constexpr int32_t const& __get__stopIndex_5__4() const;

  constexpr void __set__stopIndex_5__4(int32_t value);

  constexpr bool& __get__positiveStep_5__5();

  constexpr bool const& __get__positiveStep_5__5() const;

  constexpr void __set__positiveStep_5__5(bool value);

  constexpr bool& __get_errorWhenNoMatch();

  constexpr bool const& __get_errorWhenNoMatch() const;

  constexpr void __set_errorWhenNoMatch(bool value);

  constexpr bool& __get___3__errorWhenNoMatch();

  constexpr bool const& __get___3__errorWhenNoMatch() const;

  constexpr void __set___3__errorWhenNoMatch(bool value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get__t_5__6();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get__t_5__6() const;

  constexpr void __set__t_5__6(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  static inline ::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x26ac970, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x26ac9d4, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x26ac9f0, size 0x994, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x26ad384, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x26ad434, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26ad43c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26ad47c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x26ad484, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26ad534, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ArraySliceFilter___ExecuteFilter_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArraySliceFilter___ExecuteFilter_d__12(__ArraySliceFilter___ExecuteFilter_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArraySliceFilter___ExecuteFilter_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArraySliceFilter___ExecuteFilter_d__12(__ArraySliceFilter___ExecuteFilter_d__12 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArraySliceFilter___ExecuteFilter_d__12();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* _____4__this;

  /// @brief Field current, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ___current;

  /// @brief Field <>3__current, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _____3__current;

  /// @brief Field <a>5__1, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JArray* ____a_5__1;

  /// @brief Field <i>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t ____i_5__2;

  /// @brief Field <stepCount>5__3, offset: 0x4c, size: 0x4, def value: None
  int32_t ____stepCount_5__3;

  /// @brief Field <stopIndex>5__4, offset: 0x50, size: 0x4, def value: None
  int32_t ____stopIndex_5__4;

  /// @brief Field <positiveStep>5__5, offset: 0x54, size: 0x1, def value: None
  bool ____positiveStep_5__5;

  /// @brief Field errorWhenNoMatch, offset: 0x55, size: 0x1, def value: None
  bool ___errorWhenNoMatch;

  /// @brief Field <>3__errorWhenNoMatch, offset: 0x56, size: 0x1, def value: None
  bool _____3__errorWhenNoMatch;

  /// @brief Field <t>5__6, offset: 0x58, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____t_5__6;

  /// @brief Field <>7__wrap1, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, 0x68>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, ___current) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, _____3__current) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, ____a_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, ____i_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, ____stepCount_5__3) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, ____stopIndex_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, ____positiveStep_5__5) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, ___errorWhenNoMatch) == 0x55, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, _____3__errorWhenNoMatch) == 0x56, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, ____t_5__6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12, _____7__wrap1) == 0x60, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Type: Newtonsoft.Json.Linq.JsonPath::ArraySliceFilter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12020)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 98 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12013)) CS Name: ::Newtonsoft.Json.Linq.JsonPath::ArraySliceFilter*
class CORDL_TYPE ArraySliceFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
  // Declarations
  using _ExecuteFilter_d__12 = ::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12;

  /// @brief Field <Start>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Start_k__BackingField, put = __set__Start_k__BackingField))::System::Nullable_1<int32_t> _Start_k__BackingField;

  /// @brief Field <End>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__End_k__BackingField, put = __set__End_k__BackingField))::System::Nullable_1<int32_t> _End_k__BackingField;

  /// @brief Field <Step>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Step_k__BackingField, put = __set__Step_k__BackingField))::System::Nullable_1<int32_t> _Step_k__BackingField;

  __declspec(property(get = get_Start, put = set_Start))::System::Nullable_1<int32_t> Start;

  __declspec(property(get = get_End, put = set_End))::System::Nullable_1<int32_t> End;

  __declspec(property(get = get_Step, put = set_Step))::System::Nullable_1<int32_t> Step;

  constexpr ::System::Nullable_1<int32_t>& __get__Start_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __get__Start_k__BackingField() const;

  constexpr void __set__Start_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr ::System::Nullable_1<int32_t>& __get__End_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __get__End_k__BackingField() const;

  constexpr void __set__End_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr ::System::Nullable_1<int32_t>& __get__Step_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __get__Step_k__BackingField() const;

  constexpr void __set__Step_k__BackingField(::System::Nullable_1<int32_t> value);

  /// @brief Method get_Start, addr 0x26ac8c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_Start();

  /// @brief Method set_Start, addr 0x26ac8c8, size 0x8, virtual false, abstract: false, final false
  inline void set_Start(::System::Nullable_1<int32_t> value);

  /// @brief Method get_End, addr 0x26ac8d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_End();

  /// @brief Method set_End, addr 0x26ac8d8, size 0x8, virtual false, abstract: false, final false
  inline void set_End(::System::Nullable_1<int32_t> value);

  /// @brief Method get_Step, addr 0x26ac8e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_Step();

  /// @brief Method set_Step, addr 0x26ac8e8, size 0x8, virtual false, abstract: false, final false
  inline void set_Step(::System::Nullable_1<int32_t> value);

  /// @brief Method ExecuteFilter, addr 0x26ac8f0, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         bool errorWhenNoMatch);

  /// @brief Method IsValid, addr 0x26ac9b4, size 0x18, virtual false, abstract: false, final false
  inline bool IsValid(int32_t index, int32_t stopIndex, bool positiveStep);

  static inline ::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* New_ctor();

  /// @brief Method .ctor, addr 0x26ac9cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ArraySliceFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArraySliceFilter(ArraySliceFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArraySliceFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArraySliceFilter(ArraySliceFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArraySliceFilter();

public:
  /// @brief Field <Start>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____Start_k__BackingField;

  /// @brief Field <End>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____End_k__BackingField;

  /// @brief Field <Step>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____Step_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter, ____Start_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter, ____End_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter, ____Step_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter*, "Newtonsoft.Json.Linq.JsonPath", "ArraySliceFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::__ArraySliceFilter___ExecuteFilter_d__12*, "Newtonsoft.Json.Linq.JsonPath", "ArraySliceFilter/<ExecuteFilter>d__12");
