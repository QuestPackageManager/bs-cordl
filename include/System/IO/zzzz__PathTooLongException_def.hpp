#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PathTooLongException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class PathTooLongException;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::PathTooLongException);
// Type: System.IO::PathTooLongException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3568))
// CS Name: ::System.IO::PathTooLongException*
class CORDL_TYPE PathTooLongException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::System::IO::PathTooLongException* New_ctor();

  /// @brief Method .ctor, addr 0x250020c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::PathTooLongException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2500268, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::IO::PathTooLongException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x250028c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "PathTooLongException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathTooLongException(PathTooLongException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathTooLongException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathTooLongException(PathTooLongException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathTooLongException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::PathTooLongException, 0x90>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::PathTooLongException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::PathTooLongException*, "System.IO", "PathTooLongException");
