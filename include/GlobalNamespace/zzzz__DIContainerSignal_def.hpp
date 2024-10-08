#pragma once
// IWYU pragma private; include "GlobalNamespace/DIContainerSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
CORDL_MODULE_EXPORT(DIContainerSignal)
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class DIContainerSignal;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DIContainerSignal);
// Type: ::DIContainerSignal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DIContainerSignal*
class CORDL_TYPE DIContainerSignal : public ::GlobalNamespace::GenericSignal_1<::Zenject::DiContainer*> {
public:
  // Declarations
  static inline ::GlobalNamespace::DIContainerSignal* New_ctor();

  /// @brief Method .ctor, addr 0x395c574, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DIContainerSignal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DIContainerSignal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DIContainerSignal(DIContainerSignal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DIContainerSignal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DIContainerSignal(DIContainerSignal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DIContainerSignal, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DIContainerSignal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DIContainerSignal*, "", "DIContainerSignal");
