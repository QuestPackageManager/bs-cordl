#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(GhostEffectAsset)
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace GlobalNamespace {
class GhostEffectBehaviour;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostEffectAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GhostEffectAsset);
// Type: ::GhostEffectAsset
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10046)), TypeDefinitionIndex(TypeDefinitionIndex(6015)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10046), inst:
// 1763 }), TypeDefinitionIndex(TypeDefinitionIndex(10422)), TypeDefinitionIndex(TypeDefinitionIndex(6019))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6013)) CS Name: ::GhostEffectAsset*
class CORDL_TYPE GhostEffectAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field _ghostEffectType, offset 0x18, size 0x4
  __declspec(property(get = __get__ghostEffectType, put = __set__ghostEffectType))::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType _ghostEffectType;

  /// @brief Field arrayReference, offset 0x20, size 0x10
  __declspec(property(get = __get_arrayReference, put = __set_arrayReference))::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> arrayReference;

  /// @brief Field template, offset 0x30, size 0x8
  __declspec(property(get = __get__cordl_template, put = __set__cordl_template))::GlobalNamespace::GhostEffectBehaviour* _cordl_template;

  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType& __get__ghostEffectType();

  constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const& __get__ghostEffectType() const;

  constexpr void __set__ghostEffectType(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType value);

  constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>& __get_arrayReference();

  constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> const& __get_arrayReference() const;

  constexpr void __set_arrayReference(::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> value);

  constexpr ::GlobalNamespace::GhostEffectBehaviour*& __get__cordl_template();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostEffectBehaviour*> const& __get__cordl_template() const;

  constexpr void __set__cordl_template(::GlobalNamespace::GhostEffectBehaviour* value);

  /// @brief Method get_clipCaps addr 0x2316234 size 0x8 virtual true final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method CreatePlayable addr 0x231623c size 0x13c virtual true final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::GlobalNamespace::GhostEffectAsset* New_ctor();

  /// @brief Method .ctor addr 0x2316378 size 0x1008 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GhostEffectAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GhostEffectAsset(GhostEffectAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GhostEffectAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GhostEffectAsset(GhostEffectAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GhostEffectAsset();

public:
  /// @brief Field _ghostEffectType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType ____ghostEffectType;

  /// @brief Field arrayReference, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> ___arrayReference;

  /// @brief Field template, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GhostEffectBehaviour* ____cordl_template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostEffectAsset, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GhostEffectAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostEffectAsset*, "", "GhostEffectAsset");
