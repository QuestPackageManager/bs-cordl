#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRRuntime)
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRRuntime;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRRuntime);
// Type: UnityEngine.XR.OpenXR::OpenXRRuntime
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14415))
// CS Name: ::UnityEngine.XR.OpenXR::OpenXRRuntime*
class CORDL_TYPE OpenXRRuntime : public ::System::Object {
public:
  // Declarations
  /// @brief Field wantsToQuit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_wantsToQuit, put = setStaticF_wantsToQuit))::System::Func_1<bool>* wantsToQuit;

  /// @brief Field wantsToRestart, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_wantsToRestart, put = setStaticF_wantsToRestart))::System::Func_1<bool>* wantsToRestart;

  static inline void setStaticF_wantsToQuit(::System::Func_1<bool>* value);

  static inline ::System::Func_1<bool>* getStaticF_wantsToQuit();

  static inline void setStaticF_wantsToRestart(::System::Func_1<bool>* value);

  static inline ::System::Func_1<bool>* getStaticF_wantsToRestart();

  /// @brief Method get_name addr 0x2afb4cc size 0x88 virtual false final false
  static inline ::StringW get_name();

  /// @brief Method get_version addr 0x2afb554 size 0x110 virtual false final false
  static inline ::StringW get_version();

  /// @brief Method get_apiVersion addr 0x2afb6ec size 0x110 virtual false final false
  static inline ::StringW get_apiVersion();

  /// @brief Method get_pluginVersion addr 0x2afb664 size 0x88 virtual false final false
  static inline ::StringW get_pluginVersion();

  /// @brief Method IsExtensionEnabled addr 0x2b02a0c size 0x4 virtual false final false
  static inline bool IsExtensionEnabled(::StringW extensionName);

  /// @brief Method GetExtensionVersion addr 0x2afbaf0 size 0x4 virtual false final false
  static inline uint32_t GetExtensionVersion(::StringW extensionName);

  /// @brief Method GetEnabledExtensions addr 0x2afb7fc size 0xfc virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetEnabledExtensions();

  /// @brief Method GetAvailableExtensions addr 0x2afb8f8 size 0xfc virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAvailableExtensions();

  /// @brief Method add_wantsToQuit addr 0x2b02d64 size 0xcc virtual false final false
  static inline void add_wantsToQuit(::System::Func_1<bool>* value);

  /// @brief Method remove_wantsToQuit addr 0x2b02e30 size 0xcc virtual false final false
  static inline void remove_wantsToQuit(::System::Func_1<bool>* value);

  /// @brief Method add_wantsToRestart addr 0x2b02efc size 0xd0 virtual false final false
  static inline void add_wantsToRestart(::System::Func_1<bool>* value);

  /// @brief Method remove_wantsToRestart addr 0x2b02fcc size 0xd0 virtual false final false
  static inline void remove_wantsToRestart(::System::Func_1<bool>* value);

  /// @brief Method InvokeEvent addr 0x2b0309c size 0x1ac virtual false final false
  static inline bool InvokeEvent(::System::Func_1<bool>* func);

  /// @brief Method ShouldQuit addr 0x2b026f4 size 0x48 virtual false final false
  static inline bool ShouldQuit();

  /// @brief Method ShouldRestart addr 0x2b026ac size 0x48 virtual false final false
  static inline bool ShouldRestart();

  /// @brief Method Internal_GetRuntimeName addr 0x2b027cc size 0x84 virtual false final false
  static inline bool Internal_GetRuntimeName(ByRef<void*> runtimeNamePtr);

  /// @brief Method Internal_GetRuntimeVersion addr 0x2b02850 size 0x9c virtual false final false
  static inline bool Internal_GetRuntimeVersion(ByRef<uint16_t> major, ByRef<uint16_t> minor, ByRef<uint32_t> patch);

  /// @brief Method Internal_GetAPIVersion addr 0x2b028ec size 0x9c virtual false final false
  static inline bool Internal_GetAPIVersion(ByRef<uint16_t> major, ByRef<uint16_t> minor, ByRef<uint32_t> patch);

  /// @brief Method Internal_GetPluginVersion addr 0x2b02988 size 0x84 virtual false final false
  static inline bool Internal_GetPluginVersion(ByRef<void*> pluginVersionPtr);

  /// @brief Method Internal_IsExtensionEnabled addr 0x2b02a10 size 0x98 virtual false final false
  static inline bool Internal_IsExtensionEnabled(::StringW extensionName);

  /// @brief Method Internal_GetExtensionVersion addr 0x2b02aa8 size 0x94 virtual false final false
  static inline uint32_t Internal_GetExtensionVersion(::StringW extensionName);

  /// @brief Method Internal_GetEnabledExtensionCount addr 0x2b02b3c size 0x68 virtual false final false
  static inline uint32_t Internal_GetEnabledExtensionCount();

  /// @brief Method Internal_GetEnabledExtensionNamePtr addr 0x2b03248 size 0x84 virtual false final false
  static inline bool Internal_GetEnabledExtensionNamePtr(uint32_t index, ByRef<void*> outName);

  /// @brief Method Internal_GetEnabledExtensionName addr 0x2b02ba4 size 0xac virtual false final false
  static inline bool Internal_GetEnabledExtensionName(uint32_t index, ByRef<::StringW> extensionName);

  /// @brief Method Internal_GetAvailableExtensionCount addr 0x2b02c50 size 0x68 virtual false final false
  static inline uint32_t Internal_GetAvailableExtensionCount();

  /// @brief Method Internal_GetAvailableExtensionNamePtr addr 0x2b032cc size 0x84 virtual false final false
  static inline bool Internal_GetAvailableExtensionNamePtr(uint32_t index, ByRef<void*> extensionName);

  /// @brief Method Internal_GetAvailableExtensionName addr 0x2b02cb8 size 0xac virtual false final false
  static inline bool Internal_GetAvailableExtensionName(uint32_t index, ByRef<::StringW> extensionName);

  /// @brief Method Internal_GetLastError addr 0x2b03350 size 0x7c virtual false final false
  static inline bool Internal_GetLastError(ByRef<void*> error);

  /// @brief Method GetLastError addr 0x2b033cc size 0x9c virtual false final false
  static inline bool GetLastError(ByRef<::StringW> error);

  /// @brief Method LogLastError addr 0x2b03468 size 0x6c virtual false final false
  static inline void LogLastError();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRuntime(OpenXRRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRuntime(OpenXRRuntime const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRRuntime();

public:
  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRRuntime, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRRuntime*, "UnityEngine.XR.OpenXR", "OpenXRRuntime");
