#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIPrefabBundle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugUIPrefabBundle)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIPrefabBundle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIPrefabBundle);
// Dependencies System.Object
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIPrefabBundle
class CORDL_TYPE DebugUIPrefabBundle : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab)) ::UnityW<::UnityEngine::RectTransform> prefab;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::StringW type;

  static inline ::UnityEngine::Rendering::UI::DebugUIPrefabBundle* New_ctor();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_prefab();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_type(::StringW value);

  /// @brief Method .ctor, addr 0x65e04e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIPrefabBundle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIPrefabBundle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIPrefabBundle(DebugUIPrefabBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIPrefabBundle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIPrefabBundle(DebugUIPrefabBundle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12480 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::StringW ___type;

  /// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___prefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIPrefabBundle, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIPrefabBundle, ___prefab) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIPrefabBundle, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIPrefabBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIPrefabBundle*, "UnityEngine.Rendering.UI", "DebugUIPrefabBundle");
