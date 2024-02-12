#pragma once
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
class __FieldMultipleFilter___ExecuteFilter_d__4;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class __FieldMultipleFilter____c;
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
class __FieldMultipleFilter___ExecuteFilter_d__4;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class __FieldMultipleFilter____c;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11914))
// CS Name: ::FieldMultipleFilter::<>c*
class CORDL_TYPE __FieldMultipleFilter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Func_2<::StringW, ::StringW>* __9__4_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter____c* value);

  static inline ::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter____c* getStaticF___9();

  static inline void setStaticF___9__4_0(::System::Func_2<::StringW, ::StringW>* value);

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__4_0();

  static inline ::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter____c* New_ctor();

  /// @brief Method .ctor, addr 0x26d0268, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ExecuteFilter>b__4_0, addr 0x26d0270, size 0x50, virtual false, abstract: false, final false
  inline ::StringW _ExecuteFilter_b__4_0(::StringW n);

  // Ctor Parameters [CppParam { name: "", ty: "__FieldMultipleFilter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FieldMultipleFilter____c(__FieldMultipleFilter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FieldMultipleFilter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FieldMultipleFilter____c(__FieldMultipleFilter____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FieldMultipleFilter____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Type: ::<ExecuteFilter>d__4
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3841)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 398
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(11915)) CS Name: ::FieldMultipleFilter::<ExecuteFilter>d__4*
class CORDL_TYPE __FieldMultipleFilter___ExecuteFilter_d__4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field current, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current;

  /// @brief Field <>3__current, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__current, put = __cordl_internal_set___3__current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter* __4__this;

  /// @brief Field <o>5__1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__o_5__1, put = __cordl_internal_set__o_5__1))::Newtonsoft::Json::Linq::JObject* _o_5__1;

  /// @brief Field errorWhenNoMatch, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_errorWhenNoMatch, put = __cordl_internal_set_errorWhenNoMatch)) bool errorWhenNoMatch;

  /// @brief Field <>3__errorWhenNoMatch, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get___3__errorWhenNoMatch, put = __cordl_internal_set___3__errorWhenNoMatch)) bool __3__errorWhenNoMatch;

  /// @brief Field <name>5__2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__name_5__2, put = __cordl_internal_set__name_5__2))::StringW _name_5__2;

  /// @brief Field <t>5__3, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__t_5__3, put = __cordl_internal_set__t_5__3))::Newtonsoft::Json::Linq::JToken* _t_5__3;

  /// @brief Field <>7__wrap1, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2))::System::Collections::Generic::__List_1__Enumerator<::StringW> __7__wrap2;

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

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get_current() const;

  constexpr void __cordl_internal_set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___3__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get___3__current() const;

  constexpr void __cordl_internal_set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter* value);

  constexpr ::Newtonsoft::Json::Linq::JObject*& __cordl_internal_get__o_5__1();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JObject*> const& __cordl_internal_get__o_5__1() const;

  constexpr void __cordl_internal_set__o_5__1(::Newtonsoft::Json::Linq::JObject* value);

  constexpr bool& __cordl_internal_get_errorWhenNoMatch();

  constexpr bool const& __cordl_internal_get_errorWhenNoMatch() const;

  constexpr void __cordl_internal_set_errorWhenNoMatch(bool value);

  constexpr bool& __cordl_internal_get___3__errorWhenNoMatch();

  constexpr bool const& __cordl_internal_get___3__errorWhenNoMatch() const;

  constexpr void __cordl_internal_set___3__errorWhenNoMatch(bool value);

  constexpr ::StringW& __cordl_internal_get__name_5__2();

  constexpr ::StringW const& __cordl_internal_get__name_5__2() const;

  constexpr void __cordl_internal_set__name_5__2(::StringW value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__t_5__3();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__t_5__3() const;

  constexpr void __cordl_internal_set__t_5__3(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& __cordl_internal_get___7__wrap2();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& __cordl_internal_get___7__wrap2() const;

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::__List_1__Enumerator<::StringW> value);

  static inline ::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x26d01b8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x26d02c0, size 0xb0, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x26d0370, size 0x6d8, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x26d0a98, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x26d0a48, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x26d0b48, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26d0b50, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26d0b90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x26d0b98, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26d0c48, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__FieldMultipleFilter___ExecuteFilter_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FieldMultipleFilter___ExecuteFilter_d__4(__FieldMultipleFilter___ExecuteFilter_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FieldMultipleFilter___ExecuteFilter_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FieldMultipleFilter___ExecuteFilter_d__4(__FieldMultipleFilter___ExecuteFilter_d__4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FieldMultipleFilter___ExecuteFilter_d__4();

public:
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

  /// @brief Field <o>5__1, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JObject* ____o_5__1;

  /// @brief Field errorWhenNoMatch, offset: 0x48, size: 0x1, def value: None
  bool ___errorWhenNoMatch;

  /// @brief Field <>3__errorWhenNoMatch, offset: 0x49, size: 0x1, def value: None
  bool _____3__errorWhenNoMatch;

  /// @brief Field <name>5__2, offset: 0x50, size: 0x8, def value: None
  ::StringW ____name_5__2;

  /// @brief Field <t>5__3, offset: 0x58, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____t_5__3;

  /// @brief Field <>7__wrap1, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x68, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::StringW> _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, 0x80>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, ___current) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, _____3__current) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, ____o_5__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, ___errorWhenNoMatch) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, _____3__errorWhenNoMatch) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, ____name_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, ____t_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, _____7__wrap1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4, _____7__wrap2) == 0x68, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Type: Newtonsoft.Json.Linq.JsonPath::FieldMultipleFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11918))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11916))
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::FieldMultipleFilter*
class CORDL_TYPE FieldMultipleFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
  // Declarations
  using _ExecuteFilter_d__4 = ::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4;

  using __c = ::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter____c;

  /// @brief Field <Names>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Names_k__BackingField, put = __cordl_internal_set__Names_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _Names_k__BackingField;

  __declspec(property(get = get_Names, put = set_Names))::System::Collections::Generic::List_1<::StringW>* Names;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__Names_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__Names_k__BackingField() const;

  constexpr void __cordl_internal_set__Names_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_Names, addr 0x26d012c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Names();

  /// @brief Method set_Names, addr 0x26d0134, size 0x8, virtual false, abstract: false, final false
  inline void set_Names(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method ExecuteFilter, addr 0x26d013c, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         bool errorWhenNoMatch);

  static inline ::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter* New_ctor();

  /// @brief Method .ctor, addr 0x26d01fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldMultipleFilter(FieldMultipleFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldMultipleFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldMultipleFilter(FieldMultipleFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldMultipleFilter();

public:
  /// @brief Field <Names>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____Names_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter, ____Names_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::FieldMultipleFilter*, "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter___ExecuteFilter_d__4*, "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter/<ExecuteFilter>d__4");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::__FieldMultipleFilter____c*, "Newtonsoft.Json.Linq.JsonPath", "FieldMultipleFilter/<>c");
