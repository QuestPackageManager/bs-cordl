#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ArrayPositionTween)
namespace GlobalNamespace {
class CustomTweenBehaviour;
}
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
// CS Name: ::ArrayPositionTween*
class CORDL_TYPE ArrayPositionTween : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field template, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_template, put = __cordl_internal_set__cordl_template))::GlobalNamespace::CustomTweenBehaviour* _cordl_template;

  /// @brief Field arrayReference, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_arrayReference,
                      put = __cordl_internal_set_arrayReference))::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>> arrayReference;

  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Field elementDelay, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_elementDelay, put = __cordl_internal_set_elementDelay)) float_t elementDelay;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method CreatePlayable, addr 0x240ff5c, size 0x144, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::GlobalNamespace::ArrayPositionTween* New_ctor();

  constexpr ::GlobalNamespace::CustomTweenBehaviour*& __cordl_internal_get__cordl_template();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomTweenBehaviour*> const& __cordl_internal_get__cordl_template() const;

  constexpr ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>> const& __cordl_internal_get_arrayReference() const;

  constexpr ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>>& __cordl_internal_get_arrayReference();

  constexpr float_t const& __cordl_internal_get_elementDelay() const;

  constexpr float_t& __cordl_internal_get_elementDelay();

  constexpr void __cordl_internal_set__cordl_template(::GlobalNamespace::CustomTweenBehaviour* value);

  constexpr void __cordl_internal_set_arrayReference(::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>> value);

  constexpr void __cordl_internal_set_elementDelay(float_t value);

  /// @brief Method .ctor, addr 0x24100a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x240ff54, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayPositionTween();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayPositionTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayPositionTween(ArrayPositionTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPositionTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayPositionTween(ArrayPositionTween const&) = delete;

  /// @brief Field arrayReference, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>> ___arrayReference;

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
