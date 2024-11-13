#pragma once
// IWYU pragma private; include "System/Diagnostics/MonitoringDescriptionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__DescriptionAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonitoringDescriptionAttribute)
// Forward declare root types
namespace System::Diagnostics {
class MonitoringDescriptionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::MonitoringDescriptionAttribute);
// Type: System.Diagnostics::MonitoringDescriptionAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::MonitoringDescriptionAttribute*
class CORDL_TYPE MonitoringDescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute {
public:
  // Declarations
  __declspec(property(get = get_Description)) ::StringW Description;

  static inline ::System::Diagnostics::MonitoringDescriptionAttribute* New_ctor(::StringW description);

  /// @brief Method .ctor, addr 0x43d00cc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW description);

  /// @brief Method get_Description, addr 0x43d0134, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Description();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonitoringDescriptionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonitoringDescriptionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonitoringDescriptionAttribute(MonitoringDescriptionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonitoringDescriptionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonitoringDescriptionAttribute(MonitoringDescriptionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9250 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::MonitoringDescriptionAttribute, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::MonitoringDescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::MonitoringDescriptionAttribute*, "System.Diagnostics", "MonitoringDescriptionAttribute");
