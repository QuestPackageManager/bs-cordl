#pragma once
// IWYU pragma private; include "System/ComponentModel/ExpandableObjectConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ExpandableObjectConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ExpandableObjectConverter;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ExpandableObjectConverter*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ExpandableObjectConverter*, "System.ComponentModel", "ExpandableObjectConverter");
// Dependencies System.ComponentModel.TypeConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ExpandableObjectConverter
class CORDL_TYPE ExpandableObjectConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method GetProperties, addr 0x63bc120, size 0x6c, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x63bc18c, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::ExpandableObjectConverter* New_ctor();

  /// @brief Method .ctor, addr 0x63bc11c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpandableObjectConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpandableObjectConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpandableObjectConverter(ExpandableObjectConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpandableObjectConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpandableObjectConverter(ExpandableObjectConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11238 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::ExpandableObjectConverter) == 0x10, "Size mismatch!");

} // namespace System::ComponentModel
