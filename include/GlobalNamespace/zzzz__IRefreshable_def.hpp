#pragma once
// IWYU pragma private; include "GlobalNamespace/IRefreshable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRefreshable)
// Forward declare root types
namespace GlobalNamespace {
class IRefreshable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IRefreshable);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IRefreshable
class CORDL_TYPE IRefreshable {
public:
  // Declarations
  /// @brief Method Refresh, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Refresh();

  // Ctor Parameters [CppParam { name: "", ty: "IRefreshable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRefreshable(IRefreshable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16395 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IRefreshable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRefreshable*, "", "IRefreshable");
