#pragma once
// IWYU pragma private; include "System/Net/PathList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathList)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class SortedList;
}
namespace System::Net {
class PathList_PathListComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class PathList;
}
namespace System::Net {
class PathList_PathListComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::PathList);
MARK_REF_PTR_T(::System::Net::PathList_PathListComparer);
// Dependencies System.Collections.IComparer, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.PathList/PathListComparer
class CORDL_TYPE PathList_PathListComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field StaticInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StaticInstance, put = setStaticF_StaticInstance)) ::System::Net::PathList_PathListComparer* StaticInstance;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  static inline ::System::Net::PathList_PathListComparer* New_ctor();

  /// @brief Method System.Collections.IComparer.Compare, addr 0x44b4f04, size 0x168, virtual true, abstract: false, final true
  inline int32_t System_Collections_IComparer_Compare(::System::Object* ol, ::System::Object* _cordl_or);

  /// @brief Method .ctor, addr 0x44b506c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::PathList_PathListComparer* getStaticF_StaticInstance();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  static inline void setStaticF_StaticInstance(::System::Net::PathList_PathListComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathList_PathListComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PathList_PathListComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathList_PathListComparer(PathList_PathListComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathList_PathListComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathList_PathListComparer(PathList_PathListComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::PathList_PathListComparer, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.PathList
class CORDL_TYPE PathList : public ::System::Object {
public:
  // Declarations
  using PathListComparer = ::System::Net::PathList_PathListComparer;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field m_list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_list, put = __cordl_internal_set_m_list)) ::System::Collections::SortedList* m_list;

  /// @brief Method GetCookiesCount, addr 0x44b14f4, size 0x44c, virtual false, abstract: false, final false
  inline int32_t GetCookiesCount();

  /// @brief Method GetEnumerator, addr 0x44b47a8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Net::PathList* New_ctor();

  constexpr ::System::Collections::SortedList* const& __cordl_internal_get_m_list() const;

  constexpr ::System::Collections::SortedList*& __cordl_internal_get_m_list();

  constexpr void __cordl_internal_set_m_list(::System::Collections::SortedList* value);

  /// @brief Method .ctor, addr 0x44b1454, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x44b3158, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x44b1964, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::StringW s);

  /// @brief Method get_SyncRoot, addr 0x44b1940, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x44b2fc4, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method set_Item, addr 0x44b1988, size 0xfc, virtual false, abstract: false, final false
  inline void set_Item(::StringW s, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PathList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathList(PathList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathList(PathList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9653 };

  /// @brief Field m_list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::SortedList* ___m_list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::PathList, ___m_list) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::PathList, 0x18>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::PathList);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::PathList*, "System.Net", "PathList");
NEED_NO_BOX(::System::Net::PathList_PathListComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::PathList_PathListComparer*, "System.Net", "PathList/PathListComparer");
