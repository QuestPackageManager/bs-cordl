#pragma once
// IWYU pragma private; include "Oculus/Platform/MultiplayerErrorOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerErrorOptions)
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MultiplayerErrorOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MultiplayerErrorOptions);
// Type: Oculus.Platform::MultiplayerErrorOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MultiplayerErrorOptions*
class CORDL_TYPE MultiplayerErrorOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle))::System::IntPtr Handle;

  /// @brief Method Finalize, addr 0x2afe878, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::MultiplayerErrorOptions* New_ctor();

  /// @brief Method SetErrorKey, addr 0x2afe7b8, size 0x68, virtual false, abstract: false, final false
  inline void SetErrorKey(::Oculus::Platform::MultiplayerErrorErrorKey value);

  constexpr ::System::IntPtr const& __cordl_internal_get_Handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_Handle();

  constexpr void __cordl_internal_set_Handle(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x2afe754, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Explicit, addr 0x2afe820, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(::Oculus::Platform::MultiplayerErrorOptions* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerErrorOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerErrorOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerErrorOptions(MultiplayerErrorOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerErrorOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerErrorOptions(MultiplayerErrorOptions const&) = delete;

  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MultiplayerErrorOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::MultiplayerErrorOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MultiplayerErrorOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MultiplayerErrorOptions*, "Oculus.Platform", "MultiplayerErrorOptions");
