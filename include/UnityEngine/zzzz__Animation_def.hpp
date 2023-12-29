#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Animation)
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine {
class __Animation__Enumerator;
}
namespace UnityEngine {
class AnimationState;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
struct PlayMode;
}
namespace UnityEngine {
class AnimationClip;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class __Animation__Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animation);
MARK_REF_PTR_T(::UnityEngine::__Animation__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15091))
// CS Name: ::Animation::Enumerator*
class CORDL_TYPE __Animation__Enumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Outer, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Outer, put = __set_m_Outer))::UnityEngine::Animation* m_Outer;

  /// @brief Field m_CurrentIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_m_CurrentIndex, put = __set_m_CurrentIndex)) int32_t m_CurrentIndex;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::UnityEngine::Animation*& __get_m_Outer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> const& __get_m_Outer() const;

  constexpr void __set_m_Outer(::UnityEngine::Animation* value);

  constexpr int32_t& __get_m_CurrentIndex();

  constexpr int32_t const& __get_m_CurrentIndex() const;

  constexpr void __set_m_CurrentIndex(int32_t value);

  static inline ::UnityEngine::__Animation__Enumerator* New_ctor(::UnityEngine::Animation* outer);

  /// @brief Method .ctor addr 0x2b2a65c size 0x30 virtual false final false
  inline void _ctor(::UnityEngine::Animation* outer);

  /// @brief Method get_Current addr 0x2b2a748 size 0x4c virtual true final true
  inline ::System::Object* get_Current();

  /// @brief Method MoveNext addr 0x2b2a794 size 0x60 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x2b2a7f4 size 0xc virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__Animation__Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Animation__Enumerator(__Animation__Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Animation__Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Animation__Enumerator(__Animation__Enumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Animation__Enumerator();

public:
  /// @brief Field m_Outer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Animation* ___m_Outer;

  /// @brief Field m_CurrentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_CurrentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Animation__Enumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Animation__Enumerator, ___m_Outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__Animation__Enumerator, ___m_CurrentIndex) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Animation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10115))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15092))
// CS Name: ::UnityEngine::Animation*
class CORDL_TYPE Animation : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using Enumerator = ::UnityEngine::__Animation__Enumerator;

  __declspec(property(get = get_clip))::UnityEngine::AnimationClip* clip;

  __declspec(property(get = get_Item))::UnityEngine::AnimationState* Item[];

  __declspec(property(get = get_animatePhysics)) bool animatePhysics;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method get_clip addr 0x2b2a2a8 size 0x3c virtual false final false
  inline ::UnityEngine::AnimationClip* get_clip();

  /// @brief Method Rewind addr 0x2b2a2e4 size 0x3c virtual false final false
  inline void Rewind();

  /// @brief Method Rewind addr 0x2b2a320 size 0x44 virtual false final false
  inline void Rewind(::StringW name);

  /// @brief Method RewindNamed addr 0x2b2a364 size 0x44 virtual false final false
  inline void RewindNamed(::StringW name);

  /// @brief Method Sample addr 0x2b2a3a8 size 0x3c virtual false final false
  inline void Sample();

  /// @brief Method get_Item addr 0x2b2a3e4 size 0x44 virtual false final false
  inline ::UnityEngine::AnimationState* get_Item(::StringW name);

  /// @brief Method Play addr 0x2b2a46c size 0x40 virtual false final false
  inline bool Play();

  /// @brief Method Play addr 0x2b2a4ac size 0x44 virtual false final false
  inline bool Play(::UnityEngine::PlayMode mode);

  /// @brief Method PlayDefaultAnimation addr 0x2b2a4f0 size 0x44 virtual false final false
  inline bool PlayDefaultAnimation(::UnityEngine::PlayMode mode);

  /// @brief Method CrossFade addr 0x2b2a534 size 0x58 virtual false final false
  inline void CrossFade(::StringW animation, float_t fadeLength);

  /// @brief Method CrossFade addr 0x2b2a58c size 0x64 virtual false final false
  inline void CrossFade(::StringW animation, float_t fadeLength, ::UnityEngine::PlayMode mode);

  /// @brief Method GetEnumerator addr 0x2b2a5f0 size 0x6c virtual true final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetState addr 0x2b2a428 size 0x44 virtual false final false
  inline ::UnityEngine::AnimationState* GetState(::StringW name);

  /// @brief Method GetStateAtIndex addr 0x2b2a68c size 0x44 virtual false final false
  inline ::UnityEngine::AnimationState* GetStateAtIndex(int32_t index);

  /// @brief Method GetStateCount addr 0x2b2a6d0 size 0x3c virtual false final false
  inline int32_t GetStateCount();

  /// @brief Method get_animatePhysics addr 0x2b2a70c size 0x3c virtual false final false
  inline bool get_animatePhysics();

  // Ctor Parameters [CppParam { name: "", ty: "Animation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Animation(Animation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Animation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Animation(Animation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Animation();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animation, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Animation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation*, "UnityEngine", "Animation");
NEED_NO_BOX(::UnityEngine::__Animation__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Animation__Enumerator*, "UnityEngine", "Animation/Enumerator");
