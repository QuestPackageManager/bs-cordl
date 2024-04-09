#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MergeFailedEventHandler)
namespace System::Data {
class MergeFailedEventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class MergeFailedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::MergeFailedEventHandler);
// Type: System.Data::MergeFailedEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::MergeFailedEventHandler*
class CORDL_TYPE MergeFailedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2bd7de8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Data::MergeFailedEventArgs* e);

  static inline ::System::Data::MergeFailedEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2bd7cb8, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MergeFailedEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MergeFailedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MergeFailedEventHandler(MergeFailedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MergeFailedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MergeFailedEventHandler(MergeFailedEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::MergeFailedEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::MergeFailedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::MergeFailedEventHandler*, "System.Data", "MergeFailedEventHandler");
