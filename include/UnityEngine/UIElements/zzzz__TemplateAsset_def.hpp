#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TemplateAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TemplateAsset)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct TemplateAsset_AttributeOverride;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_SlotUsageEntry;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TemplateAsset;
}
namespace UnityEngine::UIElements {
struct TemplateAsset_AttributeOverride;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TemplateAsset);
MARK_VAL_T(::UnityEngine::UIElements::TemplateAsset_AttributeOverride);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TemplateAsset/AttributeOverride
struct CORDL_TYPE TemplateAsset_AttributeOverride {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemplateAsset_AttributeOverride();

  // Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr TemplateAsset_AttributeOverride(::StringW m_ElementName, ::StringW m_AttributeName, ::StringW m_Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6242 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_ElementName, offset: 0x0, size: 0x8, def value: None
  ::StringW m_ElementName;

  /// @brief Field m_AttributeName, offset: 0x8, size: 0x8, def value: None
  ::StringW m_AttributeName;

  /// @brief Field m_Value, offset: 0x10, size: 0x8, def value: None
  ::StringW m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset_AttributeOverride, m_ElementName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset_AttributeOverride, m_AttributeName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset_AttributeOverride, m_Value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateAsset_AttributeOverride, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElementAsset
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TemplateAsset
class CORDL_TYPE TemplateAsset : public ::UnityEngine::UIElements::VisualElementAsset {
public:
  // Declarations
  using AttributeOverride = ::UnityEngine::UIElements::TemplateAsset_AttributeOverride;

  __declspec(property(get = get_attributeOverrides)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides;

  /// @brief Field m_AttributeOverrides, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttributeOverrides,
                      put = __cordl_internal_set_m_AttributeOverrides)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* m_AttributeOverrides;

  /// @brief Field m_SlotUsages, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SlotUsages,
                      put = __cordl_internal_set_m_SlotUsages)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* m_SlotUsages;

  /// @brief Field m_TemplateAlias, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TemplateAlias, put = __cordl_internal_set_m_TemplateAlias)) ::StringW m_TemplateAlias;

  __declspec(property(get = get_slotUsages)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* slotUsages;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* const& __cordl_internal_get_m_AttributeOverrides() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*& __cordl_internal_get_m_AttributeOverrides();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* const& __cordl_internal_get_m_SlotUsages() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>*& __cordl_internal_get_m_SlotUsages();

  constexpr ::StringW const& __cordl_internal_get_m_TemplateAlias() const;

  constexpr ::StringW& __cordl_internal_get_m_TemplateAlias();

  constexpr void __cordl_internal_set_m_AttributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* value);

  constexpr void __cordl_internal_set_m_SlotUsages(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* value);

  constexpr void __cordl_internal_set_m_TemplateAlias(::StringW value);

  /// @brief Method get_attributeOverrides, addr 0x4a91054, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* get_attributeOverrides();

  /// @brief Method get_slotUsages, addr 0x4aa22b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* get_slotUsages();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemplateAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemplateAsset(TemplateAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemplateAsset(TemplateAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6243 };

  /// @brief Field m_TemplateAlias, offset: 0x70, size: 0x8, def value: None
  ::StringW ___m_TemplateAlias;

  /// @brief Field m_AttributeOverrides, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* ___m_AttributeOverrides;

  /// @brief Field m_SlotUsages, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>* ___m_SlotUsages;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset, ___m_TemplateAlias) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset, ___m_AttributeOverrides) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset, ___m_SlotUsages) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TemplateAsset, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TemplateAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateAsset*, "UnityEngine.UIElements", "TemplateAsset");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TemplateAsset_AttributeOverride, "UnityEngine.UIElements", "TemplateAsset/AttributeOverride");
