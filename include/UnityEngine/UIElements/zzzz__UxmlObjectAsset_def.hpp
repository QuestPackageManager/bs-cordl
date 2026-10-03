#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlAsset_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlObjectAsset)
namespace UnityEngine::UIElements {
class UxmlAsset;
}
namespace UnityEngine::UIElements {
struct UxmlNamespaceDefinition;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlObjectAsset;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UxmlObjectAsset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlObjectAsset*, "UnityEngine.UIElements", "UxmlObjectAsset");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies UnityEngine.UIElements.UxmlAsset
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlObjectAsset
class CORDL_TYPE UxmlObjectAsset : public ::UnityEngine::UIElements::UxmlAsset {
public:
  // Declarations
  __declspec(property(get = get_isField)) bool isField;

  /// @brief Field m_IsField, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsField, put = __cordl_internal_set_m_IsField)) bool m_IsField;

  /// @brief Field m_ParentId, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ParentId, put = __cordl_internal_set_m_ParentId)) int32_t m_ParentId;

  __declspec(property(get = get_parentId, put = set_parentId)) int32_t parentId;

  /// @brief Method Accepts, addr 0x7147f04, size 0x170, virtual true, abstract: false, final false
  inline bool Accepts(::UnityEngine::UIElements::UxmlAsset* asset, ::by_ref<::StringW> errorMessage);

  /// @brief Method HasParent, addr 0x7147ecc, size 0x10, virtual true, abstract: false, final false
  inline bool HasParent();

  static inline ::UnityEngine::UIElements::UxmlObjectAsset* New_ctor(::StringW fullTypeNameOrFieldName, bool isField, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace);

  /// @brief Method ToString, addr 0x7148074, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_m_IsField() const;

  constexpr bool& __cordl_internal_get_m_IsField();

  constexpr int32_t const& __cordl_internal_get_m_ParentId() const;

  constexpr int32_t& __cordl_internal_get_m_ParentId();

  constexpr void __cordl_internal_set_m_IsField(bool value);

  constexpr void __cordl_internal_set_m_ParentId(int32_t value);

  /// @brief Method .ctor, addr 0x7147ef4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW fullTypeNameOrFieldName, bool isField, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace);

  /// @brief Method get_isField, addr 0x7147eec, size 0x8, virtual false, abstract: false, final false
  inline bool get_isField();

  /// @brief Method get_parentId, addr 0x7147edc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_parentId();

  /// @brief Method set_parentId, addr 0x7147ee4, size 0x8, virtual false, abstract: false, final false
  inline void set_parentId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAsset", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectAsset(UxmlObjectAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAsset", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectAsset(UxmlObjectAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5290 };

  /// [SerializeField]
  /// @brief Field m_ParentId, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_ParentId;

  /// [SerializeField]
  /// @brief Field m_IsField, offset: 0x5c, size: 0x1, def value: None
  bool ___m_IsField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlObjectAsset, ___m_ParentId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlObjectAsset, ___m_IsField) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UxmlObjectAsset) == 0x60, "Size mismatch!");

} // namespace UnityEngine::UIElements
