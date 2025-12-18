#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SpecialTypeDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
CORDL_MODULE_EXPORT(SpecialTypeDataContract)
namespace System::Runtime::Serialization {
class SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SpecialTypeDataContract;
}
namespace System::Runtime::Serialization {
class SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SpecialTypeDataContract);
MARK_REF_PTR_T(::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper);
// Dependencies System.Runtime.Serialization.DataContract::DataContractCriticalHelper
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SpecialTypeDataContract/SpecialTypeDataContractCriticalHelper
class CORDL_TYPE SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper : public ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper* New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name,
                                                                                                                          ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method .ctor, addr 0x5fabf44, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper(SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper(SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17081 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper, 0x48>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.DataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SpecialTypeDataContract
class CORDL_TYPE SpecialTypeDataContract : public ::System::Runtime::Serialization::DataContract {
public:
  // Declarations
  using SpecialTypeDataContractCriticalHelper = ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper;

  __declspec(property(get = get_IsBuiltInDataContract)) bool IsBuiltInDataContract;

  /// @brief Field helper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper* helper;

  static inline ::System::Runtime::Serialization::SpecialTypeDataContract* New_ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  constexpr ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper* value);

  /// @brief Method .ctor, addr 0x5fabe7c, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method get_IsBuiltInDataContract, addr 0x5fabfd4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsBuiltInDataContract();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpecialTypeDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpecialTypeDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpecialTypeDataContract(SpecialTypeDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpecialTypeDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpecialTypeDataContract(SpecialTypeDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17082 };

  /// @brief Field helper, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SpecialTypeDataContract, ___helper) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SpecialTypeDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SpecialTypeDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SpecialTypeDataContract*, "System.Runtime.Serialization", "SpecialTypeDataContract");
NEED_NO_BOX(::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SpecialTypeDataContract_SpecialTypeDataContractCriticalHelper*, "System.Runtime.Serialization",
                       "SpecialTypeDataContract/SpecialTypeDataContractCriticalHelper");
