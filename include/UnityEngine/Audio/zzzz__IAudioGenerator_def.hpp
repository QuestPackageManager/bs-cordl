#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IAudioGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IAudioGenerator)
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::Audio {
struct AudioFormat;
}
namespace UnityEngine::Audio {
struct ControlContext;
}
namespace UnityEngine::Audio {
class GeneratorInstance_ICapabilities;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
struct IAudioGenerator_Serializable;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_CreationParameters;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Audio {
class IAudioGenerator;
}
namespace UnityEngine::Audio {
struct IAudioGenerator_Serializable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::IAudioGenerator*);
MARK_VAL_T(::UnityEngine::Audio::IAudioGenerator_Serializable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IAudioGenerator*, "UnityEngine.Audio", "IAudioGenerator");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IAudioGenerator_Serializable, "UnityEngine.Audio", "IAudioGenerator/Serializable");
// [UsedByNativeCode]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.IAudioGenerator
class CORDL_TYPE IAudioGenerator {
public:
  // Declarations
  using Serializable = ::UnityEngine::Audio::IAudioGenerator_Serializable;

  /// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
  constexpr operator ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept;

  /// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Audio::GeneratorInstance CreateInstance(::UnityEngine::Audio::ControlContext context, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat> nestedFormat,
                                                                ::UnityEngine::Audio::ProcessorInstance_CreationParameters creationParameters);

  /// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
  constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAudioGenerator", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAudioGenerator(IAudioGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
// Dependencies UnityEngine.Audio.IAudioGenerator, UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.IAudioGenerator/Serializable
struct CORDL_TYPE IAudioGenerator_Serializable {
public:
  // Declarations
  __declspec(property(get = get_definition, put = set_definition)) ::UnityEngine::Audio::IAudioGenerator* definition;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Audio::IAudioGenerator*>)
  inline T Get();

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Audio::IAudioGenerator*>)
  inline void Set(T value);

  /// @brief Method .ctor, addr 0x6eac064, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Audio::IAudioGenerator* audioGenerator);

  /// @brief Method get_definition, addr 0x6eabf5c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::IAudioGenerator* get_definition();

  /// @brief Method set_definition, addr 0x6eabfa8, size 0xbc, virtual false, abstract: false, final false
  inline void set_definition(::UnityEngine::Audio::IAudioGenerator* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IAudioGenerator_Serializable();

  // Ctor Parameters [CppParam { name: "Reference", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: None, comment: None }]
  constexpr IAudioGenerator_Serializable(::UnityW<::UnityEngine::Object> Reference) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20379 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [SerializeField]
  /// @brief Field Reference, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> Reference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::IAudioGenerator_Serializable, Reference) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::IAudioGenerator_Serializable) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Audio
