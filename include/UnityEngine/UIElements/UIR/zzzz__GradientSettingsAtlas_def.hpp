#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GradientSettingsAtlas)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
struct __GradientSettingsAtlas__RawTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
namespace UnityEngine::UIElements {
struct GradientSettings;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GradientSettingsAtlas;
}
namespace UnityEngine::UIElements::UIR {
struct __GradientSettingsAtlas__RawTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::GradientSettingsAtlas);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture);
// Type: ::RawTexture
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7378))
// CS Name: ::GradientSettingsAtlas::RawTexture
struct CORDL_TYPE __GradientSettingsAtlas__RawTexture {
public:
  // Declarations
  /// @brief Method WriteRawInt2Packed, addr 0x2e8af7c, size 0x88, virtual false, abstract: false, final false
  inline void WriteRawInt2Packed(int32_t v0, int32_t v1, int32_t destX, int32_t destY);

  /// @brief Method WriteRawFloat4Packed, addr 0x2e8aed4, size 0xa8, virtual false, abstract: false, final false
  inline void WriteRawFloat4Packed(float_t f0, float_t f1, float_t f2, float_t f3, int32_t destX, int32_t destY);

  // Ctor Parameters [CppParam { name: "rgba", ty: "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GradientSettingsAtlas__RawTexture(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> rgba, int32_t width, int32_t height) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GradientSettingsAtlas__RawTexture();

  /// @brief Field rgba, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> rgba;

  /// @brief Field width, offset: 0x8, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0xc, size: 0x4, def value: None
  int32_t height;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture, rgba) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture, height) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::GradientSettingsAtlas
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9966)), TypeDefinitionIndex(TypeDefinitionIndex(7378)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7379))
// CS Name: ::UnityEngine.UIElements.UIR::GradientSettingsAtlas*
class CORDL_TYPE GradientSettingsAtlas : public ::System::Object {
public:
  // Declarations
  using RawTexture = ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture;

  /// @brief Field m_Length, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Length, put = __set_m_Length)) int32_t m_Length;

  /// @brief Field m_ElemWidth, offset 0x14, size 0x4
  __declspec(property(get = __get_m_ElemWidth, put = __set_m_ElemWidth)) int32_t m_ElemWidth;

  /// @brief Field m_Allocator, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Allocator, put = __set_m_Allocator))::UnityEngine::UIElements::UIR::BestFitAllocator* m_Allocator;

  /// @brief Field m_Atlas, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Atlas, put = __set_m_Atlas))::UnityEngine::Texture2D* m_Atlas;

  /// @brief Field m_RawAtlas, offset 0x28, size 0x10
  __declspec(property(get = __get_m_RawAtlas, put = __set_m_RawAtlas))::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture m_RawAtlas;

  /// @brief Field <disposed>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <MustCommit>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __get__MustCommit_k__BackingField, put = __set__MustCommit_k__BackingField)) bool _MustCommit_k__BackingField;

  /// @brief Field s_MarkerWrite, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerWrite, put = setStaticF_s_MarkerWrite))::Unity::Profiling::ProfilerMarker s_MarkerWrite;

  /// @brief Field s_MarkerCommit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerCommit, put = setStaticF_s_MarkerCommit))::Unity::Profiling::ProfilerMarker s_MarkerCommit;

  /// @brief Field s_TextureCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_TextureCounter, put = setStaticF_s_TextureCounter)) int32_t s_TextureCounter;

