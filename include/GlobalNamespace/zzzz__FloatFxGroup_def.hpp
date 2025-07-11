#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
CORDL_MODULE_EXPORT(FloatFxGroup)
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroup);
// Dependencies LightGroupSubsystem
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxGroup
class CORDL_TYPE FloatFxGroup : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  /// @brief Field _isTriggerOnly, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isTriggerOnly, put = __cordl_internal_set__isTriggerOnly)) bool _isTriggerOnly;

  /// @brief Field _targets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__targets,
                      put = __cordl_internal_set__targets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* _targets;

  __declspec(property(get = get_isTriggerOnly)) bool isTriggerOnly;

  __declspec(property(get = get_targets)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* targets;

  static inline ::GlobalNamespace::FloatFxGroup* New_ctor();

  constexpr bool const& __cordl_internal_get__isTriggerOnly() const;

  constexpr bool& __cordl_internal_get__isTriggerOnly();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* const& __cordl_internal_get__targets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>*& __cordl_internal_get__targets();

  constexpr void __cordl_internal_set__isTriggerOnly(bool value);

  constexpr void __cordl_internal_set__targets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* value);

  /// @brief Method .ctor, addr 0x3b8d74c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isTriggerOnly, addr 0x3b8d73c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isTriggerOnly();

  /// @brief Method get_targets, addr 0x3b8d744, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* get_targets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxGroup(FloatFxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxGroup(FloatFxGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4268 };

  /// @brief Field _isTriggerOnly, offset: 0x28, size: 0x1, def value: None
  bool ____isTriggerOnly;

  /// @brief Field _targets, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>* ____targets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxGroup, ____isTriggerOnly) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroup, ____targets) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroup, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroup*, "", "FloatFxGroup");
