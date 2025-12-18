#pragma once
// IWYU pragma private; include "Unity/Properties/CreatePropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Scripting/zzzz__RequiredMemberAttribute_def.hpp"
CORDL_MODULE_EXPORT(CreatePropertyAttribute)
// Forward declare root types
namespace Unity::Properties {
class CreatePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::CreatePropertyAttribute);
// Dependencies UnityEngine.Scripting.RequiredMemberAttribute
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.CreatePropertyAttribute
class CORDL_TYPE CreatePropertyAttribute : public ::UnityEngine::Scripting::RequiredMemberAttribute {
public:
  // Declarations
  __declspec(property(get = get_ReadOnly, put = set_ReadOnly)) bool ReadOnly;

  /// @brief Field <ReadOnly>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ReadOnly_k__BackingField, put = __cordl_internal_set__ReadOnly_k__BackingField)) bool _ReadOnly_k__BackingField;

  static inline ::Unity::Properties::CreatePropertyAttribute* New_ctor();

  constexpr bool const& __cordl_internal_get__ReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ReadOnly_k__BackingField();

  constexpr void __cordl_internal_set__ReadOnly_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x69d300c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ReadOnly, addr 0x69d2ffc, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReadOnly();

  /// @brief Method set_ReadOnly, addr 0x69d3004, size 0x8, virtual false, abstract: false, final false
  inline void set_ReadOnly(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreatePropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreatePropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreatePropertyAttribute(CreatePropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreatePropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreatePropertyAttribute(CreatePropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19329 };

  /// @brief Field <ReadOnly>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____ReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::CreatePropertyAttribute, ____ReadOnly_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::CreatePropertyAttribute, 0x18>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::CreatePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::CreatePropertyAttribute*, "Unity.Properties", "CreatePropertyAttribute");
