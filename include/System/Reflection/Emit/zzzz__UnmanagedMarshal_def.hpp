#pragma once
// IWYU pragma private; include "System/Reflection/Emit/UnmanagedMarshal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnmanagedMarshal)
// Forward declare root types
namespace System::Reflection::Emit {
class UnmanagedMarshal;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::UnmanagedMarshal);
// Type: System.Reflection.Emit::UnmanagedMarshal
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: ::System.Reflection.Emit::UnmanagedMarshal*
class CORDL_TYPE UnmanagedMarshal : public ::System::Object {
public:
  // Declarations
  static inline ::System::Reflection::Emit::UnmanagedMarshal* New_ctor();

  /// @brief Method .ctor, addr 0x3cd5980, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmanagedMarshal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnmanagedMarshal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmanagedMarshal(UnmanagedMarshal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmanagedMarshal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmanagedMarshal(UnmanagedMarshal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3552 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::UnmanagedMarshal, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::UnmanagedMarshal);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::UnmanagedMarshal*, "System.Reflection.Emit", "UnmanagedMarshal");
