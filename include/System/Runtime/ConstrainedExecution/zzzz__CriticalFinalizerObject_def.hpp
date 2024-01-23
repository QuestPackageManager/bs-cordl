#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CriticalFinalizerObject)
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
class CriticalFinalizerObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::ConstrainedExecution::CriticalFinalizerObject);
// Type: System.Runtime.ConstrainedExecution::CriticalFinalizerObject
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::ConstrainedExecution {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3354))
// CS Name: ::System.Runtime.ConstrainedExecution::CriticalFinalizerObject*
class CORDL_TYPE CriticalFinalizerObject : public ::System::Object {
public:
  // Declarations
  static inline ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject* New_ctor();

  /// @brief Method .ctor, addr 0x24d76ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Finalize, addr 0x24da714, size 0x8, virtual true, abstract: false, final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "CriticalFinalizerObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CriticalFinalizerObject(CriticalFinalizerObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CriticalFinalizerObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CriticalFinalizerObject(CriticalFinalizerObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CriticalFinalizerObject();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ConstrainedExecution::CriticalFinalizerObject, 0x10>, "Size mismatch!");

} // namespace System::Runtime::ConstrainedExecution
NEED_NO_BOX(::System::Runtime::ConstrainedExecution::CriticalFinalizerObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::CriticalFinalizerObject*, "System.Runtime.ConstrainedExecution", "CriticalFinalizerObject");
