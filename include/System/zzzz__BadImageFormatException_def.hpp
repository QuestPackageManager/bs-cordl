#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BadImageFormatException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class BadImageFormatException;
}
// Write type traits
MARK_REF_PTR_T(::System::BadImageFormatException);
// Type: System::BadImageFormatException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2479))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2356))
// CS Name: ::System::BadImageFormatException*
class CORDL_TYPE BadImageFormatException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field _fileName, offset 0x90, size 0x8
  __declspec(property(get = __get__fileName, put = __set__fileName))::StringW _fileName;

  /// @brief Field _fusionLog, offset 0x98, size 0x8
  __declspec(property(get = __get__fusionLog, put = __set__fusionLog))::StringW _fusionLog;

  __declspec(property(get = get_Message))::StringW Message;

  constexpr ::StringW& __get__fileName();

  constexpr ::StringW const& __get__fileName() const;

  constexpr void __set__fileName(::StringW value);

  constexpr ::StringW& __get__fusionLog();

  constexpr ::StringW const& __get__fusionLog() const;

  constexpr void __set__fusionLog(::StringW value);

  static inline ::System::BadImageFormatException* New_ctor();

  /// @brief Method .ctor addr 0x23c8288 size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::BadImageFormatException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x23c82e4 size 0x24 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::BadImageFormatException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor addr 0x23c8308 size 0x24 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

  static inline ::System::BadImageFormatException* New_ctor(::StringW message, ::StringW fileName);

  /// @brief Method .ctor addr 0x23c832c size 0x34 virtual false final false
  inline void _ctor(::StringW message, ::StringW fileName);

  static inline ::System::BadImageFormatException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x23c8360 size 0xb0 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData addr 0x23c8410 size 0x118 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Message addr 0x23c8528 size 0x18 virtual true final false
  inline ::StringW get_Message();

  /// @brief Method SetMessageField addr 0x23c8540 size 0x7c virtual false final false
  inline void SetMessageField();

  /// @brief Method ToString addr 0x23c85bc size 0x1e4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "BadImageFormatException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BadImageFormatException(BadImageFormatException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BadImageFormatException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BadImageFormatException(BadImageFormatException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BadImageFormatException();

public:
  /// @brief Field _fileName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____fileName;

  /// @brief Field _fusionLog, offset: 0x98, size: 0x8, def value: None
  ::StringW ____fusionLog;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::BadImageFormatException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::BadImageFormatException, ____fileName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::BadImageFormatException, ____fusionLog) == 0x98, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::BadImageFormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::BadImageFormatException*, "System", "BadImageFormatException");
