#pragma once
// IWYU pragma private; include "GlobalNamespace/ToneMappingExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::GlobalNamespace::ToneMappingExtensions);
// Dependencies System.Object, UnityEngine.Rendering.GlobalKeyword
namespace GlobalNamespace {
// Is value type: false
// CS Name: ToneMappingExtensions
class CORDL_TYPE ToneMappingExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field _acesToneMappingKeyword, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__acesToneMappingKeyword, put = setStaticF__acesToneMappingKeyword)) ::UnityEngine::Rendering::GlobalKeyword _acesToneMappingKeyword;

  /// @brief Method SetShaderKeyword, addr 0x5651458, size 0x64, virtual false, abstract: false, final false
  static inline void SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping);

  /// @brief Method SetShaderKeyword, addr 0x5653184, size 0xac, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19653 };

  /// @brief Field kAcesToneMappingEnabledKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kAcesToneMappingEnabledKeyword{ u"ACES_TONE_MAPPING" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ToneMappingExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ToneMappingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToneMappingExtensions*, "", "ToneMappingExtensions");
