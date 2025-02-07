#pragma once
// IWYU pragma private; include "Zenject/ILateDisposable.hpp"
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
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ILateDisposable
class CORDL_TYPE ILateDisposable {
public:
  // Declarations
  /// @brief Method LateDispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LateDispose();

  // Ctor Parameters [CppParam { name: "", ty: "ILateDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILateDisposable(ILateDisposable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::ILateDisposable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ILateDisposable*, "Zenject", "ILateDisposable");
