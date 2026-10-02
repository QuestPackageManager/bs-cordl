#pragma once
// IWYU pragma private; include "UnityEngine/Audio/GeneratorInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeneratorInstance)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
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
struct GeneratorInstance_Arguments;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Configuration;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_GeneratorHeader;
}
namespace UnityEngine::Audio {
class GeneratorInstance_ICapabilities;
}
namespace UnityEngine::Audio {
template <typename TRealtime> class GeneratorInstance_IControl_1;
}
namespace UnityEngine::Audio {
class GeneratorInstance_IProcessor;
}
namespace UnityEngine::Audio {
class GeneratorInstance_IRealtime;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Properties;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Result;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Setup;
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
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Forward declare root types
namespace UnityEngine::Audio {
class GeneratorInstance_ICapabilities;
}
namespace UnityEngine::Audio {
template <typename TRealtime> class GeneratorInstance_IControl_1;
}
namespace UnityEngine::Audio {
class GeneratorInstance_IProcessor;
}
namespace UnityEngine::Audio {
class GeneratorInstance_IRealtime;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Arguments;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Configuration;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_GeneratorHeader;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Properties;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Result;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Setup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::GeneratorInstance_ICapabilities*);
MARK_GEN_REF_T_PTR(::UnityEngine::Audio::GeneratorInstance_IControl_1);
MARK_REF_T(::UnityEngine::Audio::GeneratorInstance_IProcessor*);
MARK_REF_T(::UnityEngine::Audio::GeneratorInstance_IRealtime*);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_Arguments);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_Configuration);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_Properties);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_Result);
MARK_VAL_T(::UnityEngine::Audio::GeneratorInstance_Setup);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_ICapabilities*, "UnityEngine.Audio", "GeneratorInstance/ICapabilities");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Audio::GeneratorInstance_IControl_1, "UnityEngine.Audio", "GeneratorInstance/IControl`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_IProcessor*, "UnityEngine.Audio", "GeneratorInstance/IProcessor");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_IRealtime*, "UnityEngine.Audio", "GeneratorInstance/IRealtime");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance, "UnityEngine.Audio", "GeneratorInstance");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_Arguments, "UnityEngine.Audio", "GeneratorInstance/Arguments");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_Configuration, "UnityEngine.Audio", "GeneratorInstance/Configuration");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader, "UnityEngine.Audio", "GeneratorInstance/GeneratorHeader");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_Properties, "UnityEngine.Audio", "GeneratorInstance/Properties");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_Result, "UnityEngine.Audio", "GeneratorInstance/Result");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::GeneratorInstance_Setup, "UnityEngine.Audio", "GeneratorInstance/Setup");
// [Obsolete("IProcessor has been deprecated. Use IRealtime instead. (UnityUpgradable) -> GeneratorInstance/IRealtime", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.GeneratorInstance/IProcessor
class CORDL_TYPE GeneratorInstance_IProcessor {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "GeneratorInstance_IProcessor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneratorInstance_IProcessor(GeneratorInstance_IProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20344 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.GeneratorInstance/ICapabilities
class CORDL_TYPE GeneratorInstance_ICapabilities {
public:
  // Declarations
  __declspec(property(get = get_isFinite)) bool isFinite;

  __declspec(property(get = get_isRealtime)) bool isRealtime;

  __declspec(property(get = get_length)) ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> length;

  /// @brief Method get_isFinite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isFinite();

  /// @brief Method get_isRealtime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isRealtime();

  /// @brief Method get_length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> get_length();

  // Ctor Parameters [CppParam { name: "", ty: "GeneratorInstance_ICapabilities", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneratorInstance_ICapabilities(GeneratorInstance_ICapabilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// [IsReadOnly]
// Dependencies UnityEngine.AudioSpeakerMode
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/Setup
struct CORDL_TYPE GeneratorInstance_Setup {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6eab73c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat> fromFormat);

