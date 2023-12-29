#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__CalApplicationProposed_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithCalApplicationProposed)
namespace Oculus::Platform::Models {
class CalApplicationProposed;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCalApplicationProposed;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCalApplicationProposed);
// Type: Oculus.Platform::MessageWithCalApplicationProposed
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 4478 }), TypeDefinitionIndex(TypeDefinitionIndex(13269)),
// TypeDefinitionIndex(TypeDefinitionIndex(13464))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13289)) CS Name: ::Oculus.Platform::MessageWithCalApplicationProposed*
class CORDL_TYPE MessageWithCalApplicationProposed : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CalApplicationProposed*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithCalApplicationProposed* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2592b64 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetCalApplicationProposed addr 0x25950f4 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::CalApplicationProposed* GetCalApplicationProposed();

  /// @brief Method GetDataFromMessage addr 0x2595130 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::CalApplicationProposed* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationProposed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCalApplicationProposed(MessageWithCalApplicationProposed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationProposed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCalApplicationProposed(MessageWithCalApplicationProposed const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCalApplicationProposed();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCalApplicationProposed, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCalApplicationProposed);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCalApplicationProposed*, "Oculus.Platform", "MessageWithCalApplicationProposed");
