#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterizedThreadStart)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class ParameterizedThreadStart;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ParameterizedThreadStart);
// Type: System.Threading::ParameterizedThreadStart
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2666))
// CS Name: ::System.Threading::ParameterizedThreadStart*
class CORDL_TYPE ParameterizedThreadStart : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Threading::ParameterizedThreadStart* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x260fde0 size 0x12c virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x260ff0c size 0x14 virtual true final false
  inline void Invoke(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedThreadStart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterizedThreadStart(ParameterizedThreadStart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterizedThreadStart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterizedThreadStart(ParameterizedThreadStart const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterizedThreadStart();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ParameterizedThreadStart, 0x80>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ParameterizedThreadStart);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ParameterizedThreadStart*, "System.Threading", "ParameterizedThreadStart");
