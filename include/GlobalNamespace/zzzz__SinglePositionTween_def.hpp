#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
CORDL_MODULE_EXPORT(SinglePositionTween)
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
class SinglePositionTween;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SinglePositionTween);
// Type: ::SinglePositionTween
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10046), inst: 405 }), TypeDefinitionIndex(TypeDefinitionIndex(10422)),
// TypeDefinitionIndex(TypeDefinitionIndex(10276)), TypeDefinitionIndex(TypeDefinitionIndex(10046))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6017)) CS Name: ::SinglePositionTween*
class CORDL_TYPE SinglePositionTween : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field transformReference, offset 0x18, size 0x10
  __declspec(property(get = __get_transformReference, put = __set_transformReference))::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> transformReference;

  /// @brief Field template, offset 0x28, size 0x8
  __declspec(property(get = __get__cordl_template, put = __set__cordl_template))::GlobalNamespace::CustomTweenBehaviour* _cordl_template;

  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

  constexpr ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>& __get_transformReference();

  constexpr ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> const& __get_transformReference() const;

  constexpr void __set_transformReference(::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> value);

  constexpr ::GlobalNamespace::CustomTweenBehaviour*& __get__cordl_template();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomTweenBehaviour*> const& __get__cordl_template() const;

  constexpr void __set__cordl_template(::GlobalNamespace::CustomTweenBehaviour* value);

  /// @brief Method get_clipCaps, addr 0x2317b2c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method CreatePlayable, addr 0x2317b34, size 0x1c4, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::GlobalNamespace::SinglePositionTween* New_ctor();

  /// @brief Method .ctor, addr 0x2317cf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SinglePositionTween", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinglePositionTween(SinglePositionTween&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinglePositionTween", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinglePositionTween(SinglePositionTween const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinglePositionTween();

public:
  /// @brief Field transformReference, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> ___transformReference;

  /// @brief Field template, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::CustomTweenBehaviour* ____cordl_template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SinglePositionTween, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePositionTween, ___transformReference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePositionTween, ____cordl_template) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SinglePositionTween);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SinglePositionTween*, "", "SinglePositionTween");
