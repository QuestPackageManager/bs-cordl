#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlException)
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Xml {
class XmlException;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlException);
// Type: System.Xml::XmlException
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11567))
// CS Name: ::System.Xml::XmlException*
class CORDL_TYPE XmlException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field res, offset 0x90, size 0x8
  __declspec(property(get = __get_res, put = __set_res))::StringW res;

  /// @brief Field args, offset 0x98, size 0x8
  __declspec(property(get = __get_args, put = __set_args))::ArrayW<::StringW, ::Array<::StringW>*> args;

  /// @brief Field lineNumber, offset 0xa0, size 0x4
  __declspec(property(get = __get_lineNumber, put = __set_lineNumber)) int32_t lineNumber;

  /// @brief Field linePosition, offset 0xa4, size 0x4
  __declspec(property(get = __get_linePosition, put = __set_linePosition)) int32_t linePosition;

  /// @brief Field sourceUri, offset 0xa8, size 0x8
  __declspec(property(get = __get_sourceUri, put = __set_sourceUri))::StringW sourceUri;

  /// @brief Field message, offset 0xb0, size 0x8
  __declspec(property(get = __get_message, put = __set_message))::StringW message;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_Message))::StringW Message;

  __declspec(property(get = get_ResString))::StringW ResString;

  constexpr ::StringW& __get_res();

  constexpr ::StringW const& __get_res() const;

  constexpr void __set_res(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_args();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_args() const;

  constexpr void __set_args(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __get_lineNumber();

  constexpr int32_t const& __get_lineNumber() const;

  constexpr void __set_lineNumber(int32_t value);

  constexpr int32_t& __get_linePosition();

  constexpr int32_t const& __get_linePosition() const;

  constexpr void __set_linePosition(int32_t value);

  constexpr ::StringW& __get_sourceUri();

  constexpr ::StringW const& __get_sourceUri() const;

  constexpr void __set_sourceUri(::StringW value);

  constexpr ::StringW& __get_message();

  constexpr ::StringW const& __get_message() const;

  constexpr void __set_message(::StringW value);

  static inline ::System::Xml::XmlException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x28a6f34 size 0x3d8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData addr 0x28a75b0 size 0x170 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::XmlException* New_ctor();

  /// @brief Method .ctor addr 0x28a7720 size 0x18 virtual false final false
  inline void _ctor();

  static inline ::System::Xml::XmlException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x28a7738 size 0x14 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::Xml::XmlException* New_ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor addr 0x28a774c size 0x8 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::XmlException* New_ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  /// @brief Method .ctor addr 0x28a7754 size 0x128 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method .ctor addr 0x289d458 size 0x5c virtual false final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::StringW arg);

  /// @brief Method .ctor addr 0x289d254 size 0xd8 virtual false final false
  inline void _ctor(::StringW res, ::StringW arg);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::StringW arg, ::StringW sourceUri);

  /// @brief Method .ctor addr 0x28a79f4 size 0xe4 virtual false final false
  inline void _ctor(::StringW res, ::StringW arg, ::StringW sourceUri);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor addr 0x28a3144 size 0xec virtual false final false
  inline void _ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  /// @brief Method .ctor addr 0x28a7ad8 size 0xf8 virtual false final false
  inline void _ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor addr 0x28a32a4 size 0x70 virtual false final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  /// @brief Method .ctor addr 0x28a7bd0 size 0x7c virtual false final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor addr 0x28a7c4c size 0x7c virtual false final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition,
                                                      ::StringW sourceUri);

  /// @brief Method .ctor addr 0x28a7974 size 0x80 virtual false final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  /// @brief Method FormatUserMessage addr 0x28a787c size 0xf8 virtual false final false
  static inline ::StringW FormatUserMessage(::StringW message, int32_t lineNumber, int32_t linePosition);

  /// @brief Method CreateMessage addr 0x28a730c size 0x2a4 virtual false final false
  static inline ::StringW CreateMessage(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition);

  /// @brief Method BuildCharExceptionArgs addr 0x289d3fc size 0x5c virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> BuildCharExceptionArgs(::StringW data, int32_t invCharIndex);

  /// @brief Method BuildCharExceptionArgs addr 0x28a7cc8 size 0x54 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> BuildCharExceptionArgs(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t length, int32_t invCharIndex);

  /// @brief Method BuildCharExceptionArgs addr 0x28a3864 size 0x2a8 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> BuildCharExceptionArgs(char16_t invChar, char16_t nextChar);

  /// @brief Method get_LineNumber addr 0x28a7d1c size 0x8 virtual false final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition addr 0x28a7d24 size 0x8 virtual false final false
  inline int32_t get_LinePosition();

  /// @brief Method get_Message addr 0x28a7d2c size 0x18 virtual true final false
  inline ::StringW get_Message();

  /// @brief Method get_ResString addr 0x28a7d44 size 0x8 virtual false final false
  inline ::StringW get_ResString();

  // Ctor Parameters [CppParam { name: "", ty: "XmlException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlException(XmlException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlException(XmlException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlException();

public:
  /// @brief Field res, offset: 0x90, size: 0x8, def value: None
  ::StringW ___res;

  /// @brief Field args, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___args;

  /// @brief Field lineNumber, offset: 0xa0, size: 0x4, def value: None
  int32_t ___lineNumber;

  /// @brief Field linePosition, offset: 0xa4, size: 0x4, def value: None
  int32_t ___linePosition;

  /// @brief Field sourceUri, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___sourceUri;

  /// @brief Field message, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlException, 0xb8>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlException*, "System.Xml", "XmlException");
