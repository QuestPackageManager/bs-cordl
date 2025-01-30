#pragma once
// IWYU pragma private; include "Zenject/IPoolable_8.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable_8)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8> class IPoolable_8;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IPoolable_8);
// Dependencies
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8>
// Is value type: false
// CS Name: Zenject.IPoolable`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8>
class CORDL_TYPE IPoolable_8 {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_8(IPoolable_8 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18437 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IPoolable_8, "Zenject", "IPoolable`8");
