#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PidList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PidList)
namespace Oculus::Platform::Models {
class Pid;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PidList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PidList);
// Type: Oculus.Platform.Models::PidList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::PidList*
class CORDL_TYPE PidList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::Pid*> {
public:
  // Declarations
  static inline ::Oculus::Platform::Models::PidList* New_ctor(::System::IntPtr a);

  /// @brief Method .ctor, addr 0x3f31898, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr a);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PidList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PidList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PidList(PidList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PidList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PidList(PidList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15517 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PidList, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PidList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PidList*, "Oculus.Platform.Models", "PidList");
