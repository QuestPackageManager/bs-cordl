#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextLib.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextLib)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextLib_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextLib/BindingsMarshaller
class CORDL_TYPE TextLib_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6a41784, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(Il2CppObject* textLib);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextLib_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextLib_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextLib_BindingsMarshaller(TextLib_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextLib_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextLib_BindingsMarshaller(TextLib_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17236 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextLib_BindingsMarshaller*, "UnityEngine.TextCore.Text", "TextLib/BindingsMarshaller");
