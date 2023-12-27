#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeLoadException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DllNotFoundException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class DllNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::System::DllNotFoundException);
// Type: System::DllNotFoundException
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2573))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2373))
// CS Name: ::System::DllNotFoundException*
class CORDL_TYPE DllNotFoundException : public ::System::TypeLoadException {
public:
  // Declarations
  static inline ::System::DllNotFoundException* New_ctor();

  /// @brief Method .ctor addr 0x259568c size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::DllNotFoundException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x25956e8 size 0x24 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::DllNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x259570c size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "DllNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DllNotFoundException(DllNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DllNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DllNotFoundException(DllNotFoundException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DllNotFoundException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DllNotFoundException, 0xb0>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::DllNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::DllNotFoundException*, "System", "DllNotFoundException");
