#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NotImplemented)
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class NotImplemented;
}
// Write type traits
MARK_REF_PTR_T(::System::NotImplemented);
// Type: System::NotImplemented
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::NotImplemented*
class CORDL_TYPE NotImplemented : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_ByDesign, addr 0x284e9fc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Exception* get_ByDesign();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotImplemented();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotImplemented", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotImplemented(NotImplemented&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotImplemented", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotImplemented(NotImplemented const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NotImplemented, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::NotImplemented);
DEFINE_IL2CPP_ARG_TYPE(::System::NotImplemented*, "System", "NotImplemented");
