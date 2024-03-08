#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CreditsSetupSO)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsSetupSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CreditsSetupSO);
// Type: ::CreditsSetupSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CreditsSetupSO*
class CORDL_TYPE CreditsSetupSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field columnCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_columnCount, put = __cordl_internal_set_columnCount)) int32_t columnCount;

  /// @brief Field headerLocalizedTextPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_headerLocalizedTextPrefab, put = __cordl_internal_set_headerLocalizedTextPrefab))::UnityW<::UnityEngine::GameObject> headerLocalizedTextPrefab;

  /// @brief Field headerTextPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_headerTextPrefab, put = __cordl_internal_set_headerTextPrefab))::UnityW<::UnityEngine::GameObject> headerTextPrefab;

  /// @brief Field normalLocalizedTextPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_normalLocalizedTextPrefab, put = __cordl_internal_set_normalLocalizedTextPrefab))::UnityW<::UnityEngine::GameObject> normalLocalizedTextPrefab;

  /// @brief Field normalTextPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_normalTextPrefab, put = __cordl_internal_set_normalTextPrefab))::UnityW<::UnityEngine::GameObject> normalTextPrefab;

  /// @brief Field spaceHeight, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_spaceHeight, put = __cordl_internal_set_spaceHeight)) float_t spaceHeight;

  /// @brief Field titleLocalizedTextPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_titleLocalizedTextPrefab, put = __cordl_internal_set_titleLocalizedTextPrefab))::UnityW<::UnityEngine::GameObject> titleLocalizedTextPrefab;

  /// @brief Field titleTextPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_titleTextPrefab, put = __cordl_internal_set_titleTextPrefab))::UnityW<::UnityEngine::GameObject> titleTextPrefab;

  static inline ::GlobalNamespace::CreditsSetupSO* New_ctor();

  constexpr int32_t const& __cordl_internal_get_columnCount() const;

  constexpr int32_t& __cordl_internal_get_columnCount();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_headerLocalizedTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_headerLocalizedTextPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_headerTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_headerTextPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_normalLocalizedTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_normalLocalizedTextPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_normalTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_normalTextPrefab();

  constexpr float_t const& __cordl_internal_get_spaceHeight() const;

  constexpr float_t& __cordl_internal_get_spaceHeight();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_titleLocalizedTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_titleLocalizedTextPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_titleTextPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_titleTextPrefab();

  constexpr void __cordl_internal_set_columnCount(int32_t value);

  constexpr void __cordl_internal_set_headerLocalizedTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_headerTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_normalLocalizedTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_normalTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_spaceHeight(float_t value);

  constexpr void __cordl_internal_set_titleLocalizedTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_titleTextPrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x251723c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreditsSetupSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreditsSetupSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreditsSetupSO(CreditsSetupSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreditsSetupSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreditsSetupSO(CreditsSetupSO const&) = delete;

  /// @brief Field normalTextPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___normalTextPrefab;

  /// @brief Field normalLocalizedTextPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___normalLocalizedTextPrefab;

  /// @brief Field titleTextPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___titleTextPrefab;

  /// @brief Field titleLocalizedTextPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___titleLocalizedTextPrefab;

  /// @brief Field headerTextPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___headerTextPrefab;

  /// @brief Field headerLocalizedTextPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___headerLocalizedTextPrefab;

  /// @brief Field columnCount, offset: 0x48, size: 0x4, def value: None
  int32_t ___columnCount;

  /// @brief Field spaceHeight, offset: 0x4c, size: 0x4, def value: None
  float_t ___spaceHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsSetupSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsSetupSO, ___normalTextPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsSetupSO, ___normalLocalizedTextPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsSetupSO, ___titleTextPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsSetupSO, ___titleLocalizedTextPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsSetupSO, ___headerTextPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsSetupSO, ___headerLocalizedTextPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsSetupSO, ___columnCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreditsSetupSO, ___spaceHeight) == 0x4c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CreditsSetupSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsSetupSO*, "", "CreditsSetupSO");