  /// @brief Method .ctor, addr 0x6eab734, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioSpeakerMode speakerMode, int32_t sampleRate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratorInstance_Setup();

  // Ctor Parameters [CppParam { name: "speakerMode", ty: "::UnityEngine::AudioSpeakerMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "sampleRate", ty: "int32_t", modifiers:
  // "", def_value: None, comment: None }]
  constexpr GeneratorInstance_Setup(::UnityEngine::AudioSpeakerMode speakerMode, int32_t sampleRate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20346 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field speakerMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::AudioSpeakerMode speakerMode;

  /// @brief Field sampleRate, offset: 0x4, size: 0x4, def value: None
  int32_t sampleRate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Setup, speakerMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Setup, sampleRate) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_Setup) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/Properties
struct CORDL_TYPE GeneratorInstance_Properties {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratorInstance_Properties();

  // Ctor Parameters [CppParam { name: "m_Reserved", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
  constexpr GeneratorInstance_Properties(uint8_t m_Reserved) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20347 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field m_Reserved, offset: 0x0, size: 0x1, def value: None
  uint8_t m_Reserved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Properties, m_Reserved) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_Properties) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies Unity.IntegerTime.DiscreteTime, UnityEngine.Audio.GeneratorInstance::Properties, UnityEngine.Audio.GeneratorInstance::Setup
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/Configuration
struct CORDL_TYPE GeneratorInstance_Configuration {
public:
  // Declarations
  __declspec(property(get = get_isFinite)) bool isFinite;

  __declspec(property(get = get_isRealtime)) bool isRealtime;

  __declspec(property(get = get_length)) ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> length;

  __declspec(property(get = get_properties)) ::UnityEngine::Audio::GeneratorInstance_Properties properties;

  __declspec(property(get = get_setup)) ::UnityEngine::Audio::GeneratorInstance_Setup setup;

  /// @brief Method get_isFinite, addr 0x6eab75c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFinite();

  /// @brief Method get_isRealtime, addr 0x6eab764, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRealtime();

  /// @brief Method get_length, addr 0x6eab76c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> get_length();

  /// @brief Method get_properties, addr 0x6eab754, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::GeneratorInstance_Properties get_properties();

  /// @brief Method get_setup, addr 0x6eab74c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::GeneratorInstance_Setup get_setup();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratorInstance_Configuration();

  // Ctor Parameters [CppParam { name: "Setup", ty: "::UnityEngine::Audio::GeneratorInstance_Setup", modifiers: "", def_value: None, comment: None }, CppParam { name: "Properties", ty:
  // "::UnityEngine::Audio::GeneratorInstance_Properties", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReportedLength", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "IsFinite", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsRealtime", ty: "bool", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "HasKnownLength", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr GeneratorInstance_Configuration(::UnityEngine::Audio::GeneratorInstance_Setup Setup, ::UnityEngine::Audio::GeneratorInstance_Properties Properties,
                                            ::Unity::IntegerTime::DiscreteTime ReportedLength, bool IsFinite, bool IsRealtime, bool HasKnownLength) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20348 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Setup, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Audio::GeneratorInstance_Setup Setup;

  /// @brief Field Properties, offset: 0x8, size: 0x1, def value: None
  ::UnityEngine::Audio::GeneratorInstance_Properties Properties;

  /// @brief Field ReportedLength, offset: 0x10, size: 0x8, def value: None
  ::Unity::IntegerTime::DiscreteTime ReportedLength;

  /// @brief Field IsFinite, offset: 0x18, size: 0x1, def value: None
  bool IsFinite;

  /// @brief Field IsRealtime, offset: 0x19, size: 0x1, def value: None
  bool IsRealtime;

  /// @brief Field HasKnownLength, offset: 0x1a, size: 0x1, def value: None
  bool HasKnownLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, Setup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, Properties) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, ReportedLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, IsFinite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, IsRealtime) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Configuration, HasKnownLength) == 0x1a, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_Configuration) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Audio
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/Result
struct CORDL_TYPE GeneratorInstance_Result {
public:
  // Declarations
  __declspec(property(get = get_processedFrames)) int32_t processedFrames;

