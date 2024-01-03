#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlResolver)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
class XmlResolver;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlResolver);
// Type: System.Xml::XmlResolver
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11574))
// CS Name: ::System.Xml::XmlResolver*
class CORDL_TYPE XmlResolver : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEntity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetEntity(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);

  /// @brief Method ResolveUri, addr 0x28a92cc, size 0x1d8, virtual true, abstract: false, final false
  inline ::System::Uri* ResolveUri(::System::Uri* baseUri, ::StringW relativeUri);

  /// @brief Method SupportsType, addr 0x28a94a4, size 0x148, virtual true, abstract: false, final false
  inline bool SupportsType(::System::Uri* absoluteUri, ::System::Type* type);

  /// @brief Method GetEntityAsync, addr 0x28a95ec, size 0x40, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* GetEntityAsync(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);

  static inline ::System::Xml::XmlResolver* New_ctor();

  /// @brief Method .ctor, addr 0x28a962c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlResolver(XmlResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlResolver(XmlResolver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlResolver();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlResolver, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlResolver*, "System.Xml", "XmlResolver");
