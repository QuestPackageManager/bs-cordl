#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDtdInfo)
namespace System::Xml {
class IDtdAttributeListInfo;
}
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml {
class IDtdInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdInfo);
// Type: System.Xml::IDtdInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::IDtdInfo*
class CORDL_TYPE IDtdInfo {
public:
  // Declarations
  __declspec(property(get = get_HasDefaultAttributes)) bool HasDefaultAttributes;

  __declspec(property(get = get_HasNonCDataAttributes)) bool HasNonCDataAttributes;

  __declspec(property(get = get_InternalDtdSubset))::StringW InternalDtdSubset;

  __declspec(property(get = get_Name))::System::Xml::XmlQualifiedName* Name;

  /// @brief Method LookupAttributeList, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::IDtdAttributeListInfo* LookupAttributeList(::StringW prefix, ::StringW localName);

  /// @brief Method LookupEntity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::IDtdEntityInfo* LookupEntity(::StringW name);

  /// @brief Method get_HasDefaultAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_HasDefaultAttributes();

  /// @brief Method get_HasNonCDataAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_HasNonCDataAttributes();

  /// @brief Method get_InternalDtdSubset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_InternalDtdSubset();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlQualifiedName* get_Name();

  // Ctor Parameters [CppParam { name: "", ty: "IDtdInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDtdInfo(IDtdInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdInfo(IDtdInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdInfo*, "System.Xml", "IDtdInfo");
