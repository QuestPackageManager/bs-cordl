#pragma once
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
// Type: System.Resources::NeutralResourcesLanguageAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(3431))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3427))
// CS Name: ::System.Resources::NeutralResourcesLanguageAttribute*
class CORDL_TYPE NeutralResourcesLanguageAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <CultureName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__CultureName_k__BackingField, put = __set__CultureName_k__BackingField))::StringW _CultureName_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__Location_k__BackingField, put = __set__Location_k__BackingField))::System::Resources::UltimateResourceFallbackLocation _Location_k__BackingField;

  __declspec(property(get = get_CultureName))::StringW CultureName;

  __declspec(property(get = get_Location))::System::Resources::UltimateResourceFallbackLocation Location;

  constexpr ::StringW& __get__CultureName_k__BackingField();

  constexpr ::StringW const& __get__CultureName_k__BackingField() const;

  constexpr void __set__CultureName_k__BackingField(::StringW value);

  constexpr ::System::Resources::UltimateResourceFallbackLocation& __get__Location_k__BackingField();

  constexpr ::System::Resources::UltimateResourceFallbackLocation const& __get__Location_k__BackingField() const;

  constexpr void __set__Location_k__BackingField(::System::Resources::UltimateResourceFallbackLocation value);

  static inline ::System::Resources::NeutralResourcesLanguageAttribute* New_ctor(::StringW cultureName);

  /// @brief Method .ctor addr 0x24deee4 size 0x7c virtual false final false
  inline void _ctor(::StringW cultureName);

  /// @brief Method get_CultureName addr 0x24def60 size 0x8 virtual false final false
  inline ::StringW get_CultureName();

  /// @brief Method get_Location addr 0x24def68 size 0x8 virtual false final false
  inline ::System::Resources::UltimateResourceFallbackLocation get_Location();

  // Ctor Parameters [CppParam { name: "", ty: "NeutralResourcesLanguageAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NeutralResourcesLanguageAttribute(NeutralResourcesLanguageAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NeutralResourcesLanguageAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NeutralResourcesLanguageAttribute(NeutralResourcesLanguageAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NeutralResourcesLanguageAttribute();

public:
  /// @brief Field <CultureName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____CultureName_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::System::Resources::UltimateResourceFallbackLocation ____Location_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::NeutralResourcesLanguageAttribute, 0x20>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::NeutralResourcesLanguageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::NeutralResourcesLanguageAttribute*, "System.Resources", "NeutralResourcesLanguageAttribute");
