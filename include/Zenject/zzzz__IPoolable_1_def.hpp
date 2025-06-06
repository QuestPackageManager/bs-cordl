#pragma once
// IWYU pragma private; include "Zenject/IPoolable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable_1)
// Forward declare root types
namespace Zenject {
template <typename TParam1> class IPoolable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IPoolable_1);
// Dependencies
namespace Zenject {
// cpp template
template <typename TParam1>
// Is value type: false
// CS Name: Zenject.IPoolable`1<TParam1>
class CORDL_TYPE IPoolable_1 {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSpawned(TParam1 p1);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_1(IPoolable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18438 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IPoolable_1, "Zenject", "IPoolable`1");
