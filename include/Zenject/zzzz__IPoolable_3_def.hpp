#pragma once
// IWYU pragma private; include "Zenject/IPoolable_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable_3)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3> class IPoolable_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Zenject::IPoolable_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Zenject::IPoolable_3, "Zenject", "IPoolable`3");
// Dependencies
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3>
// Is value type: false
// CS Name: Zenject.IPoolable`3<TParam1,TParam2,TParam3>
class CORDL_TYPE IPoolable_3 {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_3(IPoolable_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
