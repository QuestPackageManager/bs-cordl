#pragma once
// IWYU pragma private; include "UnityEngine/Gradient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Gradient)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
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
// Forward declare root types
namespace UnityEngine {
class Gradient;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Gradient);
// Dependencies System.IEquatable`1<T>, System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Gradient
class CORDL_TYPE Gradient : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_alphaKeys, put = set_alphaKeys)) ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> alphaKeys;

  __declspec(property(get = get_colorKeys, put = set_colorKeys)) ::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> colorKeys;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(put = set_mode)) ::UnityEngine::GradientMode mode;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Gradient*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Gradient*>*() noexcept;

  /// @brief Method Cleanup, addr 0x489e16c, size 0x3c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Equals, addr 0x489e540, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x489e64c, size 0xc8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Gradient* other);

  /// @brief Method Evaluate, addr 0x489e2ec, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Color Evaluate(float_t time);

  /// @brief Method Evaluate_Injected, addr 0x489e354, size 0x54, virtual false, abstract: false, final false
  inline void Evaluate_Injected(float_t time, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method Finalize, addr 0x489e234, size 0xb8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetHashCode, addr 0x489e714, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Init, addr 0x489e144, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Init();

  /// @brief Method Internal_Equals, addr 0x489e1a8, size 0x44, virtual false, abstract: false, final false
  inline bool Internal_Equals(::System::IntPtr other);

  static inline ::UnityEngine::Gradient* New_ctor();

  /// @brief Method SetKeys, addr 0x489e4ec, size 0x54, virtual false, abstract: false, final false
  inline void SetKeys(::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> colorKeys,
                      ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> alphaKeys);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x489e1ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alphaKeys, addr 0x489e428, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> get_alphaKeys();

  /// @brief Method get_colorKeys, addr 0x489e3a8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> get_colorKeys();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Gradient*>"
  constexpr ::System::IEquatable_1<::UnityEngine::Gradient*>* i___System__IEquatable_1___UnityEngine__Gradient__() noexcept;

  /// @brief Method set_alphaKeys, addr 0x489e464, size 0x44, virtual false, abstract: false, final false
  inline void set_alphaKeys(::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> value);

  /// @brief Method set_colorKeys, addr 0x489e3e4, size 0x44, virtual false, abstract: false, final false
  inline void set_colorKeys(::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> value);

  /// @brief Method set_mode, addr 0x489e4a8, size 0x44, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::GradientMode value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10819 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Gradient, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Gradient, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Gradient);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Gradient*, "UnityEngine", "Gradient");
