#pragma once
// IWYU pragma private; include "System/IOSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IOSelector)
namespace System {
class IOSelectorJob;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System {
class IOSelector;
}
// Write type traits
MARK_REF_PTR_T(::System::IOSelector);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.IOSelector
class CORDL_TYPE IOSelector : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x440fcb4, size 0x4, virtual false, abstract: false, final false
  static inline void Add(::System::IntPtr handle, ::System::IOSelectorJob* job);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IOSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IOSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOSelector(IOSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOSelector(IOSelector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9217 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IOSelector, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::IOSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::IOSelector*, "System", "IOSelector");
