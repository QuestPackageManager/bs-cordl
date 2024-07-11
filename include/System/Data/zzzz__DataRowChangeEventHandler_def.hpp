#pragma once
// IWYU pragma private; include "System/Data/DataRowChangeEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRowChangeEventHandler)
namespace System::Data {
class DataRowChangeEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataRowChangeEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRowChangeEventHandler);
// Type: System.Data::DataRowChangeEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataRowChangeEventHandler*
class CORDL_TYPE DataRowChangeEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2cdf7c0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Data::DataRowChangeEventArgs* e);

  static inline ::System::Data::DataRowChangeEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2cdf690, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRowChangeEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRowChangeEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRowChangeEventHandler(DataRowChangeEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRowChangeEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRowChangeEventHandler(DataRowChangeEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataRowChangeEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRowChangeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowChangeEventHandler*, "System.Data", "DataRowChangeEventHandler");
