#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DeferredConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DeferredConfig)
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredConfig;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredConfig);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredConfig
class CORDL_TYPE DeferredConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field <IsDX10>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsDX10_k__BackingField, put = setStaticF__IsDX10_k__BackingField)) bool _IsDX10_k__BackingField;

  /// @brief Field <IsOpenGL>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsOpenGL_k__BackingField, put = setStaticF__IsOpenGL_k__BackingField)) bool _IsOpenGL_k__BackingField;

  static inline bool getStaticF__IsDX10_k__BackingField();

  static inline bool getStaticF__IsOpenGL_k__BackingField();

  /// @brief Method get_IsDX10, addr 0x6730da4, size 0x4c, virtual false, abstract: false, final false
  static inline bool get_IsDX10();

  /// @brief Method get_IsOpenGL, addr 0x6730d04, size 0x4c, virtual false, abstract: false, final false
  static inline bool get_IsOpenGL();

  static inline void setStaticF__IsDX10_k__BackingField(bool value);

  static inline void setStaticF__IsOpenGL_k__BackingField(bool value);

  /// @brief Method set_IsDX10, addr 0x6730df0, size 0x54, virtual false, abstract: false, final false
  static inline void set_IsDX10(bool value);

  /// @brief Method set_IsOpenGL, addr 0x6730d50, size 0x54, virtual false, abstract: false, final false
  static inline void set_IsOpenGL(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredConfig(DeferredConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredConfig(DeferredConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13025 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredConfig, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredConfig*, "UnityEngine.Rendering.Universal.Internal", "DeferredConfig");
