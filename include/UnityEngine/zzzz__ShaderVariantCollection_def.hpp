#pragma once
// IWYU pragma private; include "UnityEngine/ShaderVariantCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderVariantCollection)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct PassType;
}
namespace UnityEngine {
struct ShaderVariantCollection_ShaderVariant;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine {
class ShaderVariantCollection;
}
namespace UnityEngine {
struct ShaderVariantCollection_ShaderVariant;
}
// Write type traits
MARK_REF_T(::UnityEngine::ShaderVariantCollection*);
MARK_VAL_T(::UnityEngine::ShaderVariantCollection_ShaderVariant);
DEFINE_IL2CPP_CLASS(::UnityEngine::ShaderVariantCollection*, "UnityEngine", "ShaderVariantCollection");
DEFINE_IL2CPP_CLASS(::UnityEngine::ShaderVariantCollection_ShaderVariant, "UnityEngine", "ShaderVariantCollection/ShaderVariant");
// Dependencies UnityEngine.Rendering.PassType
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ShaderVariantCollection/ShaderVariant
struct CORDL_TYPE ShaderVariantCollection_ShaderVariant {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6aed000, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::PassType passType, ::ArrayW<::StringW> keywords);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderVariantCollection_ShaderVariant();

  // Ctor Parameters [CppParam { name: "shader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None }, CppParam { name: "passType", ty: "::UnityEngine::Rendering::PassType",
  // modifiers: "", def_value: None }, CppParam { name: "keywords", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
  constexpr ShaderVariantCollection_ShaderVariant(::UnityW<::UnityEngine::Shader> shader, ::UnityEngine::Rendering::PassType passType, ::ArrayW<::StringW> keywords) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10372 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field shader, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> shader;

  /// @brief Field passType, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::PassType passType;

  /// @brief Field keywords, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW> keywords;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ShaderVariantCollection_ShaderVariant, shader) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ShaderVariantCollection_ShaderVariant, passType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ShaderVariantCollection_ShaderVariant, keywords) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ShaderVariantCollection_ShaderVariant) == 0x18, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ShaderVariantCollection
class CORDL_TYPE ShaderVariantCollection : public ::UnityEngine::Object {
public:
  // Declarations
  using ShaderVariant = ::UnityEngine::ShaderVariantCollection_ShaderVariant;

  __declspec(property(get = get_isWarmedUp)) bool isWarmedUp;

  __declspec(property(get = get_variantCount)) int32_t variantCount;

  __declspec(property(get = get_warmedUpVariantCount)) int32_t warmedUpVariantCount;

  /// @brief Method Add, addr 0x6aecfec, size 0x14, virtual false, abstract: false, final false
  inline bool Add(::UnityEngine::ShaderVariantCollection_ShaderVariant variant);

  /// @brief Method AddVariant, addr 0x6aecd30, size 0xd8, virtual false, abstract: false, final false
  inline bool AddVariant(::UnityEngine::Shader* shader, ::UnityEngine::Rendering::PassType passType, ::ArrayW<::StringW> keywords);

  /// @brief Method AddVariant_Injected, addr 0x6aece08, size 0x5c, virtual false, abstract: false, final false
  static inline bool AddVariant_Injected(::System::IntPtr _unity_self, ::System::IntPtr shader, ::UnityEngine::Rendering::PassType passType, ::ArrayW<::StringW> keywords);

  /// @brief Method Internal_Create, addr 0x6aecf38, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::ShaderVariantCollection* svc);

  static inline ::UnityEngine::ShaderVariantCollection* New_ctor();

  /// @brief Method WarmUpProgressively, addr 0x6aece64, size 0x90, virtual false, abstract: false, final false
  inline bool WarmUpProgressively(int32_t variantCount);

  /// @brief Method WarmUpProgressively_Injected, addr 0x6aecef4, size 0x44, virtual false, abstract: false, final false
  static inline bool WarmUpProgressively_Injected(::System::IntPtr _unity_self, int32_t variantCount);

  /// @brief Method .ctor, addr 0x6aecf74, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isWarmedUp, addr 0x6aecc74, size 0x80, virtual false, abstract: false, final false
  inline bool get_isWarmedUp();

  /// @brief Method get_isWarmedUp_Injected, addr 0x6aeccf4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isWarmedUp_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_variantCount, addr 0x6aecafc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_variantCount();

  /// @brief Method get_variantCount_Injected, addr 0x6aecb7c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_variantCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_warmedUpVariantCount, addr 0x6aecbb8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_warmedUpVariantCount();

  /// @brief Method get_warmedUpVariantCount_Injected, addr 0x6aecc38, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_warmedUpVariantCount_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderVariantCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariantCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderVariantCollection(ShaderVariantCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderVariantCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderVariantCollection(ShaderVariantCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10373 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ShaderVariantCollection) == 0x18, "Size mismatch!");

} // namespace UnityEngine
