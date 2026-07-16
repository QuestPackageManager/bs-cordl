#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXSpawnerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VFXSpawnerState)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine::VFX {
struct VFXSpawnerLoopState;
}
namespace UnityEngine::VFX {
class VFXSpawnerState_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXSpawnerState;
}
namespace UnityEngine::VFX {
class VFXSpawnerState_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VFXSpawnerState*);
MARK_REF_T(::UnityEngine::VFX::VFXSpawnerState_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXSpawnerState*, "UnityEngine.VFX", "VFXSpawnerState");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXSpawnerState_BindingsMarshaller*, "UnityEngine.VFX", "VFXSpawnerState/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXSpawnerState/BindingsMarshaller
class CORDL_TYPE VFXSpawnerState_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6e2a614, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::VFX::VFXSpawnerState* vfxSpawnerState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXSpawnerState_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXSpawnerState_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXSpawnerState_BindingsMarshaller(VFXSpawnerState_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXSpawnerState_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXSpawnerState_BindingsMarshaller(VFXSpawnerState_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22325 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VFXSpawnerState_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXSpawnerState
class CORDL_TYPE VFXSpawnerState : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::VFX::VFXSpawnerState_BindingsMarshaller;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_loopState, put = set_loopState)) ::UnityEngine::VFX::VFXSpawnerLoopState loopState;

  /// @brief Field m_Owner, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Owner, put = __cordl_internal_set_m_Owner)) bool m_Owner;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_WrapEventAttribute, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WrapEventAttribute, put = __cordl_internal_set_m_WrapEventAttribute)) ::UnityEngine::VFX::VFXEventAttribute* m_WrapEventAttribute;

  __declspec(property(get = get_playing, put = set_playing)) bool playing;

  __declspec(property(get = get_spawnCount, put = set_spawnCount)) float_t spawnCount;

  __declspec(property(get = get_totalTime, put = set_totalTime)) float_t totalTime;

  __declspec(property(get = get_vfxEventAttribute)) ::UnityEngine::VFX::VFXEventAttribute* vfxEventAttribute;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateSpawnerStateWrapper, addr 0x6e29e44, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXSpawnerState* CreateSpawnerStateWrapper();

  /// @brief Method Dispose, addr 0x6e2a09c, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x6e2a058, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Internal_Destroy, addr 0x6e2a01c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method Internal_GetVFXEventAttribute, addr 0x6e2a558, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXEventAttribute* Internal_GetVFXEventAttribute();

  /// @brief Method Internal_GetVFXEventAttribute_Injected, addr 0x6e2a5bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_GetVFXEventAttribute_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::VFX::VFXSpawnerState* New_ctor(::System::IntPtr ptr, bool owner);

  /// @brief Method PrepareWrapper, addr 0x6e29ea0, size 0x90, virtual false, abstract: false, final false
  inline void PrepareWrapper();

  /// @brief Method Release, addr 0x6e29fc4, size 0x58, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetWrapValue, addr 0x6e29f30, size 0x94, virtual false, abstract: false, final false
  inline void SetWrapValue(::System::IntPtr ptrToSpawnerState, ::System::IntPtr ptrToEventAttribute);

  constexpr bool const& __cordl_internal_get_m_Owner() const;

  constexpr bool& __cordl_internal_get_m_Owner();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::UnityEngine::VFX::VFXEventAttribute* const& __cordl_internal_get_m_WrapEventAttribute() const;

  constexpr ::UnityEngine::VFX::VFXEventAttribute*& __cordl_internal_get_m_WrapEventAttribute();

  constexpr void __cordl_internal_set_m_Owner(bool value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_WrapEventAttribute(::UnityEngine::VFX::VFXEventAttribute* value);

  /// @brief Method .ctor, addr 0x6e29e38, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr, bool owner);

  /// @brief Method get_deltaTime, addr 0x6e2a394, size 0x50, virtual false, abstract: false, final false
  inline float_t get_deltaTime();

  /// @brief Method get_deltaTime_Injected, addr 0x6e2a3e4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_deltaTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopState, addr 0x6e2a118, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXSpawnerLoopState get_loopState();

  /// @brief Method get_loopState_Injected, addr 0x6e2a1dc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXSpawnerLoopState get_loopState_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_playing, addr 0x6e2a100, size 0x18, virtual false, abstract: false, final false
  inline bool get_playing();

  /// @brief Method get_spawnCount, addr 0x6e2a25c, size 0x50, virtual false, abstract: false, final false
  inline float_t get_spawnCount();

  /// @brief Method get_spawnCount_Injected, addr 0x6e2a2ac, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spawnCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_totalTime, addr 0x6e2a420, size 0x50, virtual false, abstract: false, final false
  inline float_t get_totalTime();

  /// @brief Method get_totalTime_Injected, addr 0x6e2a470, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_totalTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vfxEventAttribute, addr 0x6e2a5f8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXEventAttribute* get_vfxEventAttribute();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_loopState, addr 0x6e2a184, size 0x58, virtual false, abstract: false, final false
  inline void set_loopState(::UnityEngine::VFX::VFXSpawnerLoopState value);

  /// @brief Method set_loopState_Injected, addr 0x6e2a218, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopState_Injected(::System::IntPtr _unity_self, ::UnityEngine::VFX::VFXSpawnerLoopState value);

  /// @brief Method set_playing, addr 0x6e2a168, size 0x1c, virtual false, abstract: false, final false
  inline void set_playing(bool value);

  /// @brief Method set_spawnCount, addr 0x6e2a2e8, size 0x60, virtual false, abstract: false, final false
  inline void set_spawnCount(float_t value);

  /// @brief Method set_spawnCount_Injected, addr 0x6e2a348, size 0x4c, virtual false, abstract: false, final false
  static inline void set_spawnCount_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_totalTime, addr 0x6e2a4ac, size 0x60, virtual false, abstract: false, final false
  inline void set_totalTime(float_t value);

  /// @brief Method set_totalTime_Injected, addr 0x6e2a50c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_totalTime_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXSpawnerState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXSpawnerState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXSpawnerState(VFXSpawnerState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXSpawnerState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXSpawnerState(VFXSpawnerState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22326 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_Owner, offset: 0x18, size: 0x1, def value: None
  bool ___m_Owner;

  /// @brief Field m_WrapEventAttribute, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::VFX::VFXEventAttribute* ___m_WrapEventAttribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXSpawnerState, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXSpawnerState, ___m_Owner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXSpawnerState, ___m_WrapEventAttribute) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXSpawnerState) == 0x28, "Size mismatch!");

} // namespace UnityEngine::VFX
