#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlTemplateTraits.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
CORDL_MODULE_EXPORT(UxmlTemplateTraits)
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlTemplateTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlTemplateTraits);
// Dependencies UnityEngine.UIElements.UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlTemplateTraits
class CORDL_TYPE UxmlTemplateTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Name;

  /// @brief Field m_Path, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Path, put = __cordl_internal_set_m_Path)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Path;

  /// @brief Field m_Src, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Src, put = __cordl_internal_set_m_Src)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Src;

  static inline ::UnityEngine::UIElements::UxmlTemplateTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Name() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Path() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Path();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Src() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Src();

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Path(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Src(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4aa1c3c, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlTemplateTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlTemplateTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlTemplateTraits(UxmlTemplateTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTemplateTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlTemplateTraits(UxmlTemplateTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6239 };

  /// @brief Field m_Name, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Name;

  /// @brief Field m_Path, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Path;

  /// @brief Field m_Src, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Src;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlTemplateTraits, ___m_Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlTemplateTraits, ___m_Path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlTemplateTraits, ___m_Src) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlTemplateTraits, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlTemplateTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlTemplateTraits*, "UnityEngine.UIElements", "UxmlTemplateTraits");
