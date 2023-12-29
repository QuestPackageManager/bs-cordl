#pragma once
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
// Type: UnityEngine::InspectorNameAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10100))
// CS Name: ::UnityEngine::InspectorNameAttribute*
class CORDL_TYPE InspectorNameAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field displayName, offset 0x10, size 0x8
  __declspec(property(get = __get_displayName, put = __set_displayName))::StringW displayName;

  constexpr ::StringW& __get_displayName();

  constexpr ::StringW const& __get_displayName() const;

  constexpr void __set_displayName(::StringW value);

  static inline ::UnityEngine::InspectorNameAttribute* New_ctor(::StringW displayName);

  /// @brief Method .ctor addr 0x2b65bf4 size 0x28 virtual false final false
  inline void _ctor(::StringW displayName);

  // Ctor Parameters [CppParam { name: "", ty: "InspectorNameAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InspectorNameAttribute(InspectorNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InspectorNameAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InspectorNameAttribute(InspectorNameAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InspectorNameAttribute();

public:
  /// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___displayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InspectorNameAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InspectorNameAttribute, ___displayName) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::InspectorNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InspectorNameAttribute*, "UnityEngine", "InspectorNameAttribute");
