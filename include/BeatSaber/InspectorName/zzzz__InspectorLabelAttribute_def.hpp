#pragma once
// IWYU pragma private; include "BeatSaber/InspectorName/InspectorLabelAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InspectorLabelAttribute)
// Forward declare root types
namespace BeatSaber::InspectorName {
class InspectorLabelAttribute;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::InspectorName::InspectorLabelAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace BeatSaber::InspectorName {
// Is value type: false
// CS Name: BeatSaber.InspectorName.InspectorLabelAttribute
class CORDL_TYPE InspectorLabelAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field CustomLabel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomLabel, put = __cordl_internal_set_CustomLabel)) ::StringW CustomLabel;

  static inline ::BeatSaber::InspectorName::InspectorLabelAttribute* New_ctor(::StringW customLabel);

  constexpr ::StringW const& __cordl_internal_get_CustomLabel() const;

  constexpr ::StringW& __cordl_internal_get_CustomLabel();

  constexpr void __cordl_internal_set_CustomLabel(::StringW value);

  /// @brief Method .ctor, addr 0x22b665c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW customLabel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectorLabelAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectorLabelAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectorLabelAttribute(InspectorLabelAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectorLabelAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectorLabelAttribute(InspectorLabelAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17165 };

  /// @brief Field CustomLabel, offset: 0x10, size: 0x8, def value: None
  ::StringW ___CustomLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::InspectorName::InspectorLabelAttribute, ___CustomLabel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::InspectorName::InspectorLabelAttribute, 0x18>, "Size mismatch!");

} // namespace BeatSaber::InspectorName
NEED_NO_BOX(::BeatSaber::InspectorName::InspectorLabelAttribute);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::InspectorName::InspectorLabelAttribute*, "BeatSaber.InspectorName", "InspectorLabelAttribute");
