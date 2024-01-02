#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CacheControlHeaderValue)
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class CacheControlHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::CacheControlHeaderValue);
// Type: System.Net.Http.Headers::CacheControlHeaderValue
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(2484)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 2711 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(14659)) CS Name:
// ::System.Net.Http.Headers::CacheControlHeaderValue*
class CORDL_TYPE CacheControlHeaderValue : public ::System::Object {
public:
  // Declarations
  /// @brief Field extensions, offset 0x10, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* extensions;

  /// @brief Field no_cache_headers, offset 0x18, size 0x8
  __declspec(property(get = __get_no_cache_headers, put = __set_no_cache_headers))::System::Collections::Generic::List_1<::StringW>* no_cache_headers;

  /// @brief Field private_headers, offset 0x20, size 0x8
  __declspec(property(get = __get_private_headers, put = __set_private_headers))::System::Collections::Generic::List_1<::StringW>* private_headers;

  /// @brief Field <MaxAge>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __get__MaxAge_k__BackingField, put = __set__MaxAge_k__BackingField))::System::Nullable_1<::System::TimeSpan> _MaxAge_k__BackingField;

  /// @brief Field <MaxStale>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __get__MaxStale_k__BackingField, put = __set__MaxStale_k__BackingField)) bool _MaxStale_k__BackingField;

  /// @brief Field <MaxStaleLimit>k__BackingField, offset 0x40, size 0x10
  __declspec(property(get = __get__MaxStaleLimit_k__BackingField, put = __set__MaxStaleLimit_k__BackingField))::System::Nullable_1<::System::TimeSpan> _MaxStaleLimit_k__BackingField;

  /// @brief Field <MinFresh>k__BackingField, offset 0x50, size 0x10
  __declspec(property(get = __get__MinFresh_k__BackingField, put = __set__MinFresh_k__BackingField))::System::Nullable_1<::System::TimeSpan> _MinFresh_k__BackingField;

  /// @brief Field <MustRevalidate>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __get__MustRevalidate_k__BackingField, put = __set__MustRevalidate_k__BackingField)) bool _MustRevalidate_k__BackingField;

  /// @brief Field <NoCache>k__BackingField, offset 0x61, size 0x1
  __declspec(property(get = __get__NoCache_k__BackingField, put = __set__NoCache_k__BackingField)) bool _NoCache_k__BackingField;

  /// @brief Field <NoStore>k__BackingField, offset 0x62, size 0x1
  __declspec(property(get = __get__NoStore_k__BackingField, put = __set__NoStore_k__BackingField)) bool _NoStore_k__BackingField;

  /// @brief Field <NoTransform>k__BackingField, offset 0x63, size 0x1
  __declspec(property(get = __get__NoTransform_k__BackingField, put = __set__NoTransform_k__BackingField)) bool _NoTransform_k__BackingField;

  /// @brief Field <OnlyIfCached>k__BackingField, offset 0x64, size 0x1
  __declspec(property(get = __get__OnlyIfCached_k__BackingField, put = __set__OnlyIfCached_k__BackingField)) bool _OnlyIfCached_k__BackingField;

  /// @brief Field <Private>k__BackingField, offset 0x65, size 0x1
  __declspec(property(get = __get__Private_k__BackingField, put = __set__Private_k__BackingField)) bool _Private_k__BackingField;

  /// @brief Field <ProxyRevalidate>k__BackingField, offset 0x66, size 0x1
  __declspec(property(get = __get__ProxyRevalidate_k__BackingField, put = __set__ProxyRevalidate_k__BackingField)) bool _ProxyRevalidate_k__BackingField;

  /// @brief Field <Public>k__BackingField, offset 0x67, size 0x1
  __declspec(property(get = __get__Public_k__BackingField, put = __set__Public_k__BackingField)) bool _Public_k__BackingField;

