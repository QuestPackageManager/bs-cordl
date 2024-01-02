#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ArrayPositionTween)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class CustomTweenBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class ArrayPositionTween;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ArrayPositionTween);
// Type: ::ArrayPositionTween
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10046), inst: 1763 }), TypeDefinitionIndex(TypeDefinitionIndex(6019)),
// TypeDefinitionIndex(TypeDefinitionIndex(10422)), TypeDefinitionIndex(TypeDefinitionIndex(10046))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6002)) CS Name: ::ArrayPositionTween*
class CORDL_TYPE ArrayPositionTween : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field arrayReference, offset 0x18, size 0x10
  __declspec(property(get = __get_arrayReference, put = __set_arrayReference))::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> arrayReference;

  /// @brief Field elementDelay, offset 0x28, size 0x4
  __declspec(property(get = __get_elementDelay, put = __set_elementDelay)) float_t elementDelay;

  /// @brief Field template, offset 0x30, size 0x8
  __declspec(property(get = __get__cordl_template, put = __set__cordl_template))::GlobalNamespace::CustomTweenBehaviour* _cordl_template;

  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>& __get_arrayReference();

  constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> const& __get_arrayReference() const;

  constexpr void __set_arrayReference(::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> value);

  constexpr float_t& __get_elementDelay();

  constexpr float_t const& __get_elementDelay() const;

  constexpr void __set_elementDelay(float_t value);

  constexpr ::GlobalNamespace::CustomTweenBehaviour*& __get__cordl_template();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomTweenBehaviour*> const& __get__cordl_template() const;

  constexpr void __set__cordl_template(::GlobalNamespace::CustomTweenBehaviour* value);

  /// @brief Method get_clipCaps, addr 0x2315044, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method CreatePlayable, addr 0x231504c, size 0x144, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::GlobalNamespace::ArrayPositionTween* New_ctor();

  /// @brief Method .ctor, addr 0x2315190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPositionTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayPositionTween(ArrayPositionTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPositionTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayPositionTween(ArrayPositionTween const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayPositionTween();

public:
  /// @brief Field arrayReference, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> ___arrayReference;

  /// @brief Field elementDelay, offset: 0x28, size: 0x4, def value: None
  float_t ___elementDelay;

  /// @brief Field template, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::CustomTweenBehaviour* ____cordl_template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArrayPositionTween, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ArrayPositionTween, ___arrayReference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArrayPositionTween, ___elementDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArrayPositionTween, ____cordl_template) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ArrayPositionTween);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArrayPositionTween*, "", "ArrayPositionTween");
