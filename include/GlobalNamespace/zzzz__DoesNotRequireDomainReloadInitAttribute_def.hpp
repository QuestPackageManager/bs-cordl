#pragma once
// IWYU pragma private; include "GlobalNamespace/DoesNotRequireDomainReloadInitAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(DoesNotRequireDomainReloadInitAttribute)
// Forward declare root types
namespace GlobalNamespace {
class DoesNotRequireDomainReloadInitAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: DoesNotRequireDomainReloadInitAttribute
class CORDL_TYPE DoesNotRequireDomainReloadInitAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x229c0c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoesNotRequireDomainReloadInitAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoesNotRequireDomainReloadInitAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoesNotRequireDomainReloadInitAttribute(DoesNotRequireDomainReloadInitAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoesNotRequireDomainReloadInitAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoesNotRequireDomainReloadInitAttribute(DoesNotRequireDomainReloadInitAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19145 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DoesNotRequireDomainReloadInitAttribute*, "", "DoesNotRequireDomainReloadInitAttribute");
