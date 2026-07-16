#pragma once
// IWYU pragma private; include "GlobalNamespace/ToneMappingExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToneMappingExtensions)
namespace GlobalNamespace {
struct ToneMapping;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class ToneMappingExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ToneMappingExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ToneMappingExtensions*, "", "ToneMappingExtensions");
// Dependencies System.Object, UnityEngine.Rendering.GlobalKeyword
namespace GlobalNamespace {
// Is value type: false
// CS Name: ToneMappingExtensions
class CORDL_TYPE ToneMappingExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field _acesToneMappingKeyword, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__acesToneMappingKeyword, put = setStaticF__acesToneMappingKeyword)) ::UnityEngine::Rendering::GlobalKeyword _acesToneMappingKeyword;

  /// @brief Method SetShaderKeyword, addr 0x5869fac, size 0x64, virtual false, abstract: false, final false
  static inline void SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping);

  /// @brief Method SetShaderKeyword, addr 0x5867cac, size 0xac, virtual false, abstract: false, final false
  static inline void SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping, ::UnityEngine::Rendering::CommandBuffer* cmd);

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__acesToneMappingKeyword();

  static inline void setStaticF__acesToneMappingKeyword(::UnityEngine::Rendering::GlobalKeyword value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToneMappingExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToneMappingExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToneMappingExtensions(ToneMappingExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToneMappingExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToneMappingExtensions(ToneMappingExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19457 };

  /// @brief Field kAcesToneMappingEnabledKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kAcesToneMappingEnabledKeyword{ u"ACES_TONE_MAPPING" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ToneMappingExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
