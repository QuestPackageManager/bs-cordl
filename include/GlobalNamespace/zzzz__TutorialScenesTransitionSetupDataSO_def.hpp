#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct TutorialScenesTransitionSetupDataSO_TutorialEndStateType;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct TutorialScenesTransitionSetupDataSO_TutorialEndStateType;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType);
MARK_REF_PTR_T(::GlobalNamespace::TutorialScenesTransitionSetupDataSO);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: TutorialScenesTransitionSetupDataSO/TutorialEndStateType
struct CORDL_TYPE TutorialScenesTransitionSetupDataSO_TutorialEndStateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TutorialScenesTransitionSetupDataSO_TutorialEndStateType_Unwrapped
  enum struct __TutorialScenesTransitionSetupDataSO_TutorialEndStateType_Unwrapped : int32_t {
    __E_Completed = static_cast<int32_t>(0x0),
    __E_ReturnToMenu = static_cast<int32_t>(0x1),
    __E_Restart = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TutorialScenesTransitionSetupDataSO_TutorialEndStateType_Unwrapped() const noexcept {
    return static_cast<__TutorialScenesTransitionSetupDataSO_TutorialEndStateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialScenesTransitionSetupDataSO_TutorialEndStateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TutorialScenesTransitionSetupDataSO_TutorialEndStateType(int32_t value__) noexcept;

  /// @brief Field Completed value: I32(0)
  static ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType const Completed;

  /// @brief Field Restart value: I32(2)
  static ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType const Restart;

  /// @brief Field ReturnToMenu value: I32(1)
  static ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType const ReturnToMenu;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6851 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialScenesTransitionSetupDataSO
class CORDL_TYPE TutorialScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  using TutorialEndStateType = ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType;

  /// @brief Field didFinishEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>,
                                                                                     ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* didFinishEvent;

  /// @brief Method Finish, addr 0x57225bc, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType endState);

  /// @brief Method Init, addr 0x571d268, size 0x2b0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel);

  static inline ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* New_ctor();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>*&
  __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set_didFinishEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* value);

  /// @brief Method .ctor, addr 0x57225e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x5720f78, size 0xc0, virtual false, abstract: false, final false
  inline void
  add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* value);

  /// @brief Method remove_didFinishEvent, addr 0x5720540, size 0xc0, virtual false, abstract: false, final false
  inline void
  remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialScenesTransitionSetupDataSO(TutorialScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialScenesTransitionSetupDataSO(TutorialScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6852 };

  /// @brief Field didFinishEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>, ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO, ___didFinishEvent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType, "", "TutorialScenesTransitionSetupDataSO/TutorialEndStateType");
NEED_NO_BOX(::GlobalNamespace::TutorialScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*, "", "TutorialScenesTransitionSetupDataSO");
