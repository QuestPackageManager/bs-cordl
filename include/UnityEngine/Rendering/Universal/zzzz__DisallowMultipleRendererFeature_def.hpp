#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DisallowMultipleRendererFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisallowMultipleRendererFeature)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DisallowMultipleRendererFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature);
// Dependencies System.Attribute
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DisallowMultipleRendererFeature
class CORDL_TYPE DisallowMultipleRendererFeature : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <customTitle>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__customTitle_k__BackingField, put = __cordl_internal_set__customTitle_k__BackingField)) ::StringW _customTitle_k__BackingField;

  __declspec(property(get = get_customTitle, put = set_customTitle)) ::StringW customTitle;

  static inline ::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature* New_ctor(::StringW customTitle);

  constexpr ::StringW const& __cordl_internal_get__customTitle_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__customTitle_k__BackingField();

  constexpr void __cordl_internal_set__customTitle_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x66f7200, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW customTitle);

  /// @brief Method get_customTitle, addr 0x66f71f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_customTitle();

  /// @brief Method set_customTitle, addr 0x66f71f0, size 0x8, virtual false, abstract: false, final false
  inline void set_customTitle(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisallowMultipleRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisallowMultipleRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisallowMultipleRendererFeature(DisallowMultipleRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisallowMultipleRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisallowMultipleRendererFeature(DisallowMultipleRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12886 };

  /// @brief Field <customTitle>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____customTitle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature, ____customTitle_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DisallowMultipleRendererFeature*, "UnityEngine.Rendering.Universal", "DisallowMultipleRendererFeature");
