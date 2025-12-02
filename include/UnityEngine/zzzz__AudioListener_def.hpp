#pragma once
// IWYU pragma private; include "UnityEngine/AudioListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioListener)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct AudioVelocityUpdateMode;
}
namespace UnityEngine {
struct FFTWindow;
}
// Forward declare root types
namespace UnityEngine {
class AudioListener;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioListener);
// Dependencies UnityEngine.AudioBehaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioListener
class CORDL_TYPE AudioListener : public ::UnityEngine::AudioBehaviour {
public:
  // Declarations
  __declspec(property(get = get_velocityUpdateMode, put = set_velocityUpdateMode)) ::UnityEngine::AudioVelocityUpdateMode velocityUpdateMode;

  /// @brief Method GetOutputData, addr 0x6816a84, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetOutputData(int32_t numSamples, int32_t channel);

  /// @brief Method GetOutputData, addr 0x6816af0, size 0x4, virtual false, abstract: false, final false
  static inline void GetOutputData(::ArrayW<float_t, ::Array<float_t>*> samples, int32_t channel);

  /// @brief Method GetOutputDataHelper, addr 0x6816544, size 0x128, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper(::ByRef<::ArrayW<float_t, ::Array<float_t>*>> samples, int32_t channel);

  /// @brief Method GetOutputDataHelper_Injected, addr 0x681666c, size 0x44, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper_Injected(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel);

  /// @brief Method GetSpectrumData, addr 0x6816af4, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> GetSpectrumData(int32_t numSamples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumData, addr 0x6816b68, size 0x4, virtual false, abstract: false, final false
  static inline void GetSpectrumData(::ArrayW<float_t, ::Array<float_t>*> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumDataHelper, addr 0x68166b0, size 0x12c, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper(::ByRef<::ArrayW<float_t, ::Array<float_t>*>> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method GetSpectrumDataHelper_Injected, addr 0x68167dc, size 0x54, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper_Injected(::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  static inline ::UnityEngine::AudioListener* New_ctor();

  /// @brief Method .ctor, addr 0x6816b6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pause, addr 0x6816890, size 0x28, virtual false, abstract: false, final false
  static inline bool get_pause();

  /// @brief Method get_velocityUpdateMode, addr 0x68168f4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode();

  /// @brief Method get_velocityUpdateMode_Injected, addr 0x6816974, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volume, addr 0x6816830, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_volume();

  /// @brief Method set_pause, addr 0x68168b8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_pause(bool value);

  /// @brief Method set_velocityUpdateMode, addr 0x68169b0, size 0x90, virtual false, abstract: false, final false
  inline void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value);

  /// @brief Method set_velocityUpdateMode_Injected, addr 0x6816a40, size 0x44, virtual false, abstract: false, final false
  static inline void set_velocityUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::AudioVelocityUpdateMode value);

  /// @brief Method set_volume, addr 0x6816858, size 0x38, virtual false, abstract: false, final false
  static inline void set_volume(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioListener(AudioListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioListener(AudioListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20553 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioListener, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioListener);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioListener*, "UnityEngine", "AudioListener");
