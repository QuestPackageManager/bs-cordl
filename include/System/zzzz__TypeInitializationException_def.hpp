#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeInitializationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class TypeInitializationException;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeInitializationException);
// Type: System::TypeInitializationException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::TypeInitializationException*
class CORDL_TYPE TypeInitializationException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_TypeName))::StringW TypeName;

  /// @brief Field _typeName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__typeName, put = __cordl_internal_set__typeName))::StringW _typeName;

  /// @brief Method GetObjectData, addr 0x2950104, size 0x108, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::TypeInitializationException* New_ctor();

  static inline ::System::TypeInitializationException* New_ctor(::StringW fullTypeName, ::System::Exception* innerException);

  static inline ::System::TypeInitializationException* New_ctor(::StringW fullTypeName, ::StringW message, ::System::Exception* innerException);

  static inline ::System::TypeInitializationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::StringW const& __cordl_internal_get__typeName() const;

  constexpr ::StringW& __cordl_internal_get__typeName();

  constexpr void __cordl_internal_set__typeName(::StringW value);

  /// @brief Method .ctor, addr 0x294ff70, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x294ffc8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW fullTypeName, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2950048, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW fullTypeName, ::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2950080, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_TypeName, addr 0x295020c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_TypeName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInitializationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeInitializationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInitializationException(TypeInitializationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInitializationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInitializationException(TypeInitializationException const&) = delete;

  /// @brief Field _typeName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____typeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeInitializationException, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::TypeInitializationException, ____typeName) == 0x90, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::TypeInitializationException);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeInitializationException*, "System", "TypeInitializationException");
