#pragma once
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
// Type: Zenject::IPrefabProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11231))
// CS Name: ::Zenject::IPrefabProvider*
class CORDL_TYPE IPrefabProvider {
public:
  // Declarations
  /// @brief Method GetPrefab, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Object* GetPrefab();

  // Ctor Parameters [CppParam { name: "", ty: "IPrefabProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPrefabProvider(IPrefabProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPrefabProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPrefabProvider(IPrefabProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IPrefabProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IPrefabProvider*, "Zenject", "IPrefabProvider");
