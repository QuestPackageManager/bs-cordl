#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseShaderInfoStorage)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct RectInt;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class BaseShaderInfoStorage;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage);
// Type: UnityEngine.UIElements.UIR::BaseShaderInfoStorage
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9894)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7466))
// CS Name: ::UnityEngine.UIElements.UIR::BaseShaderInfoStorage*
class CORDL_TYPE BaseShaderInfoStorage : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field s_TextureCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_TextureCounter, put = setStaticF_s_TextureCounter)) int32_t s_TextureCounter;

  /// @brief Field s_MarkerCopyTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerCopyTexture, put = setStaticF_s_MarkerCopyTexture))::Unity::Profiling::ProfilerMarker s_MarkerCopyTexture;

  /// @brief Field s_MarkerGetTextureData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerGetTextureData, put = setStaticF_s_MarkerGetTextureData))::Unity::Profiling::ProfilerMarker s_MarkerGetTextureData;

  /// @brief Field s_MarkerUpdateTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerUpdateTexture, put = setStaticF_s_MarkerUpdateTexture))::Unity::Profiling::ProfilerMarker s_MarkerUpdateTexture;

  __declspec(property(get = get_texture))::UnityEngine::Texture2D* texture;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  static inline void setStaticF_s_TextureCounter(int32_t value);

  static inline int32_t getStaticF_s_TextureCounter();

  static inline void setStaticF_s_MarkerCopyTexture(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerCopyTexture();

  static inline void setStaticF_s_MarkerGetTextureData(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerGetTextureData();

  static inline void setStaticF_s_MarkerUpdateTexture(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerUpdateTexture();

  /// @brief Method get_texture addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Texture2D* get_texture();

  /// @brief Method AllocateRect addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool AllocateRect(int32_t width, int32_t height, ByRef<::UnityEngine::RectInt> uvs);

  /// @brief Method SetTexel addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetTexel(int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method UpdateTexture addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateTexture();

  /// @brief Method get_disposed addr 0x2d22ee8 size 0x8 virtual false final false
  inline bool get_disposed();

  /// @brief Method set_disposed addr 0x2d22ef0 size 0xc virtual false final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose addr 0x2d2178c size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2d22efc size 0x18 virtual true final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* New_ctor();

  /// @brief Method .ctor addr 0x2d22f14 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseShaderInfoStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseShaderInfoStorage(BaseShaderInfoStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseShaderInfoStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseShaderInfoStorage(BaseShaderInfoStorage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseShaderInfoStorage();

public:
  /// @brief Field <disposed>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BaseShaderInfoStorage, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage, ____disposed_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*, "UnityEngine.UIElements.UIR", "BaseShaderInfoStorage");
