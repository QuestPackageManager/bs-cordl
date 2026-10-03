#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlNamespaceDefinition_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlAsset)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct UxmlNamespaceDefinition;
}
namespace UnityEngine::UIElements {
class UxmlObjectAsset;
}
namespace UnityEngine::UIElements {
struct UxmlProperty;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlAsset;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UxmlAsset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlAsset*, "UnityEngine.UIElements", "UxmlAsset");
// [DefaultMember("Item")]
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object, UnityEngine.UIElements.UxmlNamespaceDefinition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlAsset
class CORDL_TYPE UxmlAsset : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::UnityEngine::UIElements::UxmlAsset* Item[];

  __declspec(property(get = get_childCount)) int32_t childCount;

  __declspec(property(get = get_fullTypeName)) ::StringW fullTypeName;

  __declspec(property(get = get_id, put = set_id)) int32_t id;

  __declspec(property(get = get_isRoot)) bool isRoot;

  /// @brief Field m_Children, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Children, put = __cordl_internal_set_m_Children)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>* m_Children;

  /// @brief Field m_FullTypeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FullTypeName, put = __cordl_internal_set_m_FullTypeName)) ::StringW m_FullTypeName;

  /// @brief Field m_Id, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id)) int32_t m_Id;

  /// @brief Field m_NamespaceDefinitions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NamespaceDefinitions,
                      put = __cordl_internal_set_m_NamespaceDefinitions)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>* m_NamespaceDefinitions;

  /// @brief Field m_Parent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parent, put = __cordl_internal_set_m_Parent)) ::UnityEngine::UIElements::UxmlAsset* m_Parent;

  /// @brief Field m_Properties, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Properties, put = __cordl_internal_set_m_Properties)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlProperty>* m_Properties;

  /// @brief Field m_VisualTreeAsset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualTreeAsset, put = __cordl_internal_set_m_VisualTreeAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> m_VisualTreeAsset;

  /// @brief Field m_XmlNamespace, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_XmlNamespace, put = __cordl_internal_set_m_XmlNamespace)) ::UnityEngine::UIElements::UxmlNamespaceDefinition m_XmlNamespace;

  __declspec(property(get = get_namespaceDefinitions)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>* namespaceDefinitions;

  __declspec(property(get = get_parentAsset)) ::UnityEngine::UIElements::UxmlAsset* parentAsset;

  __declspec(property(get = get_visualTreeAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> visualTreeAsset;

  /// @brief Convert operator to "::UnityEngine::UIElements::IUxmlAttributes"
  constexpr operator ::UnityEngine::UIElements::IUxmlAttributes*() noexcept;

  /// @brief Method Accepts, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Accepts(::UnityEngine::UIElements::UxmlAsset* asset, ::by_ref<::StringW> errorMessage);

  /// @brief Method Add, addr 0x71473a0, size 0xb4, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::UxmlAsset* asset);

  /// @brief Method GetChildrenUxmlObjectAssets, addr 0x7146f8c, size 0x194, virtual false, abstract: false, final false
  inline void GetChildrenUxmlObjectAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* children);

  /// @brief Method GetField, addr 0x7147120, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlObjectAsset* GetField(::StringW fieldName);

  /// @brief Method HasParent, addr 0x7147b84, size 0x10, virtual true, abstract: false, final false
  inline bool HasParent();

  /// @brief Method IndexOf, addr 0x7147aa0, size 0x7c, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::UxmlAsset* asset);

  /// @brief Method Insert, addr 0x7147454, size 0x340, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::UxmlAsset* asset);

  /// @brief Method InsertInChildren, addr 0x7147974, size 0xbc, virtual false, abstract: false, final false
  inline void InsertInChildren(int32_t index, ::UnityEngine::UIElements::UxmlAsset* asset);

  /// @brief Method IsAncestorOf, addr 0x7147794, size 0x1e0, virtual false, abstract: false, final false
  inline bool IsAncestorOf(::UnityEngine::UIElements::UxmlAsset* other);

  static inline ::UnityEngine::UIElements::UxmlAsset* New_ctor(::StringW fullTypeName, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace);

  /// @brief Method OnVisualTreeAssetChanged, addr 0x7147b80, size 0x4, virtual true, abstract: false, final false
  inline void OnVisualTreeAssetChanged(::UnityEngine::UIElements::VisualTreeAsset* previousVta, ::UnityEngine::UIElements::VisualTreeAsset* newVta);

  /// @brief Method RemoveAttribute, addr 0x7144b2c, size 0xec, virtual false, abstract: false, final false
  inline void RemoveAttribute(::StringW attributeName);

  /// @brief Method RemoveFromChildren, addr 0x7147a84, size 0x1c, virtual false, abstract: false, final false
  inline void RemoveFromChildren(::UnityEngine::UIElements::UxmlAsset* child);

  /// @brief Method RemoveFromChildren, addr 0x7147b1c, size 0x64, virtual false, abstract: false, final false
  inline void RemoveFromChildren(int32_t index);

  /// @brief Method SetAttribute, addr 0x7144c18, size 0x4, virtual false, abstract: false, final false
  inline void SetAttribute(::StringW name, ::StringW value);

  /// @brief Method SetOrAddProperty, addr 0x7147c68, size 0x1c4, virtual false, abstract: false, final false
  inline void SetOrAddProperty(::StringW propertyName, ::StringW propertyValue);

  /// @brief Method SetParent, addr 0x7147a30, size 0x54, virtual false, abstract: false, final false
  inline void SetParent(::UnityEngine::UIElements::UxmlAsset* parent);

  /// @brief Method SetVisualTreeAsset, addr 0x7147234, size 0x16c, virtual false, abstract: false, final false
  inline void SetVisualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* vta);

  /// @brief Method SetVisualTreeAssetWithOutNotify, addr 0x714722c, size 0x8, virtual false, abstract: false, final false
  inline void SetVisualTreeAssetWithOutNotify(::UnityEngine::UIElements::VisualTreeAsset* vta);

  /// @brief Method ToString, addr 0x7147e2c, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetAttributeValue, addr 0x7147b94, size 0xd4, virtual true, abstract: false, final true
  inline bool TryGetAttributeValue(::StringW propertyName, ::by_ref<::StringW> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>* const& __cordl_internal_get_m_Children() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>*& __cordl_internal_get_m_Children();

  constexpr ::StringW const& __cordl_internal_get_m_FullTypeName() const;

  constexpr ::StringW& __cordl_internal_get_m_FullTypeName();

  constexpr int32_t const& __cordl_internal_get_m_Id() const;

  constexpr int32_t& __cordl_internal_get_m_Id();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>* const& __cordl_internal_get_m_NamespaceDefinitions() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>*& __cordl_internal_get_m_NamespaceDefinitions();

  constexpr ::UnityEngine::UIElements::UxmlAsset* const& __cordl_internal_get_m_Parent() const;

  constexpr ::UnityEngine::UIElements::UxmlAsset*& __cordl_internal_get_m_Parent();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlProperty>* const& __cordl_internal_get_m_Properties() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlProperty>*& __cordl_internal_get_m_Properties();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_m_VisualTreeAsset() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_m_VisualTreeAsset();

  constexpr ::UnityEngine::UIElements::UxmlNamespaceDefinition const& __cordl_internal_get_m_XmlNamespace() const;

  constexpr ::UnityEngine::UIElements::UxmlNamespaceDefinition& __cordl_internal_get_m_XmlNamespace();

  constexpr void __cordl_internal_set_m_Children(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>* value);

  constexpr void __cordl_internal_set_m_FullTypeName(::StringW value);

  constexpr void __cordl_internal_set_m_Id(int32_t value);

  constexpr void __cordl_internal_set_m_NamespaceDefinitions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>* value);

  constexpr void __cordl_internal_set_m_Parent(::UnityEngine::UIElements::UxmlAsset* value);

  constexpr void __cordl_internal_set_m_Properties(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlProperty>* value);

  constexpr void __cordl_internal_set_m_VisualTreeAsset(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set_m_XmlNamespace(::UnityEngine::UIElements::UxmlNamespaceDefinition value);

  /// @brief Method .ctor, addr 0x7146d4c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW fullTypeName, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace);

  /// @brief Method get_Item, addr 0x7146ea8, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlAsset* get_Item(int32_t index);

  /// @brief Method get_childCount, addr 0x7146e54, size 0x54, virtual false, abstract: false, final false
  inline int32_t get_childCount();

  /// @brief Method get_fullTypeName, addr 0x7146d58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_fullTypeName();

  /// @brief Method get_id, addr 0x7146d60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_isRoot, addr 0x7146d70, size 0xd4, virtual false, abstract: false, final false
  inline bool get_isRoot();

  /// @brief Method get_namespaceDefinitions, addr 0x7146f0c, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>* get_namespaceDefinitions();

  /// @brief Method get_parentAsset, addr 0x7146e44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlAsset* get_parentAsset();

  /// @brief Method get_visualTreeAsset, addr 0x7146e4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_visualTreeAsset();

  /// @brief Convert to "::UnityEngine::UIElements::IUxmlAttributes"
  constexpr ::UnityEngine::UIElements::IUxmlAttributes* i___UnityEngine__UIElements__IUxmlAttributes() noexcept;

  /// @brief Method set_id, addr 0x7146d68, size 0x8, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlAsset", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlAsset(UxmlAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlAsset", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlAsset(UxmlAsset const&) = delete;

  /// @brief Field NullNodeType offset 0xffffffff size 0x8
  static constexpr ::ConstString NullNodeType{ u"null" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5289 };

  /// [SerializeField]
  /// @brief Field m_FullTypeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_FullTypeName;

  /// [SerializeField]
  /// @brief Field m_XmlNamespace, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::UIElements::UxmlNamespaceDefinition ___m_XmlNamespace;

  /// [SerializeField]
  /// @brief Field m_Id, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_Id;

  /// [HideInInspector]
  /// [SerializeReference]
  /// @brief Field m_Parent, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlAsset* ___m_Parent;

  /// [SerializeReference]
  /// @brief Field m_Children, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>* ___m_Children;

  /// [SerializeField]
  /// @brief Field m_VisualTreeAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___m_VisualTreeAsset;

  /// [SerializeField]
  /// @brief Field m_NamespaceDefinitions, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>* ___m_NamespaceDefinitions;

  /// [SerializeField]
  /// @brief Field m_Properties, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlProperty>* ___m_Properties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_FullTypeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_XmlNamespace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_Id) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_Parent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_Children) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_VisualTreeAsset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_NamespaceDefinitions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAsset, ___m_Properties) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UxmlAsset) == 0x58, "Size mismatch!");

} // namespace UnityEngine::UIElements
