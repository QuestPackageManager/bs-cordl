#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressActivitySO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_def.hpp"
CORDL_MODULE_EXPORT(ProgressActivitySO)
namespace GlobalNamespace {
class ProgressActivitySubtaskSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressActivitySO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProgressActivitySO);
// Dependencies PS5ActivityDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressActivitySO
class CORDL_TYPE ProgressActivitySO : public ::GlobalNamespace::PS5ActivityDataSO {
public:
  // Declarations
  /// @brief Field subtasks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_subtasks,
                      put = __cordl_internal_set_subtasks)) ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>>*>
      subtasks;

  static inline ::GlobalNamespace::ProgressActivitySO* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>>*> const& __cordl_internal_get_subtasks() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>>*>& __cordl_internal_get_subtasks();

  constexpr void __cordl_internal_set_subtasks(::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>>*> value);

  /// @brief Method .ctor, addr 0x26eb4fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProgressActivitySO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProgressActivitySO(ProgressActivitySO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProgressActivitySO(ProgressActivitySO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13164 };

  /// @brief Field subtasks, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySubtaskSO>>*> ___subtasks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressActivitySO, ___subtasks) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProgressActivitySO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProgressActivitySO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgressActivitySO*, "", "ProgressActivitySO");
