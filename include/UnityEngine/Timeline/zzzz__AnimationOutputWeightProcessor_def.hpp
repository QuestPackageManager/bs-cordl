#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationMotionXToDeltaPlayable_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationOutputWeightProcessor)
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Timeline {
struct __AnimationOutputWeightProcessor__WeightInfo;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationOutputWeightProcessor;
}
namespace UnityEngine::Timeline {
struct __AnimationOutputWeightProcessor__WeightInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationOutputWeightProcessor);
MARK_VAL_T(::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo);
// Type: ::WeightInfo
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10428))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13829))
// CS Name: ::AnimationOutputWeightProcessor::WeightInfo
struct CORDL_TYPE __AnimationOutputWeightProcessor__WeightInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "mixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: None }, CppParam { name: "parentMixer", ty: "::UnityEngine::Playables::Playable",
  // modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AnimationOutputWeightProcessor__WeightInfo(::UnityEngine::Playables::Playable mixer, ::UnityEngine::Playables::Playable parentMixer, int32_t port) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnimationOutputWeightProcessor__WeightInfo();

  /// @brief Field mixer, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable mixer;

  /// @brief Field parentMixer, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable parentMixer;

  /// @brief Field port, offset: 0x20, size: 0x4, def value: None
  int32_t port;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::AnimationOutputWeightProcessor
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14898)), TypeDefinitionIndex(TypeDefinitionIndex(14901)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13830))
// CS Name: ::UnityEngine.Timeline::AnimationOutputWeightProcessor*
class CORDL_TYPE AnimationOutputWeightProcessor : public ::System::Object {
public:
  // Declarations
  using WeightInfo = ::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo;

  /// @brief Field m_Output, offset 0x10, size 0x10
  __declspec(property(get = __get_m_Output, put = __set_m_Output))::UnityEngine::Animations::AnimationPlayableOutput m_Output;

  /// @brief Field m_MotionXPlayable, offset 0x20, size 0x10
  __declspec(property(get = __get_m_MotionXPlayable, put = __set_m_MotionXPlayable))::UnityEngine::Animations::AnimationMotionXToDeltaPlayable m_MotionXPlayable;

  /// @brief Field m_Mixers, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Mixers, put = __set_m_Mixers))::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>* m_Mixers;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
  constexpr operator ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept;

  constexpr ::UnityEngine::Animations::AnimationPlayableOutput& __get_m_Output();

  constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& __get_m_Output() const;

  constexpr void __set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput value);

  constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable& __get_m_MotionXPlayable();

  constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable const& __get_m_MotionXPlayable() const;

  constexpr void __set_m_MotionXPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*& __get_m_Mixers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*> const& __get_m_Mixers() const;

  constexpr void __set_m_Mixers(::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>* value);

  static inline ::UnityEngine::Timeline::AnimationOutputWeightProcessor* New_ctor(::UnityEngine::Animations::AnimationPlayableOutput output);

  /// @brief Method .ctor addr 0x2c4f358 size 0xc0 virtual false final false
  inline void _ctor(::UnityEngine::Animations::AnimationPlayableOutput output);

  /// @brief Method FindMixers addr 0x2c4f418 size 0xe8 virtual false final false
  inline void FindMixers();

  /// @brief Method FindMixers addr 0x2c4f500 size 0x2c8 virtual false final false
  inline void FindMixers(::UnityEngine::Playables::Playable parent, int32_t port, ::UnityEngine::Playables::Playable node);

  /// @brief Method Evaluate addr 0x2c4f7c8 size 0x13c virtual true final true
  inline void Evaluate();

  // Ctor Parameters [CppParam { name: "", ty: "AnimationOutputWeightProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationOutputWeightProcessor(AnimationOutputWeightProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationOutputWeightProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationOutputWeightProcessor(AnimationOutputWeightProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationOutputWeightProcessor();

public:
  /// @brief Field m_Output, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Animations::AnimationPlayableOutput ___m_Output;

  /// @brief Field m_MotionXPlayable, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable ___m_MotionXPlayable;

  /// @brief Field m_Mixers, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>* ___m_Mixers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationOutputWeightProcessor, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AnimationOutputWeightProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationOutputWeightProcessor*, "UnityEngine.Timeline", "AnimationOutputWeightProcessor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo, "UnityEngine.Timeline", "AnimationOutputWeightProcessor/WeightInfo");
