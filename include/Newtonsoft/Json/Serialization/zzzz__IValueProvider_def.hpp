#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IValueProvider)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class IValueProvider;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::IValueProvider);
// Type: Newtonsoft.Json.Serialization::IValueProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11862))
// CS Name: ::Newtonsoft.Json.Serialization::IValueProvider*
class CORDL_TYPE IValueProvider {
public:
  // Declarations
  /// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetValue(::System::Object* target, ::System::Object* value);

  /// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* GetValue(::System::Object* target);

  // Ctor Parameters [CppParam { name: "", ty: "IValueProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IValueProvider(IValueProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IValueProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueProvider(IValueProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IValueProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IValueProvider*, "Newtonsoft.Json.Serialization", "IValueProvider");
