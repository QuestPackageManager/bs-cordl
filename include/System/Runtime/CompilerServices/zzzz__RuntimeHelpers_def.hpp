#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeHelpers)
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System {
struct RuntimeTypeHandle;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::RuntimeHelpers);
// Type: System.Runtime.CompilerServices::RuntimeHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3423))
// CS Name: ::System.Runtime.CompilerServices::RuntimeHelpers*
class CORDL_TYPE RuntimeHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method InitializeArray, addr 0x24decf0, size 0x4, virtual false, abstract: false, final false
  static inline void InitializeArray(::System::Array* array, void* fldHandle);

  /// @brief Method InitializeArray, addr 0x24decf4, size 0xa8, virtual false, abstract: false, final false
  static inline void InitializeArray(::System::Array* array, ::System::RuntimeFieldHandle fldHandle);

  /// @brief Method get_OffsetToStringData, addr 0x24ded9c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_OffsetToStringData();

  /// @brief Method GetHashCode, addr 0x24deda0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::System::Object* o);

  /// @brief Method RunClassConstructor, addr 0x24deda8, size 0x4, virtual false, abstract: false, final false
  static inline void RunClassConstructor(void* type);

  /// @brief Method RunClassConstructor, addr 0x24dedac, size 0xc0, virtual false, abstract: false, final false
  static inline void RunClassConstructor(::System::RuntimeTypeHandle type);

  /// @brief Method SufficientExecutionStack, addr 0x24dee6c, size 0x4, virtual false, abstract: false, final false
  static inline bool SufficientExecutionStack();

  /// @brief Method TryEnsureSufficientExecutionStack, addr 0x24dee70, size 0x4, virtual false, abstract: false, final false
  static inline bool TryEnsureSufficientExecutionStack();

  /// @brief Method PrepareConstrainedRegions, addr 0x24dee74, size 0x4, virtual false, abstract: false, final false
  static inline void PrepareConstrainedRegions();

  /// @brief Method IsReferenceOrContainsReferences, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsReferenceOrContainsReferences();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeHelpers(RuntimeHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeHelpers(RuntimeHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::RuntimeHelpers, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeHelpers*, "System.Runtime.CompilerServices", "RuntimeHelpers");
