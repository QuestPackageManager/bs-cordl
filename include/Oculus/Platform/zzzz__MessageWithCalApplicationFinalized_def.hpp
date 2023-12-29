#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__CalApplicationFinalized_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithCalApplicationFinalized)
namespace Oculus::Platform::Models {
class CalApplicationFinalized;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCalApplicationFinalized;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCalApplicationFinalized);
// Type: Oculus.Platform::MessageWithCalApplicationFinalized
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 4477 }), TypeDefinitionIndex(TypeDefinitionIndex(13463)),
// TypeDefinitionIndex(TypeDefinitionIndex(13269))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13288)) CS Name: ::Oculus.Platform::MessageWithCalApplicationFinalized*
class CORDL_TYPE MessageWithCalApplicationFinalized : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CalApplicationFinalized*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithCalApplicationFinalized* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2592b0c size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetCalApplicationFinalized addr 0x259501c size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::CalApplicationFinalized* GetCalApplicationFinalized();

  /// @brief Method GetDataFromMessage addr 0x2595058 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::CalApplicationFinalized* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationFinalized", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCalApplicationFinalized(MessageWithCalApplicationFinalized&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationFinalized", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCalApplicationFinalized(MessageWithCalApplicationFinalized const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCalApplicationFinalized();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCalApplicationFinalized, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCalApplicationFinalized);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCalApplicationFinalized*, "Oculus.Platform", "MessageWithCalApplicationFinalized");
