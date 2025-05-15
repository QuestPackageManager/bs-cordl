#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/ArraySliceFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySliceFilter)
namespace Newtonsoft::Json::Linq::JsonPath {
class ArraySliceFilter__ExecuteFilter_d__12;
}
namespace Newtonsoft::Json::Linq {
class JArray;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonSelectSettings;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
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
class ArraySliceFilter__ExecuteFilter_d__12;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.ArraySliceFilter/<ExecuteFilter>d__12
class CORDL_TYPE ArraySliceFilter__ExecuteFilter_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)) ::Newtonsoft::Json::Linq::JToken*
      System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>3__current, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___3__current, put = __cordl_internal_set___3__current)) ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current;

  /// @brief Field <>3__settings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___3__settings, put = __cordl_internal_set___3__settings)) ::Newtonsoft::Json::Linq::JsonSelectSettings* __3__settings;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* __4__this;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <a>5__3, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__a_5__3, put = __cordl_internal_set__a_5__3)) ::Newtonsoft::Json::Linq::JArray* _a_5__3;

  /// @brief Field <i>5__7, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__7, put = __cordl_internal_set__i_5__7)) int32_t _i_5__7;

  /// @brief Field <positiveStep>5__6, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__positiveStep_5__6, put = __cordl_internal_set__positiveStep_5__6)) bool _positiveStep_5__6;

  /// @brief Field <stepCount>5__4, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__stepCount_5__4, put = __cordl_internal_set__stepCount_5__4)) int32_t _stepCount_5__4;

  /// @brief Field <stopIndex>5__5, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__stopIndex_5__5, put = __cordl_internal_set__stopIndex_5__5)) int32_t _stopIndex_5__5;

  /// @brief Field current, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current)) ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current;

  /// @brief Field settings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::Newtonsoft::Json::Linq::JsonSelectSettings* settings;

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

  /// @brief Method MoveNext, addr 0x3f32304, size 0x930, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x3f32d2c, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x3f32ce4, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3f32dd8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3f32cec, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3f32d24, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3f322e8, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___2__current() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get___3__current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___3__current();

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings* const& __cordl_internal_get___3__settings() const;

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings*& __cordl_internal_get___3__settings();

  constexpr ::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Newtonsoft::Json::Linq::JArray* const& __cordl_internal_get__a_5__3() const;

  constexpr ::Newtonsoft::Json::Linq::JArray*& __cordl_internal_get__a_5__3();

  constexpr int32_t const& __cordl_internal_get__i_5__7() const;

  constexpr int32_t& __cordl_internal_get__i_5__7();

  constexpr bool const& __cordl_internal_get__positiveStep_5__6() const;

  constexpr bool& __cordl_internal_get__positiveStep_5__6();

  constexpr int32_t const& __cordl_internal_get__stepCount_5__4() const;

  constexpr int32_t& __cordl_internal_get__stepCount_5__4();

  constexpr int32_t const& __cordl_internal_get__stopIndex_5__5() const;

  constexpr int32_t& __cordl_internal_get__stopIndex_5__5();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get_current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get_current();

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings* const& __cordl_internal_get_settings() const;

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings*& __cordl_internal_get_settings();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___3__settings(::Newtonsoft::Json::Linq::JsonSelectSettings* value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__a_5__3(::Newtonsoft::Json::Linq::JArray* value);

  constexpr void __cordl_internal_set__i_5__7(int32_t value);

  constexpr void __cordl_internal_set__positiveStep_5__6(bool value);

  constexpr void __cordl_internal_set__stepCount_5__4(int32_t value);

  constexpr void __cordl_internal_set__stopIndex_5__5(int32_t value);

  constexpr void __cordl_internal_set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set_settings(::Newtonsoft::Json::Linq::JsonSelectSettings* value);

  /// @brief Method <>m__Finally1, addr 0x3f32c34, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3f32294, size 0x34, virtual false, abstract: false, final false
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
  constexpr ArraySliceFilter__ExecuteFilter_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArraySliceFilter__ExecuteFilter_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArraySliceFilter__ExecuteFilter_d__12(ArraySliceFilter__ExecuteFilter_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArraySliceFilter__ExecuteFilter_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArraySliceFilter__ExecuteFilter_d__12(ArraySliceFilter__ExecuteFilter_d__12 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10442 };

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

  /// @brief Field settings, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonSelectSettings* ___settings;

  /// @brief Field <>3__settings, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonSelectSettings* _____3__settings;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  /// @brief Field <a>5__3, offset: 0x58, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JArray* ____a_5__3;

  /// @brief Field <stepCount>5__4, offset: 0x60, size: 0x4, def value: None
  int32_t ____stepCount_5__4;

  /// @brief Field <stopIndex>5__5, offset: 0x64, size: 0x4, def value: None
  int32_t ____stopIndex_5__5;

  /// @brief Field <positiveStep>5__6, offset: 0x68, size: 0x1, def value: None
  bool ____positiveStep_5__6;

  /// @brief Field <i>5__7, offset: 0x6c, size: 0x4, def value: None
  int32_t ____i_5__7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, ___current) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, _____3__current) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, ___settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, _____3__settings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, _____7__wrap1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, ____a_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, ____stepCount_5__4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, ____stopIndex_5__5) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, ____positiveStep_5__6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, ____i_5__7) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12, 0x70>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Dependencies Newtonsoft.Json.Linq.JsonPath.PathFilter, System.Nullable`1<T>
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.ArraySliceFilter
class CORDL_TYPE ArraySliceFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
  // Declarations
  using _ExecuteFilter_d__12 = ::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12;

  __declspec(property(get = get_End, put = set_End)) ::System::Nullable_1<int32_t> End;

  __declspec(property(get = get_Start, put = set_Start)) ::System::Nullable_1<int32_t> Start;

  __declspec(property(get = get_Step, put = set_Step)) ::System::Nullable_1<int32_t> Step;

  /// @brief Field <End>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__End_k__BackingField, put = __cordl_internal_set__End_k__BackingField)) ::System::Nullable_1<int32_t> _End_k__BackingField;

  /// @brief Field <Start>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Start_k__BackingField, put = __cordl_internal_set__Start_k__BackingField)) ::System::Nullable_1<int32_t> _Start_k__BackingField;

  /// @brief Field <Step>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Step_k__BackingField, put = __cordl_internal_set__Step_k__BackingField)) ::System::Nullable_1<int32_t> _Step_k__BackingField;

  /// @brief Method ExecuteFilter, addr 0x3f3220c, size 0x88, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* root,
                                                                                                         ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  /// @brief Method IsValid, addr 0x3f322c8, size 0x18, virtual false, abstract: false, final false
  inline bool IsValid(int32_t index, int32_t stopIndex, bool positiveStep);

  static inline ::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__End_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__End_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__Start_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__Start_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__Step_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__Step_k__BackingField();

  constexpr void __cordl_internal_set__End_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__Start_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__Step_k__BackingField(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x3f322e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_End, addr 0x3f321ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_End();

  /// @brief Method get_Start, addr 0x3f321dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_Start();

  /// @brief Method get_Step, addr 0x3f321fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_Step();

  /// @brief Method set_End, addr 0x3f321f4, size 0x8, virtual false, abstract: false, final false
  inline void set_End(::System::Nullable_1<int32_t> value);

  /// @brief Method set_Start, addr 0x3f321e4, size 0x8, virtual false, abstract: false, final false
  inline void set_Start(::System::Nullable_1<int32_t> value);

  /// @brief Method set_Step, addr 0x3f32204, size 0x8, virtual false, abstract: false, final false
  inline void set_Step(::System::Nullable_1<int32_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArraySliceFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArraySliceFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArraySliceFilter(ArraySliceFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArraySliceFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArraySliceFilter(ArraySliceFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10443 };

  /// @brief Field <Start>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____Start_k__BackingField;

  /// @brief Field <End>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____End_k__BackingField;

  /// @brief Field <Step>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____Step_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter, ____Start_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter, ____End_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter, ____Step_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter, 0x28>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter*, "Newtonsoft.Json.Linq.JsonPath", "ArraySliceFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::ArraySliceFilter__ExecuteFilter_d__12*, "Newtonsoft.Json.Linq.JsonPath", "ArraySliceFilter/<ExecuteFilter>d__12");
