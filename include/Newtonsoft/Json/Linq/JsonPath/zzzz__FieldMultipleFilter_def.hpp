#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/FieldMultipleFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldMultipleFilter)
namespace Newtonsoft::Json::Linq::JsonPath {
class FieldMultipleFilter__ExecuteFilter_d__2;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class FieldMultipleFilter___c;
}
namespace Newtonsoft::Json::Linq {
class JObject;
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
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class FieldMultipleFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class FieldMultipleFilter__ExecuteFilter_d__2;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class FieldMultipleFilter___c;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c);
// Dependencies System.Object
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c
class CORDL_TYPE FieldMultipleFilter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<::StringW, ::StringW>* __9__2_0;

  static inline ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c* New_ctor();

  /// @brief Method <ExecuteFilter>b__2_0, addr 0x5be1018, size 0x54, virtual false, abstract: false, final false
  inline ::StringW _ExecuteFilter_b__2_0(::StringW n);

  /// @brief Method .ctor, addr 0x5be1014, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__2_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldMultipleFilter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldMultipleFilter___c(FieldMultipleFilter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldMultipleFilter___c(FieldMultipleFilter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13604 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2
class CORDL_TYPE FieldMultipleFilter__ExecuteFilter_d__2 : public ::System::Object {
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
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter* __4__this;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Field <>7__wrap3, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3)) ::System::Collections::Generic::List_1_Enumerator<::StringW> __7__wrap3;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <name>5__5, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__name_5__5, put = __cordl_internal_set__name_5__5)) ::StringW _name_5__5;

  /// @brief Field <o>5__3, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__o_5__3, put = __cordl_internal_set__o_5__3)) ::Newtonsoft::Json::Linq::JObject* _o_5__3;

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

  /// @brief Method MoveNext, addr 0x5be1150, size 0x718, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x5be19ac, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x5be1964, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5be1a54, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5be196c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5be19a4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5be106c, size 0xe4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___2__current() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get___3__current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___3__current();

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings* const& __cordl_internal_get___3__settings() const;

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings*& __cordl_internal_get___3__settings();

  constexpr ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap1();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::StringW> const& __cordl_internal_get___7__wrap3() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::StringW>& __cordl_internal_get___7__wrap3();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::StringW const& __cordl_internal_get__name_5__5() const;

  constexpr ::StringW& __cordl_internal_get__name_5__5();

  constexpr ::Newtonsoft::Json::Linq::JObject* const& __cordl_internal_get__o_5__3() const;

  constexpr ::Newtonsoft::Json::Linq::JObject*& __cordl_internal_get__o_5__3();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get_current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get_current();

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings* const& __cordl_internal_get_settings() const;

  constexpr ::Newtonsoft::Json::Linq::JsonSelectSettings*& __cordl_internal_get_settings();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___3__settings(::Newtonsoft::Json::Linq::JsonSelectSettings* value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::List_1_Enumerator<::StringW> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__name_5__5(::StringW value);

  constexpr void __cordl_internal_set__o_5__3(::Newtonsoft::Json::Linq::JObject* value);

  constexpr void __cordl_internal_set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set_settings(::Newtonsoft::Json::Linq::JsonSelectSettings* value);

  /// @brief Method <>m__Finally1, addr 0x5be18b0, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x5be1868, size 0x48, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x5be0fa0, size 0x20, virtual false, abstract: false, final false
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
  constexpr FieldMultipleFilter__ExecuteFilter_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter__ExecuteFilter_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldMultipleFilter__ExecuteFilter_d__2(FieldMultipleFilter__ExecuteFilter_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter__ExecuteFilter_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldMultipleFilter__ExecuteFilter_d__2(FieldMultipleFilter__ExecuteFilter_d__2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13605 };

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
  ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter* _____4__this;

  /// @brief Field settings, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonSelectSettings* ___settings;

  /// @brief Field <>3__settings, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonSelectSettings* _____3__settings;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  /// @brief Field <o>5__3, offset: 0x58, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JObject* ____o_5__3;

  /// @brief Field <>7__wrap3, offset: 0x60, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::StringW> _____7__wrap3;

  /// @brief Field <name>5__5, offset: 0x78, size: 0x8, def value: None
  ::StringW ____name_5__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, ___current) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, _____3__current) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, ___settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, _____3__settings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, _____7__wrap1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, ____o_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, _____7__wrap3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, ____name_5__5) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2, 0x80>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Dependencies Newtonsoft.Json.Linq.JsonPath.PathFilter
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter
class CORDL_TYPE FieldMultipleFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
  // Declarations
  using _ExecuteFilter_d__2 = ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2;

  using __c = ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c;

  /// @brief Field Names, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Names, put = __cordl_internal_set_Names)) ::System::Collections::Generic::List_1<::StringW>* Names;

  /// @brief Method ExecuteFilter, addr 0x5be0f20, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* root,
                                                                                                         ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter* New_ctor(::System::Collections::Generic::List_1<::StringW>* names);

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Names() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Names();

  constexpr void __cordl_internal_set_Names(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x5be0f18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::StringW>* names);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldMultipleFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldMultipleFilter(FieldMultipleFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldMultipleFilter(FieldMultipleFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13606 };

  /// @brief Field Names, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___Names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter, ___Names) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter*, "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter__ExecuteFilter_d__2*, "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter/<ExecuteFilter>d__2");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter___c*, "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter/<>c");
