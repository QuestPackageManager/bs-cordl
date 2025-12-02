#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShaderPropertyIDAttribute)
namespace BGLib::UnityExtension {
struct ShaderPropertyAttributeFilter_PropType;
}
namespace BGLib::UnityExtension {
class ShaderPropertyAttributeFilter;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class ShaderPropertyIDAttribute;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::ShaderPropertyIDAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.ShaderPropertyIDAttribute
class CORDL_TYPE ShaderPropertyIDAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field filter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_filter, put = __cordl_internal_set_filter)) ::BGLib::UnityExtension::ShaderPropertyAttributeFilter* filter;

  /// @brief Method GetTargetName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetTargetName();

  static inline ::BGLib::UnityExtension::ShaderPropertyIDAttribute* New_ctor(::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType);

  constexpr ::BGLib::UnityExtension::ShaderPropertyAttributeFilter* const& __cordl_internal_get_filter() const;

  constexpr ::BGLib::UnityExtension::ShaderPropertyAttributeFilter*& __cordl_internal_get_filter();

  constexpr void __cordl_internal_set_filter(::BGLib::UnityExtension::ShaderPropertyAttributeFilter* value);

  /// @brief Method .ctor, addr 0x31fe5f0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderPropertyIDAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyIDAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderPropertyIDAttribute(ShaderPropertyIDAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyIDAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderPropertyIDAttribute(ShaderPropertyIDAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20721 };

  /// @brief Field filter, offset: 0x18, size: 0x8, def value: None
  ::BGLib::UnityExtension::ShaderPropertyAttributeFilter* ___filter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::ShaderPropertyIDAttribute, ___filter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::ShaderPropertyIDAttribute, 0x20>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::ShaderPropertyIDAttribute);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::ShaderPropertyIDAttribute*, "BGLib.UnityExtension", "ShaderPropertyIDAttribute");
