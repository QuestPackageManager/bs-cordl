#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/CowatchingState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CowatchingState)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class CowatchingState;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::CowatchingState);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.CowatchingState
class CORDL_TYPE CowatchingState : public ::System::Object {
public:
  // Declarations
  /// @brief Field InSession, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_InSession, put = __cordl_internal_set_InSession)) bool InSession;

  static inline ::Oculus::Platform::Models::CowatchingState* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_InSession() const;

  constexpr bool& __cordl_internal_get_InSession();

  constexpr void __cordl_internal_set_InSession(bool value);

  /// @brief Method .ctor, addr 0x5bda29c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CowatchingState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CowatchingState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CowatchingState(CowatchingState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CowatchingState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CowatchingState(CowatchingState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17989 };

  /// @brief Field InSession, offset: 0x10, size: 0x1, def value: None
  bool ___InSession;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::CowatchingState, ___InSession) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::CowatchingState, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::CowatchingState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CowatchingState*, "Oculus.Platform.Models", "CowatchingState");
