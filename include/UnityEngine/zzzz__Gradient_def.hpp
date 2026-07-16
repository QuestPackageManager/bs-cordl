#pragma once
// IWYU pragma private; include "UnityEngine/Gradient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Gradient)
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
struct ColorSpace;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct GradientAlphaKey;
}
namespace UnityEngine {
struct GradientColorKey;
}
namespace UnityEngine {
struct GradientMode;
}
namespace UnityEngine {
class Gradient_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Gradient_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Gradient*);
MARK_REF_T(::UnityEngine::Gradient_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Gradient*, "UnityEngine", "Gradient");
DEFINE_IL2CPP_CLASS(::UnityEngine::Gradient_BindingsMarshaller*, "UnityEngine", "Gradient/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Gradient/BindingsMarshaller
class CORDL_TYPE Gradient_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToManaged, addr 0x6ac9ab4, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Gradient* ConvertToManaged(::System::IntPtr ptr);

  /// @brief Method ConvertToNative, addr 0x6ac9aa0, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Gradient* graident);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gradient_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gradient_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gradient_BindingsMarshaller(Gradient_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gradient_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gradient_BindingsMarshaller(Gradient_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10225 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Gradient_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Gradient
class CORDL_TYPE Gradient : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Gradient_BindingsMarshaller;

  __declspec(property(get = get_alphaKeys, put = set_alphaKeys)) ::ArrayW<::UnityEngine::GradientAlphaKey> alphaKeys;

  __declspec(property(get = get_colorKeys, put = set_colorKeys)) ::ArrayW<::UnityEngine::GradientColorKey> colorKeys;

  __declspec(property(get = get_colorSpace, put = set_colorSpace)) ::UnityEngine::ColorSpace colorSpace;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_RequiresNativeCleanup, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequiresNativeCleanup, put = __cordl_internal_set_m_RequiresNativeCleanup)) bool m_RequiresNativeCleanup;

  __declspec(property(get = get_mode, put = set_mode)) ::UnityEngine::GradientMode mode;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Gradient*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Gradient*>*() noexcept;

  /// @brief Method Cleanup, addr 0x6ac8cf0, size 0x50, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Cleanup_Injected, addr 0x6ac8d40, size 0x3c, virtual false, abstract: false, final false
  static inline void Cleanup_Injected(::System::IntPtr _unity_self);

  /// @brief Method Equals, addr 0x6ac9914, size 0xf4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6ac9a08, size 0x90, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Gradient* other);

  /// @brief Method Evaluate, addr 0x6ac8eb8, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color Evaluate(float_t time);

  /// @brief Method Evaluate_Injected, addr 0x6ac8f34, size 0x54, virtual false, abstract: false, final false
  static inline void Evaluate_Injected(::System::IntPtr _unity_self, float_t time, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method Finalize, addr 0x6ac8e6c, size 0x4c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetHashCode, addr 0x6ac9a98, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Init, addr 0x6ac8cc8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Init();

  /// @brief Method Internal_Equals, addr 0x6ac8d7c, size 0x58, virtual false, abstract: false, final false
  inline bool Internal_Equals(::System::IntPtr other);

  /// @brief Method Internal_Equals_Injected, addr 0x6ac8dd4, size 0x44, virtual false, abstract: false, final false
  static inline bool Internal_Equals_Injected(::System::IntPtr _unity_self, ::System::IntPtr other);

  static inline ::UnityEngine::Gradient* New_ctor();

  static inline ::UnityEngine::Gradient* New_ctor(::System::IntPtr ptr);

  /// @brief Method SetKeys, addr 0x6ac9760, size 0x160, virtual false, abstract: false, final false
  inline void SetKeys(::ArrayW<::UnityEngine::GradientColorKey> colorKeys, ::ArrayW<::UnityEngine::GradientAlphaKey> alphaKeys);

  /// @brief Method SetKeys_Injected, addr 0x6ac98c0, size 0x54, virtual false, abstract: false, final false
  static inline void SetKeys_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colorKeys, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> alphaKeys);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr bool const& __cordl_internal_get_m_RequiresNativeCleanup() const;

  constexpr bool& __cordl_internal_get_m_RequiresNativeCleanup();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_RequiresNativeCleanup(bool value);

  /// @brief Method .ctor, addr 0x6ac8e18, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6ac8e60, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method get_alphaKeys, addr 0x6ac924c, size 0x14c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GradientAlphaKey> get_alphaKeys();

  /// @brief Method get_alphaKeys_Injected, addr 0x6ac9398, size 0x44, virtual false, abstract: false, final false
  static inline void get_alphaKeys_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_colorKeys, addr 0x6ac8f88, size 0x14c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GradientColorKey> get_colorKeys();

  /// @brief Method get_colorKeys_Injected, addr 0x6ac90d4, size 0x44, virtual false, abstract: false, final false
  static inline void get_colorKeys_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method get_colorSpace, addr 0x6ac9638, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::ColorSpace get_colorSpace();

  /// @brief Method get_colorSpace_Injected, addr 0x6ac9688, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ColorSpace get_colorSpace_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mode, addr 0x6ac9510, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::GradientMode get_mode();

  /// @brief Method get_mode_Injected, addr 0x6ac9560, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GradientMode get_mode_Injected(::System::IntPtr _unity_self);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Gradient*>"
  constexpr ::System::IEquatable_1<::UnityEngine::Gradient*>* i___System__IEquatable_1___UnityEngine__Gradient__() noexcept;

  /// @brief Method set_alphaKeys, addr 0x6ac93dc, size 0xf0, virtual false, abstract: false, final false
  inline void set_alphaKeys(::ArrayW<::UnityEngine::GradientAlphaKey> value);

  /// @brief Method set_alphaKeys_Injected, addr 0x6ac94cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_alphaKeys_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_colorKeys, addr 0x6ac9118, size 0xf0, virtual false, abstract: false, final false
  inline void set_colorKeys(::ArrayW<::UnityEngine::GradientColorKey> value);

  /// @brief Method set_colorKeys_Injected, addr 0x6ac9208, size 0x44, virtual false, abstract: false, final false
  static inline void set_colorKeys_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_colorSpace, addr 0x6ac96c4, size 0x58, virtual false, abstract: false, final false
  inline void set_colorSpace(::UnityEngine::ColorSpace value);

  /// @brief Method set_colorSpace_Injected, addr 0x6ac971c, size 0x44, virtual false, abstract: false, final false
  static inline void set_colorSpace_Injected(::System::IntPtr _unity_self, ::UnityEngine::ColorSpace value);

  /// @brief Method set_mode, addr 0x6ac959c, size 0x58, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::GradientMode value);

  /// @brief Method set_mode_Injected, addr 0x6ac95f4, size 0x44, virtual false, abstract: false, final false
  static inline void set_mode_Injected(::System::IntPtr _unity_self, ::UnityEngine::GradientMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gradient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gradient(Gradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gradient(Gradient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10226 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_RequiresNativeCleanup, offset: 0x18, size: 0x1, def value: None
  bool ___m_RequiresNativeCleanup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Gradient, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Gradient, ___m_RequiresNativeCleanup) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Gradient) == 0x20, "Size mismatch!");

} // namespace UnityEngine
