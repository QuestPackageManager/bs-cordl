#pragma once
// IWYU pragma private; include "HMUI/ScreenModeSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ScreenModeSO)
namespace HMUI {
class ScreenModeData;
}
// Forward declare root types
namespace HMUI {
class ScreenModeSO;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScreenModeSO);
// Dependencies UnityEngine.ScriptableObject
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ScreenModeSO
class CORDL_TYPE ScreenModeSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::HMUI::ScreenModeData* _data;

  __declspec(property(get = get_data)) ::HMUI::ScreenModeData* data;

  static inline ::HMUI::ScreenModeSO* New_ctor();

  constexpr ::HMUI::ScreenModeData* const& __cordl_internal_get__data() const;

  constexpr ::HMUI::ScreenModeData*& __cordl_internal_get__data();

  constexpr void __cordl_internal_set__data(::HMUI::ScreenModeData* value);

  /// @brief Method .ctor, addr 0x228b5bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_data, addr 0x228b5b4, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::ScreenModeData* get_data();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenModeSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenModeSO(ScreenModeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenModeSO(ScreenModeSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16818 };

  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  ::HMUI::ScreenModeData* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ScreenModeSO, ____data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ScreenModeSO, 0x20>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScreenModeSO);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenModeSO*, "HMUI", "ScreenModeSO");
