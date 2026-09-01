#pragma once
// IWYU pragma private; include "UnityEngine\AndroidJavaRunnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(AndroidJavaRunnable)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Write type traits
MARK_REF_T(::UnityEngine::AndroidJavaRunnable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJavaRunnable*, "UnityEngine", "AndroidJavaRunnable");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJavaRunnable
class CORDL_TYPE AndroidJavaRunnable : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6a2d564, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::AndroidJavaRunnable* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6a2d4fc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaRunnable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaRunnable(AndroidJavaRunnable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaRunnable(AndroidJavaRunnable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20154 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AndroidJavaRunnable) == 0x80, "Size mismatch!");

} // namespace UnityEngine
