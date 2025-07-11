#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithProductList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithProductList)
namespace Oculus::Platform::Models {
class ProductList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithProductList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithProductList);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithProductList
class CORDL_TYPE MessageWithProductList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ProductList*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f802d0, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ProductList* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetProductList, addr 0x3f80294, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::ProductList* GetProductList();

  static inline ::Oculus::Platform::MessageWithProductList* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7c5cc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithProductList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithProductList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithProductList(MessageWithProductList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithProductList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithProductList(MessageWithProductList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15408 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithProductList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithProductList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithProductList*, "Oculus.Platform", "MessageWithProductList");
