#pragma once
// IWYU pragma private; include "HMUI/SetPropertyUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SetPropertyUtility)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace HMUI {
class SetPropertyUtility;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::SetPropertyUtility);
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SetPropertyUtility
class CORDL_TYPE SetPropertyUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetClass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SetClass(::ByRef<T> currentValue, T newValue);

  /// @brief Method SetColor, addr 0x39fce18, size 0x48, virtual false, abstract: false, final false
  static inline bool SetColor(::ByRef<::UnityEngine::Color> currentValue, ::UnityEngine::Color newValue);

  /// @brief Method SetStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SetStruct(::ByRef<T> currentValue, T newValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPropertyUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPropertyUtility(SetPropertyUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPropertyUtility(SetPropertyUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16110 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SetPropertyUtility, 0x10>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SetPropertyUtility);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SetPropertyUtility*, "HMUI", "SetPropertyUtility");
