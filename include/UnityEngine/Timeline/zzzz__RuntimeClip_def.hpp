#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeClipBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RuntimeClip)
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class RuntimeClip;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::RuntimeClip);
// Type: UnityEngine.Timeline::RuntimeClip
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13883)), TypeDefinitionIndex(TypeDefinitionIndex(10428))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13882))
// CS Name: ::UnityEngine.Timeline::RuntimeClip*
class CORDL_TYPE RuntimeClip : public ::UnityEngine::Timeline::RuntimeClipBase {
public:
  // Declarations
  /// @brief Field m_Clip, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Clip, put = __set_m_Clip))::UnityEngine::Timeline::TimelineClip* m_Clip;

  /// @brief Field m_Playable, offset 0x20, size 0x10
  __declspec(property(get = __get_m_Playable, put = __set_m_Playable))::UnityEngine::Playables::Playable m_Playable;

  /// @brief Field m_ParentMixer, offset 0x30, size 0x10
  __declspec(property(get = __get_m_ParentMixer, put = __set_m_ParentMixer))::UnityEngine::Playables::Playable m_ParentMixer;

  __declspec(property(get = get_start)) double_t start;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_clip))::UnityEngine::Timeline::TimelineClip* clip;

  __declspec(property(get = get_mixer))::UnityEngine::Playables::Playable mixer;

  __declspec(property(get = get_playable))::UnityEngine::Playables::Playable playable;

  __declspec(property(put = set_enable)) bool enable;

  constexpr ::UnityEngine::Timeline::TimelineClip*& __get_m_Clip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::TimelineClip*> const& __get_m_Clip() const;

  constexpr void __set_m_Clip(::UnityEngine::Timeline::TimelineClip* value);

  constexpr ::UnityEngine::Playables::Playable& __get_m_Playable();

  constexpr ::UnityEngine::Playables::Playable const& __get_m_Playable() const;

  constexpr void __set_m_Playable(::UnityEngine::Playables::Playable value);

  constexpr ::UnityEngine::Playables::Playable& __get_m_ParentMixer();

  constexpr ::UnityEngine::Playables::Playable const& __get_m_ParentMixer() const;

  constexpr void __set_m_ParentMixer(::UnityEngine::Playables::Playable value);

  /// @brief Method get_start, addr 0x2c6798c, size 0x2c, virtual true, abstract: false, final false
  inline double_t get_start();

  /// @brief Method get_duration, addr 0x2c679b8, size 0x18, virtual true, abstract: false, final false
  inline double_t get_duration();

  static inline ::UnityEngine::Timeline::RuntimeClip* New_ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable,
                                                               ::UnityEngine::Playables::Playable parentMixer);

  /// @brief Method .ctor, addr 0x2c52174, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer);

  /// @brief Method Create, addr 0x2c679d8, size 0x84, virtual false, abstract: false, final false
  inline void Create(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer);

  /// @brief Method get_clip, addr 0x2c67a5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip* get_clip();

  /// @brief Method get_mixer, addr 0x2c67a64, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable get_mixer();

  /// @brief Method get_playable, addr 0x2c67a70, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable get_playable();

  /// @brief Method set_enable, addr 0x2c67a7c, size 0x134, virtual true, abstract: false, final false
  inline void set_enable(bool value);

  /// @brief Method SetTime, addr 0x2c67bb0, size 0x58, virtual false, abstract: false, final false
  inline void SetTime(double_t time);

  /// @brief Method SetDuration, addr 0x2c67c08, size 0x58, virtual false, abstract: false, final false
  inline void SetDuration(double_t duration);

  /// @brief Method EvaluateAt, addr 0x2c67c60, size 0x1f8, virtual true, abstract: false, final false
  inline void EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method DisableAt, addr 0x2c67e58, size 0x158, virtual true, abstract: false, final false
  inline void DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData);

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeClip(RuntimeClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeClip(RuntimeClip const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeClip();

public:
  /// @brief Field m_Clip, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Timeline::TimelineClip* ___m_Clip;

  /// @brief Field m_Playable, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_Playable;

  /// @brief Field m_ParentMixer, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_ParentMixer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::RuntimeClip, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::RuntimeClip, ___m_Clip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::RuntimeClip, ___m_Playable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::RuntimeClip, ___m_ParentMixer) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::RuntimeClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::RuntimeClip*, "UnityEngine.Timeline", "RuntimeClip");
