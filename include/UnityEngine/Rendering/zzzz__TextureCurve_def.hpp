#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureCurve)
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Keyframe;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class TextureCurve;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::TextureCurve);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.TextureCurve
class CORDL_TYPE TextureCurve : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::UnityEngine::Keyframe Item[];

  /// @brief Field <length>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__length_k__BackingField, put = __cordl_internal_set__length_k__BackingField)) int32_t _length_k__BackingField;

  __declspec(property(get = get_length, put = set_length)) int32_t length;

  /// @brief Field m_Curve, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Curve, put = __cordl_internal_set_m_Curve)) ::UnityEngine::AnimationCurve* m_Curve;

  /// @brief Field m_IsCurveDirty, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsCurveDirty, put = __cordl_internal_set_m_IsCurveDirty)) bool m_IsCurveDirty;

  /// @brief Field m_IsTextureDirty, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTextureDirty, put = __cordl_internal_set_m_IsTextureDirty)) bool m_IsTextureDirty;

  /// @brief Field m_Loop, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Loop, put = __cordl_internal_set_m_Loop)) bool m_Loop;

  /// @brief Field m_LoopingCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoopingCurve, put = __cordl_internal_set_m_LoopingCurve)) ::UnityEngine::AnimationCurve* m_LoopingCurve;

  /// @brief Field m_Range, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Range, put = __cordl_internal_set_m_Range)) float_t m_Range;

  /// @brief Field m_Texture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Texture, put = __cordl_internal_set_m_Texture)) ::UnityW<::UnityEngine::Texture2D> m_Texture;

  /// @brief Field m_ZeroValue, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ZeroValue, put = __cordl_internal_set_m_ZeroValue)) float_t m_ZeroValue;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddKey, addr 0x6611694, size 0x38, virtual false, abstract: false, final false
  inline int32_t AddKey(float_t time, float_t value);

  /// @brief Method Dispose, addr 0x6611178, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Evaluate, addr 0x66114a4, size 0x1f0, virtual false, abstract: false, final false
  inline float_t Evaluate(float_t time);

  /// @brief Method GetTexture, addr 0x66112b4, size 0x1f0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> GetTexture();

  /// @brief Method GetTextureFormat, addr 0x6611230, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetTextureFormat();

  /// @brief Method MoveKey, addr 0x66116cc, size 0x48, virtual false, abstract: false, final false
  inline int32_t MoveKey(int32_t index, ::ByRef<::UnityEngine::Keyframe> key);

  static inline ::UnityEngine::Rendering::TextureCurve* New_ctor(::UnityEngine::AnimationCurve* baseCurve, float_t zeroValue, bool loop, ::ByRef<::UnityEngine::Vector2> bounds);

  static inline ::UnityEngine::Rendering::TextureCurve* New_ctor(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys, float_t zeroValue, bool loop,
                                                                 ::ByRef<::UnityEngine::Vector2> bounds);

  /// @brief Method Release, addr 0x661117c, size 0xa8, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method RemoveKey, addr 0x6611714, size 0x2c, virtual false, abstract: false, final false
  inline void RemoveKey(int32_t index);

  /// @brief Method SetDirty, addr 0x6611224, size 0xc, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method SmoothTangents, addr 0x6611740, size 0x2c, virtual false, abstract: false, final false
  inline void SmoothTangents(int32_t index, float_t weight);

  constexpr int32_t const& __cordl_internal_get__length_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__length_k__BackingField();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_Curve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_Curve();

  constexpr bool const& __cordl_internal_get_m_IsCurveDirty() const;

  constexpr bool& __cordl_internal_get_m_IsCurveDirty();

  constexpr bool const& __cordl_internal_get_m_IsTextureDirty() const;

  constexpr bool& __cordl_internal_get_m_IsTextureDirty();

  constexpr bool const& __cordl_internal_get_m_Loop() const;

  constexpr bool& __cordl_internal_get_m_Loop();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_LoopingCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_LoopingCurve();

  constexpr float_t const& __cordl_internal_get_m_Range() const;

  constexpr float_t& __cordl_internal_get_m_Range();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_Texture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_Texture();

  constexpr float_t const& __cordl_internal_get_m_ZeroValue() const;

  constexpr float_t& __cordl_internal_get_m_ZeroValue();

  constexpr void __cordl_internal_set__length_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_Curve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_m_IsCurveDirty(bool value);

  constexpr void __cordl_internal_set_m_IsTextureDirty(bool value);

  constexpr void __cordl_internal_set_m_Loop(bool value);

  constexpr void __cordl_internal_set_m_LoopingCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_m_Range(float_t value);

  constexpr void __cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_ZeroValue(float_t value);

  /// @brief Method .ctor, addr 0x6611028, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AnimationCurve* baseCurve, float_t zeroValue, bool loop, ::ByRef<::UnityEngine::Vector2> bounds);

  /// @brief Method .ctor, addr 0x6611078, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys, float_t zeroValue, bool loop, ::ByRef<::UnityEngine::Vector2> bounds);

  /// @brief Method get_Item, addr 0x6610fec, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Keyframe get_Item(int32_t index);

  /// @brief Method get_length, addr 0x6610fdc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_length, addr 0x6610fe4, size 0x8, virtual false, abstract: false, final false
  inline void set_length(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureCurve(TextureCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureCurve(TextureCurve const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12289 };

  /// @brief Field k_Precision offset 0xffffffff size 0x4
  static constexpr int32_t k_Precision{ static_cast<int32_t>(0x80) };

  /// @brief Field k_Step offset 0xffffffff size 0x4
  static constexpr float_t k_Step{ static_cast<float_t>(0.0078125f) };

  /// @brief Field <length>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____length_k__BackingField;

  /// @brief Field m_Loop, offset: 0x14, size: 0x1, def value: None
  bool ___m_Loop;

  /// @brief Field m_ZeroValue, offset: 0x18, size: 0x4, def value: None
  float_t ___m_ZeroValue;

  /// @brief Field m_Range, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_Range;

  /// @brief Field m_Curve, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_Curve;

  /// @brief Field m_LoopingCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_LoopingCurve;

  /// @brief Field m_Texture, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_Texture;

  /// @brief Field m_IsCurveDirty, offset: 0x38, size: 0x1, def value: None
  bool ___m_IsCurveDirty;

  /// @brief Field m_IsTextureDirty, offset: 0x39, size: 0x1, def value: None
  bool ___m_IsTextureDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::TextureCurve, ____length_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureCurve, ___m_Loop) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureCurve, ___m_ZeroValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureCurve, ___m_Range) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureCurve, ___m_Curve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureCurve, ___m_LoopingCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureCurve, ___m_Texture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureCurve, ___m_IsCurveDirty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureCurve, ___m_IsTextureDirty) == 0x39, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TextureCurve, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::TextureCurve);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TextureCurve*, "UnityEngine.Rendering", "TextureCurve");
