#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITickable)
// Forward declare root types
namespace Zenject {
class ITickable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ITickable);
// Type: Zenject::ITickable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15882))
// CS Name: ::Zenject::ITickable*
class CORDL_TYPE ITickable {
public:
  // Declarations
  /// @brief Method Tick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Tick();

  // Ctor Parameters [CppParam { name: "", ty: "ITickable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITickable(ITickable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITickable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITickable(ITickable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::ITickable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ITickable*, "Zenject", "ITickable");
