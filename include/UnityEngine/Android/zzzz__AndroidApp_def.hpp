#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidApp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AndroidApp)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidApp;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidApp);
// Dependencies System.Object
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidApp
class CORDL_TYPE AndroidApp : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Activity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Activity, put = setStaticF_m_Activity)) ::UnityEngine::AndroidJavaObject* m_Activity;

  /// @brief Field m_Context, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Context, put = setStaticF_m_Context)) ::UnityEngine::AndroidJavaObject* m_Context;

  /// @brief Method AcquireContextAndActivity, addr 0x4849518, size 0x244, virtual false, abstract: false, final false
  static inline void AcquireContextAndActivity();

  static inline ::UnityEngine::AndroidJavaObject* getStaticF_m_Activity();

  static inline ::UnityEngine::AndroidJavaObject* getStaticF_m_Context();

  /// @brief Method get_Activity, addr 0x484975c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* get_Activity();

  /// @brief Method get_Context, addr 0x48494cc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJavaObject* get_Context();

  /// @brief Method get_UnityPlayerRaw, addr 0x4838428, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_UnityPlayerRaw();

  static inline void setStaticF_m_Activity(::UnityEngine::AndroidJavaObject* value);

  static inline void setStaticF_m_Context(::UnityEngine::AndroidJavaObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidApp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidApp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidApp(AndroidApp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidApp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidApp(AndroidApp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16764 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidApp, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidApp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidApp*, "UnityEngine.Android", "AndroidApp");
