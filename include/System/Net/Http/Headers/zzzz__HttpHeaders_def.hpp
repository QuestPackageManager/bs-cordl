#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpHeaders.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpHeaders)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net::Http::Headers {
class HeaderInfo;
}
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
namespace System::Net::Http::Headers {
template <typename T> class HttpHeaderValueCollection_1;
}
namespace System::Net::Http::Headers {
class HttpHeaders_HeaderBucket;
}
namespace System::Net::Http::Headers {
class HttpHeaders__GetEnumerator_d__19;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System::Net::Http::Headers {
class HttpHeaders_HeaderBucket;
}
namespace System::Net::Http::Headers {
class HttpHeaders__GetEnumerator_d__19;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::HttpHeaders);
MARK_REF_PTR_T(::System::Net::Http::Headers::HttpHeaders_HeaderBucket);
MARK_REF_PTR_T(::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19);
// Dependencies System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.HttpHeaders/HeaderBucket
class CORDL_TYPE HttpHeaders_HeaderBucket : public ::System::Object {
public:
  // Declarations
  /// @brief Field CustomToString, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomToString, put = __cordl_internal_set_CustomToString)) ::System::Func_2<::System::Object*, ::StringW>* CustomToString;

  __declspec(property(get = get_HasStringValues)) bool HasStringValues;

  /// @brief Field Parsed, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Parsed, put = __cordl_internal_set_Parsed)) ::System::Object* Parsed;

  __declspec(property(get = get_Values, put = set_Values)) ::System::Collections::Generic::List_1<::StringW>* Values;

  /// @brief Field values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::System::Collections::Generic::List_1<::StringW>* values;

  static inline ::System::Net::Http::Headers::HttpHeaders_HeaderBucket* New_ctor(::System::Object* parsed, ::System::Func_2<::System::Object*, ::StringW>* converter);

  /// @brief Method ParsedToString, addr 0x42226e0, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW ParsedToString();

  constexpr ::System::Func_2<::System::Object*, ::StringW>* const& __cordl_internal_get_CustomToString() const;

  constexpr ::System::Func_2<::System::Object*, ::StringW>*& __cordl_internal_get_CustomToString();

  constexpr ::System::Object* const& __cordl_internal_get_Parsed() const;

  constexpr ::System::Object*& __cordl_internal_get_Parsed();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_values() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_CustomToString(::System::Func_2<::System::Object*, ::StringW>* value);

  constexpr void __cordl_internal_set_Parsed(::System::Object* value);

  constexpr void __cordl_internal_set_values(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x4221dac, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* parsed, ::System::Func_2<::System::Object*, ::StringW>* converter);

  /// @brief Method get_HasStringValues, addr 0x422271c, size 0x54, virtual false, abstract: false, final false
  inline bool get_HasStringValues();

  /// @brief Method get_Values, addr 0x4221ddc, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Values();

  /// @brief Method set_Values, addr 0x4222770, size 0x8, virtual false, abstract: false, final false
  inline void set_Values(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpHeaders_HeaderBucket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaders_HeaderBucket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpHeaders_HeaderBucket(HttpHeaders_HeaderBucket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaders_HeaderBucket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpHeaders_HeaderBucket(HttpHeaders_HeaderBucket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16721 };

  /// @brief Field Parsed, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___Parsed;

  /// @brief Field values, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___values;

  /// @brief Field CustomToString, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, ::StringW>* ___CustomToString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders_HeaderBucket, ___Parsed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders_HeaderBucket, ___values) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders_HeaderBucket, ___CustomToString) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpHeaders_HeaderBucket, 0x28>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>,
// System.Collections.IEnumerator, System.IDisposable, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.HttpHeaders/<GetEnumerator>d__19
class CORDL_TYPE HttpHeaders__GetEnumerator_d__19 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____get_Current)) ::
      System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>
          System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current,
                      put = __cordl_internal_set___2__current)) ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>
      __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Net::Http::Headers::HttpHeaders* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x28
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>
      __7__wrap1;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4222794, size 0x2bc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Collections.Generic.IEnumerable<System.String>>>.get_Current, addr 0x4222aa0,
  /// size 0xc, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Collections_Generic_IEnumerable_System_String____get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4222aac, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4222ae4, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4222778, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>& __cordl_internal_get___2__current();

  constexpr ::System::Net::Http::Headers::HttpHeaders* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Net::Http::Headers::HttpHeaders*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>& __cordl_internal_get___7__wrap1();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> value);

  constexpr void __cordl_internal_set___4__this(::System::Net::Http::Headers::HttpHeaders* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*> value);

  /// @brief Method <>m__Finally1, addr 0x4222a50, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x4222100, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Collections__Generic__IEnumerable_1___StringW____() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpHeaders__GetEnumerator_d__19();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaders__GetEnumerator_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpHeaders__GetEnumerator_d__19(HttpHeaders__GetEnumerator_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaders__GetEnumerator_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpHeaders__GetEnumerator_d__19(HttpHeaders__GetEnumerator_d__19 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16722 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpHeaders* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x28, def value: None
  ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19, 0x58>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Collections.IEnumerable, System.Net.Http.Headers.HttpHeaderKind,
// System.Nullable`1<T>, System.Object
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.HttpHeaders
class CORDL_TYPE HttpHeaders : public ::System::Object {
public:
  // Declarations
  using HeaderBucket = ::System::Net::Http::Headers::HttpHeaders_HeaderBucket;

