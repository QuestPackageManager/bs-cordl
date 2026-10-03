#pragma once
// IWYU pragma private; include "UnityEngine/Audio/RootOutputInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RootOutputInstance)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Audio {
struct AudioFormat;
}
namespace UnityEngine::Audio {
struct ChannelBuffer;
}
namespace UnityEngine::Audio {
struct ControlContext;
}
namespace UnityEngine::Audio {
struct ProcessorHeader;
}
namespace UnityEngine::Audio {
template <typename TRealtime> class ProcessorInstance_IControl_1;
}
namespace UnityEngine::Audio {
class ProcessorInstance_IRealtime;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_Pipe;
}
namespace UnityEngine::Audio {
struct ProcessorInstance;
}
namespace UnityEngine::Audio {
struct RealtimeContext;
}
namespace UnityEngine::Audio {
template <typename TRealtime> class RootOutputInstance_IControl_1;
}
namespace UnityEngine::Audio {
class RootOutputInstance_IProcessor;
}
namespace UnityEngine::Audio {
class RootOutputInstance_IRealtime;
}
// Forward declare root types
namespace UnityEngine::Audio {
template <typename TRealtime> class RootOutputInstance_IControl_1;
}
namespace UnityEngine::Audio {
class RootOutputInstance_IProcessor;
}
namespace UnityEngine::Audio {
class RootOutputInstance_IRealtime;
}
namespace UnityEngine::Audio {
struct RootOutputInstance;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Audio::RootOutputInstance_IControl_1);
MARK_REF_T(::UnityEngine::Audio::RootOutputInstance_IProcessor*);
MARK_REF_T(::UnityEngine::Audio::RootOutputInstance_IRealtime*);
MARK_VAL_T(::UnityEngine::Audio::RootOutputInstance);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Audio::RootOutputInstance_IControl_1, "UnityEngine.Audio", "RootOutputInstance/IControl`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::RootOutputInstance_IProcessor*, "UnityEngine.Audio", "RootOutputInstance/IProcessor");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::RootOutputInstance_IRealtime*, "UnityEngine.Audio", "RootOutputInstance/IRealtime");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::RootOutputInstance, "UnityEngine.Audio", "RootOutputInstance");
// [Obsolete("IProcessor has been deprecated. Use IRealtime instead. (UnityUpgradable) -> RootOutputInstance/IRealtime", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.RootOutputInstance/IProcessor
class CORDL_TYPE RootOutputInstance_IProcessor {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "RootOutputInstance_IProcessor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RootOutputInstance_IProcessor(RootOutputInstance_IProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// [JobProducerType(typeof(UnityEngine.Audio.IRootOutputControlExtensions::JobStruct`2<TUserControl, TUserProcessor>))]
// Dependencies
namespace UnityEngine::Audio {
// cpp template
template <typename TRealtime>
// Is value type: false
// CS Name: UnityEngine.Audio.RootOutputInstance/IControl`1<TRealtime>
class CORDL_TYPE RootOutputInstance_IControl_1 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>"
  constexpr operator ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*() noexcept;

  /// @brief Method Configure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Jobs::JobHandle Configure(::UnityEngine::Audio::ControlContext context, ::by_ref<TRealtime> realtime, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat> format);

  /// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>"
  constexpr ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>* i___UnityEngine__Audio__ProcessorInstance_IControl_1_TRealtime_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "RootOutputInstance_IControl_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RootOutputInstance_IControl_1(RootOutputInstance_IControl_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// [JobProducerType(typeof(UnityEngine.Audio.IRootOutputProcessorExtensions::JobStruct`1<TUserProcessor>))]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.RootOutputInstance/IRealtime
class CORDL_TYPE RootOutputInstance_IRealtime {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IRealtime"
  constexpr operator ::UnityEngine::Audio::ProcessorInstance_IRealtime*() noexcept;

  /// @brief Method EarlyProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Jobs::JobHandle EarlyProcessing(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext> context, ::UnityEngine::Audio::ProcessorInstance_Pipe pipe);

  /// @brief Method EndProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndProcessing(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext> context, ::UnityEngine::Audio::ProcessorInstance_Pipe pipe, ::UnityEngine::Audio::ChannelBuffer output);

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Process(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext> context, ::UnityEngine::Audio::ProcessorInstance_Pipe pipe, ::Unity::Jobs::JobHandle input);

  /// @brief Method RemovedFromProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemovedFromProcessing();

  /// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IRealtime"
  constexpr ::UnityEngine::Audio::ProcessorInstance_IRealtime* i___UnityEngine__Audio__ProcessorInstance_IRealtime() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "RootOutputInstance_IRealtime", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RootOutputInstance_IRealtime(RootOutputInstance_IRealtime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies UnityEngine.Audio.ProcessorInstance
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.RootOutputInstance
struct CORDL_TYPE RootOutputInstance {
public:
  // Declarations
  template <typename TRealtime> using IControl_1 = ::UnityEngine::Audio::RootOutputInstance_IControl_1<TRealtime>;

  using IProcessor = ::UnityEngine::Audio::RootOutputInstance_IProcessor;

  using IRealtime = ::UnityEngine::Audio::RootOutputInstance_IRealtime;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>*();

  /// @brief Method Equals, addr 0x6eabb58, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6eabb2c, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Audio::RootOutputInstance other);

  /// @brief Method GetHashCode, addr 0x6eabc3c, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6eabc54, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Audio::ProcessorHeader* header);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>"
  constexpr ::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>* i___System__IEquatable_1___UnityEngine__Audio__RootOutputInstance_();

  /// @brief Method op_Equality, addr 0x6eabbe4, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Audio::RootOutputInstance a, ::UnityEngine::Audio::RootOutputInstance b);

  /// @brief Method op_Implicit, addr 0x6eabb18, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::ProcessorInstance op_Implicit___UnityEngine__Audio__ProcessorInstance(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RootOutputInstance> root);

  /// @brief Method op_Inequality, addr 0x6eabc10, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Audio::RootOutputInstance a, ::UnityEngine::Audio::RootOutputInstance b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RootOutputInstance();

  // Ctor Parameters [CppParam { name: "m_ProcessorInstance", ty: "::UnityEngine::Audio::ProcessorInstance", modifiers: "", def_value: None, comment: None }]
  constexpr RootOutputInstance(::UnityEngine::Audio::ProcessorInstance m_ProcessorInstance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20377 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_ProcessorInstance, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Audio::ProcessorInstance m_ProcessorInstance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::RootOutputInstance, m_ProcessorInstance) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::RootOutputInstance) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
