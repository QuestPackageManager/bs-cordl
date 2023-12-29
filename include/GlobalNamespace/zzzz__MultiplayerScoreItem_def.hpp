#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerScoreItem)
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace Tweening {
template <typename T> class Tween_1;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreItem);
// Type: ::MultiplayerScoreItem
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5342))
// CS Name: ::MultiplayerScoreItem*
class CORDL_TYPE MultiplayerScoreItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _scoreText, offset 0x18, size 0x8
  __declspec(property(get = __get__scoreText, put = __set__scoreText))::TMPro::TextMeshProUGUI* _scoreText;

  /// @brief Field _nameText, offset 0x20, size 0x8
  __declspec(property(get = __get__nameText, put = __set__nameText))::TMPro::TextMeshProUGUI* _nameText;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _nameColorTween, offset 0x30, size 0x8
  __declspec(property(get = __get__nameColorTween, put = __set__nameColorTween))::Tweening::Tween_1<::UnityEngine::Color>* _nameColorTween;

  /// @brief Field _scoreColorTween, offset 0x38, size 0x8
  __declspec(property(get = __get__scoreColorTween, put = __set__scoreColorTween))::Tweening::Tween_1<::UnityEngine::Color>* _scoreColorTween;

  constexpr ::TMPro::TextMeshProUGUI*& __get__scoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__scoreText() const;

  constexpr void __set__scoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__nameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__nameText() const;

  constexpr void __set__nameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Color>*& __get__nameColorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Color>*> const& __get__nameColorTween() const;

  constexpr void __set__nameColorTween(::Tweening::Tween_1<::UnityEngine::Color>* value);

  constexpr ::Tweening::Tween_1<::UnityEngine::Color>*& __get__scoreColorTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Color>*> const& __get__scoreColorTween() const;

  constexpr void __set__scoreColorTween(::Tweening::Tween_1<::UnityEngine::Color>* value);

  /// @brief Method Awake addr 0x211512c size 0x168 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2115294 size 0x88 virtual false final false
  inline void OnDestroy();

  /// @brief Method SetPositionAndRotation addr 0x211531c size 0x78 virtual false final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method AnimateColors addr 0x2115394 size 0x114 virtual false final false
  inline void AnimateColors(::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration, ::GlobalNamespace::EaseType easeType);

  /// @brief Method SetName addr 0x21154a8 size 0x24 virtual false final false
  inline void SetName(::StringW text);

  /// @brief Method SetScore addr 0x21154cc size 0x24 virtual false final false
  inline void SetScore(::StringW text);

  static inline ::GlobalNamespace::MultiplayerScoreItem* New_ctor();

  /// @brief Method .ctor addr 0x21154f0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Awake>b__5_0 addr 0x21154f8 size 0x24 virtual false final false
  inline void _Awake_b__5_0(::UnityEngine::Color val);

  /// @brief Method <Awake>b__5_1 addr 0x211551c size 0x24 virtual false final false
  inline void _Awake_b__5_1(::UnityEngine::Color val);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreItem(MultiplayerScoreItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreItem(MultiplayerScoreItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreItem();

public:
  /// @brief Field _scoreText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____scoreText;

  /// @brief Field _nameText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____nameText;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

  /// @brief Field _nameColorTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Color>* ____nameColorTween;

  /// @brief Field _scoreColorTween, offset: 0x38, size: 0x8, def value: None
  ::Tweening::Tween_1<::UnityEngine::Color>* ____scoreColorTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreItem, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____scoreText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____nameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____tweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____nameColorTween) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreItem, ____scoreColorTween) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreItem*, "", "MultiplayerScoreItem");
