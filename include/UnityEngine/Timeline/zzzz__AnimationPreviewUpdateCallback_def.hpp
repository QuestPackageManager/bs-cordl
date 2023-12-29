#pragma once
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
class IAnimationWindowPreview;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationPreviewUpdateCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationPreviewUpdateCallback);
// Type: UnityEngine.Timeline::AnimationPreviewUpdateCallback
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15128)), TypeDefinitionIndex(TypeDefinitionIndex(10357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14107))
// CS Name: ::UnityEngine.Timeline::AnimationPreviewUpdateCallback*
class CORDL_TYPE AnimationPreviewUpdateCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Output, offset 0x10, size 0x10
  __declspec(property(get = __get_m_Output, put = __set_m_Output))::UnityEngine::Animations::AnimationPlayableOutput m_Output;

  /// @brief Field m_Graph, offset 0x20, size 0x10
  __declspec(property(get = __get_m_Graph, put = __set_m_Graph))::UnityEngine::Playables::PlayableGraph m_Graph;

  /// @brief Field m_PreviewComponents, offset 0x30, size 0x8
  __declspec(property(get = __get_m_PreviewComponents,
                      put = __set_m_PreviewComponents))::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* m_PreviewComponents;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
  constexpr operator ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept;

  constexpr ::UnityEngine::Animations::AnimationPlayableOutput& __get_m_Output();

  constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& __get_m_Output() const;

  constexpr void __set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput value);

  constexpr ::UnityEngine::Playables::PlayableGraph& __get_m_Graph();

  constexpr ::UnityEngine::Playables::PlayableGraph const& __get_m_Graph() const;

  constexpr void __set_m_Graph(::UnityEngine::Playables::PlayableGraph value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>*& __get_m_PreviewComponents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>*> const& __get_m_PreviewComponents() const;

  constexpr void __set_m_PreviewComponents(::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* value);

  static inline ::UnityEngine::Timeline::AnimationPreviewUpdateCallback* New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output);

  /// @brief Method .ctor addr 0x2accbc4 size 0xc8 virtual false final false
  inline void _ctor(::UnityEngine::Animations::AnimationPlayableOutput output);

  /// @brief Method Evaluate addr 0x2accc8c size 0x1d4 virtual true final true
  inline void Evaluate();

  /// @brief Method FetchPreviewComponents addr 0x2acce60 size 0x124 virtual false final false
  inline void FetchPreviewComponents();

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPreviewUpdateCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationPreviewUpdateCallback(AnimationPreviewUpdateCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPreviewUpdateCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationPreviewUpdateCallback(AnimationPreviewUpdateCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPreviewUpdateCallback();

public:
  /// @brief Field m_Output, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Animations::AnimationPlayableOutput ___m_Output;

  /// @brief Field m_Graph, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableGraph ___m_Graph;

  /// @brief Field m_PreviewComponents, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* ___m_PreviewComponents;

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
