#pragma once
// IWYU pragma private; include "GlobalNamespace/IRenderingParamsApplicator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IRenderingParamsApplicator)
namespace GlobalNamespace {
struct SceneType;
}
// Forward declare root types
namespace GlobalNamespace {
class IRenderingParamsApplicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IRenderingParamsApplicator);
// Type: ::IRenderingParamsApplicator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IRenderingParamsApplicator*
class CORDL_TYPE IRenderingParamsApplicator {
public:
  // Declarations
  /// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Apply(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName);

  // Ctor Parameters [CppParam { name: "", ty: "IRenderingParamsApplicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRenderingParamsApplicator(IRenderingParamsApplicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRenderingParamsApplicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderingParamsApplicator(IRenderingParamsApplicator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5148 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IRenderingParamsApplicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRenderingParamsApplicator*, "", "IRenderingParamsApplicator");
