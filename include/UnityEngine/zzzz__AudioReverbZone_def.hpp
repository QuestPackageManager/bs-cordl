#pragma once
// IWYU pragma private; include "UnityEngine/AudioReverbZone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReverbZone)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct AudioReverbPreset;
}
// Forward declare root types
namespace UnityEngine {
class AudioReverbZone;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioReverbZone);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioReverbZone
class CORDL_TYPE AudioReverbZone : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_HFReference, put=set_HFReference)) float_t  HFReference;

 __declspec(property(get=get_LFReference, put=set_LFReference)) float_t  LFReference;

 __declspec(property(get=get_decayHFRatio, put=set_decayHFRatio)) float_t  decayHFRatio;

 __declspec(property(get=get_decayTime, put=set_decayTime)) float_t  decayTime;

 __declspec(property(get=get_density, put=set_density)) float_t  density;

 __declspec(property(get=get_diffusion, put=set_diffusion)) float_t  diffusion;

 __declspec(property(get=get_maxDistance, put=set_maxDistance)) float_t  maxDistance;

 __declspec(property(get=get_minDistance, put=set_minDistance)) float_t  minDistance;

 __declspec(property(get=get_reflections, put=set_reflections)) int32_t  reflections;

 __declspec(property(get=get_reflectionsDelay, put=set_reflectionsDelay)) float_t  reflectionsDelay;

 __declspec(property(get=get_reverb, put=set_reverb)) int32_t  reverb;

 __declspec(property(get=get_reverbDelay, put=set_reverbDelay)) float_t  reverbDelay;

 __declspec(property(get=get_reverbPreset, put=set_reverbPreset)) ::UnityEngine::AudioReverbPreset  reverbPreset;

 __declspec(property(get=get_room, put=set_room)) int32_t  room;

 __declspec(property(get=get_roomHF, put=set_roomHF)) int32_t  roomHF;

 __declspec(property(get=get_roomLF, put=set_roomLF)) int32_t  roomLF;

 __declspec(property(get=get_roomRolloffFactor, put=set_roomRolloffFactor)) float_t  roomRolloffFactor;

static inline ::UnityEngine::AudioReverbZone* New_ctor() ;

/// @brief Method .ctor, addr 0x68f8ba4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HFReference, addr 0x68f845c, size 0x80, virtual false, abstract: false, final false
inline float_t get_HFReference() ;

/// @brief Method get_HFReference_Injected, addr 0x68f84dc, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_HFReference_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_LFReference, addr 0x68f85f4, size 0x80, virtual false, abstract: false, final false
inline float_t get_LFReference() ;

/// @brief Method get_LFReference_Injected, addr 0x68f8674, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_LFReference_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_decayHFRatio, addr 0x68f7c74, size 0x80, virtual false, abstract: false, final false
inline float_t get_decayHFRatio() ;

/// @brief Method get_decayHFRatio_Injected, addr 0x68f7cf4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_decayHFRatio_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_decayTime, addr 0x68f7adc, size 0x80, virtual false, abstract: false, final false
inline float_t get_decayTime() ;

/// @brief Method get_decayTime_Injected, addr 0x68f7b5c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_decayTime_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_density, addr 0x68f8a0c, size 0x80, virtual false, abstract: false, final false
inline float_t get_density() ;

/// @brief Method get_density_Injected, addr 0x68f8a8c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_density_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_diffusion, addr 0x68f8874, size 0x80, virtual false, abstract: false, final false
inline float_t get_diffusion() ;

/// @brief Method get_diffusion_Injected, addr 0x68f88f4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_diffusion_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_maxDistance, addr 0x68f7304, size 0x80, virtual false, abstract: false, final false
inline float_t get_maxDistance() ;

/// @brief Method get_maxDistance_Injected, addr 0x68f7384, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_maxDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_minDistance, addr 0x68f716c, size 0x80, virtual false, abstract: false, final false
inline float_t get_minDistance() ;

/// @brief Method get_minDistance_Injected, addr 0x68f71ec, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_minDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_reflections, addr 0x68f7e0c, size 0x80, virtual false, abstract: false, final false
inline int32_t get_reflections() ;

/// @brief Method get_reflectionsDelay, addr 0x68f7f9c, size 0x80, virtual false, abstract: false, final false
inline float_t get_reflectionsDelay() ;

/// @brief Method get_reflectionsDelay_Injected, addr 0x68f801c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_reflectionsDelay_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_reflections_Injected, addr 0x68f7e8c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_reflections_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_reverb, addr 0x68f8134, size 0x80, virtual false, abstract: false, final false
inline int32_t get_reverb() ;

/// @brief Method get_reverbDelay, addr 0x68f82c4, size 0x80, virtual false, abstract: false, final false
inline float_t get_reverbDelay() ;

/// @brief Method get_reverbDelay_Injected, addr 0x68f8344, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_reverbDelay_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_reverbPreset, addr 0x68f749c, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::AudioReverbPreset get_reverbPreset() ;

/// @brief Method get_reverbPreset_Injected, addr 0x68f751c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AudioReverbPreset get_reverbPreset_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_reverb_Injected, addr 0x68f81b4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_reverb_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_room, addr 0x68f762c, size 0x80, virtual false, abstract: false, final false
inline int32_t get_room() ;

/// @brief Method get_roomHF, addr 0x68f77bc, size 0x80, virtual false, abstract: false, final false
inline int32_t get_roomHF() ;

/// @brief Method get_roomHF_Injected, addr 0x68f783c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_roomHF_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_roomLF, addr 0x68f794c, size 0x80, virtual false, abstract: false, final false
inline int32_t get_roomLF() ;

