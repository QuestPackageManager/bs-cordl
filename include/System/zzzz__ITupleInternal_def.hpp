#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ITupleInternal)
namespace System::Text {
class StringBuilder;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
// Forward declare root types
namespace System {
class ITupleInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::ITupleInternal);
// Type: System::ITupleInternal
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2488))
// CS Name: ::System::ITupleInternal*
class CORDL_TYPE ITupleInternal {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
  constexpr operator ::System::Runtime::CompilerServices::ITuple*() noexcept;

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW ToString(::System::Text::StringBuilder* sb);

  // Ctor Parameters [CppParam { name: "", ty: "ITupleInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITupleInternal(ITupleInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITupleInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITupleInternal(ITupleInternal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::ITupleInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::ITupleInternal*, "System", "ITupleInternal");
