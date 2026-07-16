#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializerNamespaces.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializerNamespaces)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializerNamespaces;
}
// Write type traits
MARK_REF_T(::System::Xml::Serialization::XmlSerializerNamespaces*);
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlSerializerNamespaces*, "System.Xml.Serialization", "XmlSerializerNamespaces");
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializerNamespaces
class CORDL_TYPE XmlSerializerNamespaces : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_NamespaceList)) ::System::Collections::ArrayList* NamespaceList;

  __declspec(property(get = get_Namespaces, put = set_Namespaces)) ::System::Collections::Hashtable* Namespaces;

  /// @brief Field namespaces, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaces, put = __cordl_internal_set_namespaces)) ::System::Collections::Hashtable* namespaces;

  /// @brief Method Add, addr 0x62e54a4, size 0xb4, virtual false, abstract: false, final false
  inline void Add(::StringW prefix, ::StringW ns);

  /// @brief Method AddInternal, addr 0x62e5558, size 0x3c, virtual false, abstract: false, final false
  inline void AddInternal(::StringW prefix, ::StringW ns);

  static inline ::System::Xml::Serialization::XmlSerializerNamespaces* New_ctor();

  /// @brief Method ToArray, addr 0x62e5600, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlQualifiedName*> ToArray();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_namespaces() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_namespaces();

  constexpr void __cordl_internal_set_namespaces(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x62e54a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x62e5afc, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_NamespaceList, addr 0x62e56f8, size 0x404, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_NamespaceList();

  /// @brief Method get_Namespaces, addr 0x62e5594, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_Namespaces();

  /// @brief Method set_Namespaces, addr 0x62e5b20, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespaces(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializerNamespaces();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializerNamespaces", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializerNamespaces(XmlSerializerNamespaces&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializerNamespaces", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializerNamespaces(XmlSerializerNamespaces const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9447 };

  /// @brief Field namespaces, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___namespaces;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializerNamespaces, ___namespaces) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Serialization::XmlSerializerNamespaces) == 0x18, "Size mismatch!");

} // namespace System::Xml::Serialization
