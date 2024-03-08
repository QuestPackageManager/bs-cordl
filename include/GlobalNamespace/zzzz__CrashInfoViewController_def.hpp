#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CrashInfoViewController)
namespace GlobalNamespace {
class CrashManagerSO;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class CrashInfoViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CrashInfoViewController);
// Type: ::CrashInfoViewController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CrashInfoViewController*
class CORDL_TYPE CrashInfoViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _crashManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__crashManager, put = __cordl_internal_set__crashManager))::UnityW<::GlobalNamespace::CrashManagerSO> _crashManager;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshProUGUI> _text;

  static inline ::GlobalNamespace::CrashInfoViewController* New_ctor();

  /// @brief Method Start, addr 0x2414c7c, size 0x78, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::CrashManagerSO> const& __cordl_internal_get__crashManager() const;

  constexpr ::UnityW<::GlobalNamespace::CrashManagerSO>& __cordl_internal_get__crashManager();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__crashManager(::UnityW<::GlobalNamespace::CrashManagerSO> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x2414cf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrashInfoViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrashInfoViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrashInfoViewController(CrashInfoViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrashInfoViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrashInfoViewController(CrashInfoViewController const&) = delete;

  /// @brief Field _crashManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CrashManagerSO> ____crashManager;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CrashInfoViewController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CrashInfoViewController, ____crashManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrashInfoViewController, ____text) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CrashInfoViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrashInfoViewController*, "", "CrashInfoViewController");
