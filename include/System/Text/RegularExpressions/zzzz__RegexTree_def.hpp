#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexTree.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexTree)
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexTree;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexTree);
// Type: System.Text.RegularExpressions::RegexTree
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: ::System.Text.RegularExpressions::RegexTree*
class CORDL_TYPE RegexTree : public ::System::Object {
public:
  // Declarations
  /// @brief Field CapNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_CapNames, put = __cordl_internal_set_CapNames)) ::System::Collections::Hashtable* CapNames;

  /// @brief Field CapNumList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CapNumList, put = __cordl_internal_set_CapNumList)) ::ArrayW<int32_t, ::Array<int32_t>*> CapNumList;

  /// @brief Field CapTop, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_CapTop, put = __cordl_internal_set_CapTop)) int32_t CapTop;

  /// @brief Field Caps, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Caps, put = __cordl_internal_set_Caps)) ::System::Collections::Hashtable* Caps;

  /// @brief Field CapsList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_CapsList, put = __cordl_internal_set_CapsList)) ::ArrayW<::StringW, ::Array<::StringW>*> CapsList;

  /// @brief Field Options, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_Options, put = __cordl_internal_set_Options)) ::System::Text::RegularExpressions::RegexOptions Options;

  /// @brief Field Root, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Root, put = __cordl_internal_set_Root)) ::System::Text::RegularExpressions::RegexNode* Root;

  static inline ::System::Text::RegularExpressions::RegexTree* New_ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps,
                                                                        ::ArrayW<int32_t, ::Array<int32_t>*> capNumList, int32_t capTop, ::System::Collections::Hashtable* capNames,
                                                                        ::ArrayW<::StringW, ::Array<::StringW>*> capsList, ::System::Text::RegularExpressions::RegexOptions options);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_CapNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_CapNames() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_CapNumList() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_CapNumList();

  constexpr int32_t const& __cordl_internal_get_CapTop() const;

  constexpr int32_t& __cordl_internal_get_CapTop();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Caps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_Caps() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_CapsList() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_CapsList();

  constexpr ::System::Text::RegularExpressions::RegexOptions const& __cordl_internal_get_Options() const;

  constexpr ::System::Text::RegularExpressions::RegexOptions& __cordl_internal_get_Options();

  constexpr ::System::Text::RegularExpressions::RegexNode*& __cordl_internal_get_Root();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& __cordl_internal_get_Root() const;

  constexpr void __cordl_internal_set_CapNames(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_CapNumList(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_CapTop(int32_t value);

  constexpr void __cordl_internal_set_Caps(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_CapsList(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_Options(::System::Text::RegularExpressions::RegexOptions value);

  constexpr void __cordl_internal_set_Root(::System::Text::RegularExpressions::RegexNode* value);

  /// @brief Method .ctor, addr 0x43c0d44, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps, ::ArrayW<int32_t, ::Array<int32_t>*> capNumList, int32_t capTop,
                    ::System::Collections::Hashtable* capNames, ::ArrayW<::StringW, ::Array<::StringW>*> capsList, ::System::Text::RegularExpressions::RegexOptions options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexTree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexTree(RegexTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexTree(RegexTree const&) = delete;

  /// @brief Field Root, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexNode* ___Root;

  /// @brief Field Caps, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___Caps;

  /// @brief Field CapNumList, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___CapNumList;

  /// @brief Field CapTop, offset: 0x28, size: 0x4, def value: None
  int32_t ___CapTop;

  /// @brief Field CapNames, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___CapNames;

  /// @brief Field CapsList, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___CapsList;

  /// @brief Field Options, offset: 0x40, size: 0x4, def value: None
  ::System::Text::RegularExpressions::RegexOptions ___Options;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexTree, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexTree, ___Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexTree, ___Caps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexTree, ___CapNumList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexTree, ___CapTop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexTree, ___CapNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexTree, ___CapsList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexTree, ___Options) == 0x40, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexTree*, "System.Text.RegularExpressions", "RegexTree");
