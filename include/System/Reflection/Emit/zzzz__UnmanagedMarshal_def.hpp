#pragma once
// IWYU pragma private; include "System/Reflection/Emit/UnmanagedMarshal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnmanagedMarshal)
// Forward declare root types
namespace System::Reflection::Emit {
class UnmanagedMarshal;
}
// Write type traits
MARK_REF_T(::System::Reflection::Emit::UnmanagedMarshal*);
DEFINE_IL2CPP_CLASS(::System::Reflection::Emit::UnmanagedMarshal*, "System.Reflection.Emit", "UnmanagedMarshal");
// Dependencies System.Object
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: System.Reflection.Emit.UnmanagedMarshal
class CORDL_TYPE UnmanagedMarshal : public ::System::Object {
public:
  // Declarations
  static inline ::System::Reflection::Emit::UnmanagedMarshal* New_ctor();

  /// @brief Method .ctor, addr 0x5b91ce4, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3576 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::Emit::UnmanagedMarshal) == 0x10, "Size mismatch!");

} // namespace System::Reflection::Emit
