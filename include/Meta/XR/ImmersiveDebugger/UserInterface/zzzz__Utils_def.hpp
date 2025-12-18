#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Utils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Utils);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ClampText, addr 0x589d1f4, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW ClampText(::StringW text, int32_t limit);

  /// @brief Method LerpPosition, addr 0x589c6a8, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 LerpPosition(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, float_t lerpSpeed);

  /// @brief Method ToDisplayText, addr 0x58a4978, size 0x1b8, virtual false, abstract: false, final false
  static inline ::StringW ToDisplayText(::StringW input, int32_t characterLimit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  /// @brief Field CursorSortOrder offset 0xffffffff size 0x4
  static constexpr int32_t CursorSortOrder{ static_cast<int32_t>(0x7918) };

  /// @brief Field DropDownMenuSortOrder offset 0xffffffff size 0x4
  static constexpr int32_t DropDownMenuSortOrder{ static_cast<int32_t>(0x5) };

  /// @brief Field MaxLetterCountForMethod offset 0xffffffff size 0x4
  static constexpr int32_t MaxLetterCountForMethod{ static_cast<int32_t>(0x40) };

  /// @brief Field MaxLetterCountForTitle offset 0xffffffff size 0x4
  static constexpr int32_t MaxLetterCountForTitle{ static_cast<int32_t>(0x16) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Utils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Utils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Utils*, "Meta.XR.ImmersiveDebugger.UserInterface", "Utils");
