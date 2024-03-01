#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TypeLoadException_def.hpp"
CORDL_MODULE_EXPORT(TypeAccessException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class TypeAccessException;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeAccessException);
// Type: System::TypeAccessException
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::TypeAccessException*
class CORDL_TYPE TypeAccessException : public ::System::TypeLoadException {
public:
  // Declarations
  static inline ::System::TypeAccessException* New_ctor();

  static inline ::System::TypeAccessException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x26bd748, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26bd7a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeAccessException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeAccessException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeAccessException(TypeAccessException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeAccessException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeAccessException(TypeAccessException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeAccessException, 0xb0>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::TypeAccessException);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeAccessException*, "System", "TypeAccessException");
