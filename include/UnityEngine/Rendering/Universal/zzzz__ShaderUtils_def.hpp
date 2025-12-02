#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShaderUtils)
namespace UnityEngine::Rendering::Universal {
struct ShaderPathID;
}
namespace UnityEngine::Rendering::Universal {
class ShaderUtils___c__DisplayClass2_0;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShaderUtils;
}
namespace UnityEngine::Rendering::Universal {
class ShaderUtils___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShaderUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderUtils/<>c__DisplayClass2_0
class CORDL_TYPE ShaderUtils___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field path, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path)) ::StringW path;

  static inline ::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0* New_ctor();

  /// @brief Method <GetEnumFromPath>b__0, addr 0x669b170, size 0x10, virtual false, abstract: false, final false
  inline bool _GetEnumFromPath_b__0(::StringW m);

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr void __cordl_internal_set_path(::StringW value);

  /// @brief Method .ctor, addr 0x669ae54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderUtils___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderUtils___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderUtils___c__DisplayClass2_0(ShaderUtils___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderUtils___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderUtils___c__DisplayClass2_0(ShaderUtils___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12927 };

  /// @brief Field path, offset: 0x10, size: 0x8, def value: None
  ::StringW ___path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0, ___path) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderUtils
class CORDL_TYPE ShaderUtils : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0;

  /// @brief Field s_ShaderPaths, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ShaderPaths, put = setStaticF_s_ShaderPaths)) ::ArrayW<::StringW, ::Array<::StringW>*> s_ShaderPaths;

  /// @brief Method GetEnumFromPath, addr 0x669ad54, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::ShaderPathID GetEnumFromPath(::StringW path);

  /// @brief Method GetShaderPath, addr 0x669ab28, size 0x22c, virtual false, abstract: false, final false
  static inline ::StringW GetShaderPath(::UnityEngine::Rendering::Universal::ShaderPathID id);

  /// @brief Method IsLWShader, addr 0x669ae58, size 0x94, virtual false, abstract: false, final false
  static inline bool IsLWShader(::UnityEngine::Shader* shader);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_ShaderPaths();

  /// @brief Method get_PersistentDeltaTime, addr 0x669aeec, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_PersistentDeltaTime();

  static inline void setStaticF_s_ShaderPaths(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderUtils(ShaderUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderUtils(ShaderUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12928 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShaderUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderUtils*, "UnityEngine.Rendering.Universal", "ShaderUtils");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0*, "UnityEngine.Rendering.Universal", "ShaderUtils/<>c__DisplayClass2_0");
