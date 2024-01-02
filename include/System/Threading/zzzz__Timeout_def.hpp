#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
CORDL_MODULE_EXPORT(Timeout)
// Forward declare root types
namespace System::Threading {
class Timeout;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Timeout);
// Type: System.Threading::Timeout
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2484)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2674))
// CS Name: ::System.Threading::Timeout*
class CORDL_TYPE Timeout : public ::System::Object {
public:
  // Declarations
  /// @brief Field InfiniteTimeSpan, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InfiniteTimeSpan, put = setStaticF_InfiniteTimeSpan))::System::TimeSpan InfiniteTimeSpan;

  static inline void setStaticF_InfiniteTimeSpan(::System::TimeSpan value);

  static inline ::System::TimeSpan getStaticF_InfiniteTimeSpan();

  // Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Timeout(Timeout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Timeout(Timeout const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Timeout();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Timeout, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Timeout);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Timeout*, "System.Threading", "Timeout");
