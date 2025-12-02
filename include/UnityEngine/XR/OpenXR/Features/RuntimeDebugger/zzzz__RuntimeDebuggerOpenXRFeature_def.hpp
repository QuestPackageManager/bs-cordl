#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/RuntimeDebugger/RuntimeDebuggerOpenXRFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeDebuggerOpenXRFeature)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::RuntimeDebugger {
class RuntimeDebuggerOpenXRFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature);
// Dependencies System.Guid, UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features::RuntimeDebugger {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature
class CORDL_TYPE RuntimeDebuggerOpenXRFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field cacheSize, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_cacheSize, put = __cordl_internal_set_cacheSize)) uint32_t cacheSize;

  /// @brief Field kEditorToPlayerRequestDebuggerOutput, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kEditorToPlayerRequestDebuggerOutput, put = setStaticF_kEditorToPlayerRequestDebuggerOutput)) ::System::Guid kEditorToPlayerRequestDebuggerOutput;

  /// @brief Field kPlayerToEditorSendDebuggerOutput, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kPlayerToEditorSendDebuggerOutput, put = setStaticF_kPlayerToEditorSendDebuggerOutput)) ::System::Guid kPlayerToEditorSendDebuggerOutput;

  /// @brief Field lutOffset, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_lutOffset, put = __cordl_internal_set_lutOffset)) uint32_t lutOffset;

  /// @brief Field perThreadCacheSize, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_perThreadCacheSize, put = __cordl_internal_set_perThreadCacheSize)) uint32_t perThreadCacheSize;

  /// @brief Method HookGetInstanceProcAddr, addr 0x67d6184, size 0x104, virtual true, abstract: false, final false
  inline ::System::IntPtr HookGetInstanceProcAddr(::System::IntPtr func);

  /// @brief Method Native_EndDataAccess, addr 0x67d62ec, size 0x64, virtual false, abstract: false, final false
  static inline void Native_EndDataAccess();

  /// @brief Method Native_GetDataForRead, addr 0x67d6694, size 0x8c, virtual false, abstract: false, final false
  static inline bool Native_GetDataForRead(::ByRef<::System::IntPtr> ptr, ::ByRef<uint32_t> size);

  /// @brief Method Native_GetLUTData, addr 0x67d6600, size 0x94, virtual false, abstract: false, final false
  static inline void Native_GetLUTData(::ByRef<::System::IntPtr> ptr, ::ByRef<uint32_t> size, uint32_t offset);

  /// @brief Method Native_HookGetInstanceProcAddr, addr 0x67d6350, size 0x94, virtual false, abstract: false, final false
  static inline ::System::IntPtr Native_HookGetInstanceProcAddr(::System::IntPtr func, uint32_t cacheSize, uint32_t perThreadCacheSize);

  /// @brief Method Native_StartDataAccess, addr 0x67d6288, size 0x64, virtual false, abstract: false, final false
  static inline void Native_StartDataAccess();

  static inline ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature* New_ctor();

  /// @brief Method RecvMsg, addr 0x67d63e4, size 0x21c, virtual false, abstract: false, final false
  inline void RecvMsg(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  constexpr uint32_t const& __cordl_internal_get_cacheSize() const;

  constexpr uint32_t& __cordl_internal_get_cacheSize();

  constexpr uint32_t const& __cordl_internal_get_lutOffset() const;

  constexpr uint32_t& __cordl_internal_get_lutOffset();

  constexpr uint32_t const& __cordl_internal_get_perThreadCacheSize() const;

  constexpr uint32_t& __cordl_internal_get_perThreadCacheSize();

  constexpr void __cordl_internal_set_cacheSize(uint32_t value);

  constexpr void __cordl_internal_set_lutOffset(uint32_t value);

  constexpr void __cordl_internal_set_perThreadCacheSize(uint32_t value);

  /// @brief Method .ctor, addr 0x67d6720, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Guid getStaticF_kEditorToPlayerRequestDebuggerOutput();

  static inline ::System::Guid getStaticF_kPlayerToEditorSendDebuggerOutput();

  static inline void setStaticF_kEditorToPlayerRequestDebuggerOutput(::System::Guid value);

  static inline void setStaticF_kPlayerToEditorSendDebuggerOutput(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeDebuggerOpenXRFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeDebuggerOpenXRFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeDebuggerOpenXRFeature(RuntimeDebuggerOpenXRFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeDebuggerOpenXRFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeDebuggerOpenXRFeature(RuntimeDebuggerOpenXRFeature const&) = delete;

  /// @brief Field Library offset 0xffffffff size 0x8
  static constexpr ::ConstString Library{ u"openxr_runtime_debugger" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23302 };

  /// @brief Field cacheSize, offset: 0x50, size: 0x4, def value: None
  uint32_t ___cacheSize;

  /// @brief Field perThreadCacheSize, offset: 0x54, size: 0x4, def value: None
  uint32_t ___perThreadCacheSize;

  /// @brief Field lutOffset, offset: 0x58, size: 0x4, def value: None
  uint32_t ___lutOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature, ___cacheSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature, ___perThreadCacheSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature, ___lutOffset) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature, 0x60>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::RuntimeDebugger
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*, "UnityEngine.XR.OpenXR.Features.RuntimeDebugger", "RuntimeDebuggerOpenXRFeature");
