#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContractResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DataContractResolver)
namespace System::Xml {
class XmlDictionaryString;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DataContractResolver;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataContractResolver);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DataContractResolver
class CORDL_TYPE DataContractResolver : public ::System::Object {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::DataContractResolver* New_ctor();

  /// @brief Method ResolveName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* ResolveName(::StringW typeName, ::StringW typeNamespace, ::System::Type* declaredType, ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver);

  /// @brief Method TryResolveType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryResolveType(::System::Type* type, ::System::Type* declaredType, ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver,
                             ::ByRef<::System::Xml::XmlDictionaryString*> typeName, ::ByRef<::System::Xml::XmlDictionaryString*> typeNamespace);

  /// @brief Method .ctor, addr 0x5f96a24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataContractResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataContractResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataContractResolver(DataContractResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataContractResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataContractResolver(DataContractResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16991 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataContractResolver, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataContractResolver*, "System.Runtime.Serialization", "DataContractResolver");
