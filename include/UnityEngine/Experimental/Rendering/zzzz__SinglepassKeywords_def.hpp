#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/SinglepassKeywords.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
CORDL_MODULE_EXPORT(SinglepassKeywords)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class SinglepassKeywords;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::SinglepassKeywords);
// Dependencies System.Object, UnityEngine.Rendering.GlobalKeyword
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.SinglepassKeywords
class CORDL_TYPE SinglepassKeywords : public ::System::Object {
public:
  // Declarations
  /// @brief Field STEREO_INSTANCING_ON, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_STEREO_INSTANCING_ON, put = setStaticF_STEREO_INSTANCING_ON)) ::UnityEngine::Rendering::GlobalKeyword STEREO_INSTANCING_ON;

  /// @brief Field STEREO_MULTIVIEW_ON, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_STEREO_MULTIVIEW_ON, put = setStaticF_STEREO_MULTIVIEW_ON)) ::UnityEngine::Rendering::GlobalKeyword STEREO_MULTIVIEW_ON;

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_STEREO_INSTANCING_ON();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_STEREO_MULTIVIEW_ON();

  static inline void setStaticF_STEREO_INSTANCING_ON(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_STEREO_MULTIVIEW_ON(::UnityEngine::Rendering::GlobalKeyword value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinglepassKeywords();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SinglepassKeywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinglepassKeywords(SinglepassKeywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinglepassKeywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinglepassKeywords(SinglepassKeywords const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11830 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::SinglepassKeywords, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::SinglepassKeywords);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::SinglepassKeywords*, "UnityEngine.Experimental.Rendering", "SinglepassKeywords");
