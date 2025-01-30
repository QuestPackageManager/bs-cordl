#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/IgnoreAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IgnoreAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class IgnoreAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::IgnoreAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.IgnoreAttribute
class CORDL_TYPE IgnoreAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_DoesNotContributeToSize)) bool DoesNotContributeToSize;

  /// @brief Field <DoesNotContributeToSize>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__DoesNotContributeToSize_k__BackingField,
                      put = __cordl_internal_set__DoesNotContributeToSize_k__BackingField)) bool _DoesNotContributeToSize_k__BackingField;

  static inline ::UnityEngine::Bindings::IgnoreAttribute* New_ctor();

  constexpr bool const& __cordl_internal_get__DoesNotContributeToSize_k__BackingField() const;

  constexpr bool& __cordl_internal_get__DoesNotContributeToSize_k__BackingField();

  constexpr void __cordl_internal_set__DoesNotContributeToSize_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4919d3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_DoesNotContributeToSize, addr 0x4919d30, size 0xc, virtual false, abstract: false, final false
  inline void set_DoesNotContributeToSize(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoreAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IgnoreAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoreAttribute(IgnoreAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoreAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoreAttribute(IgnoreAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18716 };

  /// @brief Field <DoesNotContributeToSize>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____DoesNotContributeToSize_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::IgnoreAttribute, ____DoesNotContributeToSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::IgnoreAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::IgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::IgnoreAttribute*, "UnityEngine.Bindings", "IgnoreAttribute");
