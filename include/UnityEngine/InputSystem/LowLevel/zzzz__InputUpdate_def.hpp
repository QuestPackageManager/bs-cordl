#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUpdate)
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdate_SerializedState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdate_UpdateStepCount;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdate_SerializedState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdate_UpdateStepCount;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputUpdate);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount
struct CORDL_TYPE InputUpdate_UpdateStepCount {
public:
  // Declarations
  __declspec(property(get = get_value, put = set_value)) uint32_t value;

  /// @brief Method OnBeforeUpdate, addr 0x4610d38, size 0x18, virtual false, abstract: false, final false
  inline void OnBeforeUpdate();

  /// @brief Method OnUpdate, addr 0x4610dd8, size 0x1c, virtual false, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method get_value, addr 0x4610f18, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_value();

  /// @brief Method set_value, addr 0x4610f20, size 0x8, virtual false, abstract: false, final false
  inline void set_value(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUpdate_UpdateStepCount();

  // Ctor Parameters [CppParam { name: "m_WasUpdated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_value_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputUpdate_UpdateStepCount(bool m_WasUpdated, uint32_t _value_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6964 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_WasUpdated, offset: 0x0, size: 0x1, def value: None
  bool m_WasUpdated;

  /// @brief Field <value>k__BackingField, offset: 0x4, size: 0x4, def value: None
  uint32_t _value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount, m_WasUpdated) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount, _value_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies UnityEngine.InputSystem.LowLevel.InputUpdate::UpdateStepCount, UnityEngine.InputSystem.LowLevel.InputUpdateType
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdate/SerializedState
struct CORDL_TYPE InputUpdate_SerializedState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUpdate_SerializedState();

  // Ctor Parameters [CppParam { name: "lastUpdateType", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None }, CppParam { name: "playerUpdateStepCount", ty:
  // "::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount", modifiers: "", def_value: None }]
  constexpr InputUpdate_SerializedState(::UnityEngine::InputSystem::LowLevel::InputUpdateType lastUpdateType,
                                        ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount playerUpdateStepCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6965 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field lastUpdateType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateType lastUpdateType;

  /// @brief Field playerUpdateStepCount, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount playerUpdateStepCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState, lastUpdateType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState, playerUpdateStepCount) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Object, UnityEngine.InputSystem.LowLevel.InputUpdate::UpdateStepCount, UnityEngine.InputSystem.LowLevel.InputUpdateType
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdate
class CORDL_TYPE InputUpdate : public ::System::Object {
public:
  // Declarations
  using SerializedState = ::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState;

  using UpdateStepCount = ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount;

  /// @brief Field s_LatestUpdateType, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_LatestUpdateType, put = setStaticF_s_LatestUpdateType)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType s_LatestUpdateType;

  /// @brief Field s_PlayerUpdateStepCount, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PlayerUpdateStepCount, put = setStaticF_s_PlayerUpdateStepCount)) ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount s_PlayerUpdateStepCount;

  /// @brief Field s_UpdateStepCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_UpdateStepCount, put = setStaticF_s_UpdateStepCount)) uint32_t s_UpdateStepCount;

  /// @brief Method GetUpdateTypeForPlayer, addr 0x4610eec, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType mask);

  /// @brief Method IsPlayerUpdate, addr 0x4610f0c, size 0xc, virtual false, abstract: false, final false
  static inline bool IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  /// @brief Method OnBeforeUpdate, addr 0x4610cb8, size 0x80, virtual false, abstract: false, final false
  static inline void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type);

  /// @brief Method OnUpdate, addr 0x4610d50, size 0x88, virtual false, abstract: false, final false
  static inline void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type);

  /// @brief Method Restore, addr 0x4610e58, size 0x94, virtual false, abstract: false, final false
  static inline void Restore(::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState state);

  /// @brief Method Save, addr 0x4610df4, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState Save();

  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType getStaticF_s_LatestUpdateType();

  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount getStaticF_s_PlayerUpdateStepCount();

  static inline uint32_t getStaticF_s_UpdateStepCount();

  static inline void setStaticF_s_LatestUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);

  static inline void setStaticF_s_PlayerUpdateStepCount(::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount value);

  static inline void setStaticF_s_UpdateStepCount(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputUpdate(InputUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputUpdate(InputUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6966 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputUpdate, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdate*, "UnityEngine.InputSystem.LowLevel", "InputUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdate_SerializedState, "UnityEngine.InputSystem.LowLevel", "InputUpdate/SerializedState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdate_UpdateStepCount, "UnityEngine.InputSystem.LowLevel", "InputUpdate/UpdateStepCount");
