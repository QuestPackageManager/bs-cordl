#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/ITextInputReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITextInputReceiver)
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class ITextInputReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::ITextInputReceiver);
// Type: UnityEngine.InputSystem.LowLevel::ITextInputReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.LowLevel::ITextInputReceiver*
class CORDL_TYPE ITextInputReceiver {
public:
  // Declarations
  /// @brief Method OnIMECompositionChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnIMECompositionChanged(::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString);

  /// @brief Method OnTextInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnTextInput(char16_t character);

  // Ctor Parameters [CppParam { name: "", ty: "ITextInputReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITextInputReceiver(ITextInputReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITextInputReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextInputReceiver(ITextInputReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::ITextInputReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*, "UnityEngine.InputSystem.LowLevel", "ITextInputReceiver");
