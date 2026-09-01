#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\SupportedOnRendererAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SupportedOnRendererAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class SupportedOnRendererAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute*, "UnityEngine.Rendering.Universal", "SupportedOnRendererAttribute");
// Dependencies System.Attribute, System.Type
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.SupportedOnRendererAttribute
class CORDL_TYPE SupportedOnRendererAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <rendererTypes>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rendererTypes_k__BackingField, put = __cordl_internal_set__rendererTypes_k__BackingField)) ::ArrayW<::System::Type*> _rendererTypes_k__BackingField;

  __declspec(property(get = get_rendererTypes)) ::ArrayW<::System::Type*> rendererTypes;

  static inline ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute* New_ctor(::System::Type* renderer);

  static inline ::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute* New_ctor(::ArrayW<::System::Type*> renderers);

  constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get__rendererTypes_k__BackingField() const;

  constexpr ::ArrayW<::System::Type*>& __cordl_internal_get__rendererTypes_k__BackingField();

  constexpr void __cordl_internal_set__rendererTypes_k__BackingField(::ArrayW<::System::Type*> value);

  /// @brief Method .ctor, addr 0x68beeb0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* renderer);

  /// @brief Method .ctor, addr 0x68bef54, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Type*> renderers);

  /// @brief Method get_rendererTypes, addr 0x68beea8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*> get_rendererTypes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportedOnRendererAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupportedOnRendererAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupportedOnRendererAttribute(SupportedOnRendererAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupportedOnRendererAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupportedOnRendererAttribute(SupportedOnRendererAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12966 };

  /// @brief Field <rendererTypes>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*> ____rendererTypes_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute, ____rendererTypes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::SupportedOnRendererAttribute) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
