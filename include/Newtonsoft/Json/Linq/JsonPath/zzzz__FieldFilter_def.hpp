#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldFilter)
namespace Newtonsoft::Json::Linq::JsonPath {
class __FieldFilter___ExecuteFilter_d__4;
}
namespace Newtonsoft::Json::Linq {
class JObject;
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
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
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class FieldFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class __FieldFilter___ExecuteFilter_d__4;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::FieldFilter);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4);
// Type: ::<ExecuteFilter>d__4
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: ::FieldFilter::<ExecuteFilter>d__4*
class CORDL_TYPE __FieldFilter___ExecuteFilter_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>3__current, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__current, put = __cordl_internal_set___3__current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current;

  /// @brief Field <>3__errorWhenNoMatch, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get___3__errorWhenNoMatch, put = __cordl_internal_set___3__errorWhenNoMatch)) bool __3__errorWhenNoMatch;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JsonPath::FieldFilter* __4__this;

  /// @brief Field <>7__wrap1, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get___7__wrap2,
      put = __cordl_internal_set___7__wrap2))::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <o>5__1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__o_5__1, put = __cordl_internal_set__o_5__1))::Newtonsoft::Json::Linq::JObject* _o_5__1;

  /// @brief Field <t>5__2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__t_5__2, put = __cordl_internal_set__t_5__2))::Newtonsoft::Json::Linq::JToken* _t_5__2;

  /// @brief Field current, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current;

  /// @brief Field errorWhenNoMatch, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_errorWhenNoMatch, put = __cordl_internal_set_errorWhenNoMatch)) bool errorWhenNoMatch;

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

  /// @brief Method MoveNext, addr 0x27ff288, size 0x648, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x27ffa80, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x27ffa30, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x27ffb30, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x27ffa38, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x27ffa78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x27ff1d4, size 0xb4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___3__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get___3__current() const;

  constexpr bool const& __cordl_internal_get___3__errorWhenNoMatch() const;

  constexpr bool& __cordl_internal_get___3__errorWhenNoMatch();

  constexpr ::Newtonsoft::Json::Linq::JsonPath::FieldFilter*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JsonPath::FieldFilter*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*> const&
  __cordl_internal_get___7__wrap2() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Newtonsoft::Json::Linq::JObject*& __cordl_internal_get__o_5__1();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JObject*> const& __cordl_internal_get__o_5__1() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__t_5__2();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__t_5__2() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get_current() const;

  constexpr bool const& __cordl_internal_get_errorWhenNoMatch() const;

  constexpr bool& __cordl_internal_get_errorWhenNoMatch();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___3__errorWhenNoMatch(bool value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JsonPath::FieldFilter* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__o_5__1(::Newtonsoft::Json::Linq::JObject* value);

  constexpr void __cordl_internal_set__t_5__2(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set_errorWhenNoMatch(bool value);

  /// @brief Method <>m__Finally1, addr 0x27ff980, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x27ff8d0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x27ff188, size 0x44, virtual false, abstract: false, final false
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
  constexpr __FieldFilter___ExecuteFilter_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FieldFilter___ExecuteFilter_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FieldFilter___ExecuteFilter_d__4(__FieldFilter___ExecuteFilter_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FieldFilter___ExecuteFilter_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FieldFilter___ExecuteFilter_d__4(__FieldFilter___ExecuteFilter_d__4 const&) = delete;

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
  ::Newtonsoft::Json::Linq::JsonPath::FieldFilter* _____4__this;

  /// @brief Field errorWhenNoMatch, offset: 0x40, size: 0x1, def value: None
  bool ___errorWhenNoMatch;

  /// @brief Field <>3__errorWhenNoMatch, offset: 0x41, size: 0x1, def value: None
  bool _____3__errorWhenNoMatch;

  /// @brief Field <o>5__1, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JObject* ____o_5__1;

  /// @brief Field <t>5__2, offset: 0x50, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____t_5__2;

  /// @brief Field <>7__wrap1, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, 0x68>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, ___current) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, _____3__current) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, ___errorWhenNoMatch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, _____3__errorWhenNoMatch) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, ____o_5__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, ____t_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, _____7__wrap1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4, _____7__wrap2) == 0x60, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Type: Newtonsoft.Json.Linq.JsonPath::FieldFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::FieldFilter*
class CORDL_TYPE FieldFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
  // Declarations
  using _ExecuteFilter_d__4 = ::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Method ExecuteFilter, addr 0x27ff10c, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         bool errorWhenNoMatch);

  static inline ::Newtonsoft::Json::Linq::JsonPath::FieldFilter* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x27ff1cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x27ff0fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method set_Name, addr 0x27ff104, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldFilter(FieldFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldFilter(FieldFilter const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::FieldFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldFilter, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::FieldFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::FieldFilter*, "Newtonsoft.Json.Linq.JsonPath", "FieldFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::__FieldFilter___ExecuteFilter_d__4*, "Newtonsoft.Json.Linq.JsonPath", "FieldFilter/<ExecuteFilter>d__4");
