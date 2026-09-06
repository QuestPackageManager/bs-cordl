#pragma once
// IWYU pragma private; include "UnityEngine/UI/IMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMask)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class IMask;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::IMask*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::IMask*, "UnityEngine.UI", "IMask");
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// [Obsolete("Not supported anymore.", true)]
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.IMask
class CORDL_TYPE IMask {
public:
  // Declarations
  __declspec(property(get = get_rectTransform)) ::UnityW<::UnityEngine::RectTransform> rectTransform;

  /// @brief Method Enabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Enabled();

  /// @brief Method get_rectTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  // Ctor Parameters [CppParam { name: "", ty: "IMask", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMask(IMaskconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17426 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
