#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AmbiguousMatchException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Reflection {
class AmbiguousMatchException;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AmbiguousMatchException);
// Type: System.Reflection::AmbiguousMatchException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2479))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3438))
// CS Name: ::System.Reflection::AmbiguousMatchException*
class CORDL_TYPE AmbiguousMatchException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::Reflection::AmbiguousMatchException* New_ctor();

  /// @brief Method .ctor addr 0x238c340 size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::Reflection::AmbiguousMatchException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x238c39c size 0x24 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::Reflection::AmbiguousMatchException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x238c3c0 size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "AmbiguousMatchException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmbiguousMatchException(AmbiguousMatchException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmbiguousMatchException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmbiguousMatchException(AmbiguousMatchException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbiguousMatchException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AmbiguousMatchException, 0x90>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AmbiguousMatchException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AmbiguousMatchException*, "System.Reflection", "AmbiguousMatchException");
