#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationPreviewUpdateCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
CORDL_MODULE_EXPORT(AnimationPreviewUpdateCallback)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Animations {
class IAnimationWindowPreview;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationPreviewUpdateCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationPreviewUpdateCallback);
// Type: UnityEngine.Timeline::AnimationPreviewUpdateCallback
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::AnimationPreviewUpdateCallback*
class CORDL_TYPE AnimationPreviewUpdateCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Graph, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Graph, put = __cordl_internal_set_m_Graph)) ::UnityEngine::Playables::PlayableGraph m_Graph;

  /// @brief Field m_Output, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Output, put = __cordl_internal_set_m_Output)) ::UnityEngine::Animations::AnimationPlayableOutput m_Output;

  /// @brief Field m_PreviewComponents, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviewComponents,
                      put = __cordl_internal_set_m_PreviewComponents)) ::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* m_PreviewComponents;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
  constexpr operator ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept;

  /// @brief Method Evaluate, addr 0x47ab59c, size 0x1e4, virtual true, abstract: false, final true
  inline void Evaluate();

  /// @brief Method FetchPreviewComponents, addr 0x47ab780, size 0x12c, virtual false, abstract: false, final false
  inline void FetchPreviewComponents();

  static inline ::UnityEngine::Timeline::AnimationPreviewUpdateCallback* New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output);

  constexpr ::UnityEngine::Playables::PlayableGraph const& __cordl_internal_get_m_Graph() const;

  constexpr ::UnityEngine::Playables::PlayableGraph& __cordl_internal_get_m_Graph();

  constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& __cordl_internal_get_m_Output() const;

  constexpr ::UnityEngine::Animations::AnimationPlayableOutput& __cordl_internal_get_m_Output();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>*& __cordl_internal_get_m_PreviewComponents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>*> const& __cordl_internal_get_m_PreviewComponents() const;

  constexpr void __cordl_internal_set_m_Graph(::UnityEngine::Playables::PlayableGraph value);

  constexpr void __cordl_internal_set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput value);

  constexpr void __cordl_internal_set_m_PreviewComponents(::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* value);

  /// @brief Method .ctor, addr 0x47ab4d4, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Animations::AnimationPlayableOutput output);

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
  constexpr ::UnityEngine::Timeline::ITimelineEvaluateCallback* i___UnityEngine__Timeline__ITimelineEvaluateCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPreviewUpdateCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationPreviewUpdateCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationPreviewUpdateCallback(AnimationPreviewUpdateCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPreviewUpdateCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationPreviewUpdateCallback(AnimationPreviewUpdateCallback const&) = delete;

  /// @brief Field m_Output, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Animations::AnimationPlayableOutput ___m_Output;

  /// @brief Field m_Graph, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableGraph ___m_Graph;

  /// @brief Field m_PreviewComponents, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* ___m_PreviewComponents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15759 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationPreviewUpdateCallback, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPreviewUpdateCallback, ___m_Output) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPreviewUpdateCallback, ___m_Graph) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AnimationPreviewUpdateCallback, ___m_PreviewComponents) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AnimationPreviewUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationPreviewUpdateCallback*, "UnityEngine.Timeline", "AnimationPreviewUpdateCallback");
