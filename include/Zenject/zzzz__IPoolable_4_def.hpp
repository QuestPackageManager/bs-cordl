#pragma once
// IWYU pragma private; include "Zenject\IPoolable_4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable_4)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4> class IPoolable_4;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Zenject::IPoolable_4);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Zenject::IPoolable_4, "Zenject", "IPoolable`4");
// Dependencies
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
// Is value type: false
// CS Name: Zenject.IPoolable`4<TParam1,TParam2,TParam3,TParam4>
class CORDL_TYPE IPoolable_4 {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_4(IPoolable_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22525 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
