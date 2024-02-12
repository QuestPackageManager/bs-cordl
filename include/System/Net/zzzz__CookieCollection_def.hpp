#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CookieCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class Cookie;
}
namespace System::Net {
class __CookieCollection__CookieCollectionEnumerator;
}
namespace System::Net {
struct __CookieCollection__Stamp;
}
namespace System {
class Array;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
struct __CookieCollection__Stamp;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class __CookieCollection__CookieCollectionEnumerator;
}
// Write type traits
MARK_VAL_T(::System::Net::__CookieCollection__Stamp);
MARK_REF_PTR_T(::System::Net::CookieCollection);
MARK_REF_PTR_T(::System::Net::__CookieCollection__CookieCollectionEnumerator);
// Type: ::Stamp
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7136))
// CS Name: ::CookieCollection::Stamp
struct CORDL_TYPE __CookieCollection__Stamp {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CookieCollection__Stamp_Unwrapped
  enum struct ____CookieCollection__Stamp_Unwrapped : int32_t {
    __E_Check = static_cast<int32_t>(0x0),
    __E_Set = static_cast<int32_t>(0x1),
    __E_SetToUnused = static_cast<int32_t>(0x2),
    __E_SetToMaxUsed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CookieCollection__Stamp_Unwrapped() const noexcept {
    return static_cast<____CookieCollection__Stamp_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CookieCollection__Stamp(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CookieCollection__Stamp();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Check value: static_cast<int32_t>(0x0)
  static ::System::Net::__CookieCollection__Stamp const Check;

  /// @brief Field Set value: static_cast<int32_t>(0x1)
  static ::System::Net::__CookieCollection__Stamp const Set;

  /// @brief Field SetToUnused value: static_cast<int32_t>(0x2)
  static ::System::Net::__CookieCollection__Stamp const SetToUnused;

  /// @brief Field SetToMaxUsed value: static_cast<int32_t>(0x3)
  static ::System::Net::__CookieCollection__Stamp const SetToMaxUsed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__CookieCollection__Stamp, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::__CookieCollection__Stamp, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
// Type: ::CookieCollectionEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7137))
// CS Name: ::CookieCollection::CookieCollectionEnumerator*
class CORDL_TYPE __CookieCollection__CookieCollectionEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_cookies, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cookies, put = __cordl_internal_set_m_cookies))::System::Net::CookieCollection* m_cookies;

  /// @brief Field m_count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_count, put = __cordl_internal_set_m_count)) int32_t m_count;

  /// @brief Field m_index, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_index, put = __cordl_internal_set_m_index)) int32_t m_index;

  /// @brief Field m_version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) int32_t m_version;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr ::System::Net::CookieCollection*& __cordl_internal_get_m_cookies();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> const& __cordl_internal_get_m_cookies() const;

  constexpr void __cordl_internal_set_m_cookies(::System::Net::CookieCollection* value);

  constexpr int32_t& __cordl_internal_get_m_count();

  constexpr int32_t const& __cordl_internal_get_m_count() const;