  /// @brief Field <SharedMaxAge>k__BackingField, offset 0x68, size 0x10
  __declspec(property(get = __get__SharedMaxAge_k__BackingField, put = __set__SharedMaxAge_k__BackingField))::System::Nullable_1<::System::TimeSpan> _SharedMaxAge_k__BackingField;

  __declspec(property(get = get_Extensions))::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* Extensions;

  __declspec(property(get = get_MaxAge, put = set_MaxAge))::System::Nullable_1<::System::TimeSpan> MaxAge;

  __declspec(property(get = get_MaxStale, put = set_MaxStale)) bool MaxStale;

  __declspec(property(get = get_MaxStaleLimit, put = set_MaxStaleLimit))::System::Nullable_1<::System::TimeSpan> MaxStaleLimit;

  __declspec(property(get = get_MinFresh, put = set_MinFresh))::System::Nullable_1<::System::TimeSpan> MinFresh;

  __declspec(property(get = get_MustRevalidate, put = set_MustRevalidate)) bool MustRevalidate;

  __declspec(property(get = get_NoCache, put = set_NoCache)) bool NoCache;

  __declspec(property(get = get_NoCacheHeaders))::System::Collections::Generic::ICollection_1<::StringW>* NoCacheHeaders;

  __declspec(property(get = get_NoStore, put = set_NoStore)) bool NoStore;

  __declspec(property(get = get_NoTransform, put = set_NoTransform)) bool NoTransform;

  __declspec(property(get = get_OnlyIfCached, put = set_OnlyIfCached)) bool OnlyIfCached;

  __declspec(property(get = get_Private, put = set_Private)) bool Private;

  __declspec(property(get = get_PrivateHeaders))::System::Collections::Generic::ICollection_1<::StringW>* PrivateHeaders;

  __declspec(property(get = get_ProxyRevalidate, put = set_ProxyRevalidate)) bool ProxyRevalidate;

  __declspec(property(get = get_Public, put = set_Public)) bool Public;

  __declspec(property(get = get_SharedMaxAge, put = set_SharedMaxAge))::System::Nullable_1<::System::TimeSpan> SharedMaxAge;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> const& __get_extensions() const;

