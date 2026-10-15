#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Attributes/AnalyticsTransformAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnalyticsTransformAttribute)
// Forward declare root types
namespace BeatSaber::Analytics::Attributes {
class AnalyticsTransformAttribute;
}
// Write type traits
MARK_REF_T(::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute*, "BeatSaber.Analytics.Attributes", "AnalyticsTransformAttribute");
// [Conditional("BS_SETTINGS_ANALYTICS")]
// [AttributeUsage((System.AttributeTargets)384)]
// Dependencies System.Attribute
namespace BeatSaber::Analytics::Attributes {
// Is value type: false
// CS Name: BeatSaber.Analytics.Attributes.AnalyticsTransformAttribute
class CORDL_TYPE AnalyticsTransformAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_MethodName)) ::StringW MethodName;

  /// @brief Field <MethodName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__MethodName_k__BackingField, put = __cordl_internal_set__MethodName_k__BackingField)) ::StringW _MethodName_k__BackingField;

  static inline ::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute* New_ctor(::StringW methodName);

  constexpr ::StringW const& __cordl_internal_get__MethodName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MethodName_k__BackingField();

  constexpr void __cordl_internal_set__MethodName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x34ff4e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW methodName);

  /// [CompilerGenerated]
  /// @brief Method get_MethodName, addr 0x34ff4d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MethodName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsTransformAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsTransformAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsTransformAttribute(AnalyticsTransformAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsTransformAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsTransformAttribute(AnalyticsTransformAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24492 };

  /// [CompilerGenerated]
  /// @brief Field <MethodName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____MethodName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute, ____MethodName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Analytics::Attributes::AnalyticsTransformAttribute) == 0x18, "Size mismatch!");

} // namespace BeatSaber::Analytics::Attributes
