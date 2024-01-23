#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable_3)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3> class IPoolable_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IPoolable_3);
// Type: Zenject::IPoolable`3
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15723))
// CS Name: ::Zenject::IPoolable`3<TParam1,TParam2,TParam3>*
class CORDL_TYPE IPoolable_3 {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPoolable_3(IPoolable_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_3(IPoolable_3 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IPoolable_3, "Zenject", "IPoolable`3");
