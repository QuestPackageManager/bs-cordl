#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchySearchFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchySearchFilterOperator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HierarchySearchFilter)
namespace Unity::Hierarchy {
struct HierarchySearchFilterOperator;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchySearchFilter;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchySearchFilter);
// Dependencies Unity.Hierarchy.HierarchySearchFilterOperator
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchySearchFilter
struct CORDL_TYPE HierarchySearchFilter {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NumValue)) float_t NumValue;

  __declspec(property(get = get_Op)) ::Unity::Hierarchy::HierarchySearchFilterOperator Op;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Field s_Invalid, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_s_Invalid, put = setStaticF_s_Invalid)) ::Unity::Hierarchy::HierarchySearchFilter s_Invalid;

  /// @brief Field s_WhiteSpaces, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_WhiteSpaces, put = setStaticF_s_WhiteSpaces)) ::ArrayW<char16_t, ::Array<char16_t>*> s_WhiteSpaces;

  /// @brief Method QuoteStringIfNeeded, addr 0x696f7e8, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW QuoteStringIfNeeded(::StringW s);

  /// @brief Method ToString, addr 0x696f6e8, size 0x100, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x696f58c, size 0x15c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::Unity::Hierarchy::HierarchySearchFilterOperator op);

  static inline ::Unity::Hierarchy::HierarchySearchFilter getStaticF_s_Invalid();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_WhiteSpaces();

  /// @brief Method get_Invalid, addr 0x696f4a0, size 0x5c, virtual false, abstract: false, final false
  static inline ::ByRef<::Unity::Hierarchy::HierarchySearchFilter> get_Invalid();

  /// @brief Method get_IsValid, addr 0x696f4fc, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsValid();

  /// @brief Method get_Name, addr 0x696f56c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NumValue, addr 0x696f57c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_NumValue();

  /// @brief Method get_Op, addr 0x696f584, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchySearchFilterOperator get_Op();

  /// @brief Method get_Value, addr 0x696f574, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  static inline void setStaticF_s_Invalid(::Unity::Hierarchy::HierarchySearchFilter value);

  static inline void setStaticF_s_WhiteSpaces(::ArrayW<char16_t, ::Array<char16_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchySearchFilter();

  // Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "_NumValue_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_Op_k__BackingField", ty:
  // "::Unity::Hierarchy::HierarchySearchFilterOperator", modifiers: "", def_value: None }]
  constexpr HierarchySearchFilter(::StringW _Name_k__BackingField, ::StringW _Value_k__BackingField, float_t _NumValue_k__BackingField,
                                  ::Unity::Hierarchy::HierarchySearchFilterOperator _Op_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21763 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <Name>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _Name_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _Value_k__BackingField;

  /// @brief Field <NumValue>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t _NumValue_k__BackingField;

  /// @brief Field <Op>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::Unity::Hierarchy::HierarchySearchFilterOperator _Op_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchySearchFilter, _Name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchFilter, _Value_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchFilter, _NumValue_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchFilter, _Op_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchySearchFilter, 0x18>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchySearchFilter, "Unity.Hierarchy", "HierarchySearchFilter");
