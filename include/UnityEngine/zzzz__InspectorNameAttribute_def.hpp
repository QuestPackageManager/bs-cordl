#pragma once
// IWYU pragma private; include "UnityEngine/InspectorNameAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InspectorNameAttribute)
// Forward declare root types
namespace UnityEngine {
class InspectorNameAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InspectorNameAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.InspectorNameAttribute
class CORDL_TYPE InspectorNameAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field displayName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName)) ::StringW displayName;

  static inline ::UnityEngine::InspectorNameAttribute* New_ctor(::StringW displayName);

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr void __cordl_internal_set_displayName(::StringW value);

  /// @brief Method .ctor, addr 0x68a4680, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectorNameAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InspectorNameAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectorNameAttribute(InspectorNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectorNameAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectorNameAttribute(InspectorNameAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10253 };

  /// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___displayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InspectorNameAttribute, ___displayName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InspectorNameAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::InspectorNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InspectorNameAttribute*, "UnityEngine", "InspectorNameAttribute");
