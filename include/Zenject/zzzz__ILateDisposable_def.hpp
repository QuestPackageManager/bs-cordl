#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILateDisposable)
// Forward declare root types
namespace Zenject {
class ILateDisposable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ILateDisposable);
// Type: Zenject::ILateDisposable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15735))
// CS Name: ::Zenject::ILateDisposable*
class CORDL_TYPE ILateDisposable {
public:
  // Declarations
  /// @brief Method LateDispose addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void LateDispose();

  // Ctor Parameters [CppParam { name: "", ty: "ILateDisposable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILateDisposable(ILateDisposable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILateDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILateDisposable(ILateDisposable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::ILateDisposable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ILateDisposable*, "Zenject", "ILateDisposable");
