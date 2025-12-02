#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaObjectUnityOwned.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
CORDL_MODULE_EXPORT(AndroidJavaObjectUnityOwned)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaObjectUnityOwned;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaObjectUnityOwned);
// Dependencies UnityEngine.AndroidJavaObject
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJavaObjectUnityOwned
class CORDL_TYPE AndroidJavaObjectUnityOwned : public ::UnityEngine::AndroidJavaObject {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x67f91b0, size 0x58, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::AndroidJavaObjectUnityOwned* New_ctor(::System::IntPtr jobject);

  /// @brief Method .ctor, addr 0x67f91ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr jobject);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaObjectUnityOwned();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObjectUnityOwned", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaObjectUnityOwned(AndroidJavaObjectUnityOwned&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObjectUnityOwned", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaObjectUnityOwned(AndroidJavaObjectUnityOwned const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19903 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaObjectUnityOwned, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaObjectUnityOwned);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaObjectUnityOwned*, "UnityEngine", "AndroidJavaObjectUnityOwned");
