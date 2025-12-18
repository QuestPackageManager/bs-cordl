#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/FloatDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__PrimitiveDataContract_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FloatDataContract)
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
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class FloatDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::FloatDataContract);
// Dependencies System.Runtime.Serialization.PrimitiveDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.FloatDataContract
class CORDL_TYPE FloatDataContract : public ::System::Runtime::Serialization::PrimitiveDataContract {
public:
  // Declarations
  __declspec(property(get = get_ReadMethodName)) ::StringW ReadMethodName;

  __declspec(property(get = get_WriteMethodName)) ::StringW WriteMethodName;

  static inline ::System::Runtime::Serialization::FloatDataContract* New_ctor();

  /// @brief Method ReadXmlValue, addr 0x5fa8360, size 0x84, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method WriteXmlValue, addr 0x5fa830c, size 0x54, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  /// @brief Method .ctor, addr 0x5fa81e8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ReadMethodName, addr 0x5fa82c8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_ReadMethodName();

  /// @brief Method get_WriteMethodName, addr 0x5fa8284, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_WriteMethodName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatDataContract(FloatDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatDataContract(FloatDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17046 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::FloatDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::FloatDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FloatDataContract*, "System.Runtime.Serialization", "FloatDataContract");
