#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExcludeFromDocsAttribute)
// Forward declare root types
namespace UnityEngine::Internal {
class ExcludeFromDocsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Internal::ExcludeFromDocsAttribute);
// Type: UnityEngine.Internal::ExcludeFromDocsAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Internal::ExcludeFromDocsAttribute*
class CORDL_TYPE ExcludeFromDocsAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Internal::ExcludeFromDocsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3220d5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExcludeFromDocsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromDocsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExcludeFromDocsAttribute(ExcludeFromDocsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromDocsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExcludeFromDocsAttribute(ExcludeFromDocsAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Internal::ExcludeFromDocsAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Internal
NEED_NO_BOX(::UnityEngine::Internal::ExcludeFromDocsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal::ExcludeFromDocsAttribute*, "UnityEngine.Internal", "ExcludeFromDocsAttribute");
