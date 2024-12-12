#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputRuntime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InputRuntime)
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputRuntime;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputRuntime);
// Dependencies System.Object
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputRuntime
class CORDL_TYPE InputRuntime : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_CurrentTimeOffsetToRealtimeSinceStartup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentTimeOffsetToRealtimeSinceStartup, put = setStaticF_s_CurrentTimeOffsetToRealtimeSinceStartup)) double_t s_CurrentTimeOffsetToRealtimeSinceStartup;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::InputSystem::LowLevel::IInputRuntime* s_Instance;

  static inline double_t getStaticF_s_CurrentTimeOffsetToRealtimeSinceStartup();

  static inline ::UnityEngine::InputSystem::LowLevel::IInputRuntime* getStaticF_s_Instance();

  static inline void setStaticF_s_CurrentTimeOffsetToRealtimeSinceStartup(double_t value);

  static inline void setStaticF_s_Instance(::UnityEngine::InputSystem::LowLevel::IInputRuntime* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRuntime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRuntime(InputRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRuntime(InputRuntime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6955 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputRuntime, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputRuntime*, "UnityEngine.InputSystem.LowLevel", "InputRuntime");
