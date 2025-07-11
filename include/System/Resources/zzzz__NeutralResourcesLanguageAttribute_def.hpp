#pragma once
// IWYU pragma private; include "System/Resources/NeutralResourcesLanguageAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NeutralResourcesLanguageAttribute)
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
// Forward declare root types
namespace System::Resources {
class NeutralResourcesLanguageAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::NeutralResourcesLanguageAttribute);
// Dependencies System.Attribute, System.Resources.UltimateResourceFallbackLocation
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.NeutralResourcesLanguageAttribute
class CORDL_TYPE NeutralResourcesLanguageAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_CultureName)) ::StringW CultureName;

  __declspec(property(get = get_Location)) ::System::Resources::UltimateResourceFallbackLocation Location;

  /// @brief Field <CultureName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__CultureName_k__BackingField, put = __cordl_internal_set__CultureName_k__BackingField)) ::StringW _CultureName_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Location_k__BackingField,
                      put = __cordl_internal_set__Location_k__BackingField)) ::System::Resources::UltimateResourceFallbackLocation _Location_k__BackingField;

  static inline ::System::Resources::NeutralResourcesLanguageAttribute* New_ctor(::StringW cultureName);

  constexpr ::StringW const& __cordl_internal_get__CultureName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CultureName_k__BackingField();

  constexpr ::System::Resources::UltimateResourceFallbackLocation const& __cordl_internal_get__Location_k__BackingField() const;

  constexpr ::System::Resources::UltimateResourceFallbackLocation& __cordl_internal_get__Location_k__BackingField();

  constexpr void __cordl_internal_set__CultureName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Location_k__BackingField(::System::Resources::UltimateResourceFallbackLocation value);

  /// @brief Method .ctor, addr 0x3d1af48, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW cultureName);

  /// @brief Method get_CultureName, addr 0x3d1afc0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CultureName();

  /// @brief Method get_Location, addr 0x3d1afc8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Resources::UltimateResourceFallbackLocation get_Location();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NeutralResourcesLanguageAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NeutralResourcesLanguageAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NeutralResourcesLanguageAttribute(NeutralResourcesLanguageAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NeutralResourcesLanguageAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NeutralResourcesLanguageAttribute(NeutralResourcesLanguageAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3426 };

  /// @brief Field <CultureName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____CultureName_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::System::Resources::UltimateResourceFallbackLocation ____Location_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::NeutralResourcesLanguageAttribute, ____CultureName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Resources::NeutralResourcesLanguageAttribute, ____Location_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::NeutralResourcesLanguageAttribute, 0x20>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::NeutralResourcesLanguageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::NeutralResourcesLanguageAttribute*, "System.Resources", "NeutralResourcesLanguageAttribute");