  /// @brief Method get_processedFrames, addr 0x6eab7c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_processedFrames();

  /// @brief Method op_Implicit, addr 0x6eab7d0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::GeneratorInstance_Result op_Implicit___UnityEngine__Audio__GeneratorInstance_Result(int32_t processedFrames);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratorInstance_Result();

  // Ctor Parameters [CppParam { name: "m_ProcessedFrames", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GeneratorInstance_Result(int32_t m_ProcessedFrames) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20349 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_ProcessedFrames, offset: 0x0, size: 0x4, def value: None
  int32_t m_ProcessedFrames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Result, m_ProcessedFrames) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_Result) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Audio
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/Arguments
struct CORDL_TYPE GeneratorInstance_Arguments {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratorInstance_Arguments();

  // Ctor Parameters [CppParam { name: "Speed", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr GeneratorInstance_Arguments(float_t Speed) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20350 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Speed, offset: 0x0, size: 0x4, def value: None
  float_t Speed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_Arguments, Speed) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_Arguments) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Audio
// [JobProducerType(typeof(UnityEngine.Audio.IGeneratorControlExtensions::JobStruct`2<TUserControl, TUserProcessor>))]
// Dependencies
namespace UnityEngine::Audio {
// cpp template
template <typename TRealtime>
// Is value type: false
// CS Name: UnityEngine.Audio.GeneratorInstance/IControl`1<TRealtime>
class CORDL_TYPE GeneratorInstance_IControl_1 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>"
  constexpr operator ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*() noexcept;

  /// @brief Method Configure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Configure(::UnityEngine::Audio::ControlContext context, ::by_ref<TRealtime> realtime, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat> format,
                        ::by_ref<::UnityEngine::Audio::GeneratorInstance_Setup> setup, ::by_ref<::UnityEngine::Audio::GeneratorInstance_Properties> properties);

  /// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>"
  constexpr ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>* i___UnityEngine__Audio__ProcessorInstance_IControl_1_TRealtime_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "GeneratorInstance_IControl_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneratorInstance_IControl_1(GeneratorInstance_IControl_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// [JobProducerType(typeof(UnityEngine.Audio.IGeneratorProcessorExtensions::JobStruct`1<TUserProcessor>))]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.GeneratorInstance/IRealtime
class CORDL_TYPE GeneratorInstance_IRealtime {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
  constexpr operator ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IRealtime"
  constexpr operator ::UnityEngine::Audio::ProcessorInstance_IRealtime*() noexcept;

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Audio::GeneratorInstance_Result Process(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext> context, ::UnityEngine::Audio::ProcessorInstance_Pipe pipe,
                                                                ::UnityEngine::Audio::ChannelBuffer buffer, ::UnityEngine::Audio::GeneratorInstance_Arguments args);

  /// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
  constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept;

