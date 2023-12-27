#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDtdAttributeInfo)
// Forward declare root types
namespace System::Xml {
class IDtdAttributeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdAttributeInfo);
// Type: System.Xml::IDtdAttributeInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11423))
// CS Name: ::System.Xml::IDtdAttributeInfo*
class CORDL_TYPE IDtdAttributeInfo {
public:
  // Declarations
  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_IsNonCDataType)) bool IsNonCDataType;

  __declspec(property(get = get_IsDeclaredInExternal)) bool IsDeclaredInExternal;

  __declspec(property(get = get_IsXmlAttribute)) bool IsXmlAttribute;

  /// @brief Method get_Prefix addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Prefix();

  /// @brief Method get_LocalName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_LocalName();

  /// @brief Method get_LineNumber addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_LinePosition();

  /// @brief Method get_IsNonCDataType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsNonCDataType();

  /// @brief Method get_IsDeclaredInExternal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsDeclaredInExternal();

  /// @brief Method get_IsXmlAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsXmlAttribute();

  // Ctor Parameters [CppParam { name: "", ty: "IDtdAttributeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDtdAttributeInfo(IDtdAttributeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdAttributeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdAttributeInfo(IDtdAttributeInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdAttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdAttributeInfo*, "System.Xml", "IDtdAttributeInfo");
