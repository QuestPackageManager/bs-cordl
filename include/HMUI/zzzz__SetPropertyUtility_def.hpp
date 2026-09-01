#pragma once
// IWYU pragma private; include "HMUI\SetPropertyUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::HMUI::SetPropertyUtility*);
DEFINE_IL2CPP_CLASS(::HMUI::SetPropertyUtility*, "HMUI", "SetPropertyUtility");
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SetPropertyUtility
class CORDL_TYPE SetPropertyUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetClass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SetClass(::by_ref<T> currentValue, T newValue);

  /// @brief Method SetColor, addr 0x588b5c4, size 0x4c, virtual false, abstract: false, final false
  static inline bool SetColor(::by_ref<::UnityEngine::Color> currentValue, ::UnityEngine::Color newValue);

  /// @brief Method SetStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SetStruct(::by_ref<T> currentValue, T newValue);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19114 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HMUI::SetPropertyUtility) == 0x10, "Size mismatch!");

} // namespace HMUI
