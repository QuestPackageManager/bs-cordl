#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerScoreItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerScoreItem)
namespace GlobalNamespace {
struct EaseType;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace Tweening {
template <typename T> class Tween_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreItem);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerScoreItem
class CORDL_TYPE MultiplayerScoreItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _nameColorTween, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__nameColorTween, put = __cordl_internal_set__nameColorTween)) ::Tweening::Tween_1<::UnityEngine::Color>* _nameColorTween;

  /// @brief Field _nameText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nameText, put = __cordl_internal_set__nameText)) ::UnityW<::TMPro::TextMeshProUGUI> _nameText;

  /// @brief Field _scoreColorTween, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreColorTween, put = __cordl_internal_set__scoreColorTween)) ::Tweening::Tween_1<::UnityEngine::Color>* _scoreColorTween;

  /// @brief Field _scoreText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreText, put = __cordl_internal_set__scoreText)) ::UnityW<::TMPro::TextMeshProUGUI> _scoreText;

  /// @brief Field _tweeningManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Method AnimateColors, addr 0x3bd30c4, size 0x11c, virtual false, abstract: false, final false
  inline void AnimateColors(::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method Awake, addr 0x3be10f4, size 0x1a8, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::MultiplayerScoreItem* New_ctor();

  /// @brief Method OnDestroy, addr 0x3be129c, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetName, addr 0x3bd38cc, size 0x24, virtual false, abstract: false, final false
  inline void SetName(::StringW text);

  /// @brief Method SetPositionAndRotation, addr 0x3be1324, size 0x78, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetScore, addr 0x3bd3988, size 0x24, virtual false, abstract: false, final false
  inline void SetScore(::StringW text);

  /// @brief Method <Awake>b__5_0, addr 0x3be13a4, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__5_0(::UnityEngine::Color val);

  /// @brief Method <Awake>b__5_1, addr 0x3be13c8, size 0x24, virtual false, abstract: false, final false
  inline void _Awake_b__5_1(::UnityEngine::Color val);

  constexpr ::Tweening::Tween_1<::UnityEngine::Color>* const& __cordl_internal_get__nameColorTween() const;

  constexpr ::Tweening::Tween_1<::UnityEngine::Color>*& __cordl_internal_get__nameColorTween();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText();

  constexpr ::Tweening::Tween_1<::UnityEngine::Color>* const& __cordl_internal_get__scoreColorTween() const;

  constexpr ::Tweening::Tween_1<::UnityEngine::Color>*& __cordl_internal_get__scoreColorTween();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__scoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__scoreText();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__nameColorTween(::Tweening::Tween_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__scoreColorTween(::Tweening::Tween_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x3be139c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreItem(MultiplayerScoreItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreItem(MultiplayerScoreItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4611 };

  /// @brief Field _scoreText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____scoreText;

  /// @brief Field _nameText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____nameText;

  /// @brief Field _tweeningManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _nameColorTween, offset: 0x38, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Color>* ____nameColorTween;

  /// @brief Field _scoreColorTween, offset: 0x40, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Color>* ____scoreColorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____scoreText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____nameText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____tweeningManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____nameColorTween) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____scoreColorTween) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreItem, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreItem*, "", "MultiplayerScoreItem");
