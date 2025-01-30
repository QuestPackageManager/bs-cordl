#pragma once
// IWYU pragma private; include "GlobalNamespace/IComponentRefresher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IComponentRefresher)
// Forward declare root types
namespace GlobalNamespace {
class IComponentRefresher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IComponentRefresher);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IComponentRefresher
class CORDL_TYPE IComponentRefresher {
public:
  // Declarations
  /// @brief Method __Refresh, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void __Refresh();

  // Ctor Parameters [CppParam { name: "", ty: "IComponentRefresher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComponentRefresher(IComponentRefresher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IComponentRefresher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IComponentRefresher*, "", "IComponentRefresher");
