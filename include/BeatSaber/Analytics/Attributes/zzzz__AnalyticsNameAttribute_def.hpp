#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Attributes/AnalyticsNameAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnalyticsNameAttribute)
// Forward declare root types
namespace BeatSaber::Analytics::Attributes {
class AnalyticsNameAttribute;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute*, "BeatSaber.Analytics.Attributes", "AnalyticsNameAttribute");
// [Conditional("BS_SETTINGS_ANALYTICS")]
// [AttributeUsage((System.AttributeTargets)384)]
// Dependencies System.Attribute
namespace BeatSaber::Analytics::Attributes {
// Is value type: false
// CS Name: BeatSaber.Analytics.Attributes.AnalyticsNameAttribute
class CORDL_TYPE AnalyticsNameAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  static inline ::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute* New_ctor(::StringW name);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x34ff4c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// [CompilerGenerated]
  /// @brief Method get_Name, addr 0x34ff4b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsNameAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsNameAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsNameAttribute(AnalyticsNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsNameAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsNameAttribute(AnalyticsNameAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24490 };

  /// [CompilerGenerated]
  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Attributes::AnalyticsNameAttribute) == 0x18, "Size mismatch!");

} // namespace BeatSaber::Analytics::Attributes
