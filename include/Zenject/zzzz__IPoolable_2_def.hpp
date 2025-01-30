#pragma once
// IWYU pragma private; include "Zenject/IPoolable_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable_2)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2> class IPoolable_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IPoolable_2);
// Dependencies
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2>
// Is value type: false
// CS Name: Zenject.IPoolable`2<TParam1,TParam2>
class CORDL_TYPE IPoolable_2 {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSpawned(TParam1 p1, TParam2 p2);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_2(IPoolable_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18431 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IPoolable_2, "Zenject", "IPoolable`2");
