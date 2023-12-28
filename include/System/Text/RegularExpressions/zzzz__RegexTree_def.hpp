#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexTree)
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Collections {
class Hashtable;
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
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8925))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8931))
// CS Name: ::System.Text.RegularExpressions::RegexTree*
class CORDL_TYPE RegexTree : public ::System::Object {
public:
  // Declarations
  /// @brief Field Root, offset 0x10, size 0x8
  __declspec(property(get = __get_Root, put = __set_Root))::System::Text::RegularExpressions::RegexNode* Root;

  /// @brief Field Caps, offset 0x18, size 0x8
  __declspec(property(get = __get_Caps, put = __set_Caps))::System::Collections::Hashtable* Caps;

  /// @brief Field CapNumList, offset 0x20, size 0x8
  __declspec(property(get = __get_CapNumList, put = __set_CapNumList))::ArrayW<int32_t, ::Array<int32_t>*> CapNumList;

  /// @brief Field CapTop, offset 0x28, size 0x4
  __declspec(property(get = __get_CapTop, put = __set_CapTop)) int32_t CapTop;

  /// @brief Field CapNames, offset 0x30, size 0x8
  __declspec(property(get = __get_CapNames, put = __set_CapNames))::System::Collections::Hashtable* CapNames;

  /// @brief Field CapsList, offset 0x38, size 0x8
  __declspec(property(get = __get_CapsList, put = __set_CapsList))::ArrayW<::StringW, ::Array<::StringW>*> CapsList;

  /// @brief Field Options, offset 0x40, size 0x4
  __declspec(property(get = __get_Options, put = __set_Options))::System::Text::RegularExpressions::RegexOptions Options;

  constexpr ::System::Text::RegularExpressions::RegexNode*& __get_Root();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& __get_Root() const;

  constexpr void __set_Root(::System::Text::RegularExpressions::RegexNode* value);

  constexpr ::System::Collections::Hashtable*& __get_Caps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_Caps() const;

  constexpr void __set_Caps(::System::Collections::Hashtable* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_CapNumList();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_CapNumList() const;

  constexpr void __set_CapNumList(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_CapTop();

  constexpr int32_t const& __get_CapTop() const;

  constexpr void __set_CapTop(int32_t value);

  constexpr ::System::Collections::Hashtable*& __get_CapNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_CapNames() const;

  constexpr void __set_CapNames(::System::Collections::Hashtable* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_CapsList();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_CapsList() const;

  constexpr void __set_CapsList(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Text::RegularExpressions::RegexOptions& __get_Options();

  constexpr ::System::Text::RegularExpressions::RegexOptions const& __get_Options() const;

  constexpr void __set_Options(::System::Text::RegularExpressions::RegexOptions value);

  static inline ::System::Text::RegularExpressions::RegexTree* New_ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps,
                                                                        ::ArrayW<int32_t, ::Array<int32_t>*> capNumList, int32_t capTop, ::System::Collections::Hashtable* capNames,
                                                                        ::ArrayW<::StringW, ::Array<::StringW>*> capsList, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method .ctor addr 0x29645c4 size 0x68 virtual false final false
  inline void _ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps, ::ArrayW<int32_t, ::Array<int32_t>*> capNumList, int32_t capTop,
                    ::System::Collections::Hashtable* capNames, ::ArrayW<::StringW, ::Array<::StringW>*> capsList, ::System::Text::RegularExpressions::RegexOptions options);

  // Ctor Parameters [CppParam { name: "", ty: "RegexTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexTree(RegexTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexTree(RegexTree const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexTree();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexTree, 0x48>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexTree*, "System.Text.RegularExpressions", "RegexTree");
