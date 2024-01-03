#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithPurchase)
namespace Oculus::Platform::Models {
class Purchase;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPurchase;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPurchase);
// Type: Oculus.Platform::MessageWithPurchase
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 1182 }), TypeDefinitionIndex(TypeDefinitionIndex(13475)),
// TypeDefinitionIndex(TypeDefinitionIndex(13262))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13318)) CS Name: ::Oculus.Platform::MessageWithPurchase*
class CORDL_TYPE MessageWithPurchase : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithPurchase* New_ctor(void* c_message);

  /// @brief Method .ctor, addr 0x26ef6b8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method GetPurchase, addr 0x26f3600, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Purchase* GetPurchase();

  /// @brief Method GetDataFromMessage, addr 0x26f363c, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::Purchase* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPurchase(MessageWithPurchase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPurchase(MessageWithPurchase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPurchase();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPurchase, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPurchase);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPurchase*, "Oculus.Platform", "MessageWithPurchase");