/// @brief Method get_roomLF_Injected, addr 0x68f79cc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_roomLF_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_roomRolloffFactor, addr 0x68f878c, size 0x78, virtual false, abstract: false, final false
inline float_t get_roomRolloffFactor() ;

/// @brief Method get_room_Injected, addr 0x68f76ac, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_room_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_HFReference, addr 0x68f8518, size 0x90, virtual false, abstract: false, final false
inline void set_HFReference(float_t  value) ;

/// @brief Method set_HFReference_Injected, addr 0x68f85a8, size 0x4c, virtual false, abstract: false, final false
static inline void set_HFReference_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_LFReference, addr 0x68f86b0, size 0x90, virtual false, abstract: false, final false
inline void set_LFReference(float_t  value) ;

/// @brief Method set_LFReference_Injected, addr 0x68f8740, size 0x4c, virtual false, abstract: false, final false
static inline void set_LFReference_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_decayHFRatio, addr 0x68f7d30, size 0x90, virtual false, abstract: false, final false
inline void set_decayHFRatio(float_t  value) ;

/// @brief Method set_decayHFRatio_Injected, addr 0x68f7dc0, size 0x4c, virtual false, abstract: false, final false
static inline void set_decayHFRatio_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_decayTime, addr 0x68f7b98, size 0x90, virtual false, abstract: false, final false
inline void set_decayTime(float_t  value) ;

/// @brief Method set_decayTime_Injected, addr 0x68f7c28, size 0x4c, virtual false, abstract: false, final false
static inline void set_decayTime_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_density, addr 0x68f8ac8, size 0x90, virtual false, abstract: false, final false
inline void set_density(float_t  value) ;

/// @brief Method set_density_Injected, addr 0x68f8b58, size 0x4c, virtual false, abstract: false, final false
static inline void set_density_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_diffusion, addr 0x68f8930, size 0x90, virtual false, abstract: false, final false
inline void set_diffusion(float_t  value) ;

/// @brief Method set_diffusion_Injected, addr 0x68f89c0, size 0x4c, virtual false, abstract: false, final false
static inline void set_diffusion_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_maxDistance, addr 0x68f73c0, size 0x90, virtual false, abstract: false, final false
inline void set_maxDistance(float_t  value) ;

/// @brief Method set_maxDistance_Injected, addr 0x68f7450, size 0x4c, virtual false, abstract: false, final false
static inline void set_maxDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_minDistance, addr 0x68f7228, size 0x90, virtual false, abstract: false, final false
inline void set_minDistance(float_t  value) ;

/// @brief Method set_minDistance_Injected, addr 0x68f72b8, size 0x4c, virtual false, abstract: false, final false
static inline void set_minDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_reflections, addr 0x68f7ec8, size 0x90, virtual false, abstract: false, final false
inline void set_reflections(int32_t  value) ;

/// @brief Method set_reflectionsDelay, addr 0x68f8058, size 0x90, virtual false, abstract: false, final false
inline void set_reflectionsDelay(float_t  value) ;

/// @brief Method set_reflectionsDelay_Injected, addr 0x68f80e8, size 0x4c, virtual false, abstract: false, final false
static inline void set_reflectionsDelay_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_reflections_Injected, addr 0x68f7f58, size 0x44, virtual false, abstract: false, final false
static inline void set_reflections_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_reverb, addr 0x68f81f0, size 0x90, virtual false, abstract: false, final false
inline void set_reverb(int32_t  value) ;

/// @brief Method set_reverbDelay, addr 0x68f8380, size 0x90, virtual false, abstract: false, final false
inline void set_reverbDelay(float_t  value) ;

/// @brief Method set_reverbDelay_Injected, addr 0x68f8410, size 0x4c, virtual false, abstract: false, final false
static inline void set_reverbDelay_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_reverbPreset, addr 0x68f7558, size 0x90, virtual false, abstract: false, final false
inline void set_reverbPreset(::UnityEngine::AudioReverbPreset  value) ;

/// @brief Method set_reverbPreset_Injected, addr 0x68f75e8, size 0x44, virtual false, abstract: false, final false
static inline void set_reverbPreset_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AudioReverbPreset  value) ;

/// @brief Method set_reverb_Injected, addr 0x68f8280, size 0x44, virtual false, abstract: false, final false
static inline void set_reverb_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_room, addr 0x68f76e8, size 0x90, virtual false, abstract: false, final false
inline void set_room(int32_t  value) ;

/// @brief Method set_roomHF, addr 0x68f7878, size 0x90, virtual false, abstract: false, final false
inline void set_roomHF(int32_t  value) ;

/// @brief Method set_roomHF_Injected, addr 0x68f7908, size 0x44, virtual false, abstract: false, final false
static inline void set_roomHF_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_roomLF, addr 0x68f7a08, size 0x90, virtual false, abstract: false, final false
inline void set_roomLF(int32_t  value) ;

/// @brief Method set_roomLF_Injected, addr 0x68f7a98, size 0x44, virtual false, abstract: false, final false
static inline void set_roomLF_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_roomRolloffFactor, addr 0x68f8804, size 0x70, virtual false, abstract: false, final false
inline void set_roomRolloffFactor(float_t  value) ;

/// @brief Method set_room_Injected, addr 0x68f7778, size 0x44, virtual false, abstract: false, final false
static inline void set_room_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReverbZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReverbZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReverbZone(AudioReverbZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReverbZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReverbZone(AudioReverbZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20599};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioReverbZone, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AudioReverbZone);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioReverbZone*, "UnityEngine", "AudioReverbZone");
