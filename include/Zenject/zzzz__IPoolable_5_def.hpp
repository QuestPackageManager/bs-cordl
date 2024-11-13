#pragma once
// IWYU pragma private; include "Zenject/IPoolable_5.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable_5)
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5> class IPoolable_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IPoolable_5);
// Type: Zenject::IPoolable`5
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
// Is value type: false
// CS Name: ::Zenject::IPoolable`5<TParam1,TParam2,TParam3,TParam4,TParam5>*
class CORDL_TYPE IPoolable_5 {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5);

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPoolable_5(IPoolable_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable_5(IPoolable_5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18349 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IPoolable_5, "Zenject", "IPoolable`5");
