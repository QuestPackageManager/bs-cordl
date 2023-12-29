#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlComplianceUtil)
// Forward declare root types
namespace System::Xml {
class XmlComplianceUtil;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlComplianceUtil);
// Type: System.Xml::XmlComplianceUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11473))
// CS Name: ::System.Xml::XmlComplianceUtil*
class CORDL_TYPE XmlComplianceUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method NonCDataNormalize addr 0x2720f48 size 0x270 virtual false final false
  static inline ::StringW NonCDataNormalize(::StringW value);

  /// @brief Method CDataNormalize addr 0x27211c0 size 0x1e4 virtual false final false
  static inline ::StringW CDataNormalize(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "XmlComplianceUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlComplianceUtil(XmlComplianceUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlComplianceUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlComplianceUtil(XmlComplianceUtil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlComplianceUtil();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlComplianceUtil, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlComplianceUtil);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlComplianceUtil*, "System.Xml", "XmlComplianceUtil");
