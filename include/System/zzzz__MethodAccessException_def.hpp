#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MemberAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MethodAccessException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class MethodAccessException;
}
// Write type traits
MARK_REF_PTR_T(::System::MethodAccessException);
// Type: System::MethodAccessException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2436))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2440))
// CS Name: ::System::MethodAccessException*
class CORDL_TYPE MethodAccessException : public ::System::MemberAccessException {
public:
  // Declarations
  static inline ::System::MethodAccessException* New_ctor();

  /// @brief Method .ctor, addr 0x25afb74, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::MethodAccessException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25afbd0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::MethodAccessException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25afbf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "MethodAccessException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodAccessException(MethodAccessException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodAccessException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodAccessException(MethodAccessException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodAccessException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MethodAccessException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MethodAccessException);
DEFINE_IL2CPP_ARG_TYPE(::System::MethodAccessException*, "System", "MethodAccessException");
