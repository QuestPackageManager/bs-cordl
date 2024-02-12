#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
CORDL_MODULE_EXPORT(AndroidJavaRunnableProxy)
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaRunnableProxy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaRunnableProxy);
// Type: UnityEngine::AndroidJavaRunnableProxy
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14785))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14784))
// CS Name: ::UnityEngine::AndroidJavaRunnableProxy*
class CORDL_TYPE AndroidJavaRunnableProxy : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field mRunnable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mRunnable, put = __cordl_internal_set_mRunnable))::UnityEngine::AndroidJavaRunnable* mRunnable;

  constexpr ::UnityEngine::AndroidJavaRunnable*& __cordl_internal_get_mRunnable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AndroidJavaRunnable*> const& __cordl_internal_get_mRunnable() const;

  constexpr void __cordl_internal_set_mRunnable(::UnityEngine::AndroidJavaRunnable* value);

  static inline ::UnityEngine::AndroidJavaRunnableProxy* New_ctor(::UnityEngine::AndroidJavaRunnable* runnable);

  /// @brief Method .ctor, addr 0x2c80c1c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AndroidJavaRunnable* runnable);

  /// @brief Method run, addr 0x2c80d18, size 0x24, virtual false, abstract: false, final false
  inline void run();

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnableProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaRunnableProxy(AndroidJavaRunnableProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnableProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaRunnableProxy(AndroidJavaRunnableProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaRunnableProxy();

public:
  /// @brief Field mRunnable, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AndroidJavaRunnable* ___mRunnable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaRunnableProxy, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJavaRunnableProxy, ___mRunnable) == 0x20, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaRunnableProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaRunnableProxy*, "UnityEngine", "AndroidJavaRunnableProxy");
