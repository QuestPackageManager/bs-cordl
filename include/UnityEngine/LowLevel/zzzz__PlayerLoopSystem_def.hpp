#pragma once
// IWYU pragma private; include "UnityEngine/LowLevel/PlayerLoopSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerLoopSystem)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::LowLevel {
class PlayerLoopSystem_UpdateFunction;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
class PlayerLoopSystem_UpdateFunction;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction);
MARK_VAL_T(::UnityEngine::LowLevel::PlayerLoopSystem);
// Dependencies System.MulticastDelegate
namespace UnityEngine::LowLevel {
// Is value type: false
// CS Name: UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
class CORDL_TYPE PlayerLoopSystem_UpdateFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x693656c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6936504, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLoopSystem_UpdateFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerLoopSystem_UpdateFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerLoopSystem_UpdateFunction(PlayerLoopSystem_UpdateFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerLoopSystem_UpdateFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerLoopSystem_UpdateFunction(PlayerLoopSystem_UpdateFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::LowLevel
// Dependencies System.IntPtr
namespace UnityEngine::LowLevel {
// Is value type: true
// CS Name: UnityEngine.LowLevel.PlayerLoopSystem
struct CORDL_TYPE PlayerLoopSystem {
public:
  // Declarations
  using UpdateFunction = ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction;

  /// @brief Method ToString, addr 0x69364e8, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLoopSystem();

  // Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "subSystemList", ty:
  // "::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>", modifiers: "", def_value: None }, CppParam { name: "updateDelegate", ty:
  // "::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*", modifiers: "", def_value: None }, CppParam { name: "updateFunction", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "loopConditionFunction", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr PlayerLoopSystem(::System::Type* type, ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem, ::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*> subSystemList,
                             ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate, ::System::IntPtr updateFunction, ::System::IntPtr loopConditionFunction) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10473 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* type;

  /// @brief Field subSystemList, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem, ::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*> subSystemList;

  /// @brief Field updateDelegate, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate;

  /// @brief Field updateFunction, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr updateFunction;

  /// @brief Field loopConditionFunction, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr loopConditionFunction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, subSystemList) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, updateDelegate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, updateFunction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, loopConditionFunction) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::PlayerLoopSystem, 0x28>, "Size mismatch!");

} // namespace UnityEngine::LowLevel
NEED_NO_BOX(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*, "UnityEngine.LowLevel", "PlayerLoopSystem/UpdateFunction");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystem, "UnityEngine.LowLevel", "PlayerLoopSystem");
