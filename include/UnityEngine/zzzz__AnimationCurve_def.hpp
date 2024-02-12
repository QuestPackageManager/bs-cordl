#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationCurve)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Keyframe;
}
// Forward declare root types
namespace UnityEngine {
class AnimationCurve;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimationCurve);
// Type: UnityEngine::AnimationCurve
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8775))
// CS Name: ::UnityEngine::AnimationCurve*
class CORDL_TYPE AnimationCurve : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  __declspec(property(get = get_keys, put = set_keys))::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys;

  __declspec(property(get = get_length)) int32_t length;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::AnimationCurve*>*() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
  constexpr ::System::IEquatable_1<::UnityEngine::AnimationCurve*>* i___System__IEquatable_1___UnityEngine__AnimationCurve__() noexcept;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method Internal_Destroy, addr 0x2c9f490, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(void* ptr);

  /// @brief Method Internal_Create, addr 0x2c9f4cc, size 0x3c, virtual false, abstract: false, final false
  static inline void* Internal_Create(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys);

  /// @brief Method Internal_Equals, addr 0x2c9f508, size 0x44, virtual false, abstract: false, final false
  inline bool Internal_Equals(void* other);

  /// @brief Method Finalize, addr 0x2c9f54c, size 0xbc, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Evaluate, addr 0x2c9f608, size 0x4c, virtual false, abstract: false, final false
  inline float_t Evaluate(float_t time);

  /// @brief Method get_keys, addr 0x2c9f654, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> get_keys();

  /// @brief Method set_keys, addr 0x2c9f6cc, size 0x44, virtual false, abstract: false, final false
  inline void set_keys(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> value);

  /// @brief Method AddKey, addr 0x2c9f754, size 0x54, virtual false, abstract: false, final false
  inline int32_t AddKey(float_t time, float_t value);

  /// @brief Method get_length, addr 0x2c9f7a8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Method SetKeys, addr 0x2c9f710, size 0x44, virtual false, abstract: false, final false
  inline void SetKeys(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys);

  /// @brief Method GetKeys, addr 0x2c9f690, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> GetKeys();

  /// @brief Method Linear, addr 0x2c9f7e4, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* Linear(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd);

  /// @brief Method EaseInOut, addr 0x2c9f974, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* EaseInOut(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd);

  static inline ::UnityEngine::AnimationCurve* New_ctor(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys);

  /// @brief Method .ctor, addr 0x2c9f924, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keys);

  static inline ::UnityEngine::AnimationCurve* New_ctor();

  /// @brief Method .ctor, addr 0x2c9faa8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Equals, addr 0x2c9faf4, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x2c9fbbc, size 0xc8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::AnimationCurve* other);

  /// @brief Method GetHashCode, addr 0x2c9fc84, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationCurve(AnimationCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationCurve(AnimationCurve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationCurve();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationCurve, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AnimationCurve, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationCurve);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationCurve*, "UnityEngine", "AnimationCurve");
