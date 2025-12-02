#pragma once
// IWYU pragma private; include "GlobalNamespace/DeterminismConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DeterminismConfig)
namespace GlobalNamespace {
class TimeHelper;
}
namespace System {
template <typename T> class Action_1;
}
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
  /// @brief Field <isDeterministic>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isDeterministic_k__BackingField, put = __cordl_internal_set__isDeterministic_k__BackingField)) bool _isDeterministic_k__BackingField;

  /// @brief Field _timeHelper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__timeHelper, put = __cordl_internal_set__timeHelper)) ::UnityW<::GlobalNamespace::TimeHelper> _timeHelper;

  /// @brief Field determinismSetEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_determinismSetEvent, put = __cordl_internal_set_determinismSetEvent)) ::System::Action_1<bool>* determinismSetEvent;

  __declspec(property(get = get_isDeterministic, put = set_isDeterministic)) bool isDeterministic;

  static inline ::GlobalNamespace::DeterminismConfig* New_ctor(bool initialDeterminism, ::GlobalNamespace::TimeHelper* timeHelper);

  /// @brief Method SetDeterminism, addr 0x563a6ec, size 0x84, virtual false, abstract: false, final false
  inline void SetDeterminism(bool isDeterministic);

  constexpr bool const& __cordl_internal_get__isDeterministic_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDeterministic_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& __cordl_internal_get__timeHelper() const;

  constexpr ::UnityW<::GlobalNamespace::TimeHelper>& __cordl_internal_get__timeHelper();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_determinismSetEvent() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_determinismSetEvent();

  constexpr void __cordl_internal_set__isDeterministic_k__BackingField(bool value);

  constexpr void __cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value);

  constexpr void __cordl_internal_set_determinismSetEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x563a6e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool initialDeterminism, ::GlobalNamespace::TimeHelper* timeHelper);

  /// @brief Method add_determinismSetEvent, addr 0x563a564, size 0xc0, virtual false, abstract: false, final false
  inline void add_determinismSetEvent(::System::Action_1<bool>* value);

  /// @brief Method get_isDeterministic, addr 0x563a554, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDeterministic();

  /// @brief Method remove_determinismSetEvent, addr 0x563a624, size 0xc0, virtual false, abstract: false, final false
  inline void remove_determinismSetEvent(::System::Action_1<bool>* value);

  /// @brief Method set_isDeterministic, addr 0x563a55c, size 0x8, virtual false, abstract: false, final false
  inline void set_isDeterministic(bool value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20022 };

  /// @brief Field <isDeterministic>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isDeterministic_k__BackingField;

  /// @brief Field determinismSetEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<bool>* ___determinismSetEvent;

  /// @brief Field _timeHelper, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TimeHelper> ____timeHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeterminismConfig, ____isDeterministic_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeterminismConfig, ___determinismSetEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeterminismConfig, ____timeHelper) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeterminismConfig, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeterminismConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeterminismConfig*, "", "DeterminismConfig");
