#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ImmediateModeException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(ImmediateModeException)
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ImmediateModeException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ImmediateModeException);
// Dependencies System.Exception
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ImmediateModeException
class CORDL_TYPE ImmediateModeException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ImmediateModeException* New_ctor(::System::Exception* inner);

  /// @brief Method .ctor, addr 0x4a40ca4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImmediateModeException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImmediateModeException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImmediateModeException(ImmediateModeException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImmediateModeException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImmediateModeException(ImmediateModeException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5983 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ImmediateModeException, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ImmediateModeException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ImmediateModeException*, "UnityEngine.UIElements", "ImmediateModeException");
