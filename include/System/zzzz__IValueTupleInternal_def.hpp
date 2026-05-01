#pragma once
// IWYU pragma private; include "System/IValueTupleInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IValueTupleInternal)
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
// Forward declare root types
namespace System {
class IValueTupleInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::IValueTupleInternal);
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.IValueTupleInternal
class CORDL_TYPE IValueTupleInternal {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
  constexpr operator ::System::Runtime::CompilerServices::ITuple*() noexcept;

  /// @brief Method GetHashCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method ToStringEnd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToStringEnd();

  /// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
  constexpr ::System::Runtime::CompilerServices::ITuple* i___System__Runtime__CompilerServices__ITuple() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IValueTupleInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueTupleInternal(IValueTupleInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2509 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IValueTupleInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IValueTupleInternal*, "System", "IValueTupleInternal");
