#pragma once
// IWYU pragma private; include "System/Data/IFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFilter)
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRow;
}
// Forward declare root types
namespace System::Data {
class IFilter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::IFilter);
// Type: System.Data::IFilter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::IFilter*
class CORDL_TYPE IFilter {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Invoke(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  // Ctor Parameters [CppParam { name: "", ty: "IFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFilter(IFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFilter(IFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11398 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Data
NEED_NO_BOX(::System::Data::IFilter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::IFilter*, "System.Data", "IFilter");
