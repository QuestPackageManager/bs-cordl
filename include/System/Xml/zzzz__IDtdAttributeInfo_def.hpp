#pragma once
// IWYU pragma private; include "System/Xml/IDtdAttributeInfo.hpp"
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
// Dependencies
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IDtdAttributeInfo
class CORDL_TYPE IDtdAttributeInfo {
public:
  // Declarations
  __declspec(property(get = get_IsDeclaredInExternal)) bool IsDeclaredInExternal;

  __declspec(property(get = get_IsNonCDataType)) bool IsNonCDataType;

  __declspec(property(get = get_IsXmlAttribute)) bool IsXmlAttribute;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Prefix)) ::StringW Prefix;

  /// @brief Method get_IsDeclaredInExternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsDeclaredInExternal();

  /// @brief Method get_IsNonCDataType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsNonCDataType();

  /// @brief Method get_IsXmlAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsXmlAttribute();

  /// @brief Method get_LineNumber, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_LocalName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Prefix, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  // Ctor Parameters [CppParam { name: "", ty: "IDtdAttributeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdAttributeInfo(IDtdAttributeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7185 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdAttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdAttributeInfo*, "System.Xml", "IDtdAttributeInfo");