  using _GetEnumerator_d__19 = ::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19;

  /// @brief Field HeaderKind, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_HeaderKind, put = __cordl_internal_set_HeaderKind)) ::System::Net::Http::Headers::HttpHeaderKind HeaderKind;

  /// @brief Field connectionclose, offset 0x1c, size 0x2
  __declspec(property(get = __cordl_internal_get_connectionclose, put = __cordl_internal_set_connectionclose)) ::System::Nullable_1<bool> connectionclose;

  /// @brief Field headers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_headers,
                      put = __cordl_internal_set_headers)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>* headers;

  /// @brief Field known_headers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_known_headers,
                      put = setStaticF_known_headers)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>* known_headers;

  /// @brief Field transferEncodingChunked, offset 0x1e, size 0x2
  __declspec(property(get = __cordl_internal_get_transferEncodingChunked, put = __cordl_internal_set_transferEncodingChunked)) ::System::Nullable_1<bool> transferEncodingChunked;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddInternal, addr 0x422177c, size 0x630, virtual false, abstract: false, final false
  inline bool AddInternal(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW>* values, ::System::Net::Http::Headers::HeaderInfo* headerInfo, bool ignoreInvalid);

  /// @brief Method AddOrRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void AddOrRemove(::StringW name, T value, ::System::Func_2<::System::Object*, ::StringW>* converter);

  /// @brief Method CheckName, addr 0x4221f38, size 0x160, virtual false, abstract: false, final false
  inline ::System::Net::Http::Headers::HeaderInfo* CheckName(::StringW name);

  /// @brief Method GetAllHeaderValues, addr 0x422250c, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetAllHeaderValues(::System::Net::Http::Headers::HttpHeaders_HeaderBucket* bucket, ::System::Net::Http::Headers::HeaderInfo* headerInfo);

  /// @brief Method GetEnumerator, addr 0x42142dc, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>* GetEnumerator();

  /// @brief Method GetKnownHeaderKind, addr 0x42169bc, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Net::Http::Headers::HttpHeaderKind GetKnownHeaderKind(::StringW name);

  /// @brief Method GetSingleHeaderString, addr 0x4216ab8, size 0x474, virtual false, abstract: false, final false
  static inline ::StringW GetSingleHeaderString(::StringW key, ::System::Collections::Generic::IEnumerable_1<::StringW>* values);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetValue(::StringW name);

  /// @brief Method GetValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>* GetValues(::StringW name);

  static inline ::System::Net::Http::Headers::HttpHeaders* New_ctor();

  static inline ::System::Net::Http::Headers::HttpHeaders* New_ctor(::System::Net::Http::Headers::HttpHeaderKind headerKind);

  /// @brief Method Remove, addr 0x422212c, size 0x64, virtual false, abstract: false, final false
  inline bool Remove(::StringW name);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetValue(::StringW name, T value, ::System::Func_2<::System::Object*, ::StringW>* toStringConverter);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4222128, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToString, addr 0x4222190, size 0x37c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryAddWithoutValidation, addr 0x4214788, size 0xa4, virtual false, abstract: false, final false
  inline bool TryAddWithoutValidation(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW>* values);

  /// @brief Method TryCheckName, addr 0x4221e54, size 0xe4, virtual false, abstract: false, final false
  inline bool TryCheckName(::StringW name, ::ByRef<::System::Net::Http::Headers::HeaderInfo*> headerInfo);

  constexpr ::System::Net::Http::Headers::HttpHeaderKind const& __cordl_internal_get_HeaderKind() const;

  constexpr ::System::Net::Http::Headers::HttpHeaderKind& __cordl_internal_get_HeaderKind();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_connectionclose() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_connectionclose();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>* const& __cordl_internal_get_headers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>*& __cordl_internal_get_headers();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_transferEncodingChunked() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_transferEncodingChunked();

  constexpr void __cordl_internal_set_HeaderKind(::System::Net::Http::Headers::HttpHeaderKind value);

  constexpr void __cordl_internal_set_connectionclose(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_headers(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>* value);

  constexpr void __cordl_internal_set_transferEncodingChunked(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x4221698, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x421f6a4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::HttpHeaderKind headerKind);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>* getStaticF_known_headers();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>*>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Collections__Generic__IEnumerable_1___StringW____() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_known_headers(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HeaderInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpHeaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpHeaders(HttpHeaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpHeaders(HttpHeaders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16723 };

  /// @brief Field headers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::Http::Headers::HttpHeaders_HeaderBucket*>* ___headers;

  /// @brief Field HeaderKind, offset: 0x18, size: 0x4, def value: None
  ::System::Net::Http::Headers::HttpHeaderKind ___HeaderKind;

  /// @brief Field connectionclose, offset: 0x1c, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___connectionclose;

  /// @brief Field transferEncodingChunked, offset: 0x1e, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___transferEncodingChunked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders, ___headers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders, ___HeaderKind) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders, ___connectionclose) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::HttpHeaders, ___transferEncodingChunked) == 0x1e, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpHeaders, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::HttpHeaders);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpHeaders*, "System.Net.Http.Headers", "HttpHeaders");
NEED_NO_BOX(::System::Net::Http::Headers::HttpHeaders_HeaderBucket);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpHeaders_HeaderBucket*, "System.Net.Http.Headers", "HttpHeaders/HeaderBucket");
NEED_NO_BOX(::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19*, "System.Net.Http.Headers", "HttpHeaders/<GetEnumerator>d__19");
