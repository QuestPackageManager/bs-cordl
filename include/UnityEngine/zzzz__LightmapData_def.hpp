#pragma once
// IWYU pragma private; include "UnityEngine/LightmapData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LightmapData)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine {
class LightmapData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LightmapData);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightmapData
class CORDL_TYPE LightmapData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Dir, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dir, put = __cordl_internal_set_m_Dir)) ::UnityW<::UnityEngine::Texture2D> m_Dir;

  /// @brief Field m_Light, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Light, put = __cordl_internal_set_m_Light)) ::UnityW<::UnityEngine::Texture2D> m_Light;

  /// @brief Field m_ShadowMask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShadowMask, put = __cordl_internal_set_m_ShadowMask)) ::UnityW<::UnityEngine::Texture2D> m_ShadowMask;

  static inline ::UnityEngine::LightmapData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_Dir() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_Dir();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_Light() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_Light();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_ShadowMask() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_ShadowMask();

  constexpr void __cordl_internal_set_m_Dir(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_Light(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_ShadowMask(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x487a8ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapData(LightmapData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapData(LightmapData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10724 };

  /// @brief Field m_Light, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_Light;

  /// @brief Field m_Dir, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_Dir;

  /// @brief Field m_ShadowMask, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_ShadowMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightmapData, ___m_Light) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightmapData, ___m_Dir) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightmapData, ___m_ShadowMask) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LightmapData, 0x28>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LightmapData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightmapData*, "UnityEngine", "LightmapData");
