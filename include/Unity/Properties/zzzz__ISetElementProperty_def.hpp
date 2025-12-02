#pragma once
// IWYU pragma private; include "Unity/Properties/ISetElementProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISetElementProperty)
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Properties {
class ISetElementProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::ISetElementProperty);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.ISetElementProperty
class CORDL_TYPE ISetElementProperty {
public:
  // Declarations
  __declspec(property(get = get_ObjectKey)) ::System::Object* ObjectKey;

  /// @brief Method get_ObjectKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_ObjectKey();

  // Ctor Parameters [CppParam { name: "", ty: "ISetElementProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISetElementProperty(ISetElementProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19313 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::ISetElementProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::ISetElementProperty*, "Unity.Properties", "ISetElementProperty");
