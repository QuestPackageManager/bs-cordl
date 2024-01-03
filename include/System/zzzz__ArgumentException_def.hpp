#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ArgumentException)
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
class ArgumentException;
}
// Write type traits
MARK_REF_PTR_T(::System::ArgumentException);
// Type: System::ArgumentException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2344))
// CS Name: ::System::ArgumentException*
class CORDL_TYPE ArgumentException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field _paramName, offset 0x90, size 0x8
  __declspec(property(get = __get__paramName, put = __set__paramName))::StringW _paramName;

  __declspec(property(get = get_Message))::StringW Message;

  constexpr ::StringW& __get__paramName();

  constexpr ::StringW const& __get__paramName() const;

  constexpr void __set__paramName(::StringW value);

  static inline ::System::ArgumentException* New_ctor();

  /// @brief Method .ctor, addr 0x25209d8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ArgumentException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x251f7c8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::ArgumentException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2520a34, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::ArgumentException* New_ctor(::StringW message, ::StringW paramName, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2520a58, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW paramName, ::System::Exception* innerException);

  static inline ::System::ArgumentException* New_ctor(::StringW message, ::StringW paramName);

  /// @brief Method .ctor, addr 0x25194a0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW paramName);

  static inline ::System::ArgumentException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2520a90, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData, addr 0x2520b18, size 0xdc, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Message, addr 0x2520bf4, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgumentException(ArgumentException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgumentException(ArgumentException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentException();

public:
  /// @brief Field _paramName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____paramName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ArgumentException, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::ArgumentException, ____paramName) == 0x90, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::ArgumentException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArgumentException*, "System", "ArgumentException");
