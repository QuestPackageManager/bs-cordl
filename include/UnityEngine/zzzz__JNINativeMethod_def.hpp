#pragma once
// IWYU pragma private; include "UnityEngine/JNINativeMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JNINativeMethod)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
struct JNINativeMethod;
}
// Write type traits
MARK_VAL_T(::UnityEngine::JNINativeMethod);
// Type: UnityEngine::JNINativeMethod
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::JNINativeMethod
struct CORDL_TYPE JNINativeMethod {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr JNINativeMethod();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "signature", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "fnPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr JNINativeMethod(::StringW name, ::StringW signature, ::System::IntPtr fnPtr) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field signature, offset: 0x8, size: 0x8, def value: None
  ::StringW signature;

  /// @brief Field fnPtr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr fnPtr;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16713 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::JNINativeMethod, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::JNINativeMethod, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JNINativeMethod, signature) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JNINativeMethod, fnPtr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::JNINativeMethod, "UnityEngine", "JNINativeMethod");
