#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISerializableDataNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataNode_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISerializableDataNode)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::Serialization {
class ElementData;
}
namespace System::Runtime::Serialization {
class ISerializableDataMember;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ISerializableDataNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ISerializableDataNode);
// Dependencies System.Runtime.Serialization.DataNode`1<T>
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ISerializableDataNode
class CORDL_TYPE ISerializableDataNode : public ::System::Runtime::Serialization::DataNode_1<::System::Object*> {
public:
  // Declarations
  __declspec(property(get = get_FactoryTypeName, put = set_FactoryTypeName)) ::StringW FactoryTypeName;

  __declspec(property(get = get_FactoryTypeNamespace, put = set_FactoryTypeNamespace)) ::StringW FactoryTypeNamespace;

  __declspec(property(get = get_Members, put = set_Members)) ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* Members;

  /// @brief Field factoryTypeName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_factoryTypeName, put = __cordl_internal_set_factoryTypeName)) ::StringW factoryTypeName;

  /// @brief Field factoryTypeNamespace, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_factoryTypeNamespace, put = __cordl_internal_set_factoryTypeNamespace)) ::StringW factoryTypeNamespace;

  /// @brief Field members, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_members,
                      put = __cordl_internal_set_members)) ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* members;

  /// @brief Method Clear, addr 0x5f34898, size 0x4c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method GetData, addr 0x5f347a4, size 0xf4, virtual true, abstract: false, final false
  inline void GetData(::System::Runtime::Serialization::ElementData* element);

  static inline ::System::Runtime::Serialization::ISerializableDataNode* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_factoryTypeName() const;

  constexpr ::StringW& __cordl_internal_get_factoryTypeName();

  constexpr ::StringW const& __cordl_internal_get_factoryTypeNamespace() const;

  constexpr ::StringW& __cordl_internal_get_factoryTypeNamespace();

  constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* const& __cordl_internal_get_members() const;

  constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>*& __cordl_internal_get_members();

  constexpr void __cordl_internal_set_factoryTypeName(::StringW value);

  constexpr void __cordl_internal_set_factoryTypeNamespace(::StringW value);

  constexpr void __cordl_internal_set_members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* value);

  /// @brief Method .ctor, addr 0x5f345f8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FactoryTypeName, addr 0x5f34774, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FactoryTypeName();

  /// @brief Method get_FactoryTypeNamespace, addr 0x5f34784, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FactoryTypeNamespace();

  /// @brief Method get_Members, addr 0x5f34794, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* get_Members();

  /// @brief Method set_FactoryTypeName, addr 0x5f3477c, size 0x8, virtual false, abstract: false, final false
  inline void set_FactoryTypeName(::StringW value);

  /// @brief Method set_FactoryTypeNamespace, addr 0x5f3478c, size 0x8, virtual false, abstract: false, final false
  inline void set_FactoryTypeNamespace(::StringW value);

  /// @brief Method set_Members, addr 0x5f3479c, size 0x8, virtual false, abstract: false, final false
  inline void set_Members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ISerializableDataNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ISerializableDataNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISerializableDataNode(ISerializableDataNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISerializableDataNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializableDataNode(ISerializableDataNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16994 };

  /// @brief Field factoryTypeName, offset: 0x50, size: 0x8, def value: None
  ::StringW ___factoryTypeName;

  /// @brief Field factoryTypeNamespace, offset: 0x58, size: 0x8, def value: None
  ::StringW ___factoryTypeNamespace;

  /// @brief Field members, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ISerializableDataMember*>* ___members;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ISerializableDataNode, ___factoryTypeName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ISerializableDataNode, ___factoryTypeNamespace) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ISerializableDataNode, ___members) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ISerializableDataNode, 0x68>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ISerializableDataNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ISerializableDataNode*, "System.Runtime.Serialization", "ISerializableDataNode");
