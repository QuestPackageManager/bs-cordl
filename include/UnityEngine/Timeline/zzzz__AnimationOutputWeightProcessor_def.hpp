#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationOutputWeightProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationMotionXToDeltaPlayable_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationOutputWeightProcessor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct AnimationOutputWeightProcessor_WeightInfo;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationOutputWeightProcessor;
}
namespace UnityEngine::Timeline {
struct AnimationOutputWeightProcessor_WeightInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationOutputWeightProcessor);
MARK_VAL_T(::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo);
// Dependencies UnityEngine.Playables.Playable
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo
struct CORDL_TYPE AnimationOutputWeightProcessor_WeightInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationOutputWeightProcessor_WeightInfo();

  // Ctor Parameters [CppParam { name: "mixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: None }, CppParam { name: "parentMixer", ty: "::UnityEngine::Playables::Playable",
  // modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimationOutputWeightProcessor_WeightInfo(::UnityEngine::Playables::Playable mixer, ::UnityEngine::Playables::Playable parentMixer, int32_t port) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15796 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field mixer, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable mixer;

  /// @brief Field parentMixer, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable parentMixer;

  /// @brief Field port, offset: 0x20, size: 0x4, def value: None
  int32_t port;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo, mixer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo, parentMixer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo, port) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Object, UnityEngine.Animations.AnimationMotionXToDeltaPlayable, UnityEngine.Animations.AnimationPlayableOutput, UnityEngine.Timeline.ITimelineEvaluateCallback
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AnimationOutputWeightProcessor
class CORDL_TYPE AnimationOutputWeightProcessor : public ::System::Object {
public:
  // Declarations
  using WeightInfo = ::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo;

  /// @brief Field m_Mixers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mixers,
                      put = __cordl_internal_set_m_Mixers)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>* m_Mixers;

  /// @brief Field m_MotionXPlayable, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_MotionXPlayable, put = __cordl_internal_set_m_MotionXPlayable)) ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable m_MotionXPlayable;

  /// @brief Field m_Output, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Output, put = __cordl_internal_set_m_Output)) ::UnityEngine::Animations::AnimationPlayableOutput m_Output;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
  constexpr operator ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept;

  /// @brief Method Evaluate, addr 0x480cce8, size 0x160, virtual true, abstract: false, final true
  inline void Evaluate();

  /// @brief Method FindMixers, addr 0x480c90c, size 0xe8, virtual false, abstract: false, final false
  inline void FindMixers();

  /// @brief Method FindMixers, addr 0x480c9f4, size 0x2f4, virtual false, abstract: false, final false
  inline void FindMixers(::UnityEngine::Playables::Playable parent, int32_t port, ::UnityEngine::Playables::Playable node);

  static inline ::UnityEngine::Timeline::AnimationOutputWeightProcessor* New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>* const& __cordl_internal_get_m_Mixers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>*& __cordl_internal_get_m_Mixers();

  constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable const& __cordl_internal_get_m_MotionXPlayable() const;

  constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable& __cordl_internal_get_m_MotionXPlayable();

  constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& __cordl_internal_get_m_Output() const;

  constexpr ::UnityEngine::Animations::AnimationPlayableOutput& __cordl_internal_get_m_Output();

  constexpr void __cordl_internal_set_m_Mixers(::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>* value);

  constexpr void __cordl_internal_set_m_MotionXPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable value);

  constexpr void __cordl_internal_set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput value);

  /// @brief Method .ctor, addr 0x480c84c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animations::AnimationPlayableOutput output);

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
  constexpr ::UnityEngine::Timeline::ITimelineEvaluateCallback* i___UnityEngine__Timeline__ITimelineEvaluateCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationOutputWeightProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationOutputWeightProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationOutputWeightProcessor(AnimationOutputWeightProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationOutputWeightProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationOutputWeightProcessor(AnimationOutputWeightProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15797 };

  /// @brief Field m_Output, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Animations::AnimationPlayableOutput ___m_Output;

  /// @brief Field m_MotionXPlayable, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable ___m_MotionXPlayable;

  /// @brief Field m_Mixers, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo>* ___m_Mixers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AnimationOutputWeightProcessor, ___m_Output) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationOutputWeightProcessor, ___m_MotionXPlayable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationOutputWeightProcessor, ___m_Mixers) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationOutputWeightProcessor, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AnimationOutputWeightProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationOutputWeightProcessor*, "UnityEngine.Timeline", "AnimationOutputWeightProcessor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationOutputWeightProcessor_WeightInfo, "UnityEngine.Timeline", "AnimationOutputWeightProcessor/WeightInfo");
