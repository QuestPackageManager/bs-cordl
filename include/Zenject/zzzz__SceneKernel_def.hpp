#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoKernel_def.hpp"
CORDL_MODULE_EXPORT(SceneKernel)
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SceneKernel;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SceneKernel);
// Type: Zenject::SceneKernel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11323))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11326))
// CS Name: ::Zenject::SceneKernel*
class CORDL_TYPE SceneKernel : public ::Zenject::MonoKernel {
public:
  // Declarations
  static inline ::Zenject::SceneKernel* New_ctor();

  /// @brief Method .ctor addr 0x2f16d0c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f16d14 size 0x178 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "SceneKernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneKernel(SceneKernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneKernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneKernel(SceneKernel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneKernel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SceneKernel, 0x38>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneKernel*, "Zenject", "SceneKernel");
