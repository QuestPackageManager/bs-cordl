#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JitHelpers)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class JitHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::JitHelpers);
// Type: System.Runtime.CompilerServices::JitHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3418))
// CS Name: ::System.Runtime.CompilerServices::JitHelpers*
class CORDL_TYPE JitHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method UnsafeCast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T UnsafeCast(::System::Object* o);

  /// @brief Method UnsafeEnumCast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t UnsafeEnumCast(T val);

  /// @brief Method UnsafeEnumCastLong, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int64_t UnsafeEnumCastLong(T val);

  // Ctor Parameters [CppParam { name: "", ty: "JitHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JitHelpers(JitHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JitHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JitHelpers(JitHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JitHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::JitHelpers, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::JitHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::JitHelpers*, "System.Runtime.CompilerServices", "JitHelpers");
