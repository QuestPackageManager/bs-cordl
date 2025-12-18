#pragma once
// IWYU pragma private; include "UnityEngine/StackTraceUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StackTraceUtility)
namespace System::Diagnostics {
class StackTrace;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class StackTraceUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::StackTraceUtility);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.StackTraceUtility
class CORDL_TYPE StackTraceUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field projectFolder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_projectFolder, put = setStaticF_projectFolder)) ::StringW projectFolder;

  /// @brief Method ExtractFormattedStackTrace, addr 0x691b964, size 0x6e8, virtual false, abstract: false, final false
  static inline ::StringW ExtractFormattedStackTrace(::System::Diagnostics::StackTrace* stackTrace);

  /// @brief Method ExtractStackTrace, addr 0x691b804, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW ExtractStackTrace();

  /// @brief Method ExtractStringFromExceptionInternal, addr 0x691c04c, size 0x374, virtual false, abstract: false, final false
  static inline void ExtractStringFromExceptionInternal(::System::Object* exceptiono, ::ByRef<::StringW> message, ::ByRef<::StringW> stackTrace);

  /// @brief Method SetProjectFolder, addr 0x691b71c, size 0xe8, virtual false, abstract: false, final false
  static inline void SetProjectFolder(::StringW folder);

  static inline ::StringW getStaticF_projectFolder();

  static inline void setStaticF_projectFolder(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackTraceUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackTraceUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackTraceUtility(StackTraceUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackTraceUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackTraceUtility(StackTraceUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10344 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::StackTraceUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::StackTraceUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StackTraceUtility*, "UnityEngine", "StackTraceUtility");
