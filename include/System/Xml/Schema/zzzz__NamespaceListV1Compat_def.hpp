#pragma once
// IWYU pragma private; include "System/Xml/Schema/NamespaceListV1Compat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NamespaceListV1Compat)
// Forward declare root types
namespace System::Xml::Schema {
class NamespaceListV1Compat;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::NamespaceListV1Compat);
// Type: System.Xml.Schema::NamespaceListV1Compat
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::NamespaceListV1Compat*
class CORDL_TYPE NamespaceListV1Compat : public ::System::Xml::Schema::NamespaceList {
public:
  // Declarations
  /// @brief Method Allows, addr 0x420aa80, size 0x24, virtual true, abstract: false, final false
  inline bool Allows(::StringW ns);

  static inline ::System::Xml::Schema::NamespaceListV1Compat* New_ctor(::StringW namespaces, ::StringW targetNamespace);

  /// @brief Method .ctor, addr 0x420aa7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW namespaces, ::StringW targetNamespace);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceListV1Compat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamespaceListV1Compat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamespaceListV1Compat(NamespaceListV1Compat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamespaceListV1Compat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamespaceListV1Compat(NamespaceListV1Compat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::NamespaceListV1Compat, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::NamespaceListV1Compat);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::NamespaceListV1Compat*, "System.Xml.Schema", "NamespaceListV1Compat");
