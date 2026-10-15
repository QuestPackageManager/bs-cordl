#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Attributes/AnalyticsSettingsStructAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnalyticsSettingsStructAttribute)
// Forward declare root types
namespace BeatSaber::Analytics::Attributes {
class AnalyticsSettingsStructAttribute;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute*, "BeatSaber.Analytics.Attributes", "AnalyticsSettingsStructAttribute");
// [Conditional("BS_SETTINGS_ANALYTICS")]
// [AttributeUsage((System.AttributeTargets)12)]
// Dependencies System.Attribute
namespace BeatSaber::Analytics::Attributes {
// Is value type: false
// CS Name: BeatSaber.Analytics.Attributes.AnalyticsSettingsStructAttribute
class CORDL_TYPE AnalyticsSettingsStructAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Category)) ::StringW Category;

  /// @brief Field <Category>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Category_k__BackingField, put = __cordl_internal_set__Category_k__BackingField)) ::StringW _Category_k__BackingField;

  static inline ::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute* New_ctor(::StringW category);

  constexpr ::StringW const& __cordl_internal_get__Category_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Category_k__BackingField();

  constexpr void __cordl_internal_set__Category_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x34ff4d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW category);

  /// [CompilerGenerated]
  /// @brief Method get_Category, addr 0x34ff4c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Category();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsSettingsStructAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsSettingsStructAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsSettingsStructAttribute(AnalyticsSettingsStructAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsSettingsStructAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsSettingsStructAttribute(AnalyticsSettingsStructAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24491 };

  /// [CompilerGenerated]
  /// @brief Field <Category>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Category_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute, ____Category_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Attributes::AnalyticsSettingsStructAttribute) == 0x18, "Size mismatch!");

} // namespace BeatSaber::Analytics::Attributes
