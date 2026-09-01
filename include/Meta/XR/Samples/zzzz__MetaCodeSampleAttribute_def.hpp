#pragma once
// IWYU pragma private; include "Meta\XR\Samples\MetaCodeSampleAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaCodeSampleAttribute)
// Forward declare root types
namespace Meta::XR::Samples {
class MetaCodeSampleAttribute;
}
// Write type traits
MARK_REF_T(::Meta::XR::Samples::MetaCodeSampleAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::XR::Samples::MetaCodeSampleAttribute*, "Meta.XR.Samples", "MetaCodeSampleAttribute");
// Dependencies System.Attribute
namespace Meta::XR::Samples {
// Is value type: false
// CS Name: Meta.XR.Samples.MetaCodeSampleAttribute
class CORDL_TYPE MetaCodeSampleAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_SampleName, put = set_SampleName)) ::StringW SampleName;

  /// @brief Field <SampleName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__SampleName_k__BackingField, put = __cordl_internal_set__SampleName_k__BackingField)) ::StringW _SampleName_k__BackingField;

  static inline ::Meta::XR::Samples::MetaCodeSampleAttribute* New_ctor(::StringW sampleName);

  constexpr ::StringW const& __cordl_internal_get__SampleName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SampleName_k__BackingField();

  constexpr void __cordl_internal_set__SampleName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x5e508f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW sampleName);

  /// @brief Method get_SampleName, addr 0x5e508f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SampleName();

  /// @brief Method set_SampleName, addr 0x5e50900, size 0x8, virtual false, abstract: false, final false
  inline void set_SampleName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaCodeSampleAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaCodeSampleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaCodeSampleAttribute(MetaCodeSampleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaCodeSampleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaCodeSampleAttribute(MetaCodeSampleAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8566 };

  /// @brief Field <SampleName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____SampleName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Samples::MetaCodeSampleAttribute, ____SampleName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Samples::MetaCodeSampleAttribute) == 0x18, "Size mismatch!");

} // namespace Meta::XR::Samples
