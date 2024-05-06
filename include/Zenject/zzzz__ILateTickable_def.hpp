#pragma once
// IWYU pragma private; include "Zenject/ILateTickable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILateTickable)
// Forward declare root types
namespace Zenject {
class ILateTickable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ILateTickable);
// Type: Zenject::ILateTickable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ILateTickable*
class CORDL_TYPE ILateTickable {
public:
  // Declarations
  /// @brief Method LateTick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LateTick();

  // Ctor Parameters [CppParam { name: "", ty: "ILateTickable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILateTickable(ILateTickable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILateTickable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILateTickable(ILateTickable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::ILateTickable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ILateTickable*, "Zenject", "ILateTickable");
