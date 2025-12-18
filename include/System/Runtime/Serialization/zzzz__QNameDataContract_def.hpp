#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/QNameDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__PrimitiveDataContract_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(QNameDataContract)
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContext;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerWriteContext;
}
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Runtime::Serialization {
class XmlWriterDelegator;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class QNameDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::QNameDataContract);
// Dependencies System.Runtime.Serialization.PrimitiveDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.QNameDataContract
class CORDL_TYPE QNameDataContract : public ::System::Runtime::Serialization::PrimitiveDataContract {
public:
  // Declarations
  __declspec(property(get = get_IsPrimitive)) bool IsPrimitive;

  __declspec(property(get = get_ReadMethodName)) ::StringW ReadMethodName;

  __declspec(property(get = get_WriteMethodName)) ::StringW WriteMethodName;

  static inline ::System::Runtime::Serialization::QNameDataContract* New_ctor();

  /// @brief Method ReadXmlValue, addr 0x5faa544, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method WriteRootElement, addr 0x5faa5e4, size 0x100, virtual true, abstract: false, final false
  inline void WriteRootElement(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteXmlValue, addr 0x5faa4a0, size 0xa4, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  /// @brief Method .ctor, addr 0x5faa360, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsPrimitive, addr 0x5faa498, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPrimitive();

  /// @brief Method get_ReadMethodName, addr 0x5faa454, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ReadMethodName();

  /// @brief Method get_WriteMethodName, addr 0x5faa410, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_WriteMethodName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QNameDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QNameDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QNameDataContract(QNameDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QNameDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QNameDataContract(QNameDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17077 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::QNameDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::QNameDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::QNameDataContract*, "System.Runtime.Serialization", "QNameDataContract");