  __declspec(property(get = get_length)) int32_t length;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_atlas))::UnityEngine::Texture2D* atlas;

  __declspec(property(get = get_MustCommit, put = set_MustCommit)) bool MustCommit;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get_m_Length();

  constexpr int32_t const& __get_m_Length() const;

  constexpr void __set_m_Length(int32_t value);

  constexpr int32_t& __get_m_ElemWidth();

  constexpr int32_t const& __get_m_ElemWidth() const;

  constexpr void __set_m_ElemWidth(int32_t value);

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& __get_m_Allocator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> const& __get_m_Allocator() const;

  constexpr void __set_m_Allocator(::UnityEngine::UIElements::UIR::BestFitAllocator* value);

  constexpr ::UnityEngine::Texture2D*& __get_m_Atlas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get_m_Atlas() const;

  constexpr void __set_m_Atlas(::UnityEngine::Texture2D* value);

  constexpr ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture& __get_m_RawAtlas();

  constexpr ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture const& __get_m_RawAtlas() const;

  constexpr void __set_m_RawAtlas(::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture value);

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  constexpr bool& __get__MustCommit_k__BackingField();

  constexpr bool const& __get__MustCommit_k__BackingField() const;

  constexpr void __set__MustCommit_k__BackingField(bool value);

  static inline void setStaticF_s_MarkerWrite(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerWrite();

  static inline void setStaticF_s_MarkerCommit(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerCommit();

  static inline void setStaticF_s_TextureCounter(int32_t value);

  static inline int32_t getStaticF_s_TextureCounter();

  /// @brief Method get_length, addr 0x2e8a744, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Method get_disposed, addr 0x2e8a74c, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method set_disposed, addr 0x2e8a754, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose, addr 0x2e8a760, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2e8a7cc, size 0x78, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::GradientSettingsAtlas* New_ctor(int32_t length);

  /// @brief Method .ctor, addr 0x2e8a844, size 0x30, virtual false, abstract: false, final false
  /// @param length: int32_t (default: static_cast<int32_t>(0x1000))
  inline void _ctor(int32_t length = static_cast<int32_t>(0x1000));

  /// @brief Method Reset, addr 0x2e8a874, size 0xcc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method get_atlas, addr 0x2e8a940, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Texture2D* get_atlas();

  /// @brief Method Add, addr 0x2e8a948, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Alloc Add(int32_t count);

  /// @brief Method Write, addr 0x2e8aa34, size 0x4a0, virtual false, abstract: false, final false
  inline void Write(::UnityEngine::UIElements::UIR::Alloc alloc, ::ArrayW<::UnityEngine::UIElements::GradientSettings, ::Array<::UnityEngine::UIElements::GradientSettings>*> settings,
                    ::UnityEngine::UIElements::UIR::GradientRemap* remap);

  /// @brief Method get_MustCommit, addr 0x2e8b004, size 0x8, virtual false, abstract: false, final false
  inline bool get_MustCommit();

  /// @brief Method set_MustCommit, addr 0x2e8b00c, size 0xc, virtual false, abstract: false, final false
  inline void set_MustCommit(bool value);

  /// @brief Method Commit, addr 0x2e8b018, size 0x64, virtual false, abstract: false, final false
  inline void Commit();

  /// @brief Method PrepareAtlas, addr 0x2e8b07c, size 0x168, virtual false, abstract: false, final false
  inline void PrepareAtlas();

  // Ctor Parameters [CppParam { name: "", ty: "GradientSettingsAtlas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientSettingsAtlas(GradientSettingsAtlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientSettingsAtlas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientSettingsAtlas(GradientSettingsAtlas const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientSettingsAtlas();

public:
  /// @brief Field m_Length, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Length;

  /// @brief Field m_ElemWidth, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_ElemWidth;

  /// @brief Field m_Allocator, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator* ___m_Allocator;

  /// @brief Field m_Atlas, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ___m_Atlas;

  /// @brief Field m_RawAtlas, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture ___m_RawAtlas;

  /// @brief Field <disposed>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field <MustCommit>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____MustCommit_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GradientSettingsAtlas, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientSettingsAtlas, ___m_Length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientSettingsAtlas, ___m_ElemWidth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientSettingsAtlas, ___m_Allocator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientSettingsAtlas, ___m_Atlas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientSettingsAtlas, ___m_RawAtlas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientSettingsAtlas, ____disposed_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GradientSettingsAtlas, ____MustCommit_k__BackingField) == 0x39, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GradientSettingsAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GradientSettingsAtlas*, "UnityEngine.UIElements.UIR", "GradientSettingsAtlas");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__GradientSettingsAtlas__RawTexture, "UnityEngine.UIElements.UIR", "GradientSettingsAtlas/RawTexture");
