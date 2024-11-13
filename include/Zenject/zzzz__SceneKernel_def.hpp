#pragma once
// IWYU pragma private; include "Zenject/SceneKernel.hpp"
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
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SceneKernel*
class CORDL_TYPE SceneKernel : public ::Zenject::MonoKernel {
public:
  // Declarations
  static inline ::Zenject::SceneKernel* New_ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ae59c8, size 0x16c, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ae59c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneKernel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneKernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneKernel(SceneKernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneKernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneKernel(SceneKernel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SceneKernel, 0x40>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneKernel*, "Zenject", "SceneKernel");
