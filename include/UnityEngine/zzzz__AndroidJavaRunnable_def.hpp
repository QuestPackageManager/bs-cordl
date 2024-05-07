#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaRunnable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJavaRunnable)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaRunnable);
// Type: UnityEngine::AndroidJavaRunnable
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AndroidJavaRunnable*
class CORDL_TYPE AndroidJavaRunnable : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x33b7b60, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::AndroidJavaRunnable* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x33b7aa4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaRunnable, 0x80>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaRunnable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaRunnable*, "UnityEngine", "AndroidJavaRunnable");
