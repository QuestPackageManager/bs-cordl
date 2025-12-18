#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlImageAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
CORDL_MODULE_EXPORT(UxmlImageAttributeDescription)
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlImageAttributeDescription;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlImageAttributeDescription);
// Dependencies UnityEngine.UIElements.Background, UnityEngine.UIElements.UxmlAttributeDescription
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlImageAttributeDescription
class CORDL_TYPE UxmlImageAttributeDescription : public ::UnityEngine::UIElements::UxmlAttributeDescription {
public:
  // Declarations
  /// @brief Field <defaultValue>k__BackingField, offset 0x48, size 0x20
  __declspec(property(get = __cordl_internal_get__defaultValue_k__BackingField,
                      put = __cordl_internal_set__defaultValue_k__BackingField)) ::UnityEngine::UIElements::Background _defaultValue_k__BackingField;

  __declspec(property(put = set_defaultValue)) ::UnityEngine::UIElements::Background defaultValue;

  /// @brief Field m_AssetType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetType, put = __cordl_internal_set_m_AssetType)) ::System::Type* m_AssetType;

  /// @brief Method GetValueFromBag, addr 0x6af4564, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Background GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlImageAttributeDescription* New_ctor();

  constexpr ::UnityEngine::UIElements::Background const& __cordl_internal_get__defaultValue_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Background& __cordl_internal_get__defaultValue_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get_m_AssetType() const;

  constexpr ::System::Type*& __cordl_internal_get_m_AssetType();

  constexpr void __cordl_internal_set__defaultValue_k__BackingField(::UnityEngine::UIElements::Background value);

  constexpr void __cordl_internal_set_m_AssetType(::System::Type* value);

  /// @brief Method .ctor, addr 0x6af44d4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_defaultValue, addr 0x6af4554, size 0x10, virtual false, abstract: false, final false
  inline void set_defaultValue(::UnityEngine::UIElements::Background value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlImageAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlImageAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlImageAttributeDescription(UxmlImageAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlImageAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlImageAttributeDescription(UxmlImageAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5187 };

  /// @brief Field m_AssetType, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ___m_AssetType;

  /// @brief Field <defaultValue>k__BackingField, offset: 0x48, size: 0x20, def value: None
  ::UnityEngine::UIElements::Background ____defaultValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlImageAttributeDescription, ___m_AssetType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlImageAttributeDescription, ____defaultValue_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlImageAttributeDescription, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlImageAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlImageAttributeDescription*, "UnityEngine.UIElements", "UxmlImageAttributeDescription");
