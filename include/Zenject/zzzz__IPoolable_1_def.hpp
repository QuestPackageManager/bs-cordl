#pragma once
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
// Type: Zenject::IPoolable`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1>
// Is value type: false
// CS Name: ::Zenject::IPoolable`1<TParam1>*
class CORDL_TYPE IPoolable_1 {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSpawned(TParam1 p1);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPoolable_1(IPoolable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_1(IPoolable_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IPoolable_1, "Zenject", "IPoolable`1");
