#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CreditsContent)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsContent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CreditsContent);
// Type: ::CreditsContent
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CreditsContent*
class CORDL_TYPE CreditsContent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _columnCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__columnCount, put = __cordl_internal_set__columnCount)) int32_t _columnCount;

  /// @brief Field _contentRoot, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__contentRoot, put = __cordl_internal_set__contentRoot))::UnityW<::UnityEngine::Transform> _contentRoot;

  /// @brief Field _creditsContentTextAsset, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__creditsContentTextAsset, put = __cordl_internal_set__creditsContentTextAsset))::UnityW<::UnityEngine::TextAsset> _creditsContentTextAsset;

  /// @brief Field _headerLocalizedTextPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__headerLocalizedTextPrefab, put = __cordl_internal_set__headerLocalizedTextPrefab))::UnityW<::UnityEngine::GameObject> _headerLocalizedTextPrefab;

  /// @brief Field _headerTextPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__headerTextPrefab, put = __cordl_internal_set__headerTextPrefab))::UnityW<::UnityEngine::GameObject> _headerTextPrefab;

  /// @brief Field _normalLocalizedTextPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalLocalizedTextPrefab, put = __cordl_internal_set__normalLocalizedTextPrefab))::UnityW<::UnityEngine::GameObject> _normalLocalizedTextPrefab;

  /// @brief Field _normalTextPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__normalTextPrefab, put = __cordl_internal_set__normalTextPrefab))::UnityW<::UnityEngine::GameObject> _normalTextPrefab;

  /// @brief Field _rootRectTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__rootRectTransform, put = __cordl_internal_set__rootRectTransform))::UnityW<::UnityEngine::RectTransform> _rootRectTransform;

  /// @brief Field _spaceHeight, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__spaceHeight, put = __cordl_internal_set__spaceHeight)) float_t _spaceHeight;

  /// @brief Field _titleHeight, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__titleHeight, put = __cordl_internal_set__titleHeight)) float_t _titleHeight;

  /// @brief Field _titleLocalizedTextPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__titleLocalizedTextPrefab, put = __cordl_internal_set__titleLocalizedTextPrefab))::UnityW<::UnityEngine::GameObject> _titleLocalizedTextPrefab;

  /// @brief Field _titleTextPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__titleTextPrefab, put = __cordl_internal_set__titleTextPrefab))::UnityW<::UnityEngine::GameObject> _titleTextPrefab;

  __declspec(property(get = get_columnCount)) int32_t columnCount;

  __declspec(property(get = get_contentRoot))::UnityW<::UnityEngine::Transform> contentRoot;

  __declspec(property(get = get_creditsContentTextAsset))::UnityW<::UnityEngine::TextAsset> creditsContentTextAsset;

  __declspec(property(get = get_headerLocalizedTextPrefab))::UnityW<::UnityEngine::GameObject> headerLocalizedTextPrefab;

  __declspec(property(get = get_headerTextPrefab))::UnityW<::UnityEngine::GameObject> headerTextPrefab;

  __declspec(property(get = get_normalLocalizedTextPrefab))::UnityW<::UnityEngine::GameObject> normalLocalizedTextPrefab;

  __declspec(property(get = get_normalTextPrefab))::UnityW<::UnityEngine::GameObject> normalTextPrefab;

  __declspec(property(get = get_rootRectTransform))::UnityW<::UnityEngine::RectTransform> rootRectTransform;

  __declspec(property(get = get_spaceHeight)) float_t spaceHeight;

  __declspec(property(get = get_titleHeight)) float_t titleHeight;

  __declspec(property(get = get_titleLocalizedTextPrefab))::UnityW<::UnityEngine::GameObject> titleLocalizedTextPrefab;

  __declspec(property(get = get_titleTextPrefab))::UnityW<::UnityEngine::GameObject> titleTextPrefab;

  static inline ::GlobalNamespace::CreditsContent* New_ctor();

  constexpr int32_t const& __cordl_internal_get__columnCount() const;

  constexpr int32_t& __cordl_internal_get__columnCount();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__contentRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__contentRoot();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__creditsContentTextAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__creditsContentTextAsset();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__headerLocalizedTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__headerLocalizedTextPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__headerTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__headerTextPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__normalLocalizedTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__normalLocalizedTextPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__normalTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__normalTextPrefab();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rootRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rootRectTransform();

  constexpr float_t const& __cordl_internal_get__spaceHeight() const;

  constexpr float_t& __cordl_internal_get__spaceHeight();

  constexpr float_t const& __cordl_internal_get__titleHeight() const;

  constexpr float_t& __cordl_internal_get__titleHeight();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__titleLocalizedTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__titleLocalizedTextPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__titleTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__titleTextPrefab();

  constexpr void __cordl_internal_set__columnCount(int32_t value);

  constexpr void __cordl_internal_set__contentRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__creditsContentTextAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set__headerLocalizedTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__headerTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__normalLocalizedTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__normalTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__rootRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__spaceHeight(float_t value);

  constexpr void __cordl_internal_set__titleHeight(float_t value);

  constexpr void __cordl_internal_set__titleLocalizedTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__titleTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x25151b8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_columnCount, addr 0x2515188, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_columnCount();

  /// @brief Method get_contentRoot, addr 0x25151a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_contentRoot();

  /// @brief Method get_creditsContentTextAsset, addr 0x25151b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_creditsContentTextAsset();

  /// @brief Method get_headerLocalizedTextPrefab, addr 0x2515180, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_headerLocalizedTextPrefab();

  /// @brief Method get_headerTextPrefab, addr 0x2515178, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_headerTextPrefab();

  /// @brief Method get_normalLocalizedTextPrefab, addr 0x2515160, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_normalLocalizedTextPrefab();

  /// @brief Method get_normalTextPrefab, addr 0x2515158, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_normalTextPrefab();

  /// @brief Method get_rootRectTransform, addr 0x25151a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rootRectTransform();

  /// @brief Method get_spaceHeight, addr 0x2515190, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spaceHeight();

  /// @brief Method get_titleHeight, addr 0x2515198, size 0x8, virtual false, abstract: false, final false
  inline float_t get_titleHeight();

  /// @brief Method get_titleLocalizedTextPrefab, addr 0x2515170, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_titleLocalizedTextPrefab();

  /// @brief Method get_titleTextPrefab, addr 0x2515168, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_titleTextPrefab();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsContent(CreditsContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsContent(CreditsContent const&) = delete;

  /// @brief Field _normalTextPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____normalTextPrefab;

  /// @brief Field _normalLocalizedTextPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____normalLocalizedTextPrefab;

  /// @brief Field _titleTextPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____titleTextPrefab;

  /// @brief Field _titleLocalizedTextPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____titleLocalizedTextPrefab;

  /// @brief Field _headerTextPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____headerTextPrefab;

  /// @brief Field _headerLocalizedTextPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____headerLocalizedTextPrefab;

  /// @brief Field _columnCount, offset: 0x48, size: 0x4, def value: None
  int32_t ____columnCount;

  /// @brief Field _spaceHeight, offset: 0x4c, size: 0x4, def value: None
  float_t ____spaceHeight;

  /// @brief Field _titleHeight, offset: 0x50, size: 0x4, def value: None
  float_t ____titleHeight;

  /// @brief Field _contentRoot, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____contentRoot;

  /// @brief Field _rootRectTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rootRectTransform;

  /// @brief Field _creditsContentTextAsset, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ____creditsContentTextAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsContent, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____normalTextPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____normalLocalizedTextPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____titleTextPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____titleLocalizedTextPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____headerTextPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____headerLocalizedTextPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____columnCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____spaceHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____titleHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____contentRoot) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____rootRectTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsContent, ____creditsContentTextAsset) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CreditsContent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsContent*, "", "CreditsContent");
