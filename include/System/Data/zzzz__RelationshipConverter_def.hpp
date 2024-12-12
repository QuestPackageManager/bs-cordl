#pragma once
// IWYU pragma private; include "System/Data/RelationshipConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ExpandableObjectConverter_def.hpp"
CORDL_MODULE_EXPORT(RelationshipConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class RelationshipConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::RelationshipConverter);
// Dependencies System.ComponentModel.ExpandableObjectConverter
namespace System::Data {
// Is value type: false
// CS Name: System.Data.RelationshipConverter
class CORDL_TYPE RelationshipConverter : public ::System::ComponentModel::ExpandableObjectConverter {
public:
  // Declarations
  /// @brief Method CanConvertTo, addr 0x418421c, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertTo, addr 0x41842e4, size 0xac8, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  static inline ::System::Data::RelationshipConverter* New_ctor();

  /// @brief Method .ctor, addr 0x4184214, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RelationshipConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RelationshipConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RelationshipConverter(RelationshipConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RelationshipConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RelationshipConverter(RelationshipConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::RelationshipConverter, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::RelationshipConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::RelationshipConverter*, "System.Data", "RelationshipConverter");
