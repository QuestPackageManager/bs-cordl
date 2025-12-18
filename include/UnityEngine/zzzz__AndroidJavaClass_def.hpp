#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaClass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidJavaClass)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaClass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaClass);
// Dependencies UnityEngine.AndroidJavaObject
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJavaClass
class CORDL_TYPE AndroidJavaClass : public ::UnityEngine::AndroidJavaObject {
public:
  // Declarations
  static inline ::UnityEngine::AndroidJavaClass* New_ctor(::StringW className);

  static inline ::UnityEngine::AndroidJavaClass* New_ctor(::System::IntPtr jclass);

  /// @brief Method _AndroidJavaClass, addr 0x6860d80, size 0x128, virtual false, abstract: false, final false
  inline void _AndroidJavaClass(::StringW className);

  /// @brief Method .ctor, addr 0x685d270, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW className);

  /// @brief Method .ctor, addr 0x686077c, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr jclass);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaClass(AndroidJavaClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaClass(AndroidJavaClass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19931 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaClass, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaClass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaClass*, "UnityEngine", "AndroidJavaClass");
