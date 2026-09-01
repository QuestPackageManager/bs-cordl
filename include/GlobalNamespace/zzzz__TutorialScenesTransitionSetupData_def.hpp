#pragma once
// IWYU pragma private; include "GlobalNamespace\TutorialScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialScenesTransitionSetupData)
namespace GlobalNamespace {
class GameplayAdditionalInformation;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct TutorialScenesTransitionSetupData_TutorialEndStateType;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct TutorialScenesTransitionSetupData_TutorialEndStateType;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType);
MARK_REF_T(::GlobalNamespace::TutorialScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType, "", "TutorialScenesTransitionSetupData/TutorialEndStateType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TutorialScenesTransitionSetupData*, "", "TutorialScenesTransitionSetupData");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: TutorialScenesTransitionSetupData/TutorialEndStateType
struct CORDL_TYPE TutorialScenesTransitionSetupData_TutorialEndStateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TutorialScenesTransitionSetupData_TutorialEndStateType_Unwrapped
  enum struct __TutorialScenesTransitionSetupData_TutorialEndStateType_Unwrapped : int32_t {
    __E_Completed = static_cast<int32_t>(0x0),
    __E_ReturnToMenu = static_cast<int32_t>(0x1),
    __E_Restart = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TutorialScenesTransitionSetupData_TutorialEndStateType_Unwrapped() const noexcept {
    return static_cast<__TutorialScenesTransitionSetupData_TutorialEndStateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialScenesTransitionSetupData_TutorialEndStateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TutorialScenesTransitionSetupData_TutorialEndStateType(int32_t value__) noexcept;

  /// @brief Field Completed value: I32(0)
  static ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType const Completed;

  /// @brief Field Restart value: I32(2)
  static ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType const Restart;

  /// @brief Field ReturnToMenu value: I32(1)
  static ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType const ReturnToMenu;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6754 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialScenesTransitionSetupData
class CORDL_TYPE TutorialScenesTransitionSetupData : public ::GlobalNamespace::ScenesTransitionSetupData {
public:
  // Declarations
  using TutorialEndStateType = ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType;

  /// @brief Field didFinishEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*,
                                                                                     ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* didFinishEvent;

  /// @brief Method Finish, addr 0x5912738, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType endState);

  /// @brief Method Init, addr 0x591107c, size 0x258, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation);

  static inline ::GlobalNamespace::TutorialScenesTransitionSetupData* New_ctor();

  constexpr ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>*&
  __cordl_internal_get_didFinishEvent();

  constexpr void
  __cordl_internal_set_didFinishEvent(::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* value);

  /// @brief Method .ctor, addr 0x5912760, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x5910fbc, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* value);

  /// @brief Method remove_didFinishEvent, addr 0x590f54c, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialScenesTransitionSetupData(TutorialScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialScenesTransitionSetupData(TutorialScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6755 };

  /// @brief Field didFinishEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupData, ___didFinishEvent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TutorialScenesTransitionSetupData) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
