#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryFacetsChecker)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class BinaryFacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::BinaryFacetsChecker);
// Type: System.Xml.Schema::BinaryFacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11694))
// CS Name: ::System.Xml.Schema::BinaryFacetsChecker*
class CORDL_TYPE BinaryFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Method CheckValueFacets, addr 0x28c3248, size 0x90, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x28c32d8, size 0x1b0, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x28c359c, size 0x84, virtual true, abstract: false, final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x28c3488, size 0x114, virtual false, abstract: false, final false
  inline bool MatchEnumeration(::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  static inline ::System::Xml::Schema::BinaryFacetsChecker* New_ctor();

  /// @brief Method .ctor, addr 0x28c3620, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryFacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryFacetsChecker(BinaryFacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryFacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryFacetsChecker(BinaryFacetsChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryFacetsChecker();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::BinaryFacetsChecker, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::BinaryFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BinaryFacetsChecker*, "System.Xml.Schema", "BinaryFacetsChecker");
