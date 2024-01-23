#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HealthWarningDisplayViewController)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningDisplayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningDisplayViewController);
// Type: ::HealthWarningDisplayViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13605))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5643))
// CS Name: ::HealthWarningDisplayViewController*
class CORDL_TYPE HealthWarningDisplayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _healthAndSafetyTextMesh, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__healthAndSafetyTextMesh, put = __cordl_internal_set__healthAndSafetyTextMesh))::UnityW<::TMPro::TextMeshProUGUI> _healthAndSafetyTextMesh;

  /// @brief Field _healthAndSafetyFullLocalizationKey, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__healthAndSafetyFullLocalizationKey, put = __cordl_internal_set__healthAndSafetyFullLocalizationKey))::StringW _healthAndSafetyFullLocalizationKey;

  /// @brief Field _healthAndSafetyPSLocalizationKey, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__healthAndSafetyPSLocalizationKey, put = __cordl_internal_set__healthAndSafetyPSLocalizationKey))::StringW _healthAndSafetyPSLocalizationKey;

  /// @brief Field _showShortHealthAndSafety, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__showShortHealthAndSafety, put = __cordl_internal_set__showShortHealthAndSafety)) bool _showShortHealthAndSafety;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__healthAndSafetyTextMesh();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__healthAndSafetyTextMesh() const;

  constexpr void __cordl_internal_set__healthAndSafetyTextMesh(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::StringW& __cordl_internal_get__healthAndSafetyFullLocalizationKey();

  constexpr ::StringW const& __cordl_internal_get__healthAndSafetyFullLocalizationKey() const;

  constexpr void __cordl_internal_set__healthAndSafetyFullLocalizationKey(::StringW value);

  constexpr ::StringW& __cordl_internal_get__healthAndSafetyPSLocalizationKey();

  constexpr ::StringW const& __cordl_internal_get__healthAndSafetyPSLocalizationKey() const;

  constexpr void __cordl_internal_set__healthAndSafetyPSLocalizationKey(::StringW value);

  constexpr bool& __cordl_internal_get__showShortHealthAndSafety();

  constexpr bool const& __cordl_internal_get__showShortHealthAndSafety() const;

  constexpr void __cordl_internal_set__showShortHealthAndSafety(bool value);

  /// @brief Method DidActivate, addr 0x22b4f20, size 0x3c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::HealthWarningDisplayViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22b4f5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningDisplayViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningDisplayViewController(HealthWarningDisplayViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningDisplayViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningDisplayViewController(HealthWarningDisplayViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningDisplayViewController();

public:
  /// @brief Field _healthAndSafetyTextMesh, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____healthAndSafetyTextMesh;

  /// @brief Field _healthAndSafetyFullLocalizationKey, offset: 0x78, size: 0x8, def value: None
  ::StringW ____healthAndSafetyFullLocalizationKey;

  /// @brief Field _healthAndSafetyPSLocalizationKey, offset: 0x80, size: 0x8, def value: None
  ::StringW ____healthAndSafetyPSLocalizationKey;

  /// @brief Field _showShortHealthAndSafety, offset: 0x88, size: 0x1, def value: None
  bool ____showShortHealthAndSafety;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningDisplayViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningDisplayViewController, ____healthAndSafetyTextMesh) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningDisplayViewController, ____healthAndSafetyFullLocalizationKey) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningDisplayViewController, ____healthAndSafetyPSLocalizationKey) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningDisplayViewController, ____showShortHealthAndSafety) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningDisplayViewController*, "", "HealthWarningDisplayViewController");
