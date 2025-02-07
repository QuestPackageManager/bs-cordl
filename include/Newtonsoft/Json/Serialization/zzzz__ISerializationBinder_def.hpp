#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ISerializationBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISerializationBinder)
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ISerializationBinder;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ISerializationBinder);
// Dependencies
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.ISerializationBinder
class CORDL_TYPE ISerializationBinder {
public:
  // Declarations
  /// @brief Method BindToName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void BindToName(::System::Type* serializedType, ::ByRef<::StringW> assemblyName, ::ByRef<::StringW> typeName);

  /// @brief Method BindToType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializationBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializationBinder(ISerializationBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ISerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ISerializationBinder*, "Newtonsoft.Json.Serialization", "ISerializationBinder");
