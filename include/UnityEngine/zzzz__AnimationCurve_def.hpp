#pragma once
// IWYU pragma private; include "UnityEngine/AnimationCurve.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationCurve)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AnimationCurve_BindingsMarshaller;
}
namespace UnityEngine {
struct Keyframe;
}
// Forward declare root types
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AnimationCurve_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::AnimationCurve*);
MARK_REF_T(::UnityEngine::AnimationCurve_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AnimationCurve*, "UnityEngine", "AnimationCurve");
DEFINE_IL2CPP_CLASS(::UnityEngine::AnimationCurve_BindingsMarshaller*, "UnityEngine", "AnimationCurve/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationCurve/BindingsMarshaller
class CORDL_TYPE AnimationCurve_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToManaged, addr 0x6eb8cdc, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* ConvertToManaged(::System::IntPtr ptr);

  /// @brief Method ConvertToNative, addr 0x6eb8d34, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::AnimationCurve* animationCurve);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationCurve_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurve_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationCurve_BindingsMarshaller(AnimationCurve_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurve_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationCurve_BindingsMarshaller(AnimationCurve_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AnimationCurve_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// [NativeHeader("Runtime/Math/AnimationCurve.bindings.h")]
// [DefaultMember("Item")]
// [RequiredByNativeCode]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationCurve
class CORDL_TYPE AnimationCurve : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::AnimationCurve_BindingsMarshaller;

  __declspec(property(get = get_Item)) ::UnityEngine::Keyframe Item[];

  __declspec(property(get = get_keys, put = set_keys)) ::ArrayW<::UnityEngine::Keyframe> keys;

  __declspec(property(get = get_length)) int32_t length;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_RequiresNativeCleanup, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequiresNativeCleanup, put = __cordl_internal_set_m_RequiresNativeCleanup)) bool m_RequiresNativeCleanup;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::AnimationCurve*>*() noexcept;

  /// @brief Method AddKey, addr 0x6eb8324, size 0x2c, virtual false, abstract: false, final false
  inline int32_t AddKey(::UnityEngine::Keyframe key);

  /// [FreeFunction("AnimationCurveBindings::AddKeySmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method AddKey, addr 0x6eb8268, size 0x68, virtual false, abstract: false, final false
  inline int32_t AddKey(float_t time, float_t value);

  /// @brief Method AddKey_Injected, addr 0x6eb82d0, size 0x54, virtual false, abstract: false, final false
  static inline int32_t AddKey_Injected(::System::IntPtr _unity_self, float_t time, float_t value);

  /// [NativeMethod("AddKey", IsThreadSafe = true)]
  /// @brief Method AddKey_Internal, addr 0x6eb8350, size 0x58, virtual false, abstract: false, final false
  inline int32_t AddKey_Internal(::UnityEngine::Keyframe key);

  /// @brief Method AddKey_Internal_Injected, addr 0x6eb83a8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t AddKey_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Keyframe> key);

  /// [FreeFunction("AnimationCurveBindings::ClearKeys", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method ClearKeys, addr 0x6eb84a8, size 0x50, virtual false, abstract: false, final false
  inline void ClearKeys();

  /// @brief Method ClearKeys_Injected, addr 0x6eb84f8, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearKeys_Injected(::System::IntPtr _unity_self);

  /// @brief Method CopyFrom, addr 0x6eb8cc8, size 0x14, virtual false, abstract: false, final false
  inline void CopyFrom(::UnityEngine::AnimationCurve* other);

  /// @brief Method EaseInOut, addr 0x6eb8a04, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* EaseInOut(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd);

  /// @brief Method Equals, addr 0x6eb8b44, size 0xf4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6eb8c38, size 0x90, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::AnimationCurve* other);

  /// [ThreadSafe]
  /// @brief Method Evaluate, addr 0x6eb7ef8, size 0x60, virtual false, abstract: false, final false
  inline float_t Evaluate(float_t time);

  /// @brief Method Evaluate_Injected, addr 0x6eb7f58, size 0x4c, virtual false, abstract: false, final false
  static inline float_t Evaluate_Injected(::System::IntPtr _unity_self, float_t time);

  /// @brief Method Finalize, addr 0x6eb7e7c, size 0x7c, virtual true, abstract: false, final false
  inline void Finalize();

  /// [FreeFunction("AnimationCurveBindings::GetHashCode", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method GetHashCode, addr 0x6eb8770, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHashCode_Injected, addr 0x6eb87c0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("AnimationCurveBindings::GetKey", HasExplicitThis = true, IsThreadSafe = true)]
  /// [NativeThrows]
  /// @brief Method GetKey, addr 0x6eb8600, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Keyframe GetKey(int32_t index);

  /// @brief Method GetKey_Injected, addr 0x6eb871c, size 0x54, virtual false, abstract: false, final false
  static inline void GetKey_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Keyframe> ret);

  /// [FreeFunction("AnimationCurveBindings::Internal_CopyFrom", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method Internal_CopyFrom, addr 0x6eb7de0, size 0x58, virtual false, abstract: false, final false
  inline void Internal_CopyFrom(::System::IntPtr other);

  /// @brief Method Internal_CopyFrom_Injected, addr 0x6eb7e38, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CopyFrom_Injected(::System::IntPtr _unity_self, ::System::IntPtr other);

  /// [FreeFunction("AnimationCurveBindings::Internal_Create", IsThreadSafe = true)]
  /// @brief Method Internal_Create, addr 0x6eb7c44, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create(::ArrayW<::UnityEngine::Keyframe> keys);

  /// @brief Method Internal_Create_Injected, addr 0x6eb7d08, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keys);

  /// [FreeFunction("AnimationCurveBindings::Internal_Destroy", IsThreadSafe = true)]
  /// @brief Method Internal_Destroy, addr 0x6eb7c08, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// [FreeFunction("AnimationCurveBindings::Internal_Equals", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method Internal_Equals, addr 0x6eb7d44, size 0x58, virtual false, abstract: false, final false
  inline bool Internal_Equals(::System::IntPtr other);

  /// @brief Method Internal_Equals_Injected, addr 0x6eb7d9c, size 0x44, virtual false, abstract: false, final false
  static inline bool Internal_Equals_Injected(::System::IntPtr _unity_self, ::System::IntPtr other);

  /// @brief Method Linear, addr 0x6eb88b8, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* Linear(float_t timeStart, float_t valueStart, float_t timeEnd, float_t valueEnd);

  /// [NativeThrows]
  /// [FreeFunction("AnimationCurveBindings::MoveKey", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method MoveKey, addr 0x6eb83ec, size 0x68, virtual false, abstract: false, final false
  inline int32_t MoveKey(int32_t index, ::UnityEngine::Keyframe key);

  /// @brief Method MoveKey_Injected, addr 0x6eb8454, size 0x54, virtual false, abstract: false, final false
  static inline int32_t MoveKey_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Keyframe> key);

  /// @brief [RequiredByNativeCode]
  static inline ::UnityEngine::AnimationCurve* New_ctor();

  static inline ::UnityEngine::AnimationCurve* New_ctor(/* [ParamArray] */ ::ArrayW<::UnityEngine::Keyframe> keys);

  /// @brief [VisibleToOtherModules(new[] { "UnityEngine.ParticleSystemModule" })]
  static inline ::UnityEngine::AnimationCurve* New_ctor(::System::IntPtr ptr, bool ownMemory);

  /// [NativeThrows]
  /// [FreeFunction("AnimationCurveBindings::RemoveKey", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method RemoveKey, addr 0x6eb8534, size 0x58, virtual false, abstract: false, final false
  inline void RemoveKey(int32_t index);

  /// @brief Method RemoveKey_Injected, addr 0x6eb858c, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveKey_Injected(::System::IntPtr _unity_self, int32_t index);

  /// [NativeThrows]
  /// [FreeFunction("AnimationCurveBindings::SmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method SmoothTangents, addr 0x6eb87fc, size 0x68, virtual false, abstract: false, final false
  inline void SmoothTangents(int32_t index, float_t weight);

  /// @brief Method SmoothTangents_Injected, addr 0x6eb8864, size 0x54, virtual false, abstract: false, final false
  static inline void SmoothTangents_Injected(::System::IntPtr _unity_self, int32_t index, float_t weight);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr bool const& __cordl_internal_get_m_RequiresNativeCleanup() const;

  constexpr bool& __cordl_internal_get_m_RequiresNativeCleanup();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_RequiresNativeCleanup(bool value);

  /// [RequiredByNativeCode]
  /// @brief Method .ctor, addr 0x6eb8b14, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6eb89e0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(/* [ParamArray] */ ::ArrayW<::UnityEngine::Keyframe> keys);

  /// [VisibleToOtherModules(new[] { "UnityEngine.ParticleSystemModule" })]
  /// @brief Method .ctor, addr 0x6eb8b38, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr, bool ownMemory);

  /// @brief Method get_Item, addr 0x6eb85d0, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Keyframe get_Item(int32_t index);

  /// [FreeFunction("AnimationCurveBindings::GetKeysArray", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method get_keys, addr 0x6eb7fa4, size 0x14c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Keyframe> get_keys();

  /// @brief Method get_keys_Injected, addr 0x6eb80f0, size 0x44, virtual false, abstract: false, final false
  static inline void get_keys_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeMethod("GetKeyCount", IsThreadSafe = true)]
  /// @brief Method get_length, addr 0x6eb8690, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Method get_length_Injected, addr 0x6eb86e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_length_Injected(::System::IntPtr _unity_self);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
  constexpr ::System::IEquatable_1<::UnityEngine::AnimationCurve*>* i___System__IEquatable_1___UnityEngine__AnimationCurve__() noexcept;

  /// [FreeFunction("AnimationCurveBindings::SetKeysWithSpan", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method set_keys, addr 0x6eb8134, size 0xf0, virtual false, abstract: false, final false
  inline void set_keys(::ArrayW<::UnityEngine::Keyframe> value);

  /// @brief Method set_keys_Injected, addr 0x6eb8224, size 0x44, virtual false, abstract: false, final false
  static inline void set_keys_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationCurve(AnimationCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationCurve(AnimationCurve const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9631 };

  /// [VisibleToOtherModules(new[] { "UnityEngine.ParticleSystemModule" })]
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_RequiresNativeCleanup, offset: 0x18, size: 0x1, def value: None
  bool ___m_RequiresNativeCleanup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimationCurve, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationCurve, ___m_RequiresNativeCleanup) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AnimationCurve) == 0x20, "Size mismatch!");

} // namespace UnityEngine
