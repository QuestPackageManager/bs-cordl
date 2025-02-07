#pragma once
// IWYU pragma private; include "System/Xml/XmlException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class XmlException;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlException);
// Dependencies System.SystemException
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlException
class CORDL_TYPE XmlException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_Message)) ::StringW Message;

  __declspec(property(get = get_ResString)) ::StringW ResString;

  /// @brief Field args, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::ArrayW<::StringW, ::Array<::StringW>*> args;

  /// @brief Field lineNumber, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumber, put = __cordl_internal_set_lineNumber)) int32_t lineNumber;

  /// @brief Field linePosition, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_linePosition, put = __cordl_internal_set_linePosition)) int32_t linePosition;

  /// @brief Field message, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message)) ::StringW message;

  /// @brief Field res, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_res, put = __cordl_internal_set_res)) ::StringW res;

  /// @brief Field sourceUri, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceUri, put = __cordl_internal_set_sourceUri)) ::StringW sourceUri;

  /// @brief Method BuildCharExceptionArgs, addr 0x4366304, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> BuildCharExceptionArgs(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t length, int32_t invCharIndex);

  /// @brief Method BuildCharExceptionArgs, addr 0x435a540, size 0x5c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> BuildCharExceptionArgs(::StringW data, int32_t invCharIndex);

  /// @brief Method BuildCharExceptionArgs, addr 0x435a900, size 0x268, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> BuildCharExceptionArgs(char16_t invChar, char16_t nextChar);

  /// @brief Method CreateMessage, addr 0x43657f8, size 0x22c, virtual false, abstract: false, final false
  static inline ::StringW CreateMessage(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition);

  /// @brief Method FormatUserMessage, addr 0x4365ce4, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW FormatUserMessage(::StringW message, int32_t lineNumber, int32_t linePosition);

  /// @brief Method GetObjectData, addr 0x4365a24, size 0x170, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::XmlException* New_ctor();

  static inline ::System::Xml::XmlException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::XmlException* New_ctor(::StringW message);

  static inline ::System::Xml::XmlException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::Xml::XmlException* New_ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::XmlException* New_ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::StringW arg);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::StringW arg, ::System::Xml::IXmlLineInfo* lineInfo);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::StringW arg, ::StringW sourceUri);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition,
                                                      ::StringW sourceUri);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::IXmlLineInfo* lineInfo);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::IXmlLineInfo* lineInfo, ::StringW sourceUri);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::XmlException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_args() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_args();

  constexpr int32_t const& __cordl_internal_get_lineNumber() const;

  constexpr int32_t& __cordl_internal_get_lineNumber();

  constexpr int32_t const& __cordl_internal_get_linePosition() const;

  constexpr int32_t& __cordl_internal_get_linePosition();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr ::StringW const& __cordl_internal_get_res() const;

  constexpr ::StringW& __cordl_internal_get_res();

  constexpr ::StringW const& __cordl_internal_get_sourceUri() const;

  constexpr ::StringW& __cordl_internal_get_sourceUri();

  constexpr void __cordl_internal_set_args(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_lineNumber(int32_t value);

  constexpr void __cordl_internal_set_linePosition(int32_t value);

  constexpr void __cordl_internal_set_message(::StringW value);

  constexpr void __cordl_internal_set_res(::StringW value);

  constexpr void __cordl_internal_set_sourceUri(::StringW value);

  /// @brief Method .ctor, addr 0x4365b94, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4365420, size 0x3d8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x4365bac, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x4365bc8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x4365bc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x4365bd8, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  /// @brief Method .ctor, addr 0x435a3bc, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg);

  /// @brief Method .ctor, addr 0x4365ef8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg, ::System::Xml::IXmlLineInfo* lineInfo);

  /// @brief Method .ctor, addr 0x4361b54, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x4366138, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  /// @brief Method .ctor, addr 0x4365e38, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg, ::StringW sourceUri);

  /// @brief Method .ctor, addr 0x435a59c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method .ctor, addr 0x4366288, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x4365db8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  /// @brief Method .ctor, addr 0x4366130, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::IXmlLineInfo* lineInfo);

  /// @brief Method .ctor, addr 0x4365f8c, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::IXmlLineInfo* lineInfo, ::StringW sourceUri);

  /// @brief Method .ctor, addr 0x4361dc0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x436620c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri);

  /// @brief Method get_LineNumber, addr 0x4366358, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x4366360, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_Message, addr 0x4366368, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_ResString, addr 0x4366380, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ResString();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlException(XmlException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlException(XmlException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7363 };

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
static_assert(offsetof(::System::Xml::XmlException, ___res) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlException, ___args) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlException, ___lineNumber) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlException, ___linePosition) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlException, ___sourceUri) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlException, ___message) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlException, 0xb8>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlException*, "System.Xml", "XmlException");
