#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/IValueProvider.hpp"
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
// Dependencies
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.IValueProvider
class CORDL_TYPE IValueProvider {
public:
  // Declarations
  /// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* target);

  /// @brief Method SetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* target, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IValueProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueProvider(IValueProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10310 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IValueProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IValueProvider*, "Newtonsoft.Json.Serialization", "IValueProvider");
