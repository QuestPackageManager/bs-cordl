#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlAsset_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlObjectAsset)
namespace UnityEngine::UIElements {
struct UxmlNamespaceDefinition;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlObjectAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlObjectAsset);
// Dependencies UnityEngine.UIElements.UxmlAsset
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlObjectAsset
class CORDL_TYPE UxmlObjectAsset : public ::UnityEngine::UIElements::UxmlAsset {
public:
  // Declarations
  __declspec(property(get = get_isField)) bool isField;

  /// @brief Field m_IsField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsField, put = __cordl_internal_set_m_IsField)) bool m_IsField;

  static inline ::UnityEngine::UIElements::UxmlObjectAsset* New_ctor(::StringW fullTypeNameOrFieldName, bool isField, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace);

  /// @brief Method ToString, addr 0x6a8c0e0, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_m_IsField() const;

  constexpr bool& __cordl_internal_get_m_IsField();

  constexpr void __cordl_internal_set_m_IsField(bool value);

  /// @brief Method .ctor, addr 0x6a8c0d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW fullTypeNameOrFieldName, bool isField, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace);

  /// @brief Method get_isField, addr 0x6a8c0c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectAsset(UxmlObjectAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectAsset(UxmlObjectAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5190 };

  /// @brief Field m_IsField, offset: 0x48, size: 0x1, def value: None
  bool ___m_IsField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlObjectAsset, ___m_IsField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlObjectAsset, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlObjectAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlObjectAsset*, "UnityEngine.UIElements", "UxmlObjectAsset");
