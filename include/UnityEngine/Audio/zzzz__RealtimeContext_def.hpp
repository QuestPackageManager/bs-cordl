#pragma once
// IWYU pragma private; include "UnityEngine/Audio/RealtimeContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Audio/zzzz__RealtimeAccess_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RealtimeContext)
namespace Unity::Audio {
struct Handle;
}
namespace UnityEngine::Audio {
struct ChannelBuffer;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Arguments;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Result;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_AvailableData;
}
namespace UnityEngine::Audio {
class ProcessorInstance_IContext;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct RealtimeContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::RealtimeContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::RealtimeContext, "UnityEngine.Audio", "RealtimeContext");
// Dependencies UnityEngine.Audio.RealtimeAccess
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.RealtimeContext
struct CORDL_TYPE RealtimeContext {
public:
  // Declarations
  __declspec(property(get = get_dspTime)) uint64_t dspTime;

  __declspec(property(get = get_isCreated)) bool isCreated;

  /// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IContext"
  constexpr operator ::UnityEngine::Audio::ProcessorInstance_IContext*();

  /// [IsReadOnly]
  /// @brief Method Process, addr 0x6eabdb4, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::GeneratorInstance_Result Process(::UnityEngine::Audio::GeneratorInstance generatorInstance, ::UnityEngine::Audio::ChannelBuffer buffer,
                                                                ::UnityEngine::Audio::GeneratorInstance_Arguments args);

  /// @brief Method UnityEngine.Audio.ProcessorInstance.IContext.GetAvailableData, addr 0x6eabc98, size 0x54, virtual true, abstract: false, final true
  inline ::UnityEngine::Audio::ProcessorInstance_AvailableData UnityEngine_Audio_ProcessorInstance_IContext_GetAvailableData(::Unity::Audio::Handle handle);

  /// @brief Method UnityEngine.Audio.ProcessorInstance.IContext.SendData, addr 0x6eabd30, size 0x84, virtual true, abstract: false, final true
  inline bool UnityEngine_Audio_ProcessorInstance_IContext_SendData(::Unity::Audio::Handle handle, void* data, int32_t size, int32_t align, int64_t typehash);

  /// [IsReadOnly]
  /// @brief Method get_dspTime, addr 0x6eabc70, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_dspTime();

  /// [IsReadOnly]
  /// @brief Method get_isCreated, addr 0x6eabc78, size 0x10, virtual false, abstract: false, final false
  inline bool get_isCreated();

  /// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IContext"
  constexpr ::UnityEngine::Audio::ProcessorInstance_IContext* i___UnityEngine__Audio__ProcessorInstance_IContext();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RealtimeContext();

  // Ctor Parameters [CppParam { name: "Access", ty: "::UnityEngine::Audio::RealtimeAccess", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DSPClock", ty: "uint64_t", modifiers:
  // "", def_value: None, comment: None }]
  constexpr RealtimeContext(::UnityEngine::Audio::RealtimeAccess Access, uint64_t m_DSPClock) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20378 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Access, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Audio::RealtimeAccess Access;

  /// @brief Field m_DSPClock, offset: 0x10, size: 0x8, def value: None
  uint64_t m_DSPClock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::RealtimeContext, Access) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::RealtimeContext, m_DSPClock) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::RealtimeContext) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
