#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlDataContractInterpreter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlDataContractInterpreter)
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Runtime::Serialization {
class XmlDataContract;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlDataContractInterpreter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlDataContractInterpreter);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlDataContractInterpreter
class CORDL_TYPE XmlDataContractInterpreter : public ::System::Object {
public:
  // Declarations
  /// @brief Field contract, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contract, put = __cordl_internal_set_contract)) ::System::Runtime::Serialization::XmlDataContract* contract;

  /// @brief Method CreateXmlSerializable, addr 0x5f60954, size 0x138, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::IXmlSerializable* CreateXmlSerializable();

  /// @brief Method GetConstructor, addr 0x5f60a8c, size 0x188, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructor();

  static inline ::System::Runtime::Serialization::XmlDataContractInterpreter* New_ctor(::System::Runtime::Serialization::XmlDataContract* contract);

  constexpr ::System::Runtime::Serialization::XmlDataContract* const& __cordl_internal_get_contract() const;

  constexpr ::System::Runtime::Serialization::XmlDataContract*& __cordl_internal_get_contract();

  constexpr void __cordl_internal_set_contract(::System::Runtime::Serialization::XmlDataContract* value);

  /// @brief Method .ctor, addr 0x5f6094c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::XmlDataContract* contract);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDataContractInterpreter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDataContractInterpreter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDataContractInterpreter(XmlDataContractInterpreter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDataContractInterpreter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDataContractInterpreter(XmlDataContractInterpreter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17112 };

  /// @brief Field contract, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlDataContract* ___contract;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlDataContractInterpreter, ___contract) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlDataContractInterpreter, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlDataContractInterpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlDataContractInterpreter*, "System.Runtime.Serialization", "XmlDataContractInterpreter");
