#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaRunnableProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidJavaRunnableProxy)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaRunnableProxy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaRunnableProxy);
// Dependencies UnityEngine.AndroidJavaProxy
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJavaRunnableProxy
class CORDL_TYPE AndroidJavaRunnableProxy : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field mRunnable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mRunnable, put = __cordl_internal_set_mRunnable)) ::UnityEngine::AndroidJavaRunnable* mRunnable;

  /// @brief Method Invoke, addr 0x4845b30, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::StringW methodName, ::System::IntPtr javaArgs);

  static inline ::UnityEngine::AndroidJavaRunnableProxy* New_ctor(::UnityEngine::AndroidJavaRunnable* runnable);

  constexpr ::UnityEngine::AndroidJavaRunnable* const& __cordl_internal_get_mRunnable() const;

  constexpr ::UnityEngine::AndroidJavaRunnable*& __cordl_internal_get_mRunnable();

  constexpr void __cordl_internal_set_mRunnable(::UnityEngine::AndroidJavaRunnable* value);

  /// @brief Method .ctor, addr 0x4845a0c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AndroidJavaRunnable* runnable);

  /// @brief Method run, addr 0x4845b0c, size 0x24, virtual false, abstract: false, final false
  inline void run();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaRunnableProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnableProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaRunnableProxy(AndroidJavaRunnableProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnableProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaRunnableProxy(AndroidJavaRunnableProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16769 };

  /// @brief Field mRunnable, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AndroidJavaRunnable* ___mRunnable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AndroidJavaRunnableProxy, ___mRunnable) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaRunnableProxy, 0x28>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaRunnableProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaRunnableProxy*, "UnityEngine", "AndroidJavaRunnableProxy");
