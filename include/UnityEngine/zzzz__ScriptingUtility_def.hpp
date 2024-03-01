#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptingUtility)
namespace UnityEngine {
struct __ScriptingUtility__TestClass;
}
// Forward declare root types
namespace UnityEngine {
class ScriptingUtility;
}
namespace UnityEngine {
struct __ScriptingUtility__TestClass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ScriptingUtility);
MARK_VAL_T(::UnityEngine::__ScriptingUtility__TestClass);
// Type: ::TestClass
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ScriptingUtility::TestClass
struct CORDL_TYPE __ScriptingUtility__TestClass {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptingUtility__TestClass();

  // Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScriptingUtility__TestClass(int32_t value) noexcept;

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  int32_t value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ScriptingUtility__TestClass, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ScriptingUtility__TestClass, value) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ScriptingUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ScriptingUtility*
class CORDL_TYPE ScriptingUtility : public ::System::Object {
public:
  // Declarations
  using TestClass = ::UnityEngine::__ScriptingUtility__TestClass;

  /// @brief Method IsManagedCodeWorking, addr 0x2dc5c60, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScriptingUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ScriptingUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptingUtility*, "UnityEngine", "ScriptingUtility");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ScriptingUtility__TestClass, "UnityEngine", "ScriptingUtility/TestClass");
