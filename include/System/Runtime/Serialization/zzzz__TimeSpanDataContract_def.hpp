#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/TimeSpanDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__PrimitiveDataContract_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimeSpanDataContract)
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
class TimeSpanDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::TimeSpanDataContract);
// Dependencies System.Runtime.Serialization.PrimitiveDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.TimeSpanDataContract
class CORDL_TYPE TimeSpanDataContract : public ::System::Runtime::Serialization::PrimitiveDataContract {
public:
  // Declarations
  __declspec(property(get = get_ReadMethodName)) ::StringW ReadMethodName;

  __declspec(property(get = get_WriteMethodName)) ::StringW WriteMethodName;

  static inline ::System::Runtime::Serialization::TimeSpanDataContract* New_ctor();

  static inline ::System::Runtime::Serialization::TimeSpanDataContract* New_ctor(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method ReadXmlValue, addr 0x5fa9cc0, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method WriteXmlValue, addr 0x5fa9c38, size 0x88, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  /// @brief Method .ctor, addr 0x5fa9ac0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5fa9b28, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method get_ReadMethodName, addr 0x5fa9bf4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ReadMethodName();

  /// @brief Method get_WriteMethodName, addr 0x5fa9bb0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_WriteMethodName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpanDataContract(TimeSpanDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpanDataContract(TimeSpanDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17072 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::TimeSpanDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::TimeSpanDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::TimeSpanDataContract*, "System.Runtime.Serialization", "TimeSpanDataContract");
