#pragma once
// IWYU pragma private; include "System/Xml/XmlNamedNodeMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNamedNodeMap)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml {
class SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNamedNodeMap_SmallXmlNodeList;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator;
}
namespace System::Xml {
class XmlNamedNodeMap;
}
namespace System::Xml {
struct XmlNamedNodeMap_SmallXmlNodeList;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator);
MARK_REF_PTR_T(::System::Xml::XmlNamedNodeMap);
MARK_VAL_T(::System::Xml::XmlNamedNodeMap_SmallXmlNodeList);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlNamedNodeMap/SmallXmlNodeList/SingleObjectEnumerator
class CORDL_TYPE SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field loneValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_loneValue, put = __cordl_internal_set_loneValue)) ::System::Object* loneValue;

  /// @brief Field position, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) int32_t position;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x6112700, size 0x1c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator* New_ctor(::System::Object* value);

  /// @brief Method Reset, addr 0x611271c, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Object* const& __cordl_internal_get_loneValue() const;

  constexpr ::System::Object*& __cordl_internal_get_loneValue();

  constexpr int32_t const& __cordl_internal_get_position() const;

  constexpr int32_t& __cordl_internal_get_position();

  constexpr void __cordl_internal_set_loneValue(::System::Object* value);

  constexpr void __cordl_internal_set_position(int32_t value);

  /// @brief Method .ctor, addr 0x61126a8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value);

  /// @brief Method get_Current, addr 0x61126b8, size 0x48, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator(SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator(SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9375 };

  /// @brief Field loneValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___loneValue;

  /// @brief Field position, offset: 0x18, size: 0x4, def value: None
  int32_t ___position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator, ___loneValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator, ___position) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator, 0x20>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct CORDL_TYPE XmlNamedNodeMap_SmallXmlNodeList {
public:
  // Declarations
  using SingleObjectEnumerator = ::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::System::Object* Item[];

  /// @brief Method Add, addr 0x61122e4, size 0x130, virtual false, abstract: false, final false
  inline void Add(::System::Object* value);

  /// @brief Method GetEnumerator, addr 0x61121f0, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method Insert, addr 0x6112504, size 0x1a4, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* value);

  /// @brief Method RemoveAt, addr 0x6112414, size 0xf0, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method get_Count, addr 0x6103d08, size 0x90, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x6103b0c, size 0xec, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNamedNodeMap_SmallXmlNodeList();

  // Ctor Parameters [CppParam { name: "field", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr XmlNamedNodeMap_SmallXmlNodeList(::System::Object* field) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9376 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field field, offset: 0x0, size: 0x8, def value: None
  ::System::Object* field;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNamedNodeMap_SmallXmlNodeList, field) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNamedNodeMap_SmallXmlNodeList, 0x8>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.XmlNamedNodeMap::SmallXmlNodeList
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlNamedNodeMap
class CORDL_TYPE XmlNamedNodeMap : public ::System::Object {
public:
  // Declarations
  using SmallXmlNodeList = ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field nodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes, put = __cordl_internal_set_nodes)) ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList nodes;

  /// @brief Field parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::System::Xml::XmlNode* parent;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddNode, addr 0x6104c24, size 0x19c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* node);

  /// @brief Method AddNodeForLoad, addr 0x6104638, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AddNodeForLoad(::System::Xml::XmlNode* node, ::System::Xml::XmlDocument* doc);

  /// @brief Method FindNodeOffset, addr 0x61041c8, size 0x118, virtual false, abstract: false, final false
  inline int32_t FindNodeOffset(::StringW localName, ::StringW namespaceURI);

  /// @brief Method FindNodeOffset, addr 0x6111ff8, size 0xe0, virtual false, abstract: false, final false
  inline int32_t FindNodeOffset(::StringW name);

  /// @brief Method GetEnumerator, addr 0x61121e8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetNamedItem, addr 0x6111f54, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* GetNamedItem(::StringW name);

  /// @brief Method InsertNodeAt, addr 0x6104e6c, size 0x1a8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* InsertNodeAt(int32_t i, ::System::Xml::XmlNode* node);

  static inline ::System::Xml::XmlNamedNodeMap* New_ctor(::System::Xml::XmlNode* parent);

  /// @brief Method RemoveNodeAt, addr 0x6104384, size 0x164, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* RemoveNodeAt(int32_t i);

  /// @brief Method ReplaceNodeAt, addr 0x6112194, size 0x54, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* ReplaceNodeAt(int32_t i, ::System::Xml::XmlNode* node);

  /// @brief Method SetNamedItem, addr 0x61120d8, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* node);

  constexpr ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList const& __cordl_internal_get_nodes() const;

  constexpr ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList& __cordl_internal_get_nodes();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_parent() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_parent();

  constexpr void __cordl_internal_set_nodes(::System::Xml::XmlNamedNodeMap_SmallXmlNodeList value);

  constexpr void __cordl_internal_set_parent(::System::Xml::XmlNode* value);

  /// @brief Method .ctor, addr 0x6103b04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* parent);

  /// @brief Method get_Count, addr 0x6104a38, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNamedNodeMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNamedNodeMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNamedNodeMap(XmlNamedNodeMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNamedNodeMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNamedNodeMap(XmlNamedNodeMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9377 };

  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___parent;

  /// @brief Field nodes, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNamedNodeMap_SmallXmlNodeList ___nodes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNamedNodeMap, ___parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNamedNodeMap, ___nodes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNamedNodeMap, 0x20>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator*, "System.Xml", "XmlNamedNodeMap/SmallXmlNodeList/SingleObjectEnumerator");
NEED_NO_BOX(::System::Xml::XmlNamedNodeMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNamedNodeMap*, "System.Xml", "XmlNamedNodeMap");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNamedNodeMap_SmallXmlNodeList, "System.Xml", "XmlNamedNodeMap/SmallXmlNodeList");
