#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyNotFoundException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Collections::Generic {
class KeyNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Generic::KeyNotFoundException);
// Type: System.Collections.Generic::KeyNotFoundException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3839))
// CS Name: ::System.Collections.Generic::KeyNotFoundException*
class CORDL_TYPE KeyNotFoundException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Collections::Generic::KeyNotFoundException* New_ctor();

  /// @brief Method .ctor, addr 0x258bba0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::KeyNotFoundException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x258bbfc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::Collections::Generic::KeyNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x258bc20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "KeyNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyNotFoundException(KeyNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyNotFoundException(KeyNotFoundException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyNotFoundException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::KeyNotFoundException, 0x90>, "Size mismatch!");

} // namespace System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::KeyNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::KeyNotFoundException*, "System.Collections.Generic", "KeyNotFoundException");
