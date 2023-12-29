#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__CalApplicationSuggestionList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithCalApplicationSuggestionList)
namespace Oculus::Platform::Models {
class CalApplicationSuggestionList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCalApplicationSuggestionList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithCalApplicationSuggestionList);
// Type: Oculus.Platform::MessageWithCalApplicationSuggestionList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 4479 }), TypeDefinitionIndex(TypeDefinitionIndex(13269)),
// TypeDefinitionIndex(TypeDefinitionIndex(13466))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13290)) CS Name: ::Oculus.Platform::MessageWithCalApplicationSuggestionList*
class CORDL_TYPE MessageWithCalApplicationSuggestionList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CalApplicationSuggestionList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithCalApplicationSuggestionList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x25951cc size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetCalApplicationSuggestionList addr 0x2595224 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::CalApplicationSuggestionList* GetCalApplicationSuggestionList();

  /// @brief Method GetDataFromMessage addr 0x2595260 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::CalApplicationSuggestionList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationSuggestionList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithCalApplicationSuggestionList(MessageWithCalApplicationSuggestionList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationSuggestionList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithCalApplicationSuggestionList(MessageWithCalApplicationSuggestionList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithCalApplicationSuggestionList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithCalApplicationSuggestionList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithCalApplicationSuggestionList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCalApplicationSuggestionList*, "Oculus.Platform", "MessageWithCalApplicationSuggestionList");
