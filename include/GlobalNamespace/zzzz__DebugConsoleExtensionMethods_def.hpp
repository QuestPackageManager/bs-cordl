#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugConsoleExtensionMethods)
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugConsoleExtensionMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DebugConsoleExtensionMethods);
// Type: ::DebugConsoleExtensionMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugConsoleExtensionMethods*
class CORDL_TYPE DebugConsoleExtensionMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToConsoleMessage, addr 0x267413c, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage ToConsoleMessage(::StringW message, ::UnityEngine::LogType type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugConsoleExtensionMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugConsoleExtensionMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugConsoleExtensionMethods(DebugConsoleExtensionMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugConsoleExtensionMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugConsoleExtensionMethods(DebugConsoleExtensionMethods const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DebugConsoleExtensionMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DebugConsoleExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugConsoleExtensionMethods*, "", "DebugConsoleExtensionMethods");
