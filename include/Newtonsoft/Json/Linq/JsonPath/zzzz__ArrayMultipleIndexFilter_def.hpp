#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/ArrayMultipleIndexFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayMultipleIndexFilter)
namespace Newtonsoft::Json::Linq::JsonPath {
class ArrayMultipleIndexFilter__ExecuteFilter_d__2;
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class ArrayMultipleIndexFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class ArrayMultipleIndexFilter__ExecuteFilter_d__2;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerable,
// System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.ArrayMultipleIndexFilter/<ExecuteFilter>d__2
class CORDL_TYPE ArrayMultipleIndexFilter__ExecuteFilter_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)) ::Newtonsoft::Json::Linq::JToken*
      System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>3__current, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__current, put = __cordl_internal_set___3__current)) ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current;

  /// @brief Field <>3__settings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___3__settings, put = __cordl_internal_set___3__settings)) ::Newtonsoft::Json::Linq::JsonSelectSettings* __3__settings;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter* __4__this;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Field <>7__wrap3, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) ::System::Collections::Generic::List_1_Enumerator<int32_t> __7__wrap3;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <t>5__3, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__t_5__3, put = __cordl_internal_set__t_5__3)) ::Newtonsoft::Json::Linq::JToken* _t_5__3;

  /// @brief Field current, offset 0x28, size 0x8
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

  /// @brief Method MoveNext, addr 0x3f318a8, size 0x35c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x3f31d4c, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x3f31d04, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3f31df8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3f31d0c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3f31d44, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3f317f8, size 0xb0, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___2__current() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get___3__current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___3__current();

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings* const& __cordl_internal_get___3__settings() const;

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings*& __cordl_internal_get___3__settings();

  constexpr ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap1();

  constexpr ::System::Collections::Generic::List_1_Enumerator<int32_t> const& __cordl_internal_get___7__wrap3() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<int32_t>& __cordl_internal_get___7__wrap3();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__t_5__3() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__t_5__3();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get_current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get_current();

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings* const& __cordl_internal_get_settings() const;

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings*& __cordl_internal_get_settings();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___3__settings(::Newtonsoft::Json::Linq::JsonSelectSettings* value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::List_1_Enumerator<int32_t> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__t_5__3(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set_settings(::Newtonsoft::Json::Linq::JsonSelectSettings* value);

  /// @brief Method <>m__Finally1, addr 0x3f31c54, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x3f31c04, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x3f317c4, size 0x34, virtual false, abstract: false, final false
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
  constexpr ArrayMultipleIndexFilter__ExecuteFilter_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayMultipleIndexFilter__ExecuteFilter_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayMultipleIndexFilter__ExecuteFilter_d__2(ArrayMultipleIndexFilter__ExecuteFilter_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayMultipleIndexFilter__ExecuteFilter_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayMultipleIndexFilter__ExecuteFilter_d__2(ArrayMultipleIndexFilter__ExecuteFilter_d__2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10440 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field current, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ___current;

  /// @brief Field <>3__current, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _____3__current;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter* _____4__this;

  /// @brief Field settings, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonSelectSettings* ___settings;

  /// @brief Field <>3__settings, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonSelectSettings* _____3__settings;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  /// @brief Field <t>5__3, offset: 0x58, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____t_5__3;

  /// @brief Field <>7__wrap3, offset: 0x60, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<int32_t> _____7__wrap3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, ___current) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, _____3__current) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, ___settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, _____3__settings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, _____7__wrap1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, ____t_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, _____7__wrap3) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2, 0x78>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Dependencies Newtonsoft.Json.Linq.JsonPath.PathFilter
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.ArrayMultipleIndexFilter
class CORDL_TYPE ArrayMultipleIndexFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
  // Declarations
  using _ExecuteFilter_d__2 = ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2;

  /// @brief Field Indexes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Indexes, put = __cordl_internal_set_Indexes)) ::System::Collections::Generic::List_1<int32_t>* Indexes;

  /// @brief Method ExecuteFilter, addr 0x3f31740, size 0x84, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* root,
                                                                                                         ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter* New_ctor(::System::Collections::Generic::List_1<int32_t>* indexes);

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_Indexes() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_Indexes();

  constexpr void __cordl_internal_set_Indexes(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x3f31718, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<int32_t>* indexes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayMultipleIndexFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayMultipleIndexFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayMultipleIndexFilter(ArrayMultipleIndexFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayMultipleIndexFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayMultipleIndexFilter(ArrayMultipleIndexFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10441 };

  /// @brief Field Indexes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___Indexes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter, ___Indexes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter*, "Newtonsoft.Json.Linq.JsonPath", "ArrayMultipleIndexFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::ArrayMultipleIndexFilter__ExecuteFilter_d__2*, "Newtonsoft.Json.Linq.JsonPath", "ArrayMultipleIndexFilter/<ExecuteFilter>d__2");
