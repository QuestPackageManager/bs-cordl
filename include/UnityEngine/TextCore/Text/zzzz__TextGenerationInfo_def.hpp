#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerationInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextGenerationInfo)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGenerationInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextGenerationInfo);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextGenerationInfo
class CORDL_TYPE TextGenerationInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x69d8914, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create();

  /// @brief Method Destroy, addr 0x69d893c, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr ptr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGenerationInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextGenerationInfo(TextGenerationInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextGenerationInfo(TextGenerationInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextGenerationInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGenerationInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGenerationInfo*, "UnityEngine.TextCore.Text", "TextGenerationInfo");
