#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSampleProvider)
namespace UnityEngine::Experimental::Audio {
class __AudioSampleProvider__SampleFramesHandler;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Experimental::Audio {
class AudioSampleProvider;
}
namespace UnityEngine::Experimental::Audio {
class __AudioSampleProvider__SampleFramesHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Audio::AudioSampleProvider);
MARK_REF_PTR_T(::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler);
// Type: ::SampleFramesHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15609))
// CS Name: ::AudioSampleProvider::SampleFramesHandler*
class CORDL_TYPE __AudioSampleProvider__SampleFramesHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2c9d310 size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2c9d440 size 0x14 virtual true final false
  inline void Invoke(::UnityEngine::Experimental::Audio::AudioSampleProvider* provider, uint32_t sampleFrameCount);

  // Ctor Parameters [CppParam { name: "", ty: "__AudioSampleProvider__SampleFramesHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioSampleProvider__SampleFramesHandler(__AudioSampleProvider__SampleFramesHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioSampleProvider__SampleFramesHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioSampleProvider__SampleFramesHandler(__AudioSampleProvider__SampleFramesHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioSampleProvider__SampleFramesHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Audio
// Type: UnityEngine.Experimental.Audio::AudioSampleProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15610))
// CS Name: ::UnityEngine.Experimental.Audio::AudioSampleProvider*
class CORDL_TYPE AudioSampleProvider : public ::System::Object {
public:
  // Declarations
  using SampleFramesHandler = ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler;

  /// @brief Field sampleFramesAvailable, offset 0x10, size 0x8
  __declspec(property(get = __get_sampleFramesAvailable, put = __set_sampleFramesAvailable))::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* sampleFramesAvailable;

  /// @brief Field sampleFramesOverflow, offset 0x18, size 0x8
  __declspec(property(get = __get_sampleFramesOverflow, put = __set_sampleFramesOverflow))::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* sampleFramesOverflow;

  constexpr ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*& __get_sampleFramesAvailable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*> const& __get_sampleFramesAvailable() const;

  constexpr void __set_sampleFramesAvailable(::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* value);

  constexpr ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*& __get_sampleFramesOverflow();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*> const& __get_sampleFramesOverflow() const;

  constexpr void __set_sampleFramesOverflow(::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* value);

  /// @brief Method InvokeSampleFramesAvailable addr 0x2c9d2c0 size 0x28 virtual false final false
  inline void InvokeSampleFramesAvailable(int32_t sampleFrameCount);

  /// @brief Method InvokeSampleFramesOverflow addr 0x2c9d2e8 size 0x28 virtual false final false
  inline void InvokeSampleFramesOverflow(int32_t droppedSampleFrameCount);

  // Ctor Parameters [CppParam { name: "", ty: "AudioSampleProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSampleProvider(AudioSampleProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSampleProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSampleProvider(AudioSampleProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSampleProvider();

public:
  /// @brief Field sampleFramesAvailable, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* ___sampleFramesAvailable;

  /// @brief Field sampleFramesOverflow, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* ___sampleFramesOverflow;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Audio::AudioSampleProvider, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Audio
NEED_NO_BOX(::UnityEngine::Experimental::Audio::AudioSampleProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Audio::AudioSampleProvider*, "UnityEngine.Experimental.Audio", "AudioSampleProvider");
NEED_NO_BOX(::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*, "UnityEngine.Experimental.Audio", "AudioSampleProvider/SampleFramesHandler");
