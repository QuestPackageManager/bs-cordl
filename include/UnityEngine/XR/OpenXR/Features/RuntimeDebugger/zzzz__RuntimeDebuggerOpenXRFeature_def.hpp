#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeDebuggerOpenXRFeature)
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::RuntimeDebugger {
class RuntimeDebuggerOpenXRFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature);
// Type: UnityEngine.XR.OpenXR.Features.RuntimeDebugger::RuntimeDebuggerOpenXRFeature
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::RuntimeDebugger {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(14441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16078))
// CS Name: ::UnityEngine.XR.OpenXR.Features.RuntimeDebugger::RuntimeDebuggerOpenXRFeature*
class CORDL_TYPE RuntimeDebuggerOpenXRFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  /// @brief Field cacheSize, offset 0x50, size 0x4
  __declspec(property(get = __get_cacheSize, put = __set_cacheSize)) uint32_t cacheSize;

  /// @brief Field perThreadCacheSize, offset 0x54, size 0x4
  __declspec(property(get = __get_perThreadCacheSize, put = __set_perThreadCacheSize)) uint32_t perThreadCacheSize;

  /// @brief Field lutOffset, offset 0x58, size 0x4
  __declspec(property(get = __get_lutOffset, put = __set_lutOffset)) uint32_t lutOffset;

  /// @brief Field kEditorToPlayerRequestDebuggerOutput, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kEditorToPlayerRequestDebuggerOutput, put = setStaticF_kEditorToPlayerRequestDebuggerOutput))::System::Guid kEditorToPlayerRequestDebuggerOutput;

  /// @brief Field kPlayerToEditorSendDebuggerOutput, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kPlayerToEditorSendDebuggerOutput, put = setStaticF_kPlayerToEditorSendDebuggerOutput))::System::Guid kPlayerToEditorSendDebuggerOutput;

  constexpr uint32_t& __get_cacheSize();

  constexpr uint32_t const& __get_cacheSize() const;

  constexpr void __set_cacheSize(uint32_t value);

  constexpr uint32_t& __get_perThreadCacheSize();

  constexpr uint32_t const& __get_perThreadCacheSize() const;

  constexpr void __set_perThreadCacheSize(uint32_t value);

  constexpr uint32_t& __get_lutOffset();

  constexpr uint32_t const& __get_lutOffset() const;

  constexpr void __set_lutOffset(uint32_t value);

  static inline void setStaticF_kEditorToPlayerRequestDebuggerOutput(::System::Guid value);

  static inline ::System::Guid getStaticF_kEditorToPlayerRequestDebuggerOutput();

  static inline void setStaticF_kPlayerToEditorSendDebuggerOutput(::System::Guid value);

  static inline ::System::Guid getStaticF_kPlayerToEditorSendDebuggerOutput();

  /// @brief Method HookGetInstanceProcAddr addr 0x2b17a94 size 0xfc virtual true final false
  inline void* HookGetInstanceProcAddr(void* func);

  /// @brief Method RecvMsg addr 0x2b17cec size 0x210 virtual false final false
  inline void RecvMsg(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);

  /// @brief Method Native_HookGetInstanceProcAddr addr 0x2b17c58 size 0x94 virtual false final false
  static inline void* Native_HookGetInstanceProcAddr(void* func, uint32_t cacheSize, uint32_t perThreadCacheSize);

  /// @brief Method Native_GetDataForRead addr 0x2b17f90 size 0x8c virtual false final false
  static inline bool Native_GetDataForRead(ByRef<void*> ptr, ByRef<uint32_t> size);

  /// @brief Method Native_GetLUTData addr 0x2b17efc size 0x94 virtual false final false
  static inline void Native_GetLUTData(ByRef<void*> ptr, ByRef<uint32_t> size, uint32_t offset);

  /// @brief Method Native_StartDataAccess addr 0x2b17b90 size 0x64 virtual false final false
  static inline void Native_StartDataAccess();

  /// @brief Method Native_EndDataAccess addr 0x2b17bf4 size 0x64 virtual false final false
  static inline void Native_EndDataAccess();

  static inline ::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature* New_ctor();

  /// @brief Method .ctor addr 0x2b1801c size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeDebuggerOpenXRFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeDebuggerOpenXRFeature(RuntimeDebuggerOpenXRFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeDebuggerOpenXRFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeDebuggerOpenXRFeature(RuntimeDebuggerOpenXRFeature const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeDebuggerOpenXRFeature();

public:
  /// @brief Field cacheSize, offset: 0x50, size: 0x4, def value: None
  uint32_t ___cacheSize;

  /// @brief Field perThreadCacheSize, offset: 0x54, size: 0x4, def value: None
  uint32_t ___perThreadCacheSize;

  /// @brief Field lutOffset, offset: 0x58, size: 0x4, def value: None
  uint32_t ___lutOffset;

  /// @brief Field Library offset 0xffffffff size 0x8
  static constexpr ::ConstString Library{ u"openxr_runtime_debugger" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature, ___cacheSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature, ___perThreadCacheSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature, ___lutOffset) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::RuntimeDebugger
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::RuntimeDebugger::RuntimeDebuggerOpenXRFeature*, "UnityEngine.XR.OpenXR.Features.RuntimeDebugger", "RuntimeDebuggerOpenXRFeature");
