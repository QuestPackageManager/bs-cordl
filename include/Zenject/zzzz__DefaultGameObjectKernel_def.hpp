#pragma once
// IWYU pragma private; include "Zenject/DefaultGameObjectKernel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoKernel_def.hpp"
CORDL_MODULE_EXPORT(DefaultGameObjectKernel)
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class DefaultGameObjectKernel;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DefaultGameObjectKernel);
// Dependencies Zenject.MonoKernel
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DefaultGameObjectKernel
class CORDL_TYPE DefaultGameObjectKernel : public ::Zenject::MonoKernel {
public:
  // Declarations
  static inline ::Zenject::DefaultGameObjectKernel* New_ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6c5df84, size 0x148, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6c5df7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultGameObjectKernel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectKernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultGameObjectKernel(DefaultGameObjectKernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectKernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultGameObjectKernel(DefaultGameObjectKernel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DefaultGameObjectKernel, 0x40>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DefaultGameObjectKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DefaultGameObjectKernel*, "Zenject", "DefaultGameObjectKernel");
