#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__BuiltinRenderTextureType_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetIdentifier)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct BuiltinRenderTextureType;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderTargetIdentifier);
// Type: UnityEngine.Rendering::RenderTargetIdentifier
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10116)), TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(10339))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10346))
// CS Name: ::UnityEngine.Rendering::RenderTargetIdentifier
struct CORDL_TYPE RenderTargetIdentifier {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetIdentifier>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetIdentifier>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetIdentifier>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RenderTargetIdentifier>* i___System__IEquatable_1___UnityEngine__Rendering__RenderTargetIdentifier_();

  /// @brief Method .ctor, addr 0x2cec308, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::BuiltinRenderTextureType type);

  /// @brief Method .ctor, addr 0x2cec37c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t nameID);

  /// @brief Method .ctor, addr 0x2cec3f0, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture* tex);

  /// @brief Method op_Implicit, addr 0x2cec534, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Rendering::BuiltinRenderTextureType type);

  /// @brief Method op_Implicit, addr 0x2cec5ac, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(int32_t nameID);

  /// @brief Method op_Implicit, addr 0x2cec61c, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Texture* tex);

  /// @brief Method ToString, addr 0x2cec66c, size 0x2a8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetHashCode, addr 0x2cec914, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2cec960, size 0x98, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::RenderTargetIdentifier rhs);

  /// @brief Method Equals, addr 0x2cec9f8, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::Rendering::BuiltinRenderTextureType", modifiers: "", def_value: None }, CppParam { name: "m_NameID", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BufferPointer", ty: "void*", modifiers: "", def_value: None }, CppParam {
  // name: "m_MipLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CubeFace", ty: "::UnityEngine::CubemapFace", modifiers: "", def_value: None }, CppParam { name:
  // "m_DepthSlice", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderTargetIdentifier(::UnityEngine::Rendering::BuiltinRenderTextureType m_Type, int32_t m_NameID, int32_t m_InstanceID, void* m_BufferPointer, int32_t m_MipLevel,
                                   ::UnityEngine::CubemapFace m_CubeFace, int32_t m_DepthSlice) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetIdentifier();

  /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::BuiltinRenderTextureType m_Type;

  /// @brief Field m_NameID, offset: 0x4, size: 0x4, def value: None
  int32_t m_NameID;

  /// @brief Field m_InstanceID, offset: 0x8, size: 0x4, def value: None
  int32_t m_InstanceID;

  /// @brief Field m_BufferPointer, offset: 0x10, size: 0x8, def value: None
  void* m_BufferPointer;

  /// @brief Field m_MipLevel, offset: 0x18, size: 0x4, def value: None
  int32_t m_MipLevel;

  /// @brief Field m_CubeFace, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::CubemapFace m_CubeFace;

  /// @brief Field m_DepthSlice, offset: 0x20, size: 0x4, def value: None
  int32_t m_DepthSlice;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderTargetIdentifier, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetIdentifier, m_Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetIdentifier, m_NameID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetIdentifier, m_InstanceID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetIdentifier, m_BufferPointer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetIdentifier, m_MipLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetIdentifier, m_CubeFace) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetIdentifier, m_DepthSlice) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderTargetIdentifier, "UnityEngine.Rendering", "RenderTargetIdentifier");
