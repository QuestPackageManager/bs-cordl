#pragma once
// IWYU pragma private; include "System/Xml/XPath/XPathException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XPathException)
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
namespace System::Xml::XPath {
class XPathException;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XPath::XPathException);
// Dependencies System.SystemException
namespace System::Xml::XPath {
// Is value type: false
// CS Name: System.Xml.XPath.XPathException
class CORDL_TYPE XPathException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field args, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::ArrayW<::StringW, ::Array<::StringW>*> args;

  /// @brief Field message, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message)) ::StringW message;

  /// @brief Field res, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_res, put = __cordl_internal_set_res)) ::StringW res;

  /// @brief Method Create, addr 0x43645bc, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Xml::XPath::XPathException* Create(::StringW res);

  /// @brief Method Create, addr 0x436468c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Xml::XPath::XPathException* Create(::StringW res, ::StringW arg);

  /// @brief Method Create, addr 0x4364754, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Xml::XPath::XPathException* Create(::StringW res, ::StringW arg, ::StringW arg2);

  /// @brief Method CreateMessage, addr 0x4364228, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW CreateMessage(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method GetObjectData, addr 0x4364364, size 0xe8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::XPath::XPathException* New_ctor();

  static inline ::System::Xml::XPath::XPathException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Xml::XPath::XPathException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::Xml::XPath::XPathException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  static inline ::System::Xml::XPath::XPathException* New_ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* inner);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_args() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_args();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr ::StringW const& __cordl_internal_get_res() const;

  constexpr ::StringW& __cordl_internal_get_res();

  constexpr void __cordl_internal_set_args(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_message(::StringW value);

  constexpr void __cordl_internal_set_res(::StringW value);

  /// @brief Method .ctor, addr 0x436444c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4363fb4, size 0x274, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x43644a0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x436463c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method .ctor, addr 0x4364560, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* inner);

  /// @brief Method get_Message, addr 0x436482c, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathException(XPathException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathException(XPathException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7378 };

  /// @brief Field res, offset: 0x90, size: 0x8, def value: None
  ::StringW ___res;

  /// @brief Field args, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___args;

  /// @brief Field message, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XPath::XPathException, ___res) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathException, ___args) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XPath::XPathException, ___message) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathException, 0xa8>, "Size mismatch!");

} // namespace System::Xml::XPath
NEED_NO_BOX(::System::Xml::XPath::XPathException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathException*, "System.Xml.XPath", "XPathException");
