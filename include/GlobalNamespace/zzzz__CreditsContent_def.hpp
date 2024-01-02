#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CreditsContent)
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5470))
// CS Name: ::CreditsContent*
class CORDL_TYPE CreditsContent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _normalTextPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__normalTextPrefab, put = __set__normalTextPrefab))::UnityEngine::GameObject* _normalTextPrefab;

  /// @brief Field _normalLocalizedTextPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__normalLocalizedTextPrefab, put = __set__normalLocalizedTextPrefab))::UnityEngine::GameObject* _normalLocalizedTextPrefab;

  /// @brief Field _titleTextPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__titleTextPrefab, put = __set__titleTextPrefab))::UnityEngine::GameObject* _titleTextPrefab;

  /// @brief Field _titleLocalizedTextPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__titleLocalizedTextPrefab, put = __set__titleLocalizedTextPrefab))::UnityEngine::GameObject* _titleLocalizedTextPrefab;

  /// @brief Field _headerTextPrefab, offset 0x38, size 0x8
  __declspec(property(get = __get__headerTextPrefab, put = __set__headerTextPrefab))::UnityEngine::GameObject* _headerTextPrefab;

  /// @brief Field _headerLocalizedTextPrefab, offset 0x40, size 0x8
  __declspec(property(get = __get__headerLocalizedTextPrefab, put = __set__headerLocalizedTextPrefab))::UnityEngine::GameObject* _headerLocalizedTextPrefab;

  /// @brief Field _columnCount, offset 0x48, size 0x4
  __declspec(property(get = __get__columnCount, put = __set__columnCount)) int32_t _columnCount;

  /// @brief Field _spaceHeight, offset 0x4c, size 0x4
  __declspec(property(get = __get__spaceHeight, put = __set__spaceHeight)) float_t _spaceHeight;

  /// @brief Field _titleHeight, offset 0x50, size 0x4
  __declspec(property(get = __get__titleHeight, put = __set__titleHeight)) float_t _titleHeight;

  /// @brief Field _contentRoot, offset 0x58, size 0x8
  __declspec(property(get = __get__contentRoot, put = __set__contentRoot))::UnityEngine::Transform* _contentRoot;

  /// @brief Field _rootRectTransform, offset 0x60, size 0x8
  __declspec(property(get = __get__rootRectTransform, put = __set__rootRectTransform))::UnityEngine::RectTransform* _rootRectTransform;

  /// @brief Field _creditsContentTextAsset, offset 0x68, size 0x8
  __declspec(property(get = __get__creditsContentTextAsset, put = __set__creditsContentTextAsset))::UnityEngine::TextAsset* _creditsContentTextAsset;

  __declspec(property(get = get_normalTextPrefab))::UnityEngine::GameObject* normalTextPrefab;

  __declspec(property(get = get_normalLocalizedTextPrefab))::UnityEngine::GameObject* normalLocalizedTextPrefab;

  __declspec(property(get = get_titleTextPrefab))::UnityEngine::GameObject* titleTextPrefab;

  __declspec(property(get = get_titleLocalizedTextPrefab))::UnityEngine::GameObject* titleLocalizedTextPrefab;

  __declspec(property(get = get_headerTextPrefab))::UnityEngine::GameObject* headerTextPrefab;

  __declspec(property(get = get_headerLocalizedTextPrefab))::UnityEngine::GameObject* headerLocalizedTextPrefab;

  __declspec(property(get = get_columnCount)) int32_t columnCount;

  __declspec(property(get = get_spaceHeight)) float_t spaceHeight;

  __declspec(property(get = get_titleHeight)) float_t titleHeight;

  __declspec(property(get = get_contentRoot))::UnityEngine::Transform* contentRoot;

  __declspec(property(get = get_rootRectTransform))::UnityEngine::RectTransform* rootRectTransform;

  __declspec(property(get = get_creditsContentTextAsset))::UnityEngine::TextAsset* creditsContentTextAsset;

  constexpr ::UnityEngine::GameObject*& __get__normalTextPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__normalTextPrefab() const;

  constexpr void __set__normalTextPrefab(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__normalLocalizedTextPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__normalLocalizedTextPrefab() const;

  constexpr void __set__normalLocalizedTextPrefab(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__titleTextPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__titleTextPrefab() const;

  constexpr void __set__titleTextPrefab(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__titleLocalizedTextPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__titleLocalizedTextPrefab() const;

  constexpr void __set__titleLocalizedTextPrefab(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__headerTextPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__headerTextPrefab() const;

  constexpr void __set__headerTextPrefab(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__headerLocalizedTextPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__headerLocalizedTextPrefab() const;

  constexpr void __set__headerLocalizedTextPrefab(::UnityEngine::GameObject* value);

  constexpr int32_t& __get__columnCount();

  constexpr int32_t const& __get__columnCount() const;

  constexpr void __set__columnCount(int32_t value);

  constexpr float_t& __get__spaceHeight();

  constexpr float_t const& __get__spaceHeight() const;

  constexpr void __set__spaceHeight(float_t value);

  constexpr float_t& __get__titleHeight();

  constexpr float_t const& __get__titleHeight() const;

  constexpr void __set__titleHeight(float_t value);

  constexpr ::UnityEngine::Transform*& __get__contentRoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__contentRoot() const;

  constexpr void __set__contentRoot(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::RectTransform*& __get__rootRectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__rootRectTransform() const;

  constexpr void __set__rootRectTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::TextAsset*& __get__creditsContentTextAsset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get__creditsContentTextAsset() const;

  constexpr void __set__creditsContentTextAsset(::UnityEngine::TextAsset* value);

  /// @brief Method get_normalTextPrefab, addr 0x228297c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_normalTextPrefab();

  /// @brief Method get_normalLocalizedTextPrefab, addr 0x2282984, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_normalLocalizedTextPrefab();

  /// @brief Method get_titleTextPrefab, addr 0x228298c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_titleTextPrefab();

  /// @brief Method get_titleLocalizedTextPrefab, addr 0x2282994, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_titleLocalizedTextPrefab();

  /// @brief Method get_headerTextPrefab, addr 0x228299c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_headerTextPrefab();

  /// @brief Method get_headerLocalizedTextPrefab, addr 0x22829a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_headerLocalizedTextPrefab();

  /// @brief Method get_columnCount, addr 0x22829ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_columnCount();

  /// @brief Method get_spaceHeight, addr 0x22829b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spaceHeight();

  /// @brief Method get_titleHeight, addr 0x22829bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_titleHeight();

  /// @brief Method get_contentRoot, addr 0x22829c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_contentRoot();

  /// @brief Method get_rootRectTransform, addr 0x22829cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectTransform* get_rootRectTransform();

  /// @brief Method get_creditsContentTextAsset, addr 0x22829d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextAsset* get_creditsContentTextAsset();

  static inline ::GlobalNamespace::CreditsContent* New_ctor();

  /// @brief Method .ctor, addr 0x22829dc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CreditsContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsContent(CreditsContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsContent(CreditsContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsContent();

public:
  /// @brief Field _normalTextPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____normalTextPrefab;

  /// @brief Field _normalLocalizedTextPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____normalLocalizedTextPrefab;

  /// @brief Field _titleTextPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____titleTextPrefab;

  /// @brief Field _titleLocalizedTextPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____titleLocalizedTextPrefab;

  /// @brief Field _headerTextPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____headerTextPrefab;

  /// @brief Field _headerLocalizedTextPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____headerLocalizedTextPrefab;

  /// @brief Field _columnCount, offset: 0x48, size: 0x4, def value: None
  int32_t ____columnCount;

  /// @brief Field _spaceHeight, offset: 0x4c, size: 0x4, def value: None
  float_t ____spaceHeight;

  /// @brief Field _titleHeight, offset: 0x50, size: 0x4, def value: None
  float_t ____titleHeight;

  /// @brief Field _contentRoot, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ____contentRoot;

  /// @brief Field _rootRectTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____rootRectTransform;

  /// @brief Field _creditsContentTextAsset, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ____creditsContentTextAsset;

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
