#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ISerializationBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: Newtonsoft.Json.Serialization::ISerializationBinder
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::ISerializationBinder*
class CORDL_TYPE ISerializationBinder {
public:
  // Declarations
  /// @brief Method BindToName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void BindToName(::System::Type* serializedType, ByRef<::StringW> assemblyName, ByRef<::StringW> typeName);

  /// @brief Method BindToType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializationBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISerializationBinder(ISerializationBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISerializationBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializationBinder(ISerializationBinder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ISerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ISerializationBinder*, "Newtonsoft.Json.Serialization", "ISerializationBinder");
