#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICloneable)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class ICloneable;
}
// Write type traits
MARK_REF_PTR_T(::System::ICloneable);
// Type: System::ICloneable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::ICloneable*
class CORDL_TYPE ICloneable {
public:
  // Declarations
  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Clone();

  // Ctor Parameters [CppParam { name: "", ty: "ICloneable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICloneable(ICloneable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICloneable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICloneable(ICloneable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::ICloneable);
DEFINE_IL2CPP_ARG_TYPE(::System::ICloneable*, "System", "ICloneable");
