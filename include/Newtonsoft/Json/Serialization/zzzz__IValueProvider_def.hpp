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
// Type: Newtonsoft.Json.Serialization::IValueProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::IValueProvider*
class CORDL_TYPE IValueProvider {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetValue(::System::Object* target);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetValue(::System::Object* target, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IValueProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IValueProvider(IValueProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IValueProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueProvider(IValueProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10280 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IValueProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IValueProvider*, "Newtonsoft.Json.Serialization", "IValueProvider");
