#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaException;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaException);
// Type: System.Xml.Schema::XmlSchemaException
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaException*
class CORDL_TYPE XmlSchemaException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_Args))::ArrayW<::StringW, ::Array<::StringW>*> Args;

  __declspec(property(get = get_GetRes))::StringW GetRes;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_Message))::StringW Message;

  __declspec(property(get = get_SourceSchemaObject))::System::Xml::Schema::XmlSchemaObject* SourceSchemaObject;

  __declspec(property(get = get_SourceUri))::StringW SourceUri;

  /// @brief Field args, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args))::ArrayW<::StringW, ::Array<::StringW>*> args;

  /// @brief Field lineNumber, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumber, put = __cordl_internal_set_lineNumber)) int32_t lineNumber;

  /// @brief Field linePosition, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_linePosition, put = __cordl_internal_set_linePosition)) int32_t linePosition;

  /// @brief Field message, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message))::StringW message;

  /// @brief Field res, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_res, put = __cordl_internal_set_res))::StringW res;

  /// @brief Field sourceSchemaObject, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceSchemaObject, put = __cordl_internal_set_sourceSchemaObject))::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject;

  /// @brief Field sourceUri, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceUri, put = __cordl_internal_set_sourceUri))::StringW sourceUri;

  /// @brief Method CreateMessage, addr 0x2e34040, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW CreateMessage(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method GetObjectData, addr 0x2e34104, size 0x170, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor();

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW message);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW res, ::StringW arg);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW res, ::StringW arg, ::System::Xml::Schema::XmlSchemaObject* source);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW res, ::StringW arg, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, ::StringW sourceUri,
                                                                    int32_t lineNumber, int32_t linePosition, ::System::Xml::Schema::XmlSchemaObject* source);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::Schema::XmlSchemaObject* source);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW res, ::System::Xml::Schema::XmlSchemaObject* source);

  static inline ::System::Xml::Schema::XmlSchemaException* New_ctor(::StringW res, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  /// @brief Method SetSchemaObject, addr 0x2e34680, size 0x8, virtual false, abstract: false, final false
  inline void SetSchemaObject(::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method SetSource, addr 0x2e34688, size 0x28, virtual false, abstract: false, final false
  inline void SetSource(::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method SetSource, addr 0x2e2b3d4, size 0xc, virtual false, abstract: false, final false
  inline void SetSource(::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

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

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_sourceSchemaObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObject*> const& __cordl_internal_get_sourceSchemaObject() const;

  constexpr ::StringW const& __cordl_internal_get_sourceUri() const;

  constexpr ::StringW& __cordl_internal_get_sourceUri();

  constexpr void __cordl_internal_set_args(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_lineNumber(int32_t value);

  constexpr void __cordl_internal_set_linePosition(int32_t value);

  constexpr void __cordl_internal_set_message(::StringW value);

  constexpr void __cordl_internal_set_res(::StringW value);

  constexpr void __cordl_internal_set_sourceSchemaObject(::System::Xml::Schema::XmlSchemaObject* value);

  constexpr void __cordl_internal_set_sourceUri(::StringW value);

  /// @brief Method .ctor, addr 0x2e34274, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2e33c88, size 0x3b8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2e34288, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2e343bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x2e34298, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x2e2bf90, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg);

  /// @brief Method .ctor, addr 0x2e34598, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg, ::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method .ctor, addr 0x2e273a0, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW arg, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x2e34450, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method .ctor, addr 0x2e343c8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition,
                    ::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method .ctor, addr 0x2e34520, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method .ctor, addr 0x2e2725c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  /// @brief Method .ctor, addr 0x2e34514, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method .ctor, addr 0x2e344a8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  /// @brief Method get_Args, addr 0x2e34658, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Args();

  /// @brief Method get_GetRes, addr 0x2e34650, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GetRes();

  /// @brief Method get_LineNumber, addr 0x2e34668, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x2e34670, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_Message, addr 0x2e346b0, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_SourceSchemaObject, addr 0x2e34678, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* get_SourceSchemaObject();

  /// @brief Method get_SourceUri, addr 0x2e34660, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceUri();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaException(XmlSchemaException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaException(XmlSchemaException const&) = delete;

  /// @brief Field res, offset: 0x90, size: 0x8, def value: None
  ::StringW ___res;

  /// @brief Field args, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___args;

  /// @brief Field sourceUri, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___sourceUri;

  /// @brief Field lineNumber, offset: 0xa8, size: 0x4, def value: None
  int32_t ___lineNumber;

  /// @brief Field linePosition, offset: 0xac, size: 0x4, def value: None
  int32_t ___linePosition;

  /// @brief Field sourceSchemaObject, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___sourceSchemaObject;

  /// @brief Field message, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaException, 0xc0>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaException, ___res) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaException, ___args) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaException, ___sourceUri) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaException, ___lineNumber) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaException, ___linePosition) == 0xac, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaException, ___sourceSchemaObject) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaException, ___message) == 0xb8, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaException*, "System.Xml.Schema", "XmlSchemaException");
