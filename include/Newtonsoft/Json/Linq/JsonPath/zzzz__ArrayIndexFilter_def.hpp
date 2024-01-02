#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayIndexFilter)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class __ArrayIndexFilter___ExecuteFilter_d__4;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class ArrayIndexFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class __ArrayIndexFilter___ExecuteFilter_d__4;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4);
// Type: ::<ExecuteFilter>d__4
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12008))
// CS Name: ::ArrayIndexFilter::<ExecuteFilter>d__4*
class CORDL_TYPE __ArrayIndexFilter___ExecuteFilter_d__4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field current, offset 0x28, size 0x8
  __declspec(property(get = __get_current, put = __set_current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current;

  /// @brief Field <>3__current, offset 0x30, size 0x8
  __declspec(property(get = __get___3__current, put = __set___3__current))::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* __3__current;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter* __4__this;

  /// @brief Field errorWhenNoMatch, offset 0x40, size 0x1
  __declspec(property(get = __get_errorWhenNoMatch, put = __set_errorWhenNoMatch)) bool errorWhenNoMatch;

  /// @brief Field <>3__errorWhenNoMatch, offset 0x41, size 0x1
  __declspec(property(get = __get___3__errorWhenNoMatch, put = __set___3__errorWhenNoMatch)) bool __3__errorWhenNoMatch;

  /// @brief Field <t>5__1, offset 0x48, size 0x8
  __declspec(property(get = __get__t_5__1, put = __set__t_5__1))::Newtonsoft::Json::Linq::JToken* _t_5__1;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x58, size 0x8
  __declspec(property(get = __get___7__wrap2, put = __set___7__wrap2))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get___2__current() const;

  constexpr void __set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get_current() const;

  constexpr void __set_current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*& __get___3__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get___3__current() const;

  constexpr void __set___3__current(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr ::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter*> const& __get___4__this() const;

  constexpr void __set___4__this(::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter* value);

  constexpr bool& __get_errorWhenNoMatch();

  constexpr bool const& __get_errorWhenNoMatch() const;

  constexpr void __set_errorWhenNoMatch(bool value);

  constexpr bool& __get___3__errorWhenNoMatch();

  constexpr bool const& __get___3__errorWhenNoMatch() const;

  constexpr void __set___3__errorWhenNoMatch(bool value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get__t_5__1();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get__t_5__1() const;

  constexpr void __set__t_5__1(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get___7__wrap2() const;

  constexpr void __set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  static inline ::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x26ab5d8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x26ab62c, size 0xb4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x26ab6e0, size 0x5c0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x26ac028, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x26abf78, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x26ac0d8, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26ac0e0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26ac120, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x26ac128, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26ac1d8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayIndexFilter___ExecuteFilter_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayIndexFilter___ExecuteFilter_d__4(__ArrayIndexFilter___ExecuteFilter_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayIndexFilter___ExecuteFilter_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayIndexFilter___ExecuteFilter_d__4(__ArrayIndexFilter___ExecuteFilter_d__4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayIndexFilter___ExecuteFilter_d__4();

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
  ::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter* _____4__this;

  /// @brief Field errorWhenNoMatch, offset: 0x40, size: 0x1, def value: None
  bool ___errorWhenNoMatch;

  /// @brief Field <>3__errorWhenNoMatch, offset: 0x41, size: 0x1, def value: None
  bool _____3__errorWhenNoMatch;

  /// @brief Field <t>5__1, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____t_5__1;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, 0x60>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, ___current) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, _____3__current) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, ___errorWhenNoMatch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, _____3__errorWhenNoMatch) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, ____t_5__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, _____7__wrap1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4, _____7__wrap2) == 0x58, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
// Type: Newtonsoft.Json.Linq.JsonPath::ArrayIndexFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(2448)),
// TypeDefinitionIndex(TypeDefinitionIndex(12020))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12009)) CS Name: ::Newtonsoft.Json.Linq.JsonPath::ArrayIndexFilter*
class CORDL_TYPE ArrayIndexFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
  // Declarations
  using _ExecuteFilter_d__4 = ::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4;

  /// @brief Field <Index>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Index_k__BackingField, put = __set__Index_k__BackingField))::System::Nullable_1<int32_t> _Index_k__BackingField;

  __declspec(property(get = get_Index, put = set_Index))::System::Nullable_1<int32_t> Index;

  constexpr ::System::Nullable_1<int32_t>& __get__Index_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __get__Index_k__BackingField() const;

  constexpr void __set__Index_k__BackingField(::System::Nullable_1<int32_t> value);

  /// @brief Method get_Index, addr 0x26ab54c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_Index();

  /// @brief Method set_Index, addr 0x26ab554, size 0x8, virtual false, abstract: false, final false
  inline void set_Index(::System::Nullable_1<int32_t> value);

  /// @brief Method ExecuteFilter, addr 0x26ab55c, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         bool errorWhenNoMatch);

  static inline ::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter* New_ctor();

  /// @brief Method .ctor, addr 0x26ab61c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ArrayIndexFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayIndexFilter(ArrayIndexFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayIndexFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayIndexFilter(ArrayIndexFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayIndexFilter();

public:
  /// @brief Field <Index>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____Index_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter, ____Index_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::ArrayIndexFilter*, "Newtonsoft.Json.Linq.JsonPath", "ArrayIndexFilter");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::__ArrayIndexFilter___ExecuteFilter_d__4*, "Newtonsoft.Json.Linq.JsonPath", "ArrayIndexFilter/<ExecuteFilter>d__4");
