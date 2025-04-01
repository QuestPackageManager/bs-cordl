#pragma once
// IWYU pragma private; include "GlobalNamespace/DeterminismConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DeterminismConfig)
// Forward declare root types
namespace GlobalNamespace {
class DeterminismConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeterminismConfig);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeterminismConfig
class CORDL_TYPE DeterminismConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field forceSimplePhysics, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_forceSimplePhysics, put = __cordl_internal_set_forceSimplePhysics)) bool forceSimplePhysics;

  static inline ::GlobalNamespace::DeterminismConfig* New_ctor(bool deterministic);

  constexpr bool const& __cordl_internal_get_forceSimplePhysics() const;

  constexpr bool& __cordl_internal_get_forceSimplePhysics();

  constexpr void __cordl_internal_set_forceSimplePhysics(bool value);

  /// @brief Method .ctor, addr 0x226d934, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool deterministic);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeterminismConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeterminismConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeterminismConfig(DeterminismConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeterminismConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeterminismConfig(DeterminismConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18379 };

  /// @brief Field forceSimplePhysics, offset: 0x10, size: 0x1, def value: None
  bool ___forceSimplePhysics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeterminismConfig, ___forceSimplePhysics) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeterminismConfig, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeterminismConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeterminismConfig*, "", "DeterminismConfig");
