#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderDebugPrintManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderDebugPrintManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ShaderDebugPrintInput;
}
namespace UnityEngine::Rendering {
struct ShaderDebugPrintManager_DebugValueType;
}
namespace UnityEngine::Rendering {
class ShaderDebugPrintManager_Profiling;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderDebugPrintManager_DebugValueType;
}
namespace UnityEngine::Rendering {
class ShaderDebugPrintManager;
}
namespace UnityEngine::Rendering {
class ShaderDebugPrintManager_Profiling;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType);
MARK_REF_PTR_T(::UnityEngine::Rendering::ShaderDebugPrintManager);
MARK_REF_PTR_T(::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ShaderDebugPrintManager/Profiling
class CORDL_TYPE ShaderDebugPrintManager_Profiling : public ::System::Object {
public:
  // Declarations
  /// @brief Field BufferReadComplete, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BufferReadComplete, put = setStaticF_BufferReadComplete)) ::UnityEngine::Rendering::ProfilingSampler* BufferReadComplete;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_BufferReadComplete();

  static inline void setStaticF_BufferReadComplete(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderDebugPrintManager_Profiling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderDebugPrintManager_Profiling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderDebugPrintManager_Profiling(ShaderDebugPrintManager_Profiling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderDebugPrintManager_Profiling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderDebugPrintManager_Profiling(ShaderDebugPrintManager_Profiling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12025 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderDebugPrintManager/DebugValueType
struct CORDL_TYPE ShaderDebugPrintManager_DebugValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShaderDebugPrintManager_DebugValueType_Unwrapped
  enum struct __ShaderDebugPrintManager_DebugValueType_Unwrapped : int32_t {
    __E_TypeUint = static_cast<int32_t>(0x1),
    __E_TypeInt = static_cast<int32_t>(0x2),
    __E_TypeFloat = static_cast<int32_t>(0x3),
    __E_TypeUint2 = static_cast<int32_t>(0x4),
    __E_TypeInt2 = static_cast<int32_t>(0x5),
    __E_TypeFloat2 = static_cast<int32_t>(0x6),
    __E_TypeUint3 = static_cast<int32_t>(0x7),
    __E_TypeInt3 = static_cast<int32_t>(0x8),
    __E_TypeFloat3 = static_cast<int32_t>(0x9),
    __E_TypeUint4 = static_cast<int32_t>(0xa),
    __E_TypeInt4 = static_cast<int32_t>(0xb),
    __E_TypeFloat4 = static_cast<int32_t>(0xc),
    __E_TypeBool = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShaderDebugPrintManager_DebugValueType_Unwrapped() const noexcept {
    return static_cast<__ShaderDebugPrintManager_DebugValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderDebugPrintManager_DebugValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderDebugPrintManager_DebugValueType(int32_t value__) noexcept;

  /// @brief Field TypeBool value: I32(13)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeBool;

  /// @brief Field TypeFloat value: I32(3)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeFloat;

  /// @brief Field TypeFloat2 value: I32(6)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeFloat2;

  /// @brief Field TypeFloat3 value: I32(9)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeFloat3;

  /// @brief Field TypeFloat4 value: I32(12)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeFloat4;

  /// @brief Field TypeInt value: I32(2)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeInt;

  /// @brief Field TypeInt2 value: I32(5)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeInt2;

  /// @brief Field TypeInt3 value: I32(8)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeInt3;

  /// @brief Field TypeInt4 value: I32(11)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeInt4;

  /// @brief Field TypeUint value: I32(1)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeUint;

  /// @brief Field TypeUint2 value: I32(4)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeUint2;

  /// @brief Field TypeUint3 value: I32(7)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeUint3;

  /// @brief Field TypeUint4 value: I32(10)
  static ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType const TypeUint4;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12026 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ShaderDebugPrintManager
class CORDL_TYPE ShaderDebugPrintManager : public ::System::Object {
public:
  // Declarations
  using DebugValueType = ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType;

  using Profiling = ::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling;

  /// @brief Field m_BufferReadCompleteAction, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BufferReadCompleteAction,
                      put = __cordl_internal_set_m_BufferReadCompleteAction)) ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* m_BufferReadCompleteAction;

  /// @brief Field m_FrameCleared, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FrameCleared, put = __cordl_internal_set_m_FrameCleared)) bool m_FrameCleared;

  /// @brief Field m_FrameCounter, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FrameCounter, put = __cordl_internal_set_m_FrameCounter)) int32_t m_FrameCounter;

  /// @brief Field m_OutputAction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OutputAction, put = __cordl_internal_set_m_OutputAction)) ::System::Action_1<::StringW>* m_OutputAction;

  /// @brief Field m_OutputBuffers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OutputBuffers, put = __cordl_internal_set_m_OutputBuffers)) ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* m_OutputBuffers;

  /// @brief Field m_OutputLine, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OutputLine, put = __cordl_internal_set_m_OutputLine)) ::StringW m_OutputLine;

  /// @brief Field m_ReadbackRequests, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReadbackRequests,
                      put = __cordl_internal_set_m_ReadbackRequests)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* m_ReadbackRequests;

  /// @brief Field m_ShaderPropertyIDInputFrame, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_ShaderPropertyIDInputFrame, put = setStaticF_m_ShaderPropertyIDInputFrame)) int32_t m_ShaderPropertyIDInputFrame;

  /// @brief Field m_ShaderPropertyIDInputMouse, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_ShaderPropertyIDInputMouse, put = setStaticF_m_ShaderPropertyIDInputMouse)) int32_t m_ShaderPropertyIDInputMouse;

  /// @brief Field m_shaderDebugOutputData, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_shaderDebugOutputData, put = setStaticF_m_shaderDebugOutputData)) int32_t m_shaderDebugOutputData;

  __declspec(property(put = set_outputAction)) ::System::Action_1<::StringW>* outputAction;

  __declspec(property(get = get_outputLine)) ::StringW outputLine;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::Rendering::ShaderDebugPrintManager* s_Instance;

  /// @brief Method BufferReadComplete, addr 0x654f950, size 0x10c0, virtual false, abstract: false, final false
  inline void BufferReadComplete(::UnityEngine::Rendering::AsyncGPUReadbackRequest request);

  /// @brief Method ClearShaderDebugPrintBuffer, addr 0x654f858, size 0xf8, virtual false, abstract: false, final false
  inline void ClearShaderDebugPrintBuffer();

  /// @brief Method DebugValueTypeToElemSize, addr 0x654f2a0, size 0x24, virtual false, abstract: false, final false
  inline int32_t DebugValueTypeToElemSize(::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType type);

  /// @brief Method DefaultOutput, addr 0x6550bbc, size 0x5c, virtual false, abstract: false, final false
  inline void DefaultOutput(::StringW line);

  /// @brief Method EndFrame, addr 0x6550a10, size 0xc4, virtual false, abstract: false, final false
  inline void EndFrame();

  static inline ::UnityEngine::Rendering::ShaderDebugPrintManager* New_ctor();

  /// @brief Method PrintImmediate, addr 0x6550ad4, size 0xd8, virtual false, abstract: false, final false
  inline void PrintImmediate();

  /// @brief Method SetShaderDebugPrintBindings, addr 0x654f6e4, size 0x174, virtual false, abstract: false, final false
  inline void SetShaderDebugPrintBindings(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method SetShaderDebugPrintInputConstants, addr 0x654f618, size 0xcc, virtual false, abstract: false, final false
  inline void SetShaderDebugPrintInputConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ShaderDebugPrintInput input);

  constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* const& __cordl_internal_get_m_BufferReadCompleteAction() const;

  constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*& __cordl_internal_get_m_BufferReadCompleteAction();

  constexpr bool const& __cordl_internal_get_m_FrameCleared() const;

  constexpr bool& __cordl_internal_get_m_FrameCleared();

  constexpr int32_t const& __cordl_internal_get_m_FrameCounter() const;

  constexpr int32_t& __cordl_internal_get_m_FrameCounter();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_m_OutputAction() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_m_OutputAction();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* const& __cordl_internal_get_m_OutputBuffers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>*& __cordl_internal_get_m_OutputBuffers();

  constexpr ::StringW const& __cordl_internal_get_m_OutputLine() const;

  constexpr ::StringW& __cordl_internal_get_m_OutputLine();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* const& __cordl_internal_get_m_ReadbackRequests() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*& __cordl_internal_get_m_ReadbackRequests();

  constexpr void __cordl_internal_set_m_BufferReadCompleteAction(::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* value);

  constexpr void __cordl_internal_set_m_FrameCleared(bool value);

  constexpr void __cordl_internal_set_m_FrameCounter(int32_t value);

  constexpr void __cordl_internal_set_m_OutputAction(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_OutputBuffers(::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* value);

  constexpr void __cordl_internal_set_m_OutputLine(::StringW value);

  constexpr void __cordl_internal_set_m_ReadbackRequests(::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* value);

  /// @brief Method .ctor, addr 0x654f2c4, size 0x2f8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_m_ShaderPropertyIDInputFrame();

  static inline int32_t getStaticF_m_ShaderPropertyIDInputMouse();

  static inline int32_t getStaticF_m_shaderDebugOutputData();

  static inline ::UnityEngine::Rendering::ShaderDebugPrintManager* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x654f5bc, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShaderDebugPrintManager* get_instance();

  /// @brief Method get_outputLine, addr 0x6550bac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_outputLine();

  static inline void setStaticF_m_ShaderPropertyIDInputFrame(int32_t value);

  static inline void setStaticF_m_ShaderPropertyIDInputMouse(int32_t value);

  static inline void setStaticF_m_shaderDebugOutputData(int32_t value);

  static inline void setStaticF_s_Instance(::UnityEngine::Rendering::ShaderDebugPrintManager* value);

  /// @brief Method set_outputAction, addr 0x6550bb4, size 0x8, virtual false, abstract: false, final false
  inline void set_outputAction(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderDebugPrintManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderDebugPrintManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderDebugPrintManager(ShaderDebugPrintManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderDebugPrintManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderDebugPrintManager(ShaderDebugPrintManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12027 };

  /// @brief Field k_FramesInFlight offset 0xffffffff size 0x4
  static constexpr int32_t k_FramesInFlight{ static_cast<int32_t>(0x4) };

  /// @brief Field k_MaxBufferElements offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxBufferElements{ static_cast<int32_t>(0x4000) };

  /// @brief Field k_TypeHasTag offset 0xffffffff size 0x4
  static constexpr uint32_t k_TypeHasTag{ static_cast<uint32_t>(0x80u) };

  /// @brief Field m_OutputBuffers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* ___m_OutputBuffers;

  /// @brief Field m_ReadbackRequests, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* ___m_ReadbackRequests;

  /// @brief Field m_BufferReadCompleteAction, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* ___m_BufferReadCompleteAction;

  /// @brief Field m_FrameCounter, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_FrameCounter;

  /// @brief Field m_FrameCleared, offset: 0x2c, size: 0x1, def value: None
  bool ___m_FrameCleared;

  /// @brief Field m_OutputLine, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_OutputLine;

  /// @brief Field m_OutputAction, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___m_OutputAction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_OutputBuffers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_ReadbackRequests) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_BufferReadCompleteAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_FrameCounter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_FrameCleared) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_OutputLine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_OutputAction) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderDebugPrintManager, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType, "UnityEngine.Rendering", "ShaderDebugPrintManager/DebugValueType");
NEED_NO_BOX(::UnityEngine::Rendering::ShaderDebugPrintManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderDebugPrintManager*, "UnityEngine.Rendering", "ShaderDebugPrintManager");
NEED_NO_BOX(::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling*, "UnityEngine.Rendering", "ShaderDebugPrintManager/Profiling");
