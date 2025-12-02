#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalResourceDataBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalResourceDataBase)
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalResourceDataBase_ActiveID;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct UniversalResourceDataBase_ActiveID;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceDataBase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalResourceDataBase);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalResourceDataBase/ActiveID
struct CORDL_TYPE UniversalResourceDataBase_ActiveID {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UniversalResourceDataBase_ActiveID_Unwrapped
  enum struct __UniversalResourceDataBase_ActiveID_Unwrapped : int32_t {
    __E_Camera = static_cast<int32_t>(0x0),
    __E_BackBuffer = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UniversalResourceDataBase_ActiveID_Unwrapped() const noexcept {
    return static_cast<__UniversalResourceDataBase_ActiveID_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalResourceDataBase_ActiveID();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UniversalResourceDataBase_ActiveID(int32_t value__) noexcept;

  /// @brief Field BackBuffer value: I32(1)
  static ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID const BackBuffer;

  /// @brief Field Camera value: I32(0)
  static ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID const Camera;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.ContextItem
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalResourceDataBase
class CORDL_TYPE UniversalResourceDataBase : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  using ActiveID = ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID;

  /// @brief Field <isAccessible>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__isAccessible_k__BackingField, put = __cordl_internal_set__isAccessible_k__BackingField)) bool _isAccessible_k__BackingField;

  __declspec(property(get = get_isAccessible, put = set_isAccessible)) bool isAccessible;

  /// @brief Method CheckAndGetTextureHandle, addr 0x665534c, size 0x100, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
  CheckAndGetTextureHandle(::ByRef<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>> handle);

  /// @brief Method CheckAndGetTextureHandle, addr 0x6655560, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CheckAndGetTextureHandle(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle);

  /// @brief Method CheckAndSetTextureHandle, addr 0x6655458, size 0xec, virtual false, abstract: false, final false
  inline void CheckAndSetTextureHandle(::ByRef<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>> handle,
                                       ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> newHandle);

  /// @brief Method CheckAndSetTextureHandle, addr 0x665563c, size 0x2c, virtual false, abstract: false, final false
  inline void CheckAndSetTextureHandle(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle newHandle);

  /// @brief Method CheckAndWarnAboutAccessibility, addr 0x66551b8, size 0x94, virtual false, abstract: false, final false
  inline bool CheckAndWarnAboutAccessibility();

  /// @brief Method EndFrame, addr 0x6656e2c, size 0x8, virtual false, abstract: false, final false
  inline void EndFrame();

  /// @brief Method InitFrame, addr 0x6656e20, size 0xc, virtual false, abstract: false, final false
  inline void InitFrame();

  static inline ::UnityEngine::Rendering::Universal::UniversalResourceDataBase* New_ctor();

  constexpr bool const& __cordl_internal_get__isAccessible_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isAccessible_k__BackingField();

  constexpr void __cordl_internal_set__isAccessible_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x6655ae4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isAccessible, addr 0x6656e10, size 0x8, virtual false, abstract: false, final false
  inline bool get_isAccessible();

  /// @brief Method set_isAccessible, addr 0x6656e18, size 0x8, virtual false, abstract: false, final false
  inline void set_isAccessible(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalResourceDataBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalResourceDataBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalResourceDataBase(UniversalResourceDataBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalResourceDataBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalResourceDataBase(UniversalResourceDataBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12728 };

  /// @brief Field <isAccessible>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____isAccessible_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceDataBase, ____isAccessible_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalResourceDataBase, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID, "UnityEngine.Rendering.Universal", "UniversalResourceDataBase/ActiveID");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalResourceDataBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalResourceDataBase*, "UnityEngine.Rendering.Universal", "UniversalResourceDataBase");
