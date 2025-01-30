#pragma once
// IWYU pragma private; include "TMPro/TMP_SpriteAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_CharacterInfo_def.hpp"
#include "TMPro/zzzz__TMP_MeshInfo_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SpriteAnimator)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteAnimator;
}
namespace TMPro {
class TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SpriteAnimator);
MARK_REF_PTR_T(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, TMPro.TMP_CharacterInfo, TMPro.TMP_MeshInfo
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
class CORDL_TYPE TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::TMPro::TMP_SpriteAnimator> __4__this;

  /// @brief Field <baseSpriteScale>5__7, offset 0x218, size 0x4
  __declspec(property(get = __cordl_internal_get__baseSpriteScale_5__7, put = __cordl_internal_set__baseSpriteScale_5__7)) float_t _baseSpriteScale_5__7;

  /// @brief Field <charInfo>5__3, offset 0x48, size 0x178
  __declspec(property(get = __cordl_internal_get__charInfo_5__3, put = __cordl_internal_set__charInfo_5__3)) ::TMPro::TMP_CharacterInfo _charInfo_5__3;

  /// @brief Field <currentFrame>5__2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__currentFrame_5__2, put = __cordl_internal_set__currentFrame_5__2)) int32_t _currentFrame_5__2;

  /// @brief Field <elapsedTime>5__8, offset 0x21c, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__8, put = __cordl_internal_set__elapsedTime_5__8)) float_t _elapsedTime_5__8;

  /// @brief Field <materialIndex>5__4, offset 0x1c0, size 0x4
  __declspec(property(get = __cordl_internal_get__materialIndex_5__4, put = __cordl_internal_set__materialIndex_5__4)) int32_t _materialIndex_5__4;

  /// @brief Field <meshInfo>5__6, offset 0x1c8, size 0x50
  __declspec(property(get = __cordl_internal_get__meshInfo_5__6, put = __cordl_internal_set__meshInfo_5__6)) ::TMPro::TMP_MeshInfo _meshInfo_5__6;

  /// @brief Field <targetTime>5__9, offset 0x220, size 0x4
  __declspec(property(get = __cordl_internal_get__targetTime_5__9, put = __cordl_internal_set__targetTime_5__9)) float_t _targetTime_5__9;

  /// @brief Field <vertexIndex>5__5, offset 0x1c4, size 0x4
  __declspec(property(get = __cordl_internal_get__vertexIndex_5__5, put = __cordl_internal_set__vertexIndex_5__5)) int32_t _vertexIndex_5__5;

  /// @brief Field currentCharacter, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_currentCharacter, put = __cordl_internal_set_currentCharacter)) int32_t currentCharacter;

  /// @brief Field end, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_end, put = __cordl_internal_set_end)) int32_t end;

  /// @brief Field framerate, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_framerate, put = __cordl_internal_set_framerate)) int32_t framerate;

  /// @brief Field spriteAsset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_spriteAsset, put = __cordl_internal_set_spriteAsset)) ::UnityW<::TMPro::TMP_SpriteAsset> spriteAsset;

  /// @brief Field start, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start)) int32_t start;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x480223c, size 0x910, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x4802b70, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4802b78, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4802bb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4802238, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::TMPro::TMP_SpriteAnimator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::TMPro::TMP_SpriteAnimator>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__baseSpriteScale_5__7() const;

  constexpr float_t& __cordl_internal_get__baseSpriteScale_5__7();

  constexpr ::TMPro::TMP_CharacterInfo const& __cordl_internal_get__charInfo_5__3() const;

  constexpr ::TMPro::TMP_CharacterInfo& __cordl_internal_get__charInfo_5__3();

  constexpr int32_t const& __cordl_internal_get__currentFrame_5__2() const;

  constexpr int32_t& __cordl_internal_get__currentFrame_5__2();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__8() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__8();

  constexpr int32_t const& __cordl_internal_get__materialIndex_5__4() const;

  constexpr int32_t& __cordl_internal_get__materialIndex_5__4();

  constexpr ::TMPro::TMP_MeshInfo const& __cordl_internal_get__meshInfo_5__6() const;

  constexpr ::TMPro::TMP_MeshInfo& __cordl_internal_get__meshInfo_5__6();

  constexpr float_t const& __cordl_internal_get__targetTime_5__9() const;

  constexpr float_t& __cordl_internal_get__targetTime_5__9();

  constexpr int32_t const& __cordl_internal_get__vertexIndex_5__5() const;

  constexpr int32_t& __cordl_internal_get__vertexIndex_5__5();

  constexpr int32_t const& __cordl_internal_get_currentCharacter() const;

  constexpr int32_t& __cordl_internal_get_currentCharacter();

  constexpr int32_t const& __cordl_internal_get_end() const;

  constexpr int32_t& __cordl_internal_get_end();

  constexpr int32_t const& __cordl_internal_get_framerate() const;

  constexpr int32_t& __cordl_internal_get_framerate();

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset> const& __cordl_internal_get_spriteAsset() const;

  constexpr ::UnityW<::TMPro::TMP_SpriteAsset>& __cordl_internal_get_spriteAsset();

  constexpr int32_t const& __cordl_internal_get_start() const;

  constexpr int32_t& __cordl_internal_get_start();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::TMPro::TMP_SpriteAnimator> value);

  constexpr void __cordl_internal_set__baseSpriteScale_5__7(float_t value);

  constexpr void __cordl_internal_set__charInfo_5__3(::TMPro::TMP_CharacterInfo value);

  constexpr void __cordl_internal_set__currentFrame_5__2(int32_t value);

  constexpr void __cordl_internal_set__elapsedTime_5__8(float_t value);

  constexpr void __cordl_internal_set__materialIndex_5__4(int32_t value);

  constexpr void __cordl_internal_set__meshInfo_5__6(::TMPro::TMP_MeshInfo value);

  constexpr void __cordl_internal_set__targetTime_5__9(float_t value);

  constexpr void __cordl_internal_set__vertexIndex_5__5(int32_t value);

  constexpr void __cordl_internal_set_currentCharacter(int32_t value);

  constexpr void __cordl_internal_set_end(int32_t value);

  constexpr void __cordl_internal_set_framerate(int32_t value);

  constexpr void __cordl_internal_set_spriteAsset(::UnityW<::TMPro::TMP_SpriteAsset> value);

  constexpr void __cordl_internal_set_start(int32_t value);

  /// @brief Method .ctor, addr 0x4802190, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7(TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7(TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14538 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAnimator> _____4__this;

  /// @brief Field start, offset: 0x28, size: 0x4, def value: None
  int32_t ___start;

  /// @brief Field end, offset: 0x2c, size: 0x4, def value: None
  int32_t ___end;

  /// @brief Field spriteAsset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_SpriteAsset> ___spriteAsset;

  /// @brief Field currentCharacter, offset: 0x38, size: 0x4, def value: None
  int32_t ___currentCharacter;

  /// @brief Field framerate, offset: 0x3c, size: 0x4, def value: None
  int32_t ___framerate;

  /// @brief Field <currentFrame>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t ____currentFrame_5__2;

  /// @brief Field <charInfo>5__3, offset: 0x48, size: 0x178, def value: None
  ::TMPro::TMP_CharacterInfo ____charInfo_5__3;

  /// @brief Field <materialIndex>5__4, offset: 0x1c0, size: 0x4, def value: None
  int32_t ____materialIndex_5__4;

  /// @brief Field <vertexIndex>5__5, offset: 0x1c4, size: 0x4, def value: None
  int32_t ____vertexIndex_5__5;

  /// @brief Field <meshInfo>5__6, offset: 0x1c8, size: 0x50, def value: None
  ::TMPro::TMP_MeshInfo ____meshInfo_5__6;

  /// @brief Field <baseSpriteScale>5__7, offset: 0x218, size: 0x4, def value: None
  float_t ____baseSpriteScale_5__7;

  /// @brief Field <elapsedTime>5__8, offset: 0x21c, size: 0x4, def value: None
  float_t ____elapsedTime_5__8;

  /// @brief Field <targetTime>5__9, offset: 0x220, size: 0x4, def value: None
  float_t ____targetTime_5__9;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ___start) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ___end) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ___spriteAsset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ___currentCharacter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ___framerate) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ____currentFrame_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ____charInfo_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ____materialIndex_5__4) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ____vertexIndex_5__5) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ____meshInfo_5__6) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ____baseSpriteScale_5__7) == 0x218, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ____elapsedTime_5__8) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, ____targetTime_5__9) == 0x220, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7, 0x228>, "Size mismatch!");

} // namespace TMPro
// Dependencies UnityEngine.MonoBehaviour
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_SpriteAnimator
class CORDL_TYPE TMP_SpriteAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DoSpriteAnimationInternal_d__7 = ::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7;

  /// @brief Field m_TextComponent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextComponent, put = __cordl_internal_set_m_TextComponent)) ::UnityW<::TMPro::TMP_Text> m_TextComponent;

  /// @brief Field m_animations, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_animations, put = __cordl_internal_set_m_animations)) ::System::Collections::Generic::Dictionary_2<int32_t, bool>* m_animations;

  /// @brief Method Awake, addr 0x4801f5c, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DoSpriteAnimation, addr 0x4802010, size 0xe8, virtual false, abstract: false, final false
  inline void DoSpriteAnimation(int32_t currentCharacter, ::TMPro::TMP_SpriteAsset* spriteAsset, int32_t start, int32_t end, int32_t framerate);

  /// @brief Method DoSpriteAnimationInternal, addr 0x48020f8, size 0x98, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoSpriteAnimationInternal(int32_t currentCharacter, ::TMPro::TMP_SpriteAsset* spriteAsset, int32_t start, int32_t end, int32_t framerate);

  static inline ::TMPro::TMP_SpriteAnimator* New_ctor();

  /// @brief Method OnDisable, addr 0x4801fb0, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4801fac, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method StopAllAnimations, addr 0x4801fb4, size 0x5c, virtual false, abstract: false, final false
  inline void StopAllAnimations();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_m_TextComponent() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_m_TextComponent();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, bool>* const& __cordl_internal_get_m_animations() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, bool>*& __cordl_internal_get_m_animations();

  constexpr void __cordl_internal_set_m_TextComponent(::UnityW<::TMPro::TMP_Text> value);

  constexpr void __cordl_internal_set_m_animations(::System::Collections::Generic::Dictionary_2<int32_t, bool>* value);

  /// @brief Method .ctor, addr 0x48021b8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SpriteAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SpriteAnimator(TMP_SpriteAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SpriteAnimator(TMP_SpriteAnimator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14539 };

  /// @brief Field m_animations, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, bool>* ___m_animations;

  /// @brief Field m_TextComponent, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ___m_TextComponent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_SpriteAnimator, ___m_animations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteAnimator, ___m_TextComponent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteAnimator, 0x30>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_SpriteAnimator);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteAnimator*, "TMPro", "TMP_SpriteAnimator");
NEED_NO_BOX(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7*, "TMPro", "TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7");