  /// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IRealtime"
  constexpr ::UnityEngine::Audio::ProcessorInstance_IRealtime* i___UnityEngine__Audio__ProcessorInstance_IRealtime() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "GeneratorInstance_IRealtime", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneratorInstance_IRealtime(GeneratorInstance_IRealtime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20352 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// [RequiredByNativeCode]
// [NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/GeneratorHandle.h")]
// Dependencies UnityEngine.Audio.GeneratorInstance::Configuration, UnityEngine.Audio.ProcessorHeader
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance/GeneratorHeader
struct CORDL_TYPE GeneratorInstance_GeneratorHeader {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratorInstance_GeneratorHeader();

  // Ctor Parameters [CppParam { name: "Processor", ty: "::UnityEngine::Audio::ProcessorHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "Configuration", ty:
  // "::UnityEngine::Audio::GeneratorInstance_Configuration", modifiers: "", def_value: None, comment: None }]
  constexpr GeneratorInstance_GeneratorHeader(::UnityEngine::Audio::ProcessorHeader Processor, ::UnityEngine::Audio::GeneratorInstance_Configuration Configuration) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20353 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field Processor, offset: 0x0, size: 0x38, def value: None
  ::UnityEngine::Audio::ProcessorHeader Processor;

  /// @brief Field Configuration, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::Audio::GeneratorInstance_Configuration Configuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader, Processor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader, Configuration) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader) == 0x58, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies UnityEngine.Audio.ProcessorInstance
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.GeneratorInstance
struct CORDL_TYPE GeneratorInstance {
public:
  // Declarations
  using Arguments = ::UnityEngine::Audio::GeneratorInstance_Arguments;

  using Configuration = ::UnityEngine::Audio::GeneratorInstance_Configuration;

  using GeneratorHeader = ::UnityEngine::Audio::GeneratorInstance_GeneratorHeader;

  using ICapabilities = ::UnityEngine::Audio::GeneratorInstance_ICapabilities;

  template <typename TRealtime> using IControl_1 = ::UnityEngine::Audio::GeneratorInstance_IControl_1<TRealtime>;

  using IProcessor = ::UnityEngine::Audio::GeneratorInstance_IProcessor;

  using IRealtime = ::UnityEngine::Audio::GeneratorInstance_IRealtime;

  using Properties = ::UnityEngine::Audio::GeneratorInstance_Properties;

  using Result = ::UnityEngine::Audio::GeneratorInstance_Result;

  using Setup = ::UnityEngine::Audio::GeneratorInstance_Setup;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>*();

  /// [Obsolete("GeneratorInstance.Configure has been deprecated. Use ControlContext.Configure instead.", true)]
  /// @brief Method Configure, addr 0x6eab500, size 0x38, virtual false, abstract: false, final false
  inline void Configure(::UnityEngine::Audio::ControlContext context, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat> format);

  /// @brief Method Equals, addr 0x6eab614, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6eab5bc, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Audio::GeneratorInstance other);

  /// @brief Method GetHashCode, addr 0x6eab6f8, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [Obsolete("GeneratorInstance.Process has been deprecated. Use RealtimeContext.Process instead.", true)]
  /// @brief Method Process, addr 0x6eab570, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::GeneratorInstance_Result Process(::UnityEngine::Audio::RealtimeContext context, ::UnityEngine::Audio::ChannelBuffer buffer,
                                                                ::UnityEngine::Audio::GeneratorInstance_Arguments args);

  /// [Obsolete("GeneratorInstance.Update has been deprecated. Use ControlContext.Update instead.", true)]
  /// @brief Method Update, addr 0x6eab538, size 0x38, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Audio::ControlContext context);

  /// @brief Method .ctor, addr 0x6e9f058, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader* header);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>"
  constexpr ::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>* i___System__IEquatable_1___UnityEngine__Audio__GeneratorInstance_();

  /// @brief Method op_Equality, addr 0x6eab6a0, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Audio::GeneratorInstance a, ::UnityEngine::Audio::GeneratorInstance b);

  /// @brief Method op_Implicit, addr 0x6eab5a8, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::ProcessorInstance op_Implicit___UnityEngine__Audio__ProcessorInstance(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::GeneratorInstance> generatorInstance);

  /// @brief Method op_Inequality, addr 0x6eab6cc, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Audio::GeneratorInstance a, ::UnityEngine::Audio::GeneratorInstance b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratorInstance();

  // Ctor Parameters [CppParam { name: "m_ProcessorInstance", ty: "::UnityEngine::Audio::ProcessorInstance", modifiers: "", def_value: None, comment: None }]
  constexpr GeneratorInstance(::UnityEngine::Audio::ProcessorInstance m_ProcessorInstance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20354 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_ProcessorInstance, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Audio::ProcessorInstance m_ProcessorInstance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::GeneratorInstance, m_ProcessorInstance) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::GeneratorInstance) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
