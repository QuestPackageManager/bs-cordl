#pragma once
// IWYU pragma private; include "GlobalNamespace/AbstractPoolContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AbstractPoolContainer)
// Forward declare root types
namespace GlobalNamespace {
class AbstractPoolContainer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AbstractPoolContainer);
// Type: ::AbstractPoolContainer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AbstractPoolContainer*
class CORDL_TYPE AbstractPoolContainer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method DespawnAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DespawnAll();

  static inline ::GlobalNamespace::AbstractPoolContainer* New_ctor();

  /// @brief Method .ctor, addr 0x3aa94ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractPoolContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractPoolContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractPoolContainer(AbstractPoolContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractPoolContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractPoolContainer(AbstractPoolContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4986 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AbstractPoolContainer, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AbstractPoolContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AbstractPoolContainer*, "", "AbstractPoolContainer");
