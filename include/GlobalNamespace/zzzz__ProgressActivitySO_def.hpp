#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::ProgressActivitySO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4558))
// CS Name: ::ProgressActivitySO*
class CORDL_TYPE ProgressActivitySO : public ::GlobalNamespace::PS5ActivityDataSO {
public:
  // Declarations
  /// @brief Field subtasks, offset 0x20, size 0x8
  __declspec(property(get = __get_subtasks, put = __set_subtasks))::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*, ::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*> subtasks;

  constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*, ::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>& __get_subtasks();

  constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*, ::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*> const& __get_subtasks() const;

  constexpr void __set_subtasks(::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*, ::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*> value);

  static inline ::GlobalNamespace::ProgressActivitySO* New_ctor();

  /// @brief Method .ctor, addr 0x2368278, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProgressActivitySO(ProgressActivitySO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProgressActivitySO(ProgressActivitySO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProgressActivitySO();

public:
  /// @brief Field subtasks, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*, ::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*> ___subtasks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProgressActivitySO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressActivitySO, ___subtasks) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProgressActivitySO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgressActivitySO*, "", "ProgressActivitySO");
