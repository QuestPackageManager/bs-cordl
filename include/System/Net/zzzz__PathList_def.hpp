#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathList)
namespace System::Net {
class __PathList__PathListComparer;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class SortedList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Net {
class PathList;
}
namespace System::Net {
class __PathList__PathListComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::PathList);
MARK_REF_PTR_T(::System::Net::__PathList__PathListComparer);
// Type: ::PathListComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9131))
// CS Name: ::PathList::PathListComparer*
class CORDL_TYPE __PathList__PathListComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field StaticInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StaticInstance, put = setStaticF_StaticInstance))::System::Net::__PathList__PathListComparer* StaticInstance;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  static inline void setStaticF_StaticInstance(::System::Net::__PathList__PathListComparer* value);

  static inline ::System::Net::__PathList__PathListComparer* getStaticF_StaticInstance();

  /// @brief Method System.Collections.IComparer.Compare, addr 0x29b3320, size 0x168, virtual true, abstract: false, final true
  inline int32_t System_Collections_IComparer_Compare(::System::Object* ol, ::System::Object* _cordl_or);

  static inline ::System::Net::__PathList__PathListComparer* New_ctor();

  /// @brief Method .ctor, addr 0x29b3488, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PathList__PathListComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PathList__PathListComparer(__PathList__PathListComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PathList__PathListComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PathList__PathListComparer(__PathList__PathListComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PathList__PathListComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__PathList__PathListComparer, 0x10>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::PathList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9132))
// CS Name: ::System.Net::PathList*
class CORDL_TYPE PathList : public ::System::Object {
public:
  // Declarations
  using PathListComparer = ::System::Net::__PathList__PathListComparer;

  /// @brief Field m_list, offset 0x10, size 0x8
  __declspec(property(get = __get_m_list, put = __set_m_list))::System::Collections::SortedList* m_list;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  constexpr ::System::Collections::SortedList*& __get_m_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __get_m_list() const;

  constexpr void __set_m_list(::System::Collections::SortedList* value);

  static inline ::System::Net::PathList* New_ctor();

  /// @brief Method .ctor, addr 0x29af878, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x29b1580, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method GetCookiesCount, addr 0x29af920, size 0x444, virtual false, abstract: false, final false
  inline int32_t GetCookiesCount();

  /// @brief Method get_Values, addr 0x29b13f0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method get_Item, addr 0x29afd88, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::StringW s);

  /// @brief Method set_Item, addr 0x29afdac, size 0x100, virtual false, abstract: false, final false
  inline void set_Item(::StringW s, ::System::Object* value);

  /// @brief Method GetEnumerator, addr 0x29b2bc4, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method get_SyncRoot, addr 0x29afd64, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  // Ctor Parameters [CppParam { name: "", ty: "PathList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathList(PathList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathList(PathList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathList();

public:
  /// @brief Field m_list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::SortedList* ___m_list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::PathList, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::PathList, ___m_list) == 0x10, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::PathList);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::PathList*, "System.Net", "PathList");
NEED_NO_BOX(::System::Net::__PathList__PathListComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__PathList__PathListComparer*, "System.Net", "PathList/PathListComparer");
