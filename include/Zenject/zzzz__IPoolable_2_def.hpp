#pragma once
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
// Type: Zenject::IPoolable`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15722))
// CS Name: ::Zenject::IPoolable`2<TParam1,TParam2>*
class CORDL_TYPE IPoolable_2 {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSpawned(TParam1 p1, TParam2 p2);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPoolable_2(IPoolable_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_2(IPoolable_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IPoolable_2, "Zenject", "IPoolable`2");
