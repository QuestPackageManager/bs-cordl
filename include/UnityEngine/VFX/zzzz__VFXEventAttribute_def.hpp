#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXEventAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
// Forward declare root types
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine::VFX {
class VFXEventAttribute_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::VFX::VFXEventAttribute);
MARK_REF_PTR_T(::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXEventAttribute/BindingsMarshaller
class CORDL_TYPE VFXEventAttribute_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6c604cc, size 0x14, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller, 0x10>, "Size mismatch!");

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

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateEventAttributeWrapper, addr 0x6c60134, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXEventAttribute* CreateEventAttributeWrapper();

  /// @brief Method Dispose, addr 0x6c60468, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x6c60424, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Internal_Create, addr 0x6c601e4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create();

  /// @brief Method Internal_Destroy, addr 0x6c603e8, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method Internal_InitFromAsset, addr 0x6c602a0, size 0xac, virtual false, abstract: false, final false
  inline void Internal_InitFromAsset(::UnityEngine::VFX::VisualEffectAsset* vfxAsset);

  /// @brief Method Internal_InitFromAsset_Injected, addr 0x6c6034c, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_InitFromAsset_Injected(::System::IntPtr _unity_self, ::System::IntPtr vfxAsset);

  /// @brief Method Internal_InstanciateVFXEventAttribute, addr 0x6c6020c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXEventAttribute* Internal_InstanciateVFXEventAttribute(::UnityEngine::VFX::VisualEffectAsset* vfxAsset);

  static inline ::UnityEngine::VFX::VFXEventAttribute* New_ctor(::System::IntPtr ptr, bool owner, ::UnityEngine::VFX::VisualEffectAsset* vfxAsset);

  /// @brief Method Release, addr 0x6c60390, size 0x58, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetWrapValue, addr 0x6c60188, size 0x5c, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x6c60124, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr, bool owner, ::UnityEngine::VFX::VisualEffectAsset* vfxAsset);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22607 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXEventAttribute, 0x28>, "Size mismatch!");

} // namespace UnityEngine::VFX
NEED_NO_BOX(::UnityEngine::VFX::VFXEventAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXEventAttribute*, "UnityEngine.VFX", "VFXEventAttribute");
NEED_NO_BOX(::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXEventAttribute_BindingsMarshaller*, "UnityEngine.VFX", "VFXEventAttribute/BindingsMarshaller");
