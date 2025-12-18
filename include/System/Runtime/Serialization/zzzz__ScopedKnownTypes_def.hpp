#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ScopedKnownTypes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScopedKnownTypes)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct ScopedKnownTypes;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::ScopedKnownTypes);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.ScopedKnownTypes
struct CORDL_TYPE ScopedKnownTypes {
public:
  // Declarations
  /// @brief Method GetDataContract, addr 0x5fabdd4, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method Pop, addr 0x5fabdc4, size 0x10, virtual false, abstract: false, final false
  inline void Pop();

  /// @brief Method Push, addr 0x5fabcb8, size 0x10c, virtual false, abstract: false, final false
  inline void Push(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* dataContractDictionary);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopedKnownTypes();

  // Ctor Parameters [CppParam { name: "dataContractDictionaries", ty:
  // "::ArrayW<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Runtime::Serialization::DataContract*>*,::Array<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Runtime::Serialization::DataContract*>*>*>",
  // modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScopedKnownTypes(::ArrayW<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*,
                                      ::Array<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>*>
                                 dataContractDictionaries,
                             int32_t count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17079 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field dataContractDictionaries, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*,
           ::Array<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>*>
      dataContractDictionaries;

  /// @brief Field count, offset: 0x8, size: 0x4, def value: None
  int32_t count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ScopedKnownTypes, dataContractDictionaries) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ScopedKnownTypes, count) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ScopedKnownTypes, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ScopedKnownTypes, "System.Runtime.Serialization", "ScopedKnownTypes");
