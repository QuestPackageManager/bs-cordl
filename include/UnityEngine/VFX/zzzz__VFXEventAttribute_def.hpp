#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXEventAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXEventAttribute)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::VFX {
class VFXEventAttribute_BindingsMarshaller;
}
namespace UnityEngine::VFX {
class VisualEffectAsset;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine::VFX {
class VFXEventAttribute_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VFXEventAttribute*);
MARK_REF_T(::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXEventAttribute*, "UnityEngine.VFX", "VFXEventAttribute");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller*, "UnityEngine.VFX", "VFXEventAttribute/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXEventAttribute/BindingsMarshaller
class CORDL_TYPE VFXEventAttribute_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToManaged, addr 0x6e291b4, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXEventAttribute* ConvertToManaged(::System::IntPtr ptr);

  /// @brief Method ConvertToNative, addr 0x6e291a0, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::VFX::VFXEventAttribute* eventAttibute);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXEventAttribute_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXEventAttribute_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXEventAttribute_BindingsMarshaller(VFXEventAttribute_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXEventAttribute_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXEventAttribute_BindingsMarshaller(VFXEventAttribute_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22315 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXEventAttribute
class CORDL_TYPE VFXEventAttribute : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller;

  /// @brief Field m_Owner, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Owner, put = __cordl_internal_set_m_Owner)) bool m_Owner;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_VfxAsset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VfxAsset, put = __cordl_internal_set_m_VfxAsset)) ::UnityW<::UnityEngine::VFX::VisualEffectAsset> m_VfxAsset;

  __declspec(property(get = get_vfxAsset)) ::UnityW<::UnityEngine::VFX::VisualEffectAsset> vfxAsset;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateEventAttributeWrapper, addr 0x6e28484, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXEventAttribute* CreateEventAttributeWrapper();

  /// @brief Method Dispose, addr 0x6e287c0, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x6e2877c, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HasBool, addr 0x6e28824, size 0x58, virtual false, abstract: false, final false
  inline bool HasBool(int32_t nameID);

  /// @brief Method HasBool_Injected, addr 0x6e2887c, size 0x44, virtual false, abstract: false, final false
  static inline bool HasBool_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasFloat, addr 0x6e289f8, size 0x58, virtual false, abstract: false, final false
  inline bool HasFloat(int32_t nameID);

  /// @brief Method HasFloat_Injected, addr 0x6e28a50, size 0x44, virtual false, abstract: false, final false
  static inline bool HasFloat_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasInt, addr 0x6e288c0, size 0x58, virtual false, abstract: false, final false
  inline bool HasInt(int32_t nameID);

  /// @brief Method HasInt_Injected, addr 0x6e28918, size 0x44, virtual false, abstract: false, final false
  static inline bool HasInt_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasUint, addr 0x6e2895c, size 0x58, virtual false, abstract: false, final false
  inline bool HasUint(int32_t nameID);

  /// @brief Method HasUint_Injected, addr 0x6e289b4, size 0x44, virtual false, abstract: false, final false
  static inline bool HasUint_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasVector2, addr 0x6e28a94, size 0x58, virtual false, abstract: false, final false
  inline bool HasVector2(int32_t nameID);

  /// @brief Method HasVector2_Injected, addr 0x6e28aec, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVector2_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasVector3, addr 0x6e28b30, size 0x58, virtual false, abstract: false, final false
  inline bool HasVector3(int32_t nameID);

  /// @brief Method HasVector3_Injected, addr 0x6e28b88, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVector3_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasVector4, addr 0x6e28bcc, size 0x58, virtual false, abstract: false, final false
  inline bool HasVector4(int32_t nameID);

  /// @brief Method HasVector4_Injected, addr 0x6e28c24, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVector4_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method Internal_Create, addr 0x6e28534, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create();

  /// @brief Method Internal_Destroy, addr 0x6e28740, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method Internal_InitFromAsset, addr 0x6e285f0, size 0xac, virtual false, abstract: false, final false
  inline void Internal_InitFromAsset(::UnityEngine::VFX::VisualEffectAsset* vfxAsset);

  /// @brief Method Internal_InitFromAsset_Injected, addr 0x6e2869c, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_InitFromAsset_Injected(::System::IntPtr _unity_self, ::System::IntPtr vfxAsset);

