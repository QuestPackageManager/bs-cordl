#pragma once
// IWYU pragma private; include "Oculus/Platform/UserOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserOptions)
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
struct TimeWindow;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class UserOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::UserOptions);
// Dependencies System.IntPtr, System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.UserOptions
class CORDL_TYPE UserOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) ::System::IntPtr Handle;

  /// @brief Method AddServiceProvider, addr 0x3f8cfb4, size 0x68, virtual false, abstract: false, final false
  inline void AddServiceProvider(::Oculus::Platform::ServiceProvider value);

  /// @brief Method ClearServiceProviders, addr 0x3f8d7cc, size 0x58, virtual false, abstract: false, final false
  inline void ClearServiceProviders();

  /// @brief Method Finalize, addr 0x3f8d88c, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::UserOptions* New_ctor();

  /// @brief Method SetMaxUsers, addr 0x3f8d764, size 0x68, virtual false, abstract: false, final false
  inline void SetMaxUsers(uint32_t value);

  /// @brief Method SetTimeWindow, addr 0x3f8d824, size 0x68, virtual false, abstract: false, final false
  inline void SetTimeWindow(::Oculus::Platform::TimeWindow value);

  constexpr ::System::IntPtr const& __cordl_internal_get_Handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_Handle();

  constexpr void __cordl_internal_set_Handle(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x3f8cf50, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Explicit, addr 0x3f8d01c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(::Oculus::Platform::UserOptions* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserOptions(UserOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserOptions(UserOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15484 };

  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::UserOptions, ___Handle) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::UserOptions, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::UserOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserOptions*, "Oculus.Platform", "UserOptions");
