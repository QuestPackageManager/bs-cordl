#pragma once
// IWYU pragma private; include "System/Xml/XmlResolver.hpp"
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
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlResolver;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlResolver);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlResolver
class CORDL_TYPE XmlResolver : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEntity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetEntity(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);

  /// @brief Method GetEntityAsync, addr 0x4363ac0, size 0x38, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* GetEntityAsync(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);

  static inline ::System::Xml::XmlResolver* New_ctor();

  /// @brief Method ResolveUri, addr 0x43637b0, size 0x1cc, virtual true, abstract: false, final false
  inline ::System::Uri* ResolveUri(::System::Uri* baseUri, ::StringW relativeUri);

  /// @brief Method SupportsType, addr 0x436397c, size 0x144, virtual true, abstract: false, final false
  inline bool SupportsType(::System::Uri* absoluteUri, ::System::Type* type);

  /// @brief Method .ctor, addr 0x4363af8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlResolver(XmlResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlResolver(XmlResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlResolver, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlResolver*, "System.Xml", "XmlResolver");
