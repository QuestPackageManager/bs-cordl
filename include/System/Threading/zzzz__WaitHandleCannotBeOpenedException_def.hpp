#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WaitHandleCannotBeOpenedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class WaitHandleCannotBeOpenedException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::WaitHandleCannotBeOpenedException);
// Type: System.Threading::WaitHandleCannotBeOpenedException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2343))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2675))
// CS Name: ::System.Threading::WaitHandleCannotBeOpenedException*
class CORDL_TYPE WaitHandleCannotBeOpenedException : public ::System::ApplicationException {
public:
  // Declarations
  static inline ::System::Threading::WaitHandleCannotBeOpenedException* New_ctor();

  /// @brief Method .ctor, addr 0x263520c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::WaitHandleCannotBeOpenedException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2635268, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::Threading::WaitHandleCannotBeOpenedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x263528c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "WaitHandleCannotBeOpenedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitHandleCannotBeOpenedException(WaitHandleCannotBeOpenedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitHandleCannotBeOpenedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitHandleCannotBeOpenedException(WaitHandleCannotBeOpenedException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitHandleCannotBeOpenedException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::WaitHandleCannotBeOpenedException, 0x90>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::WaitHandleCannotBeOpenedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::WaitHandleCannotBeOpenedException*, "System.Threading", "WaitHandleCannotBeOpenedException");
