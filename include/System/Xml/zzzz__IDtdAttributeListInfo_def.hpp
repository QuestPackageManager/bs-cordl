#pragma once
// IWYU pragma private; include "System/Xml/IDtdAttributeListInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDtdAttributeListInfo)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Xml {
class IDtdAttributeInfo;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
// Forward declare root types
namespace System::Xml {
class IDtdAttributeListInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdAttributeListInfo);
// Type: System.Xml::IDtdAttributeListInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::IDtdAttributeListInfo*
class CORDL_TYPE IDtdAttributeListInfo {
public:
  // Declarations
  __declspec(property(get = get_HasNonCDataAttributes)) bool HasNonCDataAttributes;

  /// @brief Method LookupAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::IDtdAttributeInfo* LookupAttribute(::StringW prefix, ::StringW localName);

  /// @brief Method LookupDefaultAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* LookupDefaultAttributes();

  /// @brief Method get_HasNonCDataAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_HasNonCDataAttributes();

  // Ctor Parameters [CppParam { name: "", ty: "IDtdAttributeListInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDtdAttributeListInfo(IDtdAttributeListInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdAttributeListInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdAttributeListInfo(IDtdAttributeListInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdAttributeListInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdAttributeListInfo*, "System.Xml", "IDtdAttributeListInfo");
