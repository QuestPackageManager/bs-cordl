#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializerNamespaces.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializerNamespaces);
// Type: System.Xml.Serialization::XmlSerializerNamespaces
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializerNamespaces*
class CORDL_TYPE XmlSerializerNamespaces : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_NamespaceList)) ::System::Collections::ArrayList* NamespaceList;

  __declspec(property(get = get_Namespaces, put = set_Namespaces)) ::System::Collections::Hashtable* Namespaces;

  /// @brief Field namespaces, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaces, put = __cordl_internal_set_namespaces)) ::System::Collections::Hashtable* namespaces;

  /// @brief Method Add, addr 0x43045d0, size 0xb4, virtual false, abstract: false, final false
  inline void Add(::StringW prefix, ::StringW ns);

  /// @brief Method AddInternal, addr 0x4304684, size 0x3c, virtual false, abstract: false, final false
  inline void AddInternal(::StringW prefix, ::StringW ns);

  static inline ::System::Xml::Serialization::XmlSerializerNamespaces* New_ctor();

  /// @brief Method ToArray, addr 0x4304724, size 0x108, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> ToArray();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_namespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_namespaces() const;

  constexpr void __cordl_internal_set_namespaces(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x43045c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x4304c60, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_NamespaceList, addr 0x430482c, size 0x434, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_NamespaceList();

  /// @brief Method get_Namespaces, addr 0x43046c0, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_Namespaces();

  /// @brief Method set_Namespaces, addr 0x4304c84, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field namespaces, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___namespaces;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7356 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializerNamespaces, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializerNamespaces, ___namespaces) == 0x10, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializerNamespaces);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializerNamespaces*, "System.Xml.Serialization", "XmlSerializerNamespaces");
