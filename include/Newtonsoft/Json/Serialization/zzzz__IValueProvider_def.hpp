#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/IValueProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Newtonsoft::Json::Serialization::IValueProvider*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::IValueProvider*, "Newtonsoft.Json.Serialization", "IValueProvider");
// [NullableContext(1)]
// Dependencies
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.IValueProvider
class CORDL_TYPE IValueProvider {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetValue(::System::Object* target);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetValue(::System::Object* target, /* [Nullable(2)] */ ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IValueProvider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueProvider(IValueProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13495 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
