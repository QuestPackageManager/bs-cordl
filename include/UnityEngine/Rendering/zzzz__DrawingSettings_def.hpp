#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawingSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DrawRendererFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingSettings_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingSettings)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct DrawingSettings__shaderPassNames_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct PerObjectData;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct SortingSettings;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct DrawingSettings__shaderPassNames_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DrawingSettings);
MARK_VAL_T(::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DrawingSettings/<shaderPassNames>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE DrawingSettings__shaderPassNames_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawingSettings__shaderPassNames_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DrawingSettings__shaderPassNames_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10783 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x40 - 0x4 = 0x3c, packed as 0x3c
  uint8_t _cordl_size_padding[0x3c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DrawRendererFlags, UnityEngine.Rendering.DrawingSettings::<shaderPassNames>e__FixedBuffer, UnityEngine.Rendering.PerObjectData,
// UnityEngine.Rendering.SortingSettings
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DrawingSettings
struct CORDL_TYPE DrawingSettings {
public:
  // Declarations
  using _shaderPassNames_e__FixedBuffer = ::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer;

  __declspec(property(put = set_enableDynamicBatching)) bool enableDynamicBatching;

  __declspec(property(put = set_enableInstancing)) bool enableInstancing;

  __declspec(property(put = set_mainLightIndex)) int32_t mainLightIndex;

  /// @brief Field maxShaderPasses, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_maxShaderPasses, put = setStaticF_maxShaderPasses)) int32_t maxShaderPasses;

  __declspec(property(put = set_overrideMaterial)) ::UnityW<::UnityEngine::Material> overrideMaterial;

  __declspec(property(put = set_overrideMaterialPassIndex)) int32_t overrideMaterialPassIndex;

  __declspec(property(put = set_overrideShader)) ::UnityW<::UnityEngine::Shader> overrideShader;

  __declspec(property(put = set_overrideShaderPassIndex)) int32_t overrideShaderPassIndex;

  __declspec(property(put = set_perObjectData)) ::UnityEngine::Rendering::PerObjectData perObjectData;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>*();

  /// @brief Method Equals, addr 0x6956110, size 0x100, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6955da8, size 0x140, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::DrawingSettings other);

  /// @brief Method GetHashCode, addr 0x6956210, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetShaderPassName, addr 0x6955b1c, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId GetShaderPassName(int32_t index);

  /// @brief Method SetShaderPassName, addr 0x6955c60, size 0x148, virtual false, abstract: false, final false
  inline void SetShaderPassName(int32_t index, ::UnityEngine::Rendering::ShaderTagId shaderPassName);

  /// @brief Method .ctor, addr 0x69559a4, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ShaderTagId shaderPassName, ::UnityEngine::Rendering::SortingSettings sortingSettings);

  static inline int32_t getStaticF_maxShaderPasses();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>* i___System__IEquatable_1___UnityEngine__Rendering__DrawingSettings_();

  /// @brief Method op_Equality, addr 0x6956334, size 0xc0, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::DrawingSettings left, ::UnityEngine::Rendering::DrawingSettings right);

  static inline void setStaticF_maxShaderPasses(int32_t value);

  /// @brief Method set_enableDynamicBatching, addr 0x6955a7c, size 0x10, virtual false, abstract: false, final false
  inline void set_enableDynamicBatching(bool value);

  /// @brief Method set_enableInstancing, addr 0x6955a8c, size 0x20, virtual false, abstract: false, final false
  inline void set_enableInstancing(bool value);

  /// @brief Method set_mainLightIndex, addr 0x6955b14, size 0x8, virtual false, abstract: false, final false
  inline void set_mainLightIndex(int32_t value);

  /// @brief Method set_overrideMaterial, addr 0x6955aac, size 0x2c, virtual false, abstract: false, final false
  inline void set_overrideMaterial(::UnityEngine::Material* value);

  /// @brief Method set_overrideMaterialPassIndex, addr 0x6955b04, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideMaterialPassIndex(int32_t value);

  /// @brief Method set_overrideShader, addr 0x6955ad8, size 0x2c, virtual false, abstract: false, final false
  inline void set_overrideShader(::UnityEngine::Shader* value);

  /// @brief Method set_overrideShaderPassIndex, addr 0x6955b0c, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideShaderPassIndex(int32_t value);

  /// @brief Method set_perObjectData, addr 0x6955a74, size 0x8, virtual false, abstract: false, final false
  inline void set_perObjectData(::UnityEngine::Rendering::PerObjectData value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawingSettings();

  // Ctor Parameters [CppParam { name: "m_SortingSettings", ty: "::UnityEngine::Rendering::SortingSettings", modifiers: "", def_value: None }, CppParam { name: "shaderPassNames", ty:
  // "::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_PerObjectData", ty: "::UnityEngine::Rendering::PerObjectData",
  // modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Rendering::DrawRendererFlags", modifiers: "", def_value: None }, CppParam { name: "m_OverrideShaderID", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OverrideShaderPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OverrideMaterialInstanceId", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OverrideMaterialPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_fallbackMaterialInstanceId", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MainLightIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UseSrpBatcher", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr DrawingSettings(::UnityEngine::Rendering::SortingSettings m_SortingSettings, ::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer shaderPassNames,
                            ::UnityEngine::Rendering::PerObjectData m_PerObjectData, ::UnityEngine::Rendering::DrawRendererFlags m_Flags, int32_t m_OverrideShaderID, int32_t m_OverrideShaderPassIndex,
                            int32_t m_OverrideMaterialInstanceId, int32_t m_OverrideMaterialPassIndex, int32_t m_fallbackMaterialInstanceId, int32_t m_MainLightIndex,
                            int32_t m_UseSrpBatcher) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10784 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc4 };

  /// @brief Field m_SortingSettings, offset: 0x0, size: 0x60, def value: None
  ::UnityEngine::Rendering::SortingSettings m_SortingSettings;

  /// @brief Field shaderPassNames, offset: 0x60, size: 0x40, def value: None
  ::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer shaderPassNames;

  /// @brief Field m_PerObjectData, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::Rendering::PerObjectData m_PerObjectData;

  /// @brief Field m_Flags, offset: 0xa4, size: 0x4, def value: None
  ::UnityEngine::Rendering::DrawRendererFlags m_Flags;

  /// @brief Field m_OverrideShaderID, offset: 0xa8, size: 0x4, def value: None
  int32_t m_OverrideShaderID;

  /// @brief Field m_OverrideShaderPassIndex, offset: 0xac, size: 0x4, def value: None
  int32_t m_OverrideShaderPassIndex;

  /// @brief Field m_OverrideMaterialInstanceId, offset: 0xb0, size: 0x4, def value: None
  int32_t m_OverrideMaterialInstanceId;

  /// @brief Field m_OverrideMaterialPassIndex, offset: 0xb4, size: 0x4, def value: None
  int32_t m_OverrideMaterialPassIndex;

  /// @brief Field m_fallbackMaterialInstanceId, offset: 0xb8, size: 0x4, def value: None
  int32_t m_fallbackMaterialInstanceId;

  /// @brief Field m_MainLightIndex, offset: 0xbc, size: 0x4, def value: None
  int32_t m_MainLightIndex;

  /// @brief Field m_UseSrpBatcher, offset: 0xc0, size: 0x4, def value: None
  int32_t m_UseSrpBatcher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_SortingSettings) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, shaderPassNames) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_PerObjectData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_Flags) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_OverrideShaderID) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_OverrideShaderPassIndex) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_OverrideMaterialInstanceId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_OverrideMaterialPassIndex) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_fallbackMaterialInstanceId) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_MainLightIndex) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_UseSrpBatcher) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DrawingSettings, 0xc4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DrawingSettings, "UnityEngine.Rendering", "DrawingSettings");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer, "UnityEngine.Rendering", "DrawingSettings/<shaderPassNames>e__FixedBuffer");
