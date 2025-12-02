#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRRuntime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRRuntime)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRRuntime;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRRuntime);
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRRuntime
class CORDL_TYPE OpenXRRuntime : public ::System::Object {
public:
  // Declarations
  /// @brief Field wantsToQuit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_wantsToQuit, put = setStaticF_wantsToQuit)) ::System::Func_1<bool>* wantsToQuit;

  /// @brief Field wantsToRestart, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_wantsToRestart, put = setStaticF_wantsToRestart)) ::System::Func_1<bool>* wantsToRestart;

  /// @brief Method GetAvailableExtensions, addr 0x67b60e8, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAvailableExtensions();

  /// @brief Method GetEnabledExtensions, addr 0x67b6010, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetEnabledExtensions();

  /// @brief Method GetExtensionVersion, addr 0x67b62bc, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t GetExtensionVersion(::StringW extensionName);

  /// @brief Method GetLastError, addr 0x67be32c, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetLastError(::ByRef<::StringW> error);

  /// @brief Method Internal_GetAPIVersion, addr 0x67bd6ac, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_GetAPIVersion(::ByRef<uint16_t> major, ::ByRef<uint16_t> minor, ::ByRef<uint32_t> patch);

  /// @brief Method Internal_GetAvailableExtensionCount, addr 0x67bda64, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t Internal_GetAvailableExtensionCount();

  /// @brief Method Internal_GetAvailableExtensionName, addr 0x67bdac8, size 0xb0, virtual false, abstract: false, final false
  static inline bool Internal_GetAvailableExtensionName(uint32_t index, ::ByRef<::StringW> extensionName);

  /// @brief Method Internal_GetAvailableExtensionNamePtr, addr 0x67be22c, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetAvailableExtensionNamePtr(uint32_t index, ::ByRef<::System::IntPtr> extensionName);

  /// @brief Method Internal_GetEnabledExtensionCount, addr 0x67bd950, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t Internal_GetEnabledExtensionCount();

  /// @brief Method Internal_GetEnabledExtensionName, addr 0x67bd9b4, size 0xb0, virtual false, abstract: false, final false
  static inline bool Internal_GetEnabledExtensionName(uint32_t index, ::ByRef<::StringW> extensionName);

  /// @brief Method Internal_GetEnabledExtensionNamePtr, addr 0x67be1a8, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetEnabledExtensionNamePtr(uint32_t index, ::ByRef<::System::IntPtr> outName);

  /// @brief Method Internal_GetExtensionVersion, addr 0x67bd8b8, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t Internal_GetExtensionVersion(::StringW extensionName);

  /// @brief Method Internal_GetLastError, addr 0x67be2b0, size 0x7c, virtual false, abstract: false, final false
  static inline bool Internal_GetLastError(::ByRef<::System::IntPtr> error);

  /// @brief Method Internal_GetPluginVersion, addr 0x67bd748, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetPluginVersion(::ByRef<::System::IntPtr> pluginVersionPtr);

  /// @brief Method Internal_GetRuntimeName, addr 0x67bd58c, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetRuntimeName(::ByRef<::System::IntPtr> runtimeNamePtr);

  /// @brief Method Internal_GetRuntimeVersion, addr 0x67bd610, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_GetRuntimeVersion(::ByRef<uint16_t> major, ::ByRef<uint16_t> minor, ::ByRef<uint32_t> patch);

  /// @brief Method Internal_GetSoftRestartLoopAtInitialization, addr 0x67bdf04, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetSoftRestartLoopAtInitialization();

  /// @brief Method Internal_IsExtensionEnabled, addr 0x67bd81c, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_IsExtensionEnabled(::StringW extensionName);

  /// @brief Method Internal_SetSoftRestartLoopAtInitialization, addr 0x67bdf74, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetSoftRestartLoopAtInitialization(bool value);

  /// @brief Method InvokeEvent, addr 0x67bdff0, size 0x1b8, virtual false, abstract: false, final false
  static inline bool InvokeEvent(::System::Func_1<bool>* func);

  /// @brief Method IsExtensionEnabled, addr 0x67bd818, size 0x4, virtual false, abstract: false, final false
  static inline bool IsExtensionEnabled(::StringW extensionName);

  /// @brief Method LogLastError, addr 0x67be3d4, size 0x78, virtual false, abstract: false, final false
  static inline void LogLastError();

  /// @brief Method ShouldQuit, addr 0x67bd4c0, size 0x4c, virtual false, abstract: false, final false
  static inline bool ShouldQuit();

  /// @brief Method ShouldRestart, addr 0x67bd474, size 0x4c, virtual false, abstract: false, final false
  static inline bool ShouldRestart();

  /// @brief Method add_wantsToQuit, addr 0x67bdb78, size 0xe0, virtual false, abstract: false, final false
  static inline void add_wantsToQuit(::System::Func_1<bool>* value);

  /// @brief Method add_wantsToRestart, addr 0x67bdd38, size 0xe4, virtual false, abstract: false, final false
  static inline void add_wantsToRestart(::System::Func_1<bool>* value);

  static inline ::System::Func_1<bool>* getStaticF_wantsToQuit();

  static inline ::System::Func_1<bool>* getStaticF_wantsToRestart();

  /// @brief Method get_apiVersion, addr 0x67b5f00, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW get_apiVersion();

  /// @brief Method get_name, addr 0x67b5cd8, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW get_name();

  /// @brief Method get_pluginVersion, addr 0x67b5e74, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW get_pluginVersion();

  /// @brief Method get_retryInitializationOnFormFactorErrors, addr 0x67bdf00, size 0x4, virtual false, abstract: false, final false
  static inline bool get_retryInitializationOnFormFactorErrors();

  /// @brief Method get_version, addr 0x67b5d64, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW get_version();

  /// @brief Method isRuntimeAPIVersionGreaterThan1_1, addr 0x67bd7cc, size 0x4c, virtual false, abstract: false, final false
  static inline bool isRuntimeAPIVersionGreaterThan1_1();

  /// @brief Method remove_wantsToQuit, addr 0x67bdc58, size 0xe0, virtual false, abstract: false, final false
  static inline void remove_wantsToQuit(::System::Func_1<bool>* value);

  /// @brief Method remove_wantsToRestart, addr 0x67bde1c, size 0xe4, virtual false, abstract: false, final false
  static inline void remove_wantsToRestart(::System::Func_1<bool>* value);

  static inline void setStaticF_wantsToQuit(::System::Func_1<bool>* value);

  static inline void setStaticF_wantsToRestart(::System::Func_1<bool>* value);

  /// @brief Method set_retryInitializationOnFormFactorErrors, addr 0x67bdf70, size 0x4, virtual false, abstract: false, final false
  static inline void set_retryInitializationOnFormFactorErrors(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRRuntime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRuntime(OpenXRRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRuntime(OpenXRRuntime const&) = delete;

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRRuntime, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRRuntime*, "UnityEngine.XR.OpenXR", "OpenXRRuntime");