  constexpr void __set_extensions(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_no_cache_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_no_cache_headers() const;

  constexpr void __set_no_cache_headers(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_private_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_private_headers() const;

  constexpr void __set_private_headers(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Nullable_1<::System::TimeSpan>& __get__MaxAge_k__BackingField();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __get__MaxAge_k__BackingField() const;

  constexpr void __set__MaxAge_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  constexpr bool& __get__MaxStale_k__BackingField();

  constexpr bool const& __get__MaxStale_k__BackingField() const;

  constexpr void __set__MaxStale_k__BackingField(bool value);

  constexpr ::System::Nullable_1<::System::TimeSpan>& __get__MaxStaleLimit_k__BackingField();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __get__MaxStaleLimit_k__BackingField() const;

  constexpr void __set__MaxStaleLimit_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  constexpr ::System::Nullable_1<::System::TimeSpan>& __get__MinFresh_k__BackingField();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __get__MinFresh_k__BackingField() const;

  constexpr void __set__MinFresh_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  constexpr bool& __get__MustRevalidate_k__BackingField();

  constexpr bool const& __get__MustRevalidate_k__BackingField() const;

  constexpr void __set__MustRevalidate_k__BackingField(bool value);

  constexpr bool& __get__NoCache_k__BackingField();

  constexpr bool const& __get__NoCache_k__BackingField() const;

  constexpr void __set__NoCache_k__BackingField(bool value);

  constexpr bool& __get__NoStore_k__BackingField();

  constexpr bool const& __get__NoStore_k__BackingField() const;

  constexpr void __set__NoStore_k__BackingField(bool value);

  constexpr bool& __get__NoTransform_k__BackingField();

  constexpr bool const& __get__NoTransform_k__BackingField() const;

  constexpr void __set__NoTransform_k__BackingField(bool value);

  constexpr bool& __get__OnlyIfCached_k__BackingField();

  constexpr bool const& __get__OnlyIfCached_k__BackingField() const;

  constexpr void __set__OnlyIfCached_k__BackingField(bool value);

  constexpr bool& __get__Private_k__BackingField();

  constexpr bool const& __get__Private_k__BackingField() const;

  constexpr void __set__Private_k__BackingField(bool value);

  constexpr bool& __get__ProxyRevalidate_k__BackingField();

  constexpr bool const& __get__ProxyRevalidate_k__BackingField() const;

  constexpr void __set__ProxyRevalidate_k__BackingField(bool value);

  constexpr bool& __get__Public_k__BackingField();

  constexpr bool const& __get__Public_k__BackingField() const;

  constexpr void __set__Public_k__BackingField(bool value);

  constexpr ::System::Nullable_1<::System::TimeSpan>& __get__SharedMaxAge_k__BackingField();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __get__SharedMaxAge_k__BackingField() const;

  constexpr void __set__SharedMaxAge_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method get_Extensions, addr 0x2835120, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Extensions();

  /// @brief Method get_MaxAge, addr 0x28351a0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_MaxAge();

  /// @brief Method set_MaxAge, addr 0x28351ac, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxAge(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method get_MaxStale, addr 0x28351b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_MaxStale();

  /// @brief Method set_MaxStale, addr 0x28351bc, size 0xc, virtual false, abstract: false, final false
  inline void set_MaxStale(bool value);

  /// @brief Method get_MaxStaleLimit, addr 0x28351c8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_MaxStaleLimit();

  /// @brief Method set_MaxStaleLimit, addr 0x28351d4, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxStaleLimit(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method get_MinFresh, addr 0x28351dc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_MinFresh();

  /// @brief Method set_MinFresh, addr 0x28351e8, size 0x8, virtual false, abstract: false, final false
  inline void set_MinFresh(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method get_MustRevalidate, addr 0x28351f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_MustRevalidate();

  /// @brief Method set_MustRevalidate, addr 0x28351f8, size 0xc, virtual false, abstract: false, final false
  inline void set_MustRevalidate(bool value);

  /// @brief Method get_NoCache, addr 0x2835204, size 0x8, virtual false, abstract: false, final false
  inline bool get_NoCache();

  /// @brief Method set_NoCache, addr 0x283520c, size 0xc, virtual false, abstract: false, final false
  inline void set_NoCache(bool value);

  /// @brief Method get_NoCacheHeaders, addr 0x2835218, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_NoCacheHeaders();

  /// @brief Method get_NoStore, addr 0x2835298, size 0x8, virtual false, abstract: false, final false
  inline bool get_NoStore();

  /// @brief Method set_NoStore, addr 0x28352a0, size 0xc, virtual false, abstract: false, final false
  inline void set_NoStore(bool value);

  /// @brief Method get_NoTransform, addr 0x28352ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_NoTransform();

  /// @brief Method set_NoTransform, addr 0x28352b4, size 0xc, virtual false, abstract: false, final false
  inline void set_NoTransform(bool value);

  /// @brief Method get_OnlyIfCached, addr 0x28352c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_OnlyIfCached();

  /// @brief Method set_OnlyIfCached, addr 0x28352c8, size 0xc, virtual false, abstract: false, final false
  inline void set_OnlyIfCached(bool value);

  /// @brief Method get_Private, addr 0x28352d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Private();

  /// @brief Method set_Private, addr 0x28352dc, size 0xc, virtual false, abstract: false, final false
  inline void set_Private(bool value);

  /// @brief Method get_PrivateHeaders, addr 0x28352e8, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_PrivateHeaders();

  /// @brief Method get_ProxyRevalidate, addr 0x2835368, size 0x8, virtual false, abstract: false, final false
  inline bool get_ProxyRevalidate();

  /// @brief Method set_ProxyRevalidate, addr 0x2835370, size 0xc, virtual false, abstract: false, final false
  inline void set_ProxyRevalidate(bool value);

  /// @brief Method get_Public, addr 0x283537c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Public();

  /// @brief Method set_Public, addr 0x2835384, size 0xc, virtual false, abstract: false, final false
  inline void set_Public(bool value);

  /// @brief Method get_SharedMaxAge, addr 0x2835390, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_SharedMaxAge();

  /// @brief Method set_SharedMaxAge, addr 0x283539c, size 0x8, virtual false, abstract: false, final false
  inline void set_SharedMaxAge(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method System.ICloneable.Clone, addr 0x28353a4, size 0x568, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method Equals, addr 0x283590c, size 0x384, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2835c90, size 0x260, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method TryParse, addr 0x2835ef0, size 0x8f4, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::CacheControlHeaderValue*> parsedValue);

  /// @brief Method ToString, addr 0x28369cc, size 0x6e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::System::Net::Http::Headers::CacheControlHeaderValue* New_ctor();

  /// @brief Method .ctor, addr 0x28367e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CacheControlHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CacheControlHeaderValue(CacheControlHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CacheControlHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CacheControlHeaderValue(CacheControlHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CacheControlHeaderValue();

public:
  /// @brief Field extensions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* ___extensions;

  /// @brief Field no_cache_headers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___no_cache_headers;

  /// @brief Field private_headers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___private_headers;

  /// @brief Field <MaxAge>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> ____MaxAge_k__BackingField;

  /// @brief Field <MaxStale>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____MaxStale_k__BackingField;

  /// @brief Field <MaxStaleLimit>k__BackingField, offset: 0x40, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> ____MaxStaleLimit_k__BackingField;

  /// @brief Field <MinFresh>k__BackingField, offset: 0x50, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> ____MinFresh_k__BackingField;

  /// @brief Field <MustRevalidate>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____MustRevalidate_k__BackingField;

  /// @brief Field <NoCache>k__BackingField, offset: 0x61, size: 0x1, def value: None
  bool ____NoCache_k__BackingField;

  /// @brief Field <NoStore>k__BackingField, offset: 0x62, size: 0x1, def value: None
  bool ____NoStore_k__BackingField;

  /// @brief Field <NoTransform>k__BackingField, offset: 0x63, size: 0x1, def value: None
  bool ____NoTransform_k__BackingField;

  /// @brief Field <OnlyIfCached>k__BackingField, offset: 0x64, size: 0x1, def value: None
  bool ____OnlyIfCached_k__BackingField;

  /// @brief Field <Private>k__BackingField, offset: 0x65, size: 0x1, def value: None
  bool ____Private_k__BackingField;

  /// @brief Field <ProxyRevalidate>k__BackingField, offset: 0x66, size: 0x1, def value: None
  bool ____ProxyRevalidate_k__BackingField;

  /// @brief Field <Public>k__BackingField, offset: 0x67, size: 0x1, def value: None
  bool ____Public_k__BackingField;

  /// @brief Field <SharedMaxAge>k__BackingField, offset: 0x68, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> ____SharedMaxAge_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::CacheControlHeaderValue, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ___extensions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ___no_cache_headers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ___private_headers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____MaxAge_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____MaxStale_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____MaxStaleLimit_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____MinFresh_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____MustRevalidate_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____NoCache_k__BackingField) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____NoStore_k__BackingField) == 0x62, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____NoTransform_k__BackingField) == 0x63, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____OnlyIfCached_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____Private_k__BackingField) == 0x65, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____ProxyRevalidate_k__BackingField) == 0x66, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____Public_k__BackingField) == 0x67, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::CacheControlHeaderValue, ____SharedMaxAge_k__BackingField) == 0x68, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::CacheControlHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::CacheControlHeaderValue*, "System.Net.Http.Headers", "CacheControlHeaderValue");
