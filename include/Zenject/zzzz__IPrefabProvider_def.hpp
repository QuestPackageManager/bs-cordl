#pragma once
// IWYU pragma private; include "Zenject/IPrefabProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPrefabProvider)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Zenject {
class IPrefabProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IPrefabProvider);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IPrefabProvider
class CORDL_TYPE IPrefabProvider {
public:
  // Declarations
  /// @brief Method GetPrefab, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetPrefab();

  // Ctor Parameters [CppParam { name: "", ty: "IPrefabProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPrefabProvider(IPrefabProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14558 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IPrefabProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IPrefabProvider*, "Zenject", "IPrefabProvider");
