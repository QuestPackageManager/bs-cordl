#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpHeaderValueCollection_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpHeaderValueCollection_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
class HttpHeaders;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template <typename T> class HttpHeaderValueCollection_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Net::Http::Headers::HttpHeaderValueCollection_1);
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace System::Net::Http::Headers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Net.Http.Headers.HttpHeaderValueCollection`1<T>
class CORDL_TYPE HttpHeaderValueCollection_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_InvalidValues)) ::System::Collections::Generic::List_1<::StringW>* InvalidValues;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Field headerInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_headerInfo, put = __cordl_internal_set_headerInfo)) ::System::Net::Http::Headers::HeaderInfo* headerInfo;

  /// @brief Field headers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers)) ::System::Net::Http::Headers::HttpHeaders* headers;

  /// @brief Field invalidValues, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_invalidValues, put = __cordl_internal_set_invalidValues)) ::System::Collections::Generic::List_1<::StringW>* invalidValues;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::Generic::List_1<T>* list;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(T item);

  /// @brief Method AddInvalidValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddInvalidValue(::StringW invalidValue);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(::System::Collections::Generic::List_1<T>* values);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T item);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Find(::System::Predicate_1<T>* predicate);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  static inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>* New_ctor(::System::Net::Http::Headers::HttpHeaders* headers, ::System::Net::Http::Headers::HeaderInfo* headerInfo);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Net::Http::Headers::HeaderInfo* const& __cordl_internal_get_headerInfo() const;

  constexpr ::System::Net::Http::Headers::HeaderInfo*& __cordl_internal_get_headerInfo();

  constexpr ::System::Net::Http::Headers::HttpHeaders* const& __cordl_internal_get_headers() const;

  constexpr ::System::Net::Http::Headers::HttpHeaders*& __cordl_internal_get_headers();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_invalidValues() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_invalidValues();

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_list();

  constexpr void __cordl_internal_set_headerInfo(::System::Net::Http::Headers::HeaderInfo* value);

  constexpr void __cordl_internal_set_headers(::System::Net::Http::Headers::HttpHeaders* value);

  constexpr void __cordl_internal_set_invalidValues(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_list(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::HttpHeaders* headers, ::System::Net::Http::Headers::HeaderInfo* headerInfo);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_InvalidValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_InvalidValues();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpHeaderValueCollection_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaderValueCollection_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpHeaderValueCollection_1(HttpHeaderValueCollection_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaderValueCollection_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpHeaderValueCollection_1(HttpHeaderValueCollection_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16713 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___list;

  /// @brief Field headers, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpHeaders* ___headers;

  /// @brief Field headerInfo, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::Headers::HeaderInfo* ___headerInfo;

  /// @brief Field invalidValues, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___invalidValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Http::Headers::HttpHeaderValueCollection_1, "System.Net.Http.Headers", "HttpHeaderValueCollection`1");
