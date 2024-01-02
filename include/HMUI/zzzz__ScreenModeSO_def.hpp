#pragma once
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
// Type: HMUI::ScreenModeSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13592))
// CS Name: ::HMUI::ScreenModeSO*
class CORDL_TYPE ScreenModeSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _data, offset 0x18, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::HMUI::ScreenModeData* _data;

  __declspec(property(get = get_data))::HMUI::ScreenModeData* data;

  constexpr ::HMUI::ScreenModeData*& __get__data();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeData*> const& __get__data() const;

  constexpr void __set__data(::HMUI::ScreenModeData* value);

  /// @brief Method get_data, addr 0x212c674, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::ScreenModeData* get_data();

  static inline ::HMUI::ScreenModeSO* New_ctor();

  /// @brief Method .ctor, addr 0x212c67c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenModeSO(ScreenModeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenModeSO(ScreenModeSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenModeSO();

public:
  /// @brief Field _data, offset: 0x18, size: 0x8, def value: None
  ::HMUI::ScreenModeData* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScreenModeSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::ScreenModeSO, ____data) == 0x18, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScreenModeSO);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenModeSO*, "HMUI", "ScreenModeSO");
