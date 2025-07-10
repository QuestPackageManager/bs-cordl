#pragma once
// IWYU pragma private; include "System/Resources/SatelliteContractVersionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SatelliteContractVersionAttribute)
// Forward declare root types
namespace System::Resources {
class SatelliteContractVersionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::SatelliteContractVersionAttribute);
// Dependencies System.Attribute
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.SatelliteContractVersionAttribute
class CORDL_TYPE SatelliteContractVersionAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Version>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Version_k__BackingField, put = __cordl_internal_set__Version_k__BackingField)) ::StringW _Version_k__BackingField;

  static inline ::System::Resources::SatelliteContractVersionAttribute* New_ctor(::StringW version);

  constexpr ::StringW const& __cordl_internal_get__Version_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Version_k__BackingField();

  constexpr void __cordl_internal_set__Version_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3d1ca18, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW version);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SatelliteContractVersionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SatelliteContractVersionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SatelliteContractVersionAttribute(SatelliteContractVersionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SatelliteContractVersionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SatelliteContractVersionAttribute(SatelliteContractVersionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3429 };

  /// @brief Field <Version>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Version_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::SatelliteContractVersionAttribute, ____Version_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::SatelliteContractVersionAttribute, 0x18>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::SatelliteContractVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::SatelliteContractVersionAttribute*, "System.Resources", "SatelliteContractVersionAttribute");
