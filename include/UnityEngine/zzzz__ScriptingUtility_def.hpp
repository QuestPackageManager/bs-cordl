#pragma once
// IWYU pragma private; include "UnityEngine/ScriptingUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptingUtility)
namespace UnityEngine {
struct ScriptingUtility_TestClass;
}
// Forward declare root types
namespace UnityEngine {
class ScriptingUtility;
}
namespace UnityEngine {
struct ScriptingUtility_TestClass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ScriptingUtility);
MARK_VAL_T(::UnityEngine::ScriptingUtility_TestClass);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ScriptingUtility/TestClass
struct CORDL_TYPE ScriptingUtility_TestClass {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptingUtility_TestClass();

  // Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScriptingUtility_TestClass(int32_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10903 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  int32_t value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ScriptingUtility_TestClass, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ScriptingUtility_TestClass, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ScriptingUtility
class CORDL_TYPE ScriptingUtility : public ::System::Object {
public:
  // Declarations
  using TestClass = ::UnityEngine::ScriptingUtility_TestClass;

  /// @brief Method IsManagedCodeWorking, addr 0x48af550, size 0x8, virtual false, abstract: false, final false
  static inline bool IsManagedCodeWorking();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptingUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptingUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptingUtility(ScriptingUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptingUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptingUtility(ScriptingUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10904 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScriptingUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ScriptingUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptingUtility*, "UnityEngine", "ScriptingUtility");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptingUtility_TestClass, "UnityEngine", "ScriptingUtility/TestClass");
