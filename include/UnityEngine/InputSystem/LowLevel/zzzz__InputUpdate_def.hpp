#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUpdate)
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputUpdate__SerializedState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputUpdate__UpdateStepCount;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputUpdate__SerializedState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputUpdate__UpdateStepCount;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputUpdate);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount);
// Type: ::UpdateStepCount
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6554))
// CS Name: ::InputUpdate::UpdateStepCount
struct CORDL_TYPE __InputUpdate__UpdateStepCount {
public:
  // Declarations
  __declspec(property(get = get_value, put = set_value)) uint32_t value;

  /// @brief Method get_value, addr 0x2af0f24, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_value();

  /// @brief Method set_value, addr 0x2af0f2c, size 0x8, virtual false, abstract: false, final false
  inline void set_value(uint32_t value);

  /// @brief Method OnBeforeUpdate, addr 0x2af0d44, size 0x18, virtual false, abstract: false, final false
  inline void OnBeforeUpdate();

  /// @brief Method OnUpdate, addr 0x2af0de4, size 0x1c, virtual false, abstract: false, final false
  inline void OnUpdate();

  // Ctor Parameters [CppParam { name: "m_WasUpdated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_value_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __InputUpdate__UpdateStepCount(bool m_WasUpdated, uint32_t _value_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputUpdate__UpdateStepCount();

  /// @brief Field m_WasUpdated, offset: 0x0, size: 0x1, def value: None
  bool m_WasUpdated;

  /// @brief Field <value>k__BackingField, offset: 0x4, size: 0x4, def value: None
  uint32_t _value_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount, m_WasUpdated) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount, _value_k__BackingField) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: ::SerializedState
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6553)), TypeDefinitionIndex(TypeDefinitionIndex(6554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6555))
// CS Name: ::InputUpdate::SerializedState
struct CORDL_TYPE __InputUpdate__SerializedState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "lastUpdateType", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None }, CppParam { name: "playerUpdateStepCount", ty:
  // "::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount", modifiers: "", def_value: None }]
  constexpr __InputUpdate__SerializedState(::UnityEngine::InputSystem::LowLevel::InputUpdateType lastUpdateType,
                                           ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount playerUpdateStepCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputUpdate__SerializedState();

  /// @brief Field lastUpdateType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateType lastUpdateType;

  /// @brief Field playerUpdateStepCount, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount playerUpdateStepCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState, lastUpdateType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState, playerUpdateStepCount) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputUpdate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6553)), TypeDefinitionIndex(TypeDefinitionIndex(6554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6556))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputUpdate*
class CORDL_TYPE InputUpdate : public ::System::Object {
public:
  // Declarations
  using SerializedState = ::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState;

  using UpdateStepCount = ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount;

  /// @brief Field s_UpdateStepCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_UpdateStepCount, put = setStaticF_s_UpdateStepCount)) uint32_t s_UpdateStepCount;

  /// @brief Field s_LatestUpdateType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_LatestUpdateType, put = setStaticF_s_LatestUpdateType))::UnityEngine::InputSystem::LowLevel::InputUpdateType s_LatestUpdateType;

  /// @brief Field s_PlayerUpdateStepCount, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PlayerUpdateStepCount,
                             put = setStaticF_s_PlayerUpdateStepCount))::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount s_PlayerUpdateStepCount;

  static inline void setStaticF_s_UpdateStepCount(uint32_t value);

  static inline uint32_t getStaticF_s_UpdateStepCount();

  static inline void setStaticF_s_LatestUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);

  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType getStaticF_s_LatestUpdateType();

  static inline void setStaticF_s_PlayerUpdateStepCount(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount value);

  static inline ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount getStaticF_s_PlayerUpdateStepCount();

  /// @brief Method OnBeforeUpdate, addr 0x2af0cc4, size 0x80, virtual false, abstract: false, final false
  static inline void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type);

  /// @brief Method OnUpdate, addr 0x2af0d5c, size 0x88, virtual false, abstract: false, final false
  static inline void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type);

  /// @brief Method Save, addr 0x2af0e00, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState Save();

  /// @brief Method Restore, addr 0x2af0e64, size 0x94, virtual false, abstract: false, final false
  static inline void Restore(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState state);

  /// @brief Method GetUpdateTypeForPlayer, addr 0x2af0ef8, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType mask);

  /// @brief Method IsPlayerUpdate, addr 0x2af0f18, size 0xc, virtual false, abstract: false, final false
  static inline bool IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);

  // Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputUpdate(InputUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputUpdate(InputUpdate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUpdate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputUpdate, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdate*, "UnityEngine.InputSystem.LowLevel", "InputUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState, "UnityEngine.InputSystem.LowLevel", "InputUpdate/SerializedState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount, "UnityEngine.InputSystem.LowLevel", "InputUpdate/UpdateStepCount");
