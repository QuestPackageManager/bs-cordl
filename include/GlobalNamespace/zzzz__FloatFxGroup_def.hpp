#pragma once
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
// Type: ::FloatFxGroup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4935))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4903))
// CS Name: ::FloatFxGroup*
class CORDL_TYPE FloatFxGroup : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  /// @brief Field _isTriggerOnly, offset 0x20, size 0x1
  __declspec(property(get = __get__isTriggerOnly, put = __set__isTriggerOnly)) bool _isTriggerOnly;

  /// @brief Field _targets, offset 0x28, size 0x8
  __declspec(property(get = __get__targets, put = __set__targets))::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* _targets;

  __declspec(property(get = get_isTriggerOnly)) bool isTriggerOnly;

  __declspec(property(get = get_targets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* targets;

  constexpr bool& __get__isTriggerOnly();

  constexpr bool const& __get__isTriggerOnly() const;

  constexpr void __set__isTriggerOnly(bool value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*& __get__targets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>*> const& __get__targets() const;

  constexpr void __set__targets(::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* value);

  /// @brief Method get_isTriggerOnly, addr 0x23a5800, size 0x8, virtual false, abstract: false, final false
  inline bool get_isTriggerOnly();

  /// @brief Method get_targets, addr 0x23a5808, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* get_targets();

  static inline ::GlobalNamespace::FloatFxGroup* New_ctor();

  /// @brief Method .ctor, addr 0x23a5810, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxGroup(FloatFxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxGroup(FloatFxGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxGroup();

public:
  /// @brief Field _isTriggerOnly, offset: 0x20, size: 0x1, def value: None
  bool ____isTriggerOnly;

  /// @brief Field _targets, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::FloatFxGroupEffectTarget*>* ____targets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroup, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroup, ____isTriggerOnly) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxGroup, ____targets) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroup*, "", "FloatFxGroup");
