#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpHeaders)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Net::Http::Headers {
class HeaderInfo;
}
namespace System::Net::Http::Headers {
template <typename T> class HttpHeaderValueCollection_1;
}
namespace System::Net::Http::Headers {
class __HttpHeaders___GetEnumerator_d__19;
}
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
namespace System::Net::Http::Headers {
class __HttpHeaders__HeaderBucket;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System::Net::Http::Headers {
class __HttpHeaders__HeaderBucket;
}
namespace System::Net::Http::Headers {
class __HttpHeaders___GetEnumerator_d__19;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::HttpHeaders);
MARK_REF_PTR_T(::System::Net::Http::Headers::__HttpHeaders__HeaderBucket);
MARK_REF_PTR_T(::System::Net::Http::Headers::__HttpHeaders___GetEnumerator_d__19);
// Type: ::HeaderBucket
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14675))
// CS Name: ::HttpHeaders::HeaderBucket*
class CORDL_TYPE __HttpHeaders__HeaderBucket : public ::System::Object {
public:
  // Declarations
  /// @brief Field Parsed, offset 0x10, size 0x8
  __declspec(property(get = __get_Parsed, put = __set_Parsed))::System::Object* Parsed;

  /// @brief Field values, offset 0x18, size 0x8
  __declspec(property(get = __get_values, put = __set_values))::System::Collections::Generic::List_1<::StringW>* values;

  /// @brief Field CustomToString, offset 0x20, size 0x8
  __declspec(property(get = __get_CustomToString, put = __set_CustomToString))::System::Func_2<::System::Object*, ::StringW>* CustomToString;

  __declspec(property(get = get_HasStringValues)) bool HasStringValues;

  __declspec(property(get = get_Values, put = set_Values))::System::Collections::Generic::List_1<::StringW>* Values;

  constexpr ::System::Object*& __get_Parsed();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_Parsed() const;

