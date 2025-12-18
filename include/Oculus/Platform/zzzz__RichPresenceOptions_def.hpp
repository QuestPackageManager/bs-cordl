#pragma once
// IWYU pragma private; include "Oculus/Platform/RichPresenceOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RichPresenceOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class RichPresenceOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::RichPresenceOptions);
// Dependencies System.IntPtr, System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.RichPresenceOptions
class CORDL_TYPE RichPresenceOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) ::System::IntPtr Handle;

  /// @brief Method Finalize, addr 0x5c3d944, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::RichPresenceOptions* New_ctor();

  constexpr ::System::IntPtr const& __cordl_internal_get_Handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_Handle();

  constexpr void __cordl_internal_set_Handle(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x5c3d8e8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Explicit, addr 0x5c3caac, size 0xc, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(::Oculus::Platform::RichPresenceOptions* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresenceOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichPresenceOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichPresenceOptions(RichPresenceOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichPresenceOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichPresenceOptions(RichPresenceOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17949 };

  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::RichPresenceOptions, ___Handle) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RichPresenceOptions, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::RichPresenceOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RichPresenceOptions*, "Oculus.Platform", "RichPresenceOptions");