  /// @brief Method Internal_InstanciateVFXEventAttribute, addr 0x6e2855c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXEventAttribute* Internal_InstanciateVFXEventAttribute(::UnityEngine::VFX::VisualEffectAsset* vfxAsset);

  static inline ::UnityEngine::VFX::VFXEventAttribute* New_ctor();

  static inline ::UnityEngine::VFX::VFXEventAttribute* New_ctor(::System::IntPtr ptr);

  static inline ::UnityEngine::VFX::VFXEventAttribute* New_ctor(::System::IntPtr ptr, bool owner, ::UnityEngine::VFX::VisualEffectAsset* vfxAsset);

  /// @brief Method Release, addr 0x6e286e8, size 0x58, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetBool, addr 0x6e28c68, size 0x68, virtual false, abstract: false, final false
  inline void SetBool(int32_t nameID, bool b);

  /// @brief Method SetBool_Injected, addr 0x6e28cd0, size 0x54, virtual false, abstract: false, final false
  static inline void SetBool_Injected(::System::IntPtr _unity_self, int32_t nameID, bool b);

  /// @brief Method SetFloat, addr 0x6e28e9c, size 0x68, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t f);

  /// @brief Method SetFloat_Injected, addr 0x6e28f04, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID, float_t f);

  /// @brief Method SetInt, addr 0x6e28d24, size 0x68, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t i);

  /// @brief Method SetInt_Injected, addr 0x6e28d8c, size 0x54, virtual false, abstract: false, final false
  static inline void SetInt_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t i);

  /// @brief Method SetUint, addr 0x6e28de0, size 0x68, virtual false, abstract: false, final false
  inline void SetUint(int32_t nameID, uint32_t i);

  /// @brief Method SetUint_Injected, addr 0x6e28e48, size 0x54, virtual false, abstract: false, final false
  static inline void SetUint_Injected(::System::IntPtr _unity_self, int32_t nameID, uint32_t i);

  /// @brief Method SetVector2, addr 0x6e28f58, size 0x6c, virtual false, abstract: false, final false
  inline void SetVector2(int32_t nameID, ::UnityEngine::Vector2 v);

  /// @brief Method SetVector2_Injected, addr 0x6e28fc4, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector2_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector2> v);

  /// @brief Method SetVector3, addr 0x6e29018, size 0x70, virtual false, abstract: false, final false
  inline void SetVector3(int32_t nameID, ::UnityEngine::Vector3 v);

  /// @brief Method SetVector3_Injected, addr 0x6e29088, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector3_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector3> v);

  /// @brief Method SetVector4, addr 0x6e290dc, size 0x70, virtual false, abstract: false, final false
  inline void SetVector4(int32_t nameID, ::UnityEngine::Vector4 v);

  /// @brief Method SetVector4_Injected, addr 0x6e2914c, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector4_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector4> v);

  /// @brief Method SetWrapValue, addr 0x6e284d8, size 0x5c, virtual false, abstract: false, final false
  inline void SetWrapValue(::System::IntPtr ptrToEventAttribute);

  constexpr bool const& __cordl_internal_get_m_Owner() const;

  constexpr bool& __cordl_internal_get_m_Owner();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffectAsset> const& __cordl_internal_get_m_VfxAsset() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffectAsset>& __cordl_internal_get_m_VfxAsset();

  constexpr void __cordl_internal_set_m_Owner(bool value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_VfxAsset(::UnityW<::UnityEngine::VFX::VisualEffectAsset> value);

  /// @brief Method .ctor, addr 0x6e28474, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6e2846c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method .ctor, addr 0x6e2845c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr, bool owner, ::UnityEngine::VFX::VisualEffectAsset* vfxAsset);

  /// @brief Method get_vfxAsset, addr 0x6e286e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::VFX::VisualEffectAsset> get_vfxAsset();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXEventAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXEventAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXEventAttribute(VFXEventAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXEventAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXEventAttribute(VFXEventAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22316 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_Owner, offset: 0x18, size: 0x1, def value: None
  bool ___m_Owner;

  /// @brief Field m_VfxAsset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffectAsset> ___m_VfxAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXEventAttribute, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXEventAttribute, ___m_Owner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXEventAttribute, ___m_VfxAsset) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXEventAttribute) == 0x28, "Size mismatch!");

} // namespace UnityEngine::VFX
