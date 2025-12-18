#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SurrogateDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
CORDL_MODULE_EXPORT(SurrogateDataContract)
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SurrogateDataContract_SurrogateDataContractCriticalHelper;
}
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
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateDataContract;
}
namespace System::Runtime::Serialization {
class SurrogateDataContract_SurrogateDataContractCriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SurrogateDataContract);
MARK_REF_PTR_T(::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper);
// Dependencies System.Runtime.Serialization.DataContract::DataContractCriticalHelper
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SurrogateDataContract/SurrogateDataContractCriticalHelper
class CORDL_TYPE SurrogateDataContract_SurrogateDataContractCriticalHelper : public ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper {
public:
  // Declarations
  __declspec(property(get = get_SerializationSurrogate)) ::System::Runtime::Serialization::ISerializationSurrogate* SerializationSurrogate;

  /// @brief Field serializationSurrogate, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_serializationSurrogate,
                      put = __cordl_internal_set_serializationSurrogate)) ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;

  static inline ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*
  New_ctor(::System::Type* type, ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate);

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate* const& __cordl_internal_get_serializationSurrogate() const;

  constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& __cordl_internal_get_serializationSurrogate();

  constexpr void __cordl_internal_set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value);

  /// @brief Method .ctor, addr 0x5fabfdc, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate);

  /// @brief Method get_SerializationSurrogate, addr 0x5facee0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ISerializationSurrogate* get_SerializationSurrogate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SurrogateDataContract_SurrogateDataContractCriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SurrogateDataContract_SurrogateDataContractCriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SurrogateDataContract_SurrogateDataContractCriticalHelper(SurrogateDataContract_SurrogateDataContractCriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SurrogateDataContract_SurrogateDataContractCriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SurrogateDataContract_SurrogateDataContractCriticalHelper(SurrogateDataContract_SurrogateDataContractCriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17083 };

  /// @brief Field serializationSurrogate, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISerializationSurrogate* ___serializationSurrogate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper, ___serializationSurrogate) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper, 0x50>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.DataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SurrogateDataContract
class CORDL_TYPE SurrogateDataContract : public ::System::Runtime::Serialization::DataContract {
public:
  // Declarations
  using SurrogateDataContractCriticalHelper = ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper;

  __declspec(property(get = get_SerializationSurrogate)) ::System::Runtime::Serialization::ISerializationSurrogate* SerializationSurrogate;

  /// @brief Field helper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper* helper;

  /// @brief Method GetRealObject, addr 0x5fac6bc, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Object* GetRealObject(::System::Runtime::Serialization::IObjectReference* obj, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetUninitializedObject, addr 0x5fac774, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Object* GetUninitializedObject(::System::Type* objType);

  static inline ::System::Runtime::Serialization::SurrogateDataContract* New_ctor(::System::Type* type, ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate);

  /// @brief Method ReadXmlValue, addr 0x5fac7d0, size 0x254, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method SerializationSurrogateGetObjectData, addr 0x5fac210, size 0xdc, virtual false, abstract: false, final false
  inline void SerializationSurrogateGetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* serInfo, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SerializationSurrogateSetObjectData, addr 0x5fac5d8, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Object* SerializationSurrogateSetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* serInfo,
                                                               ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method WriteXmlValue, addr 0x5fac0ac, size 0xdc, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  constexpr ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper* value);

  /// @brief Method .ctor, addr 0x5fa4c64, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate);

  /// @brief Method get_SerializationSurrogate, addr 0x5fac094, size 0x18, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ISerializationSurrogate* get_SerializationSurrogate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SurrogateDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SurrogateDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SurrogateDataContract(SurrogateDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SurrogateDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SurrogateDataContract(SurrogateDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17084 };

  /// @brief Field helper, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SurrogateDataContract, ___helper) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SurrogateDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateDataContract*, "System.Runtime.Serialization", "SurrogateDataContract");
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateDataContract_SurrogateDataContractCriticalHelper*, "System.Runtime.Serialization",
                       "SurrogateDataContract/SurrogateDataContractCriticalHelper");
