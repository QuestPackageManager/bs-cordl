#pragma once
// IWYU pragma private; include "System/Net/CookieCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CookieCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class CookieCollection_CookieCollectionEnumerator;
}
namespace System::Net {
struct CookieCollection_Stamp;
}
namespace System::Net {
class Cookie;
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
struct CookieCollection_Stamp;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class CookieCollection_CookieCollectionEnumerator;
}
// Write type traits
MARK_VAL_T(::System::Net::CookieCollection_Stamp);
MARK_REF_PTR_T(::System::Net::CookieCollection);
MARK_REF_PTR_T(::System::Net::CookieCollection_CookieCollectionEnumerator);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.CookieCollection/Stamp
struct CORDL_TYPE CookieCollection_Stamp {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CookieCollection_Stamp_Unwrapped
  enum struct __CookieCollection_Stamp_Unwrapped : int32_t {
    __E_Check = static_cast<int32_t>(0x0),
    __E_Set = static_cast<int32_t>(0x1),
    __E_SetToUnused = static_cast<int32_t>(0x2),
    __E_SetToMaxUsed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CookieCollection_Stamp_Unwrapped() const noexcept {
    return static_cast<__CookieCollection_Stamp_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieCollection_Stamp();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CookieCollection_Stamp(int32_t value__) noexcept;

  /// @brief Field Check value: I32(0)
  static ::System::Net::CookieCollection_Stamp const Check;

  /// @brief Field Set value: I32(1)
  static ::System::Net::CookieCollection_Stamp const Set;

  /// @brief Field SetToMaxUsed value: I32(3)
  static ::System::Net::CookieCollection_Stamp const SetToMaxUsed;

  /// @brief Field SetToUnused value: I32(2)
  static ::System::Net::CookieCollection_Stamp const SetToUnused;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9647 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CookieCollection_Stamp, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CookieCollection_Stamp, 0x4>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Collections.IEnumerator, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CookieCollection/CookieCollectionEnumerator
class CORDL_TYPE CookieCollection_CookieCollectionEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field m_cookies, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cookies, put = __cordl_internal_set_m_cookies)) ::System::Net::CookieCollection* m_cookies;

  /// @brief Field m_count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_count, put = __cordl_internal_set_m_count)) int32_t m_count;

  /// @brief Field m_index, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_index, put = __cordl_internal_set_m_index)) int32_t m_index;

  /// @brief Field m_version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) int32_t m_version;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  static inline ::System::Net::CookieCollection_CookieCollectionEnumerator* New_ctor(::System::Net::CookieCollection* cookies);

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x44b0cd0, size 0x9c, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x44b0d6c, size 0xc, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x44b0c2c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Net::CookieCollection* const& __cordl_internal_get_m_cookies() const;

  constexpr ::System::Net::CookieCollection*& __cordl_internal_get_m_cookies();

  constexpr int32_t const& __cordl_internal_get_m_count() const;

  constexpr int32_t& __cordl_internal_get_m_count();

  constexpr int32_t const& __cordl_internal_get_m_index() const;

  constexpr int32_t& __cordl_internal_get_m_index();

  constexpr int32_t const& __cordl_internal_get_m_version() const;

  constexpr int32_t& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_m_cookies(::System::Net::CookieCollection* value);

  constexpr void __cordl_internal_set_m_count(int32_t value);

  constexpr void __cordl_internal_set_m_index(int32_t value);

  constexpr void __cordl_internal_set_m_version(int32_t value);

  /// @brief Method .ctor, addr 0x44b0bd0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::CookieCollection* cookies);

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieCollection_CookieCollectionEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CookieCollection_CookieCollectionEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CookieCollection_CookieCollectionEnumerator(CookieCollection_CookieCollectionEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CookieCollection_CookieCollectionEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CookieCollection_CookieCollectionEnumerator(CookieCollection_CookieCollectionEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9648 };

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
static_assert(offsetof(::System::Net::CookieCollection_CookieCollectionEnumerator, ___m_cookies) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection_CookieCollectionEnumerator, ___m_count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection_CookieCollectionEnumerator, ___m_index) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection_CookieCollectionEnumerator, ___m_version) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CookieCollection_CookieCollectionEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.DateTime, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CookieCollection
class CORDL_TYPE CookieCollection : public ::System::Object {
public:
  // Declarations
  using CookieCollectionEnumerator = ::System::Net::CookieCollection_CookieCollectionEnumerator;

