#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjectiveChecker)
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
struct __MissionObjectiveChecker__Status;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MissionObjectiveChecker__Status;
}
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MissionObjectiveChecker__Status);
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveChecker);
// Type: ::Status
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4445))
// CS Name: ::MissionObjectiveChecker::Status
struct CORDL_TYPE __MissionObjectiveChecker__Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MissionObjectiveChecker__Status_Unwrapped
  enum struct ____MissionObjectiveChecker__Status_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NotClearedYet = static_cast<int32_t>(0x1),
    __E_NotFailedYet = static_cast<int32_t>(0x2),
    __E_Cleared = static_cast<int32_t>(0x3),
    __E_Failed = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MissionObjectiveChecker__Status_Unwrapped() const noexcept {
    return static_cast<____MissionObjectiveChecker__Status_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MissionObjectiveChecker__Status(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionObjectiveChecker__Status();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const None;

  /// @brief Field NotClearedYet value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const NotClearedYet;

  /// @brief Field NotFailedYet value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const NotFailedYet;

  /// @brief Field Cleared value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const Cleared;

  /// @brief Field Failed value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionObjectiveChecker__Status, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionObjectiveChecker__Status, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionObjectiveChecker
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4445)), TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4446))
// CS Name: ::MissionObjectiveChecker*
class CORDL_TYPE MissionObjectiveChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Status = ::GlobalNamespace::__MissionObjectiveChecker__Status;

  /// @brief Field _missionObjectiveType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveType, put = __cordl_internal_set__missionObjectiveType))::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> _missionObjectiveType;

  /// @brief Field statusDidChangeEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_statusDidChangeEvent,
                      put = __cordl_internal_set_statusDidChangeEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* statusDidChangeEvent;

  /// @brief Field checkedValueDidChangeEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_checkedValueDidChangeEvent,
                      put = __cordl_internal_set_checkedValueDidChangeEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* checkedValueDidChangeEvent;

  /// @brief Field _status, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status))::GlobalNamespace::__MissionObjectiveChecker__Status _status;

  /// @brief Field _checkedValue, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__checkedValue, put = __cordl_internal_set__checkedValue)) int32_t _checkedValue;

  /// @brief Field _missionObjective, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjective, put = __cordl_internal_set__missionObjective))::GlobalNamespace::MissionObjective* _missionObjective;

  /// @brief Field _disableChecking, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__disableChecking, put = __cordl_internal_set__disableChecking)) bool _disableChecking;

  __declspec(property(get = get_missionObjectiveType))::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> missionObjectiveType;

  __declspec(property(get = get_missionObjective))::GlobalNamespace::MissionObjective* missionObjective;

  __declspec(property(get = get_disableChecking, put = set_disableChecking)) bool disableChecking;

  __declspec(property(get = get_status, put = set_status))::GlobalNamespace::__MissionObjectiveChecker__Status status;

  __declspec(property(get = get_checkedValue, put = set_checkedValue)) int32_t checkedValue;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>& __cordl_internal_get__missionObjectiveType();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> const& __cordl_internal_get__missionObjectiveType() const;

  constexpr void __cordl_internal_set__missionObjectiveType(::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> value);

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*& __cordl_internal_get_statusDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> const& __cordl_internal_get_statusDidChangeEvent() const;

  constexpr void __cordl_internal_set_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*& __cordl_internal_get_checkedValueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> const& __cordl_internal_get_checkedValueDidChangeEvent() const;

  constexpr void __cordl_internal_set_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status& __cordl_internal_get__status();

  constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status const& __cordl_internal_get__status() const;

  constexpr void __cordl_internal_set__status(::GlobalNamespace::__MissionObjectiveChecker__Status value);

  constexpr int32_t& __cordl_internal_get__checkedValue();

  constexpr int32_t const& __cordl_internal_get__checkedValue() const;

  constexpr void __cordl_internal_set__checkedValue(int32_t value);

  constexpr ::GlobalNamespace::MissionObjective*& __cordl_internal_get__missionObjective();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjective*> const& __cordl_internal_get__missionObjective() const;

  constexpr void __cordl_internal_set__missionObjective(::GlobalNamespace::MissionObjective* value);

  constexpr bool& __cordl_internal_get__disableChecking();

  constexpr bool const& __cordl_internal_get__disableChecking() const;

  constexpr void __cordl_internal_set__disableChecking(bool value);

  /// @brief Method add_statusDidChangeEvent, addr 0x237e958, size 0xb0, virtual false, abstract: false, final false
  inline void add_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  /// @brief Method remove_statusDidChangeEvent, addr 0x2389908, size 0xb0, virtual false, abstract: false, final false
  inline void remove_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  /// @brief Method add_checkedValueDidChangeEvent, addr 0x237ea08, size 0xb0, virtual false, abstract: false, final false
  inline void add_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  /// @brief Method remove_checkedValueDidChangeEvent, addr 0x23899b8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  /// @brief Method get_missionObjectiveType, addr 0x2389a68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> get_missionObjectiveType();

  /// @brief Method get_missionObjective, addr 0x2389a70, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionObjective* get_missionObjective();

  /// @brief Method get_disableChecking, addr 0x2389a78, size 0x8, virtual false, abstract: false, final false
  inline bool get_disableChecking();

  /// @brief Method set_disableChecking, addr 0x2389a80, size 0xc, virtual false, abstract: false, final false
  inline void set_disableChecking(bool value);

  /// @brief Method get_status, addr 0x2389a8c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MissionObjectiveChecker__Status get_status();

  /// @brief Method set_status, addr 0x2388abc, size 0x3c, virtual false, abstract: false, final false
  inline void set_status(::GlobalNamespace::__MissionObjectiveChecker__Status value);

  /// @brief Method get_checkedValue, addr 0x2389a94, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_checkedValue();

  /// @brief Method set_checkedValue, addr 0x2388c20, size 0x3c, virtual false, abstract: false, final false
  inline void set_checkedValue(int32_t value);

  /// @brief Method SetCheckedMissionObjective, addr 0x2389a9c, size 0x10, virtual false, abstract: false, final false
  inline void SetCheckedMissionObjective(::GlobalNamespace::MissionObjective* missionObjective);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init();

  static inline ::GlobalNamespace::MissionObjectiveChecker* New_ctor();

  /// @brief Method .ctor, addr 0x2389220, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveChecker(MissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveChecker(MissionObjectiveChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveChecker();

public:
  /// @brief Field _missionObjectiveType, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> ____missionObjectiveType;

  /// @brief Field statusDidChangeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* ___statusDidChangeEvent;

  /// @brief Field checkedValueDidChangeEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* ___checkedValueDidChangeEvent;

  /// @brief Field _status, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__MissionObjectiveChecker__Status ____status;

  /// @brief Field _checkedValue, offset: 0x34, size: 0x4, def value: None
  int32_t ____checkedValue;

  /// @brief Field _missionObjective, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjective* ____missionObjective;

  /// @brief Field _disableChecking, offset: 0x40, size: 0x1, def value: None
  bool ____disableChecking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveChecker, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____missionObjectiveType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ___statusDidChangeEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ___checkedValueDidChangeEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____status) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____checkedValue) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____missionObjective) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____disableChecking) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionObjectiveChecker__Status, "", "MissionObjectiveChecker/Status");
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveChecker*, "", "MissionObjectiveChecker");