  constexpr void __cordl_internal_set_m_count(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_index();

  constexpr int32_t const& __cordl_internal_get_m_index() const;

  constexpr void __cordl_internal_set_m_index(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_version();

  constexpr int32_t const& __cordl_internal_get_m_version() const;

  constexpr void __cordl_internal_set_m_version(int32_t value);

  static inline ::System::Net::__CookieCollection__CookieCollectionEnumerator* New_ctor(::System::Net::CookieCollection* cookies);

  /// @brief Method .ctor, addr 0x29b370c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::CookieCollection* cookies);

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x29b3768, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x29b3814, size 0xa4, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x29b38b8, size 0xc, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__CookieCollection__CookieCollectionEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CookieCollection__CookieCollectionEnumerator(__CookieCollection__CookieCollectionEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CookieCollection__CookieCollectionEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CookieCollection__CookieCollectionEnumerator(__CookieCollection__CookieCollectionEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CookieCollection__CookieCollectionEnumerator();

public:
  /// @brief Field m_cookies, offset: 0x10, size: 0x8, def value: None
  ::System::Net::CookieCollection* ___m_cookies;

  /// @brief Field m_count, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_count;

  /// @brief Field m_index, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_index;

  /// @brief Field m_version, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__CookieCollection__CookieCollectionEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::__CookieCollection__CookieCollectionEnumerator, ___m_cookies) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__CookieCollection__CookieCollectionEnumerator, ___m_count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::__CookieCollection__CookieCollectionEnumerator, ___m_index) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::__CookieCollection__CookieCollectionEnumerator, ___m_version) == 0x20, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::CookieCollection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7138))
// CS Name: ::System.Net::CookieCollection*
class CORDL_TYPE CookieCollection : public ::System::Object {
public:
  // Declarations
  using CookieCollectionEnumerator = ::System::Net::__CookieCollection__CookieCollectionEnumerator;

  using Stamp = ::System::Net::__CookieCollection__Stamp;

  /// @brief Field m_version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) int32_t m_version;

  /// @brief Field m_list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_list, put = __cordl_internal_set_m_list))::System::Collections::ArrayList* m_list;

  /// @brief Field m_TimeStamp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TimeStamp, put = __cordl_internal_set_m_TimeStamp))::System::DateTime m_TimeStamp;

  /// @brief Field m_has_other_versions, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_has_other_versions, put = __cordl_internal_set_m_has_other_versions)) bool m_has_other_versions;

  /// @brief Field m_IsReadOnly, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsReadOnly, put = __cordl_internal_set_m_IsReadOnly)) bool m_IsReadOnly;

  __declspec(property(get = get_Item))::System::Net::Cookie* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_IsOtherVersionSeen)) bool IsOtherVersionSeen;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr int32_t& __cordl_internal_get_m_version();

  constexpr int32_t const& __cordl_internal_get_m_version() const;

  constexpr void __cordl_internal_set_m_version(int32_t value);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_m_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_m_list() const;

  constexpr void __cordl_internal_set_m_list(::System::Collections::ArrayList* value);

  constexpr ::System::DateTime& __cordl_internal_get_m_TimeStamp();

  constexpr ::System::DateTime const& __cordl_internal_get_m_TimeStamp() const;

  constexpr void __cordl_internal_set_m_TimeStamp(::System::DateTime value);

  constexpr bool& __cordl_internal_get_m_has_other_versions();

  constexpr bool const& __cordl_internal_get_m_has_other_versions() const;

  constexpr void __cordl_internal_set_m_has_other_versions(bool value);

  constexpr bool& __cordl_internal_get_m_IsReadOnly();

  constexpr bool const& __cordl_internal_get_m_IsReadOnly() const;

  constexpr void __cordl_internal_set_m_IsReadOnly(bool value);

  static inline ::System::Net::CookieCollection* New_ctor();

  /// @brief Method .ctor, addr 0x29b2798, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x29b2840, size 0xec, virtual false, abstract: false, final false
  inline ::System::Net::Cookie* get_Item(int32_t index);

  /// @brief Method Add, addr 0x29b292c, size 0xc4, virtual false, abstract: false, final false
  inline void Add(::System::Net::Cookie* cookie);

  /// @brief Method Add, addr 0x29b2db4, size 0x300, virtual false, abstract: false, final false
  inline void Add(::System::Net::CookieCollection* cookies);

  /// @brief Method get_Count, addr 0x29b3114, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x29b3138, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x29b3140, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method CopyTo, addr 0x29b3144, size 0x24, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method TimeStamp, addr 0x29b3168, size 0xc0, virtual false, abstract: false, final false
  inline ::System::DateTime TimeStamp(::System::Net::__CookieCollection__Stamp how);

  /// @brief Method get_IsOtherVersionSeen, addr 0x29b3228, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOtherVersionSeen();

  /// @brief Method InternalAdd, addr 0x29b3230, size 0x4b8, virtual false, abstract: false, final false
  inline int32_t InternalAdd(::System::Net::Cookie* cookie, bool isStrict);

  /// @brief Method IndexOf, addr 0x29b29f0, size 0x3c4, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Net::Cookie* cookie);

  /// @brief Method RemoveAt, addr 0x29b36e8, size 0x24, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t idx);

  /// @brief Method GetEnumerator, addr 0x29b30b4, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "CookieCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CookieCollection(CookieCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CookieCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CookieCollection(CookieCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieCollection();

public:
  /// @brief Field m_version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_version;

  /// @brief Field m_list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___m_list;

  /// @brief Field m_TimeStamp, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___m_TimeStamp;

  /// @brief Field m_has_other_versions, offset: 0x28, size: 0x1, def value: None
  bool ___m_has_other_versions;

  /// @brief Field m_IsReadOnly, offset: 0x29, size: 0x1, def value: None
  bool ___m_IsReadOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CookieCollection, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Net::CookieCollection, ___m_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection, ___m_list) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection, ___m_TimeStamp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection, ___m_has_other_versions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection, ___m_IsReadOnly) == 0x29, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__CookieCollection__Stamp, "System.Net", "CookieCollection/Stamp");
NEED_NO_BOX(::System::Net::CookieCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieCollection*, "System.Net", "CookieCollection");
NEED_NO_BOX(::System::Net::__CookieCollection__CookieCollectionEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__CookieCollection__CookieCollectionEnumerator*, "System.Net", "CookieCollection/CookieCollectionEnumerator");
