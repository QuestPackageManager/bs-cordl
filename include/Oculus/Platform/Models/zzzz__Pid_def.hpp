#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Pid.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pid)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Pid;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Pid);
// Type: Oculus.Platform.Models::Pid
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::Pid*
class CORDL_TYPE Pid : public ::System::Object {
public:
  // Declarations
  /// @brief Field Id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) ::StringW Id;

  static inline ::Oculus::Platform::Models::Pid* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_Id() const;

  constexpr ::StringW& __cordl_internal_get_Id();

  constexpr void __cordl_internal_set_Id(::StringW value);

  /// @brief Method .ctor, addr 0x3f1d190, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pid(Pid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pid(Pid const&) = delete;

  /// @brief Field Id, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Id;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15508 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Pid, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Pid, ___Id) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Pid);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Pid*, "Oculus.Platform.Models", "Pid");
