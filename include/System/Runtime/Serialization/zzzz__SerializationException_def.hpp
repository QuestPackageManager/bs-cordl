#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerializationException)
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
namespace System::Runtime::Serialization {
class SerializationException;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationException);
// Type: System.Runtime.Serialization::SerializationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::SerializationException*
class CORDL_TYPE SerializationException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field s_nullMessage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_nullMessage, put = setStaticF_s_nullMessage))::StringW s_nullMessage;

  static inline ::System::Runtime::Serialization::SerializationException* New_ctor();

  static inline ::System::Runtime::Serialization::SerializationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                   ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Serialization::SerializationException* New_ctor(::StringW message);

  static inline ::System::Runtime::Serialization::SerializationException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x25a6148, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25a6204, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25a61bc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25a61e0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::StringW getStaticF_s_nullMessage();

  static inline void setStaticF_s_nullMessage(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationException(SerializationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationException(SerializationException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationException, 0x90>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationException*, "System.Runtime.Serialization", "SerializationException");
