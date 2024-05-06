#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine::StackTraceUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::StackTraceUtility*
class CORDL_TYPE StackTraceUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field projectFolder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_projectFolder, put = setStaticF_projectFolder))::StringW projectFolder;

  /// @brief Method ExtractFormattedStackTrace, addr 0x340fb28, size 0x6a8, virtual false, abstract: false, final false
  static inline ::StringW ExtractFormattedStackTrace(::System::Diagnostics::StackTrace* stackTrace);

  /// @brief Method ExtractStackTrace, addr 0x340f9c4, size 0x164, virtual false, abstract: false, final false
  static inline ::StringW ExtractStackTrace();

  /// @brief Method ExtractStringFromExceptionInternal, addr 0x34101d0, size 0x368, virtual false, abstract: false, final false
  static inline void ExtractStringFromExceptionInternal(::System::Object* exceptiono, ByRef<::StringW> message, ByRef<::StringW> stackTrace);

  /// @brief Method SetProjectFolder, addr 0x340f8e8, size 0xdc, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::StackTraceUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::StackTraceUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StackTraceUtility*, "UnityEngine", "StackTraceUtility");
