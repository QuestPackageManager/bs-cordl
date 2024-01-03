#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IValueTupleInternal)
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System::Collections {
class IEqualityComparer;
}
// Forward declare root types
namespace System {
class IValueTupleInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::IValueTupleInternal);
// Type: System::IValueTupleInternal
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2504))
// CS Name: ::System::IValueTupleInternal*
class CORDL_TYPE IValueTupleInternal {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
  constexpr operator ::System::Runtime::CompilerServices::ITuple*() noexcept;

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method ToStringEnd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToStringEnd();

  // Ctor Parameters [CppParam { name: "", ty: "IValueTupleInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IValueTupleInternal(IValueTupleInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IValueTupleInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueTupleInternal(IValueTupleInternal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IValueTupleInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IValueTupleInternal*, "System", "IValueTupleInternal");
