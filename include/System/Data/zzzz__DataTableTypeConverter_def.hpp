#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ReferenceConverter_def.hpp"
CORDL_MODULE_EXPORT(DataTableTypeConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Forward declare root types
namespace System::Data {
class DataTableTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataTableTypeConverter);
// Type: System.Data::DataTableTypeConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataTableTypeConverter*
class CORDL_TYPE DataTableTypeConverter : public ::System::ComponentModel::ReferenceConverter {
public:
  // Declarations
  /// @brief Method GetPropertiesSupported, addr 0x2bbc20c, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::Data::DataTableTypeConverter* New_ctor();

  /// @brief Method .ctor, addr 0x2bbc158, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTableTypeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTableTypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTableTypeConverter(DataTableTypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTableTypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTableTypeConverter(DataTableTypeConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataTableTypeConverter, 0x18>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataTableTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTableTypeConverter*, "System.Data", "DataTableTypeConverter");
