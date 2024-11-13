#pragma once
// IWYU pragma private; include "GlobalNamespace/AvatarColorBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AvatarColorBehaviour)
namespace BeatSaber::AvatarCore {
class AvatarVisualController;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarColorBehaviour);
// Type: ::AvatarColorBehaviour
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AvatarColorBehaviour*
class CORDL_TYPE AvatarColorBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field _avatarVisualController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarVisualController, put = __cordl_internal_set__avatarVisualController)) ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController>
      _avatarVisualController;

  /// @brief Field _duration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _easeType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__easeType, put = __cordl_internal_set__easeType)) ::GlobalNamespace::EaseType _easeType;

  /// @brief Field _endColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__endColor, put = __cordl_internal_set__endColor)) ::UnityEngine::Color _endColor;

  /// @brief Field _startColor, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__startColor, put = __cordl_internal_set__startColor)) ::UnityEngine::Color _startColor;

  static inline ::GlobalNamespace::AvatarColorBehaviour* New_ctor();

  /// @brief Method OnGraphStart, addr 0x3ad30dc, size 0x74, virtual true, abstract: false, final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableDestroy, addr 0x3ad3330, size 0x8c, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x3ad3150, size 0x1e0, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController> const& __cordl_internal_get__avatarVisualController() const;

  constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController>& __cordl_internal_get__avatarVisualController();

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__easeType();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__endColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__endColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__startColor();

  constexpr void __cordl_internal_set__avatarVisualController(::UnityW<::BeatSaber::AvatarCore::AvatarVisualController> value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__endColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__startColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x3ad33bc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarColorBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarColorBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarColorBehaviour(AvatarColorBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarColorBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarColorBehaviour(AvatarColorBehaviour const&) = delete;

  /// @brief Field _startColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ____startColor;

  /// @brief Field _endColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____endColor;

  /// @brief Field _easeType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType;

  /// @brief Field _avatarVisualController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController> ____avatarVisualController;

  /// @brief Field _duration, offset: 0x40, size: 0x4, def value: None
  float_t ____duration;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5170 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarColorBehaviour, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarColorBehaviour, ____startColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarColorBehaviour, ____endColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarColorBehaviour, ____easeType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarColorBehaviour, ____avatarVisualController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarColorBehaviour, ____duration) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarColorBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorBehaviour*, "", "AvatarColorBehaviour");
