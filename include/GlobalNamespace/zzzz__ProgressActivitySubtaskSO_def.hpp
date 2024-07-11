#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressActivitySubtaskSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProgressActivitySubtaskSO)
// Forward declare root types
namespace GlobalNamespace {
class ProgressActivitySubtaskSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProgressActivitySubtaskSO);
// Type: ::ProgressActivitySubtaskSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ProgressActivitySubtaskSO*
class CORDL_TYPE ProgressActivitySubtaskSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _activityId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__activityId, put = __cordl_internal_set__activityId))::StringW _activityId;

  __declspec(property(get = get_activityId))::StringW activityId;

  static inline ::GlobalNamespace::ProgressActivitySubtaskSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__activityId() const;

  constexpr ::StringW& __cordl_internal_get__activityId();

  constexpr void __cordl_internal_set__activityId(::StringW value);

  /// @brief Method .ctor, addr 0x14ed4a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activityId, addr 0x14ed49c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_activityId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProgressActivitySubtaskSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySubtaskSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProgressActivitySubtaskSO(ProgressActivitySubtaskSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySubtaskSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProgressActivitySubtaskSO(ProgressActivitySubtaskSO const&) = delete;

  /// @brief Field _activityId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____activityId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProgressActivitySubtaskSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressActivitySubtaskSO, ____activityId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProgressActivitySubtaskSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgressActivitySubtaskSO*, "", "ProgressActivitySubtaskSO");
