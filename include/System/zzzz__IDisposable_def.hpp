#pragma once
// IWYU pragma private; include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDisposable)
// Forward declare root types
namespace System {
class IDisposable;
}
// Write type traits
MARK_REF_PTR_T(::System::IDisposable);
// Type: System::IDisposable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::IDisposable*
class CORDL_TYPE IDisposable {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "IDisposable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDisposable(IDisposable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDisposable(IDisposable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IDisposable);
DEFINE_IL2CPP_ARG_TYPE(::System::IDisposable*, "System", "IDisposable");
