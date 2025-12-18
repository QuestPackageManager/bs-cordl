#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ClassDataNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataNode_1_def.hpp"
CORDL_MODULE_EXPORT(ClassDataNode)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::Serialization {
class ExtensionDataMember;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ClassDataNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ClassDataNode);
// Dependencies System.Runtime.Serialization.DataNode`1<T>
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ClassDataNode
class CORDL_TYPE ClassDataNode : public ::System::Runtime::Serialization::DataNode_1<::System::Object*> {
public:
  // Declarations
  __declspec(property(get = get_Members, put = set_Members)) ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* Members;

  /// @brief Field members, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_members, put = __cordl_internal_set_members)) ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* members;

  /// @brief Method Clear, addr 0x5f9bb48, size 0x48, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::System::Runtime::Serialization::ClassDataNode* New_ctor();

  constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* const& __cordl_internal_get_members() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*& __cordl_internal_get_members();

  constexpr void __cordl_internal_set_members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value);

  /// @brief Method .ctor, addr 0x5f9b9bc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Members, addr 0x5f9bb38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* get_Members();

  /// @brief Method set_Members, addr 0x5f9bb40, size 0x8, virtual false, abstract: false, final false
  inline void set_Members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassDataNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClassDataNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassDataNode(ClassDataNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassDataNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassDataNode(ClassDataNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17005 };

  /// @brief Field members, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* ___members;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ClassDataNode, ___members) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ClassDataNode, 0x58>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ClassDataNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ClassDataNode*, "System.Runtime.Serialization", "ClassDataNode");
