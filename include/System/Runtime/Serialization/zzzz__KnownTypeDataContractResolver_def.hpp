#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/KnownTypeDataContractResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KnownTypeDataContractResolver)
namespace System::Runtime::Serialization {
class DataContractResolver;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerContext;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class KnownTypeDataContractResolver;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::KnownTypeDataContractResolver);
// Dependencies System.Runtime.Serialization.DataContractResolver
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.KnownTypeDataContractResolver
class CORDL_TYPE KnownTypeDataContractResolver : public ::System::Runtime::Serialization::DataContractResolver {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Runtime::Serialization::XmlObjectSerializerContext* context;

  static inline ::System::Runtime::Serialization::KnownTypeDataContractResolver* New_ctor(::System::Runtime::Serialization::XmlObjectSerializerContext* context);

  /// @brief Method ResolveName, addr 0x5fa34a8, size 0x94, virtual true, abstract: false, final false
  inline ::System::Type* ResolveName(::StringW typeName, ::StringW typeNamespace, ::System::Type* declaredType, ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver);

  /// @brief Method TryResolveType, addr 0x5fa3324, size 0x11c, virtual true, abstract: false, final false
  inline bool TryResolveType(::System::Type* type, ::System::Type* declaredType, ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver,
                             ::ByRef<::System::Xml::XmlDictionaryString*> typeName, ::ByRef<::System::Xml::XmlDictionaryString*> typeNamespace);

  constexpr ::System::Runtime::Serialization::XmlObjectSerializerContext* const& __cordl_internal_get_context() const;

  constexpr ::System::Runtime::Serialization::XmlObjectSerializerContext*& __cordl_internal_get_context();

  constexpr void __cordl_internal_set_context(::System::Runtime::Serialization::XmlObjectSerializerContext* value);

  /// @brief Method .ctor, addr 0x5fa331c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::XmlObjectSerializerContext* context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KnownTypeDataContractResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KnownTypeDataContractResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KnownTypeDataContractResolver(KnownTypeDataContractResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KnownTypeDataContractResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KnownTypeDataContractResolver(KnownTypeDataContractResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17024 };

  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlObjectSerializerContext* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::KnownTypeDataContractResolver, ___context) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::KnownTypeDataContractResolver, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::KnownTypeDataContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::KnownTypeDataContractResolver*, "System.Runtime.Serialization", "KnownTypeDataContractResolver");
