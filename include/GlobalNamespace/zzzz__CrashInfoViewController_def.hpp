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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5716))
// CS Name: ::CrashInfoViewController*
class CORDL_TYPE CrashInfoViewController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _crashManager, offset 0x18, size 0x8
  __declspec(property(get = __get__crashManager, put = __set__crashManager))::GlobalNamespace::CrashManagerSO* _crashManager;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  constexpr ::GlobalNamespace::CrashManagerSO*& __get__crashManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CrashManagerSO*> const& __get__crashManager() const;

  constexpr void __set__crashManager(::GlobalNamespace::CrashManagerSO* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  /// @brief Method Start addr 0x216a694 size 0x78 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::CrashInfoViewController* New_ctor();

  /// @brief Method .ctor addr 0x216a70c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CrashInfoViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrashInfoViewController(CrashInfoViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrashInfoViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrashInfoViewController(CrashInfoViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrashInfoViewController();

public:
  /// @brief Field _crashManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::CrashManagerSO* ____crashManager;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CrashInfoViewController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CrashInfoViewController, ____crashManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrashInfoViewController, ____text) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CrashInfoViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrashInfoViewController*, "", "CrashInfoViewController");