  using Stamp = ::System::Net::CookieCollection_Stamp;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsOtherVersionSeen)) bool IsOtherVersionSeen;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item)) ::System::Net::Cookie* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field m_IsReadOnly, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsReadOnly, put = __cordl_internal_set_m_IsReadOnly)) bool m_IsReadOnly;

  /// @brief Field m_TimeStamp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TimeStamp, put = __cordl_internal_set_m_TimeStamp)) ::System::DateTime m_TimeStamp;

  /// @brief Field m_has_other_versions, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_has_other_versions, put = __cordl_internal_set_m_has_other_versions)) bool m_has_other_versions;

  /// @brief Field m_list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_list, put = __cordl_internal_set_m_list)) ::System::Collections::ArrayList* m_list;

  /// @brief Field m_version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) int32_t m_version;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x44afe08, size 0xc0, virtual false, abstract: false, final false
  inline void Add(::System::Net::Cookie* cookie);

  /// @brief Method Add, addr 0x44b0278, size 0x2fc, virtual false, abstract: false, final false
  inline void Add(::System::Net::CookieCollection* cookies);

  /// @brief Method CopyTo, addr 0x44b05fc, size 0x24, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x44b0574, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x44afec8, size 0x3b0, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Net::Cookie* cookie);

  /// @brief Method InternalAdd, addr 0x44b06f8, size 0x4b4, virtual false, abstract: false, final false
  inline int32_t InternalAdd(::System::Net::Cookie* cookie, bool isStrict);

  static inline ::System::Net::CookieCollection* New_ctor();

  /// @brief Method RemoveAt, addr 0x44b0bac, size 0x24, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t idx);

  /// @brief Method TimeStamp, addr 0x44b0620, size 0xd0, virtual false, abstract: false, final false
  inline ::System::DateTime TimeStamp(::System::Net::CookieCollection_Stamp how);

  constexpr bool const& __cordl_internal_get_m_IsReadOnly() const;

  constexpr bool& __cordl_internal_get_m_IsReadOnly();

  constexpr ::System::DateTime const& __cordl_internal_get_m_TimeStamp() const;

  constexpr ::System::DateTime& __cordl_internal_get_m_TimeStamp();

  constexpr bool const& __cordl_internal_get_m_has_other_versions() const;

  constexpr bool& __cordl_internal_get_m_has_other_versions();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_m_list() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_m_list();

  constexpr int32_t const& __cordl_internal_get_m_version() const;

  constexpr int32_t& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_m_IsReadOnly(bool value);

  constexpr void __cordl_internal_set_m_TimeStamp(::System::DateTime value);

  constexpr void __cordl_internal_set_m_has_other_versions(bool value);

  constexpr void __cordl_internal_set_m_list(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_m_version(int32_t value);

  /// @brief Method .ctor, addr 0x44afc78, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x44b05cc, size 0x24, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsOtherVersionSeen, addr 0x44b06f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOtherVersionSeen();

  /// @brief Method get_IsSynchronized, addr 0x44b05f0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x44afd20, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Net::Cookie* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x44b05f8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CookieCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CookieCollection(CookieCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CookieCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CookieCollection(CookieCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9649 };

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
static_assert(offsetof(::System::Net::CookieCollection, ___m_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection, ___m_list) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection, ___m_TimeStamp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection, ___m_has_other_versions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieCollection, ___m_IsReadOnly) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CookieCollection, 0x30>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieCollection_Stamp, "System.Net", "CookieCollection/Stamp");
NEED_NO_BOX(::System::Net::CookieCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieCollection*, "System.Net", "CookieCollection");
NEED_NO_BOX(::System::Net::CookieCollection_CookieCollectionEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieCollection_CookieCollectionEnumerator*, "System.Net", "CookieCollection/CookieCollectionEnumerator");
