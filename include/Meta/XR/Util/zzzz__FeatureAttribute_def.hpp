#pragma once
// IWYU pragma private; include "Meta/XR/Util/FeatureAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/Util/zzzz__Feature_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(FeatureAttribute)
namespace Meta::XR::Util {
struct Feature;
}
// Forward declare root types
namespace Meta::XR::Util {
class FeatureAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::Util::FeatureAttribute);
// Dependencies Meta.XR.Util.Feature, System.Attribute
namespace Meta::XR::Util {
// Is value type: false
// CS Name: Meta.XR.Util.FeatureAttribute
class CORDL_TYPE FeatureAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Feature)) ::Meta::XR::Util::Feature Feature;

  /// @brief Field <Feature>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Feature_k__BackingField, put = __cordl_internal_set__Feature_k__BackingField)) ::Meta::XR::Util::Feature _Feature_k__BackingField;

  static inline ::Meta::XR::Util::FeatureAttribute* New_ctor(::Meta::XR::Util::Feature feature);

  constexpr ::Meta::XR::Util::Feature const& __cordl_internal_get__Feature_k__BackingField() const;

  constexpr ::Meta::XR::Util::Feature& __cordl_internal_get__Feature_k__BackingField();

  constexpr void __cordl_internal_set__Feature_k__BackingField(::Meta::XR::Util::Feature value);

  /// @brief Method .ctor, addr 0x5ca287c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Meta::XR::Util::Feature feature);

  /// @brief Method get_Feature, addr 0x5ca2884, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::Util::Feature get_Feature();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureAttribute(FeatureAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureAttribute(FeatureAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8553 };

  /// @brief Field <Feature>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Meta::XR::Util::Feature ____Feature_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Util::FeatureAttribute, ____Feature_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::Util::FeatureAttribute, 0x18>, "Size mismatch!");

} // namespace Meta::XR::Util
NEED_NO_BOX(::Meta::XR::Util::FeatureAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::Util::FeatureAttribute*, "Meta.XR.Util", "FeatureAttribute");
