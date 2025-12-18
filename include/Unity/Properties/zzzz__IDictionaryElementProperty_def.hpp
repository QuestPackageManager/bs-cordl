#pragma once
// IWYU pragma private; include "Unity/Properties/IDictionaryElementProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDictionaryElementProperty)
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Properties {
class IDictionaryElementProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IDictionaryElementProperty);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IDictionaryElementProperty
class CORDL_TYPE IDictionaryElementProperty {
public:
  // Declarations
  __declspec(property(get = get_ObjectKey)) ::System::Object* ObjectKey;

  /// @brief Method get_ObjectKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_ObjectKey();

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryElementProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionaryElementProperty(IDictionaryElementProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19340 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::IDictionaryElementProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IDictionaryElementProperty*, "Unity.Properties", "IDictionaryElementProperty");
