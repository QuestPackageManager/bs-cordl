#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BaseShaderInfoStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseShaderInfoStorage)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class BaseShaderInfoStorage;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage);
// Dependencies System.IDisposable, System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.BaseShaderInfoStorage
class CORDL_TYPE BaseShaderInfoStorage : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Field s_MarkerCopyTexture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerCopyTexture, put = setStaticF_s_MarkerCopyTexture)) ::Unity::Profiling::ProfilerMarker s_MarkerCopyTexture;

  /// @brief Field s_MarkerGetTextureData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerGetTextureData, put = setStaticF_s_MarkerGetTextureData)) ::Unity::Profiling::ProfilerMarker s_MarkerGetTextureData;

  /// @brief Field s_MarkerUpdateTexture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerUpdateTexture, put = setStaticF_s_MarkerUpdateTexture)) ::Unity::Profiling::ProfilerMarker s_MarkerUpdateTexture;

  /// @brief Field s_TextureCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_TextureCounter, put = setStaticF_s_TextureCounter)) int32_t s_TextureCounter;

  __declspec(property(get = get_texture)) ::UnityW<::UnityEngine::Texture2D> texture;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AllocateRect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AllocateRect(int32_t width, int32_t height, ::ByRef<::UnityEngine::RectInt> uvs);

  /// @brief Method Dispose, addr 0x49af870, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x49af8dc, size 0x18, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* New_ctor();

  /// @brief Method SetTexel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetTexel(int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method UpdateTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateTexture();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x49af8f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerCopyTexture();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerGetTextureData();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerUpdateTexture();

  static inline int32_t getStaticF_s_TextureCounter();

  /// @brief Method get_disposed, addr 0x49af85c, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_texture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_texture();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_MarkerCopyTexture(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerGetTextureData(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerUpdateTexture(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_TextureCounter(int32_t value);

  /// @brief Method set_disposed, addr 0x49af864, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseShaderInfoStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseShaderInfoStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseShaderInfoStorage(BaseShaderInfoStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseShaderInfoStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseShaderInfoStorage(BaseShaderInfoStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6388 };

  /// @brief Field <disposed>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage, ____disposed_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BaseShaderInfoStorage, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*, "UnityEngine.UIElements.UIR", "BaseShaderInfoStorage");
