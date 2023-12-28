#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoopSystemInternal)
namespace UnityEngine::LowLevel {
class __PlayerLoopSystem__UpdateFunction;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
struct PlayerLoopSystemInternal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevel::PlayerLoopSystemInternal);
// Type: UnityEngine.LowLevel::PlayerLoopSystemInternal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10472))
// CS Name: ::UnityEngine.LowLevel::PlayerLoopSystemInternal
struct CORDL_TYPE PlayerLoopSystemInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "updateDelegate", ty:
  // "::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*", modifiers: "", def_value: None }, CppParam { name: "updateFunction", ty: "void*", modifiers: "", def_value: None }, CppParam {
  // name: "loopConditionFunction", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "numSubSystems", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerLoopSystemInternal(::System::Type* type, ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* updateDelegate, void* updateFunction, void* loopConditionFunction,
                                     int32_t numSubSystems) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLoopSystemInternal();

  /// @brief Field type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* type;

  /// @brief Field updateDelegate, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* updateDelegate;

  /// @brief Field updateFunction, offset: 0x10, size: 0x8, def value: None
  void* updateFunction;

  /// @brief Field loopConditionFunction, offset: 0x18, size: 0x8, def value: None
  void* loopConditionFunction;

  /// @brief Field numSubSystems, offset: 0x20, size: 0x4, def value: None
  int32_t numSubSystems;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::PlayerLoopSystemInternal, 0x28>, "Size mismatch!");

} // namespace UnityEngine::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystemInternal, "UnityEngine.LowLevel", "PlayerLoopSystemInternal");
