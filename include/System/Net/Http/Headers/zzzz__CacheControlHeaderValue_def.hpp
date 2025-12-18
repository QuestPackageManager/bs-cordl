#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/CacheControlHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CacheControlHeaderValue)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System {
class ICloneable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
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
// Dependencies System.Nullable`1<T>, System.Object, System.TimeSpan
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: System.Net.Http.Headers.CacheControlHeaderValue
class CORDL_TYPE CacheControlHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Extensions)) ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* Extensions;

  __declspec(property(get = get_MaxAge, put = set_MaxAge)) ::System::Nullable_1<::System::TimeSpan> MaxAge;

  __declspec(property(get = get_MaxStale, put = set_MaxStale)) bool MaxStale;

  __declspec(property(get = get_MaxStaleLimit, put = set_MaxStaleLimit)) ::System::Nullable_1<::System::TimeSpan> MaxStaleLimit;

  __declspec(property(get = get_MinFresh, put = set_MinFresh)) ::System::Nullable_1<::System::TimeSpan> MinFresh;

  __declspec(property(get = get_MustRevalidate, put = set_MustRevalidate)) bool MustRevalidate;

  __declspec(property(get = get_NoCache, put = set_NoCache)) bool NoCache;

  __declspec(property(get = get_NoCacheHeaders)) ::System::Collections::Generic::ICollection_1<::StringW>* NoCacheHeaders;

  __declspec(property(get = get_NoStore, put = set_NoStore)) bool NoStore;

  __declspec(property(get = get_NoTransform, put = set_NoTransform)) bool NoTransform;

  __declspec(property(get = get_OnlyIfCached, put = set_OnlyIfCached)) bool OnlyIfCached;

  __declspec(property(get = get_Private, put = set_Private)) bool Private;

  __declspec(property(get = get_PrivateHeaders)) ::System::Collections::Generic::ICollection_1<::StringW>* PrivateHeaders;

  __declspec(property(get = get_ProxyRevalidate, put = set_ProxyRevalidate)) bool ProxyRevalidate;

  __declspec(property(get = get_Public, put = set_Public)) bool Public;

  __declspec(property(get = get_SharedMaxAge, put = set_SharedMaxAge)) ::System::Nullable_1<::System::TimeSpan> SharedMaxAge;

  /// @brief Field <MaxAge>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__MaxAge_k__BackingField, put = __cordl_internal_set__MaxAge_k__BackingField)) ::System::Nullable_1<::System::TimeSpan> _MaxAge_k__BackingField;

  /// @brief Field <MaxStaleLimit>k__BackingField, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__MaxStaleLimit_k__BackingField, put = __cordl_internal_set__MaxStaleLimit_k__BackingField)) ::System::Nullable_1<::System::TimeSpan>
      _MaxStaleLimit_k__BackingField;

  /// @brief Field <MaxStale>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__MaxStale_k__BackingField, put = __cordl_internal_set__MaxStale_k__BackingField)) bool _MaxStale_k__BackingField;

  /// @brief Field <MinFresh>k__BackingField, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__MinFresh_k__BackingField, put = __cordl_internal_set__MinFresh_k__BackingField)) ::System::Nullable_1<::System::TimeSpan> _MinFresh_k__BackingField;

  /// @brief Field <MustRevalidate>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__MustRevalidate_k__BackingField, put = __cordl_internal_set__MustRevalidate_k__BackingField)) bool _MustRevalidate_k__BackingField;

  /// @brief Field <NoCache>k__BackingField, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get__NoCache_k__BackingField, put = __cordl_internal_set__NoCache_k__BackingField)) bool _NoCache_k__BackingField;

  /// @brief Field <NoStore>k__BackingField, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get__NoStore_k__BackingField, put = __cordl_internal_set__NoStore_k__BackingField)) bool _NoStore_k__BackingField;

  /// @brief Field <NoTransform>k__BackingField, offset 0x63, size 0x1
  __declspec(property(get = __cordl_internal_get__NoTransform_k__BackingField, put = __cordl_internal_set__NoTransform_k__BackingField)) bool _NoTransform_k__BackingField;

  /// @brief Field <OnlyIfCached>k__BackingField, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get__OnlyIfCached_k__BackingField, put = __cordl_internal_set__OnlyIfCached_k__BackingField)) bool _OnlyIfCached_k__BackingField;

  /// @brief Field <Private>k__BackingField, offset 0x65, size 0x1
  __declspec(property(get = __cordl_internal_get__Private_k__BackingField, put = __cordl_internal_set__Private_k__BackingField)) bool _Private_k__BackingField;

  /// @brief Field <ProxyRevalidate>k__BackingField, offset 0x66, size 0x1
  __declspec(property(get = __cordl_internal_get__ProxyRevalidate_k__BackingField, put = __cordl_internal_set__ProxyRevalidate_k__BackingField)) bool _ProxyRevalidate_k__BackingField;

  /// @brief Field <Public>k__BackingField, offset 0x67, size 0x1
  __declspec(property(get = __cordl_internal_get__Public_k__BackingField, put = __cordl_internal_set__Public_k__BackingField)) bool _Public_k__BackingField;

  /// @brief Field <SharedMaxAge>k__BackingField, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__SharedMaxAge_k__BackingField, put = __cordl_internal_set__SharedMaxAge_k__BackingField)) ::System::Nullable_1<::System::TimeSpan>
      _SharedMaxAge_k__BackingField;

  /// @brief Field extensions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions,
                      put = __cordl_internal_set_extensions)) ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* extensions;

  /// @brief Field no_cache_headers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_no_cache_headers, put = __cordl_internal_set_no_cache_headers)) ::System::Collections::Generic::List_1<::StringW>* no_cache_headers;

  /// @brief Field private_headers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_private_headers, put = __cordl_internal_set_private_headers)) ::System::Collections::Generic::List_1<::StringW>* private_headers;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x5f2e79c, size 0x374, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5f2eb10, size 0x1c8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::CacheControlHeaderValue* New_ctor();

  /// @brief Method System.ICloneable.Clone, addr 0x5f2e324, size 0x478, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x5f2f834, size 0x728, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x5f2ecd8, size 0x9ac, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::Net::Http::Headers::CacheControlHeaderValue*> parsedValue);

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get__MaxAge_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get__MaxAge_k__BackingField();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get__MaxStaleLimit_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get__MaxStaleLimit_k__BackingField();

  constexpr bool const& __cordl_internal_get__MaxStale_k__BackingField() const;

  constexpr bool& __cordl_internal_get__MaxStale_k__BackingField();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get__MinFresh_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get__MinFresh_k__BackingField();

  constexpr bool const& __cordl_internal_get__MustRevalidate_k__BackingField() const;

  constexpr bool& __cordl_internal_get__MustRevalidate_k__BackingField();

  constexpr bool const& __cordl_internal_get__NoCache_k__BackingField() const;

  constexpr bool& __cordl_internal_get__NoCache_k__BackingField();

  constexpr bool const& __cordl_internal_get__NoStore_k__BackingField() const;

  constexpr bool& __cordl_internal_get__NoStore_k__BackingField();

  constexpr bool const& __cordl_internal_get__NoTransform_k__BackingField() const;

  constexpr bool& __cordl_internal_get__NoTransform_k__BackingField();

  constexpr bool const& __cordl_internal_get__OnlyIfCached_k__BackingField() const;

  constexpr bool& __cordl_internal_get__OnlyIfCached_k__BackingField();

  constexpr bool const& __cordl_internal_get__Private_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Private_k__BackingField();

  constexpr bool const& __cordl_internal_get__ProxyRevalidate_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ProxyRevalidate_k__BackingField();

  constexpr bool const& __cordl_internal_get__Public_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Public_k__BackingField();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get__SharedMaxAge_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get__SharedMaxAge_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* const& __cordl_internal_get_extensions() const;

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& __cordl_internal_get_extensions();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_no_cache_headers() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_no_cache_headers();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_private_headers() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_private_headers();

  constexpr void __cordl_internal_set__MaxAge_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  constexpr void __cordl_internal_set__MaxStaleLimit_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  constexpr void __cordl_internal_set__MaxStale_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MinFresh_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  constexpr void __cordl_internal_set__MustRevalidate_k__BackingField(bool value);

  constexpr void __cordl_internal_set__NoCache_k__BackingField(bool value);

  constexpr void __cordl_internal_set__NoStore_k__BackingField(bool value);

  constexpr void __cordl_internal_set__NoTransform_k__BackingField(bool value);

  constexpr void __cordl_internal_set__OnlyIfCached_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Private_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ProxyRevalidate_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Public_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SharedMaxAge_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  constexpr void __cordl_internal_set_extensions(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);

  constexpr void __cordl_internal_set_no_cache_headers(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_private_headers(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x5f2f684, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Extensions, addr 0x5f2e0c4, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Extensions();

  /// @brief Method get_MaxAge, addr 0x5f2e144, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_MaxAge();

  /// @brief Method get_MaxStale, addr 0x5f2e158, size 0x8, virtual false, abstract: false, final false
  inline bool get_MaxStale();

  /// @brief Method get_MaxStaleLimit, addr 0x5f2e168, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_MaxStaleLimit();

  /// @brief Method get_MinFresh, addr 0x5f2e17c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_MinFresh();

  /// @brief Method get_MustRevalidate, addr 0x5f2e190, size 0x8, virtual false, abstract: false, final false
  inline bool get_MustRevalidate();

  /// @brief Method get_NoCache, addr 0x5f2e1a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_NoCache();

  /// @brief Method get_NoCacheHeaders, addr 0x5f2e1b0, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_NoCacheHeaders();

  /// @brief Method get_NoStore, addr 0x5f2e230, size 0x8, virtual false, abstract: false, final false
  inline bool get_NoStore();

  /// @brief Method get_NoTransform, addr 0x5f2e240, size 0x8, virtual false, abstract: false, final false
  inline bool get_NoTransform();

  /// @brief Method get_OnlyIfCached, addr 0x5f2e250, size 0x8, virtual false, abstract: false, final false
  inline bool get_OnlyIfCached();

  /// @brief Method get_Private, addr 0x5f2e260, size 0x8, virtual false, abstract: false, final false
  inline bool get_Private();

  /// @brief Method get_PrivateHeaders, addr 0x5f2e270, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_PrivateHeaders();

  /// @brief Method get_ProxyRevalidate, addr 0x5f2e2f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ProxyRevalidate();

  /// @brief Method get_Public, addr 0x5f2e300, size 0x8, virtual false, abstract: false, final false
  inline bool get_Public();

  /// @brief Method get_SharedMaxAge, addr 0x5f2e310, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_SharedMaxAge();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_MaxAge, addr 0x5f2e150, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxAge(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method set_MaxStale, addr 0x5f2e160, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxStale(bool value);

  /// @brief Method set_MaxStaleLimit, addr 0x5f2e174, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxStaleLimit(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method set_MinFresh, addr 0x5f2e188, size 0x8, virtual false, abstract: false, final false
  inline void set_MinFresh(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method set_MustRevalidate, addr 0x5f2e198, size 0x8, virtual false, abstract: false, final false
  inline void set_MustRevalidate(bool value);

  /// @brief Method set_NoCache, addr 0x5f2e1a8, size 0x8, virtual false, abstract: false, final false
  inline void set_NoCache(bool value);

  /// @brief Method set_NoStore, addr 0x5f2e238, size 0x8, virtual false, abstract: false, final false
  inline void set_NoStore(bool value);

  /// @brief Method set_NoTransform, addr 0x5f2e248, size 0x8, virtual false, abstract: false, final false
  inline void set_NoTransform(bool value);

  /// @brief Method set_OnlyIfCached, addr 0x5f2e258, size 0x8, virtual false, abstract: false, final false
  inline void set_OnlyIfCached(bool value);

  /// @brief Method set_Private, addr 0x5f2e268, size 0x8, virtual false, abstract: false, final false
  inline void set_Private(bool value);

  /// @brief Method set_ProxyRevalidate, addr 0x5f2e2f8, size 0x8, virtual false, abstract: false, final false
  inline void set_ProxyRevalidate(bool value);

  /// @brief Method set_Public, addr 0x5f2e308, size 0x8, virtual false, abstract: false, final false
  inline void set_Public(bool value);

  /// @brief Method set_SharedMaxAge, addr 0x5f2e31c, size 0x8, virtual false, abstract: false, final false
  inline void set_SharedMaxAge(::System::Nullable_1<::System::TimeSpan> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CacheControlHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CacheControlHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CacheControlHeaderValue(CacheControlHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CacheControlHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CacheControlHeaderValue(CacheControlHeaderValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20064 };

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

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::CacheControlHeaderValue, 0x78>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::CacheControlHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::CacheControlHeaderValue*, "System.Net.Http.Headers", "CacheControlHeaderValue");