  constexpr void __set_Parsed(::System::Object* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_values() const;

  constexpr void __set_values(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Func_2<::System::Object*, ::StringW>*& __get_CustomToString();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Object*, ::StringW>*> const& __get_CustomToString() const;

  constexpr void __set_CustomToString(::System::Func_2<::System::Object*, ::StringW>* value);

  static inline ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket* New_ctor(::System::Object* parsed, ::System::Func_2<::System::Object*, ::StringW>* converter);

  /// @brief Method .ctor addr 0x283b798 size 0x30 virtual false final false
  inline void _ctor(::System::Object* parsed, ::System::Func_2<::System::Object*, ::StringW>* converter);

  /// @brief Method get_HasStringValues addr 0x283c10c size 0x54 virtual false final false
  inline bool get_HasStringValues();

  /// @brief Method get_Values addr 0x283b7c8 size 0x80 virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Values();

  /// @brief Method set_Values addr 0x283c160 size 0x8 virtual false final false
  inline void set_Values(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method ParsedToString addr 0x283c0d0 size 0x3c virtual false final false
  inline ::StringW ParsedToString();

  // Ctor Parameters [CppParam { name: "", ty: "__HttpHeaders__HeaderBucket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HttpHeaders__HeaderBucket(__HttpHeaders__HeaderBucket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HttpHeaders__HeaderBucket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HttpHeaders__HeaderBucket(__HttpHeaders__HeaderBucket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpHeaders__HeaderBucket();

public:
  /// @brief Field Parsed, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___Parsed;

  /// @brief Field values, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___values;

  /// @brief Field CustomToString, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, ::StringW>* ___CustomToString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__HttpHeaders__HeaderBucket, 0x28>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: ::<GetEnumerator>d__19
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3832), inst: 397 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3819), inst: 1455 }), TypeDefinitionIndex(TypeDefinitionIndex(3841)), TypeDefinitionIndex(TypeDefinitionIndex(3832)), TypeDefinitionIndex(TypeDefinitionIndex(3819)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 3942 }), TypeDefinitionIndex(TypeDefinitionIndex(14675))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14676)) CS
// Name: ::HttpHeaders::<GetEnumerator>d__19*
class CORDL_TYPE __HttpHeaders___GetEnumerator_d__19 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __get___2__current,
                      put = __set___2__current))::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::System::Net::Http::Headers::HttpHeaders* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x28
  __declspec(property(get = __get___7__wrap1,
                      put = __set___7__wrap1))::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*> __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____get_Current))::System::
      Collections::Generic::KeyValuePair_2<
          ::StringW, ::System::Collections::Generic::IEnumerable_1<
                         ::StringW>*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>& __get___2__current();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> value);

  constexpr ::System::Net::Http::Headers::HttpHeaders*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpHeaders*> const& __get___4__this() const;

  constexpr void __set___4__this(::System::Net::Http::Headers::HttpHeaders* value);

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*>& __get___7__wrap1();

  constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*> value);

  static inline ::System::Net::Http::Headers::__HttpHeaders___GetEnumerator_d__19* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x283bb00 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x283c168 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x283c184 size 0x2c4 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x283c448 size 0x50 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Collections.Generic.IEnumerable<System.String>>>.get_Current addr 0x283c498 size
  /// 0xc virtual true final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x283c4a4 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x283c4e4 size 0x5c virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__HttpHeaders___GetEnumerator_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HttpHeaders___GetEnumerator_d__19(__HttpHeaders___GetEnumerator_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HttpHeaders___GetEnumerator_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HttpHeaders___GetEnumerator_d__19(__HttpHeaders___GetEnumerator_d__19 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpHeaders___GetEnumerator_d__19();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpHeaders* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x28, def value: None
  ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__HttpHeaders___GetEnumerator_d__19, 0x58>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: System.Net.Http.Headers::HttpHeaders
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14673)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14677)) CS Name:
// ::System.Net.Http.Headers::HttpHeaders*
class CORDL_TYPE HttpHeaders : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__19 = ::System::Net::Http::Headers::__HttpHeaders___GetEnumerator_d__19;

  using HeaderBucket = ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket;

  /// @brief Field headers, offset 0x10, size 0x8
  __declspec(property(get = __get_headers, put = __set_headers))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*>* headers;

  /// @brief Field HeaderKind, offset 0x18, size 0x4
  __declspec(property(get = __get_HeaderKind, put = __set_HeaderKind))::System::Net::Http::Headers::HttpHeaderKind HeaderKind;

  /// @brief Field connectionclose, offset 0x1c, size 0x2
  __declspec(property(get = __get_connectionclose, put = __set_connectionclose))::System::Nullable_1<bool> connectionclose;

  /// @brief Field transferEncodingChunked, offset 0x1e, size 0x2
  __declspec(property(get = __get_transferEncodingChunked, put = __set_transferEncodingChunked))::System::Nullable_1<bool> transferEncodingChunked;

  /// @brief Field known_headers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_known_headers,
                             put = setStaticF_known_headers))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>* known_headers;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*>*& __get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*>*> const& __get_headers() const;

  constexpr void __set_headers(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*>* value);

  constexpr ::System::Net::Http::Headers::HttpHeaderKind& __get_HeaderKind();

  constexpr ::System::Net::Http::Headers::HttpHeaderKind const& __get_HeaderKind() const;

  constexpr void __set_HeaderKind(::System::Net::Http::Headers::HttpHeaderKind value);

  constexpr ::System::Nullable_1<bool>& __get_connectionclose();

  constexpr ::System::Nullable_1<bool> const& __get_connectionclose() const;

  constexpr void __set_connectionclose(::System::Nullable_1<bool> value);

  constexpr ::System::Nullable_1<bool>& __get_transferEncodingChunked();

  constexpr ::System::Nullable_1<bool> const& __get_transferEncodingChunked() const;

  constexpr void __set_transferEncodingChunked(::System::Nullable_1<bool> value);

  static inline void setStaticF_known_headers(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>* getStaticF_known_headers();

  static inline ::System::Net::Http::Headers::HttpHeaders* New_ctor();

  /// @brief Method .ctor addr 0x283b020 size 0xe4 virtual false final false
  inline void _ctor();

  static inline ::System::Net::Http::Headers::HttpHeaders* New_ctor(::System::Net::Http::Headers::HttpHeaderKind headerKind);

  /// @brief Method .ctor addr 0x2838f68 size 0x24 virtual false final false
  inline void _ctor(::System::Net::Http::Headers::HttpHeaderKind headerKind);

  /// @brief Method AddInternal addr 0x283b104 size 0x694 virtual false final false
  inline bool AddInternal(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW>* values, ::System::Net::Http::Headers::HeaderInfo* headerInfo, bool ignoreInvalid);

  /// @brief Method TryAddWithoutValidation addr 0x282e488 size 0xb0 virtual false final false
  inline bool TryAddWithoutValidation(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW>* values);

  /// @brief Method CheckName addr 0x283b92c size 0x16c virtual false final false
  inline ::System::Net::Http::Headers::HeaderInfo* CheckName(::StringW name);

  /// @brief Method TryCheckName addr 0x283b848 size 0xe4 virtual false final false
  inline bool TryCheckName(::StringW name, ByRef<::System::Net::Http::Headers::HeaderInfo*> headerInfo);

  /// @brief Method GetEnumerator addr 0x282dfb8 size 0x68 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x283bb28 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Remove addr 0x283bb2c size 0x64 virtual false final false
  inline bool Remove(::StringW name);

  /// @brief Method GetSingleHeaderString addr 0x2830698 size 0x45c virtual false final false
  static inline ::StringW GetSingleHeaderString(::StringW key, ::System::Collections::Generic::IEnumerable_1<::StringW>* values);

  /// @brief Method ToString addr 0x283bb90 size 0x374 virtual true final false
  inline ::StringW ToString();

  /// @brief Method AddOrRemove addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void AddOrRemove(::StringW name, T value, ::System::Func_2<::System::Object*, ::StringW>* converter);

  /// @brief Method GetAllHeaderValues addr 0x283bf04 size 0x1cc virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetAllHeaderValues(::System::Net::Http::Headers::__HttpHeaders__HeaderBucket* bucket, ::System::Net::Http::Headers::HeaderInfo* headerInfo);

  /// @brief Method GetKnownHeaderKind addr 0x2830598 size 0x100 virtual false final false
  static inline ::System::Net::Http::Headers::HttpHeaderKind GetKnownHeaderKind(::StringW name);

  /// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetValue(::StringW name);

  /// @brief Method GetValues addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>* GetValues(::StringW name);

  /// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetValue(::StringW name, T value, ::System::Func_2<::System::Object*, ::StringW>* toStringConverter);

  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpHeaders(HttpHeaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpHeaders(HttpHeaders const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpHeaders();

public:
  /// @brief Field headers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*>* ___headers;

  /// @brief Field HeaderKind, offset: 0x18, size: 0x4, def value: None
  ::System::Net::Http::Headers::HttpHeaderKind ___HeaderKind;

  /// @brief Field connectionclose, offset: 0x1c, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___connectionclose;

  /// @brief Field transferEncodingChunked, offset: 0x1e, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___transferEncodingChunked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpHeaders, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::HttpHeaders);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpHeaders*, "System.Net.Http.Headers", "HttpHeaders");
NEED_NO_BOX(::System::Net::Http::Headers::__HttpHeaders__HeaderBucket);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__HttpHeaders__HeaderBucket*, "System.Net.Http.Headers", "HttpHeaders/HeaderBucket");
NEED_NO_BOX(::System::Net::Http::Headers::__HttpHeaders___GetEnumerator_d__19);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__HttpHeaders___GetEnumerator_d__19*, "System.Net.Http.Headers", "HttpHeaders/<GetEnumerator>d__19");
